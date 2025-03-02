#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <stddef.h>
#include <stdio.h>
#include <windows.h>
#include <ddraw.h>

#include <glp.h>
#include "types.h"
#include "render.h"
#include "context.h"

/*++

Copyright (c) 1998  Microsoft Corporation

Module Name:

    genxx.h

Abstract:

    This file contains macros (some of them destined for the M4 preprocessor)
    to aid in the generation of ks & hal header files.  This is used by
    ke\xxx\genxxx.c, as well as sdktools\genxx.

Author:

    Forrest C. Foltz (forrestf) 23-Jan-1998

Revision History:

--*/



//
// Structure element definitions.
//

#define MAX_ELEMENT_NAME_LEN 127    // big enough for comments too
typedef struct _STRUC_ELEMENT {

//
// Flags is one or more SEF_xxx, defined below.
//

    UINT64 Flags;

//
// Note that Equate is used to store a pointer in the case of bitfield
// processing.
//

    UINT64 Equate;

//
// Name should be quite long, as it is used to hold comments as well.
//

    CHAR Name[ MAX_ELEMENT_NAME_LEN + 1 ];
} STRUC_ELEMENT, *PSTRUC_ELEMENT;

#define SEF_ENABLE_MASK     0x0000FF00
#define SEF_HAL             0x00000100
#define SEF_KERNEL          0x00000200

#define SEF_INC_FORMAT_MASK 0x00010000
#define SEF_H_FORMAT        0x00000000
#define SEF_INC_FORMAT      0x00010000

//
// Types.  Note that SETMASK, CLRMASK has no effect on te BITFLD types.  BITFLD
// types have SEF_HAL | SEF_KERNEL set in the type.
//

#define SEF_TYPE_MASK       0x000000FF
#define SEF_EQUATE          0x00000000
#define SEF_EQUATE64        0x00000001
#define SEF_COMMENT         0x00000002
#define SEF_STRING          0x00000003      // Equate is vararg to printf
#define SEF_BITFLD          0x00000004
#define SEF_BITALIAS        0x00000005
#define SEF_STRUCTURE       0x00000006
#define SEF_SETMASK         0x00000010      // Equate is the mask
#define SEF_CLRMASK         0x00000011      // Equate is the mask
#define SEF_END             0x00000012
#define SEF_START           0x00000013
#define SEF_PATH            0x00000014

//
// Note that BITFLD entries have per-entry hal|kernel flags
//


//
// Define architecture specific generation macros.
//

#define SEF_FLAGS 0
#define HAL SEF_HAL
#define KERNEL SEF_KERNEL

#ifndef ULONG_MAX
#define ULONG_MAX 0xFFFFFFFF
#endif

#ifndef LONG_MAX
#define LONG_MAX ((LONG)0x7FFFFFFF)
#endif

#ifndef LONG_MIN
#define LONG_MIN ((LONG)0x80000000)
#endif


#ifdef _WIN64_
#define SEF_UINT SEF_EQUATE64
#else
#define SEF_UINT SEF_EQUATE
#endif

//
// genDef(Pc, KPCR, MinorVersion)
//
// -> #define PcMinorVersion 0x0
//

#define genDef(Prefix, Type, Member) \
    { SEF_EQUATE, OFFSET(Type, Member), #Prefix #Member },

//
// genOff(Pc, KPCR, MinorVersion, 128)
//
// -> #define PcMinorVersion 0xffffff80
//

#define genOff(Prefix, Type, Member, Offset) \
    { SEF_EQUATE, OFFSET(Type, Member) - Offset, #Prefix #Member },

//
// genAlt( PbAlignmentFixupCount, KPRCB, KeAlignmentFixupCount )
//
// -> #define PbAlignmentFixupCount 0x2f4
//

#define genAlt(Name, Type, Member) \
    { SEF_EQUATE, OFFSET(Type, Member), #Name },

//
// genCom("This is a comment")
//
//    //
// -> // This is a comment
//    //
//

#define genCom(Comment) \
    { SEF_COMMENT, 0, Comment },

//
// genNam(PCR_MINOR_VERSION)
//
// -> #define PCR_MINOR_VERSION 0x1
//

#define genNam(Name) \
    { SEF_EQUATE, (ULONG)(Name), #Name },

//
// genNamUint(KSEG0_BASE)
//
// -> #define KSE0_BASE 0xffffffff80000000
//

#define genNamUint(Name) \
    { SEF_UINT, (UINT64)(Name), #Name },

//
// genVal(FirmwareFrameLength, FIRMWARE_FRAME_LENGTH)
//
// -> #define FirmwareFrameLength 0x250
//
// Note: if the value is 64-bit when _WIN64_ is enabled, use genValUint()
//

#define genVal(Name, Value) \
    { SEF_EQUATE, (ULONG)(Value), #Name },

//
// genValUint(KiPcr, KIPCR)
//
// -> #define KiPcr 0xe0000000ffffe000
//

#define genValUint(Name, Value) \
    { SEF_UINT, (UINT64)(Value), #Name },

//
// genSpc()
//
// ->
//

#define genSpc() \
    { SEF_STRING, 0, "\n" },

//
// genStr("    PCR equ ds:[0%lXH]\n", KIP0PCRADDRESS)
//
// ->     PCR equ ds:[0FFDFF000H]
//

#define genStr(String, Value) \
    { SEF_STRING, (ULONG_PTR)(Value), String },

//
// genTxt("ifdef NT_UP\n")
//
// -> ifdef NT_UP
//

#define genTxt(String) \
    { SEF_STRING, 0, String },

#define DisableInc( x ) \
    { SEF_CLRMASK, x, "" },

#define EnableInc( x ) \
    { SEF_SETMASK, x, "" },

#define MARKER_STRING "This is the genxx marker string."

//
// Source file can specify the _NTDRIVE\_NTROOT - relative output path.
// 'f' is the set of enable-flags that should be routed to this file.
// Use '0' if there is only a single output file.
//
// 'f' should also contain one of SEF_H_FORMAT or SEF_INC_FORMAT to
// indicate whether the generated file is in 'header file' or 'include file'
// format.
//

#define setPath( p, f ) \
    { SEF_PATH | f, 0, p },

//
// START_LIST defines the first element in ElementList.  This element contains
// a (possibly truncated) pointer to the ElementList array.  This is used to
// determine the fixup RA bias.
//

#define START_LIST \
    { SEF_START, (ULONG_PTR)ElementList, MARKER_STRING },

#define END_LIST \
    { SEF_END, 0, "" }

//
// Preprocessor assertion.  Do something here to make the compiler generate
// an error if x != y.
//

#define ASSERT_SAME( x, y )

//
// Macro to round Val up to the next Bnd boundary.  Bnd must be an integral
// power of two.
//

#define ROUND_UP( Val, Bnd ) \
    (((Val) + ((Bnd) - 1)) & ~((Bnd) - 1))

#ifndef OFFSET

//
// Define member offset computation macro.
//

#define OFFSET(type, field) ((ULONG_PTR)(&((type *)0)->field))

#endif

//
// Following are some M4 macros to help with bitfields.
//

#ifndef SKIP_M4

//
// First, define the makezeros(n) macro that will generate a string with
// n pairs of ',0'.  This is a recursively defined macro.
//



//
// Define a concatenation macro.
//



//
// The following example bitfield declaration uses HARDWARE_PTE as an
// example, which is declared (for alpha) as follows:
//
// typedef struct _HARDWARE_PTE {
//     ULONG Valid: 1;
//     ULONG Owner: 1;
//     ULONG Dirty: 1;
//     ULONG reserved: 1;
//     ULONG Global: 1;
//     ULONG GranularityHint: 2;
//     ULONG Write: 1;
//     ULONG CopyOnWrite: 1;
//     ULONG PageFrameNumber: 23;
// } HARDWARE_PTE, *PHARDWARE_PTE;
//
//
// // First, startBitStruc() is invoked with the structure name.
//
// startBitStruc( HARDWARE_PTE, SEF_HAL | SEF_KERNEL )
//
// //
// // Now, suppose we wanted to expose seven of the fields in an assembly
// // include file:
// //
//
// genBitField( Valid, PTE_VALID )
// genBitField( Owner, PTE_OWNER )
// genBitField( Dirty, PTE_DIRTY )
// genBitField( reserved )
// genBitField( Global, PTE_GLOBAL )
// genBitField( GranularityHint )
// genBitField( Write, PTE_WRITE )
// genBitField( CopyOnWrite, PTE_COPYONWRITE )
// genBitField( PageFrameNumber, PTE_PFN )
//
// Note that fields that are not used (in this case 'reserved' and
// 'GranularityHint') must still appear in the list.
//
// The above will generate a bunch of static, initialized copies of HARDWARE_PTE
// like so:
//
// HARDWARE_PTE HARDWARE_PTE_Valid = {
//     0xFFFFFFFF };
//
// HARDWARE_PTE HARDWARE_PTE_Owner = {
//     0,   // Valid
//     0xFFFFFFFF };
//
// HARDWARE_PTE HARDWARE_PTE_Dirty = {
//     0,   // Valid
//     0,   // Owner
//     0xFFFFFFFF };
//
// HARDWARE_PTE HARDWARE_PTE_Global = {
//     0,   // Valid
//     0,   // Owner
//     0,   // Dirty
//     0,   // reserved
//     0xFFFFFFFF };
//
// HARDWARE_PTE HARDWARE_PTE_Write = {
//     0,   // Valid
//     0,   // Owner
//     0,   // Dirty
//     0,   // reserved (skipped)
//     0,   // Global
//     0xFFFFFFFF };
//
// HARDWARE_PTE HARDWARE_PTE_CopyOnWrite = {
//     0,   // Valid
//     0,   // Owner
//     0,   // Dirty
//     0,   // reserved (skipped)
//     0,   // Global
//     0,   // GranularityHint (skipped)
//     0xFFFFFFFF };
//
// HARDWARE_PTE HARDWARE_PTE_PageFrameNumber = {
//     0,   // Valid
//     0,   // Owner
//     0,   // Dirty
//     0,   // reserved (skipped)
//     0,   // Global
//     0,   // GranularityHint (skipped)
//     0,   // CopyOnWrite
//     0xFFFFFFFF };
//
// Then, as part of processing the END_LIST macro, these structures are
// generated:
//
// { SEF_BITFLD, &HARDWARE_PTE_Valid,           "PTE_VALID" },
// { SEF_BITFLD, &HARDWARE_PTE_Owner,           "PTE_OWNER" },
// { SEF_BITFLD, &HARDWARE_PTE_Dirty,           "PTE_DIRTY" },
// { SEF_BITFLD, &HARDWARE_PTE_Global,          "PTE_GLOBAL" },
// { SEF_BITFLD, &HARDWARE_PTE_Write,           "PTE_WRITE" },
// { SEF_BITFLD, &HARDWARE_PTE_CopyOnWrite,     "PTE_COPYONWRITE" },
// { SEF_BITFLD, &HARDWARE_PTE_PageFrameNumber, "PTE_PFN" },
// { SEF_END,    0,                             "" }
//
//
// ... and that's what gets compiled by the target compiler into the .obj.
// Now, the final stage: genxx.exe is run against this target .obj, and
// would generate the following:
//
// #define PTE_VALID_MASK 0x1
// #define PTE_VALID 0x0
// #define PTE_OWNER_MASK 0x2
// #define PTE_OWNER 0x1
// #define PTE_DIRTY_MASK 0x4
// #define PTE_DIRTY 0x2
// #define PTE_GLOBAL_MASK 0x10
// #define PTE_GLOBAL 0x4
// #define PTE_WRITE_MASK 0x80
// #define PTE_WRITE 0x7
// #define PTE_COPYONWRITE_MASK 0x100
// #define PTE_COPYONWRITE 0x8
// #define PTE_PFN_MASK 0xfffffe00
// #define PTE_PFN 0x9
//

//
// BITFIELD_STRUCS accumulates array element initializations.  END_LIST will
// dump these into the definition array.
//



//
// startBitStruc( <strucname>, <whichfile> )
// sets BIT_STRUC_NAME = <strucname> and resets the ZERO_FIELDS count to 0.
// It also sets the WHICH_FILE macro.
//



//
// genBitField( <fldname>, <generatedname> ) declares a structure of type
// <strucname> and initializes the <fldname> bitfield within it.
//
// Note that I used "cma" instead of an actual comma, this gets changed to
// a comma by DUMP_BITFIELDS, below.  If I were more proficient with M4 I
// would know how to get around this.
//





//
// DUMP_BITFIELDS dumps the array initializers accumulated by ,
// after replacing each 'cma' with an actual comma.
//



#endif  // SKIP_M4



STRUC_ELEMENT ElementList[] = {

    START_LIST

    genCom("DO NOT EDIT - THIS FILE IS AUTOMATICALLY GENERATED")

    genStr("// Size of core context = %d bytes\n", sizeof(__GLcontext))
    genStr("// Size of core attrib record = %d bytes\n", sizeof(__GLattribute))
    genSpc()

    genTxt("#include \"asm.h\"\n")

    genCom("Context structure offsets")

#if 0
// Add as needed
    genAlt(__GC_TRANSFORM_MODELVIEW, __GLcontext, transform.modelView)
    genAlt(__GC_TRANSFORM_CLIPX0, __GLcontext, transform.clipX0)
    genAlt(__GC_TRANSFORM_CLIPX1, __GLcontext, transform.clipX1)
    genAlt(__GC_TRANSFORM_CLIPY0, __GLcontext, transform.clipY0)
    genAlt(__GC_TRANSFORM_CLIPY1, __GLcontext, transform.clipY1)
    genAlt(__GC_TRANSFORM_MINX, __GLcontext, transform.minx)
    genAlt(__GC_TRANSFORM_MINY, __GLcontext, transform.miny)
    genAlt(__GC_TRANSFORM_MAXX, __GLcontext, transform.maxx)
    genAlt(__GC_TRANSFORM_MAXY, __GLcontext, transform.maxy)
    genAlt(__GC_TRANSFORM_FMINX, __GLcontext, transform.fminx)
    genAlt(__GC_TRANSFORM_FMINY, __GLcontext, transform.fminy)
    genAlt(__GC_TRANSFORM_FMAXX, __GLcontext, transform.fmaxx)
    genAlt(__GC_TRANSFORM_FMAXY, __GLcontext, transform.fmaxy)
    genAlt(__GC_TRANSFORM_MATRIX2D, __GLcontext, transform.matrix2D)
    genSpc()
    genAlt(__GC_CURRENT_EDGETAG, __GLcontext, state.current.edgeTag)
    genAlt(__GC_CURRENT_USERCOLOR_R, __GLcontext, state.current.userColor.r)
    genAlt(__GC_CURRENT_USERCOLOR_G, __GLcontext, state.current.userColor.g)
    genAlt(__GC_CURRENT_USERCOLOR_B, __GLcontext, state.current.userColor.b)
    genAlt(__GC_CURRENT_USERCOLOR_A, __GLcontext, state.current.userColor.a)
    genAlt(__GC_CURRENT_USERCOLORINDEX, __GLcontext, state.current.userColorIndex)
    genAlt(__GC_CURRENT_COLOR_R, __GLcontext, state.current.color.r)
    genAlt(__GC_CURRENT_COLOR_G, __GLcontext, state.current.color.g)
    genAlt(__GC_CURRENT_COLOR_B, __GLcontext, state.current.color.b)
    genAlt(__GC_CURRENT_COLOR_A, __GLcontext, state.current.color.a)
    genAlt(__GC_CURRENT_NORMAL_X, __GLcontext, state.current.normal.x)
    genAlt(__GC_CURRENT_NORMAL_Y, __GLcontext, state.current.normal.y)
    genAlt(__GC_CURRENT_NORMAL_Z, __GLcontext, state.current.normal.z)
    genAlt(__GC_CURRENT_TEXTURE_X, __GLcontext, state.current.texture.x)
    genAlt(__GC_CURRENT_TEXTURE_Y, __GLcontext, state.current.texture.y)
    genAlt(__GC_CURRENT_TEXTURE_Z, __GLcontext, state.current.texture.z)
    genAlt(__GC_CURRENT_TEXTURE_W, __GLcontext, state.current.texture.w)
    genAlt(__GC_FOG_COLOR, __GLcontext, state.fog.color)
    genAlt(__GC_FRONTBUFFER_REDSCALE, __GLcontext, frontBuffer.redScale)
    genAlt(__GC_FRONTBUFFER_GREENSCALE, __GLcontext, frontBuffer.greenScale)
    genAlt(__GC_FRONTBUFFER_BLUESCALE, __GLcontext, frontBuffer.blueScale)
    genAlt(__GC_FRONTBUFFER_ALPHASCALE, __GLcontext, frontBuffer.alphaScale)
    genSpc()
    genAlt(__GC_VERTEX_V0, __GLcontext, vertex.v0)
    genAlt(__GC_VERTEX_V1, __GLcontext, vertex.v1)
    genAlt(__GC_VERTEX_VBUF0, __GLcontext, vertex.vbuf[0])
    genAlt(__GC_VERTEX_VBUF1, __GLcontext, vertex.vbuf[1])
    genAlt(__GC_VERTEX_PROVOKING, __GLcontext, vertex.provoking)
    genAlt(__GC_VERTEX_NEEDS, __GLcontext, vertex.needs)
    genAlt(__GC_VERTEX_FRONTFACE_NEEDS, __GLcontext, vertex.faceNeeds[__GL_FRONTFACE])
    genSpc()
    genAlt(__GC_LINE_NOTRESETSTIPPLE, __GLcontext, line.notResetStipple)
    genAlt(__GC_LINE_ALIASEDWIDTH, __GLcontext, state.line.aliasedWidth)
    genSpc()
#endif
#if 1
    genAlt(__GC_VIEWPORT_XCENTER, __GLcontext, state.viewport.xCenter)
    genAlt(__GC_VIEWPORT_YCENTER, __GLcontext, state.viewport.yCenter)
    genAlt(__GC_VIEWPORT_ZCENTER, __GLcontext, state.viewport.zCenter)
    genAlt(__GC_VIEWPORT_XSCALE, __GLcontext, state.viewport.xScale)
    genAlt(__GC_VIEWPORT_YSCALE, __GLcontext, state.viewport.yScale)
    genAlt(__GC_VIEWPORT_ZSCALE, __GLcontext, state.viewport.zScale)
#endif
#if 0
    genAlt(__GC_VIEWPORT_HEIGHT, __GLcontext, state.viewport.height)
    genAlt(__GC_VIEWPORT_WIDTH, __GLcontext, state.viewport.width)
    genSpc()
    genAlt(__GC_PROCS_VERTEX, __GLcontext, procs.vertex)
    genAlt(__GC_PROCS_VALIDATEVERTEX2, __GLcontext, procs.validateVertex2)
    genAlt(__GC_PROCS_VALIDATEVERTEX3, __GLcontext, procs.validateVertex3)
    genAlt(__GC_PROCS_VALIDATEVERTEX4, __GLcontext, procs.validateVertex4)
    genAlt(__GC_PROCS_V, __GLcontext, procs.v)
    genAlt(__GC_PROCS_FILLTRIANGLE, __GLcontext, procs.fillTriangle)
    genAlt(__GC_PROCS_RENDERTRIANGLE, __GLcontext, procs.renderTriangle)
    genAlt(__GC_PROCS_MATVALIDATE, __GLcontext, procs.matValidate)
    genAlt(__GC_PROCS_LINE_DEPTHTESTPIXEL, __GLcontext, procs.line.depthTestPixel)
    genAlt(__GC_PROCS_LINE_DEPTHTESTSPIXEL, __GLcontext, procs.line.depthTestSPixel)
    genAlt(__GC_PROCS_LINE_DEPTHTESTPIXELSF, __GLcontext, procs.line.depthTestPixelSF)
    genAlt(__GC_PROCS_LINE_DEPTHTESTSPIXELSF, __GLcontext, procs.line.depthTestSPixelSF)
    genAlt(__GC_PROCS_CLIPCHECK2, __GLcontext, procs.clipCheck2)
    genAlt(__GC_PROCS_CLIPCHECK3, __GLcontext, procs.clipCheck3)
    genAlt(__GC_PROCS_CLIPCHECK4, __GLcontext, procs.clipCheck4)
    genAlt(__GC_PROCS_RENDERLINE, __GLcontext, procs.renderLine)
    genAlt(__GC_PROCS_CLIPLINE, __GLcontext, procs.clipLine)
    genAlt(__GC_PROCS_RENDERPOINT, __GLcontext, procs.renderPoint)
    genAlt(__GC_PROCS_CALCCOLOR, __GLcontext, procs.calcColor)
    genAlt(__GC_PROCS_CALCTEXTURE, __GLcontext, procs.calcTexture)
    genAlt(__GC_PROCS_FOGVERTEX, __GLcontext, procs.fogVertex)
    genAlt(__GC_PROCS_NORMALIZE, __GLcontext, procs.normalize)
    genAlt(__GC_PROCS_COMPUTEINVERSETRANSPOSE, __GLcontext, procs.computeInverseTranspose)
    genSpc()
    genAlt(__GC_ENABLES_GENERAL, __GLcontext, state.enables.general)
    genSpc()
    genAlt(__GC_STATE_LIGHT_FRONT, __GLcontext, state.light.front)
    genAlt(__GC_STATE_LIGHT_BACK, __GLcontext, state.light.back)
    genAlt(__GC_LIGHT_FRONT, __GLcontext, light.front)
    genAlt(__GC_LIGHT_BACK, __GLcontext, light.back)
    genAlt(__GC_LIGHT_SOURCES, __GLcontext, light.sources)
    genSpc()
    genAlt(__GC_LINE_OPTIONS_XSTART, __GLcontext, line.options.xStart)
    genAlt(__GC_LINE_OPTIONS_YSTART, __GLcontext, line.options.yStart)
    genAlt(__GC_LINE_OPTIONS_XLITTLE, __GLcontext, line.options.xLittle)
    genAlt(__GC_LINE_OPTIONS_YLITTLE, __GLcontext, line.options.yLittle)
    genAlt(__GC_LINE_OPTIONS_XBIG, __GLcontext, line.options.xBig)
    genAlt(__GC_LINE_OPTIONS_YBIG, __GLcontext, line.options.yBig)
    genAlt(__GC_LINE_OPTIONS_FRACTION, __GLcontext, line.options.fraction)
    genAlt(__GC_LINE_OPTIONS_DFRACTION, __GLcontext, line.options.dfraction)
    genAlt(__GC_LINE_OPTIONS_AXIS, __GLcontext, line.options.axis)
    genAlt(__GC_LINE_OPTIONS_VERT0, __GLcontext, line.options.v0)
    genAlt(__GC_LINE_OPTIONS_VERT1, __GLcontext, line.options.v1)
    genAlt(__GC_LINE_OPTIONS_WIDTH, __GLcontext, line.options.width)
    genAlt(__GC_LINE_OPTIONS_LENGTH, __GLcontext, line.options.length)
    genAlt(__GC_LINE_OPTIONS_NUMPIXELS, __GLcontext, line.options.numPixels)
    genAlt(__GC_LINE_OPTIONS_OFFSET, __GLcontext, line.options.offset)
    genSpc()
    genAlt(__GC_CONSTANTS_VIEWPORTXADJUST, __GLcontext, constants.viewportXAdjust)
    genAlt(__GC_CONSTANTS_VIEWPORTYADJUST, __GLcontext, constants.viewportYAdjust)
    genAlt(__GC_CONSTANTS_FVIEWPORTXADJUST, __GLcontext, constants.fviewportXAdjust)
    genAlt(__GC_CONSTANTS_FVIEWPORTYADJUST, __GLcontext, constants.fviewportYAdjust)
    genAlt(__GC_CONSTANTS_VIEWPORTEPSILON, __GLcontext, constants.viewportEpsilon)
    genAlt(__GC_CONSTANTS_YINVERTED, __GLcontext, constants.yInverted)
    genSpc()
    genAlt(__GC_POLYGON_CULLFACE, __GLcontext, polygon.cullFace)
    genAlt(__GC_POLYGON_FACE, __GLcontext, polygon.face[0])
    genAlt(__GC_POLYGON_SHADER_AREA, __GLcontext, polygon.shader.area)
    genAlt(__GC_POLYGON_SHADER_DXAC, __GLcontext, polygon.shader.dxAC)
    genAlt(__GC_POLYGON_SHADER_DYAC, __GLcontext, polygon.shader.dyAC)
    genAlt(__GC_POLYGON_SHADER_DXBC, __GLcontext, polygon.shader.dxBC)
    genAlt(__GC_POLYGON_SHADER_DYBC, __GLcontext, polygon.shader.dyBC)
    genAlt(__GC_POLYGON_SHADER_DRDX, __GLcontext, polygon.shader.drdx)
    genAlt(__GC_POLYGON_SHADER_DRDY, __GLcontext, polygon.shader.drdy)
    genAlt(__GC_POLYGON_SHADER_DGDX, __GLcontext, polygon.shader.dgdx)
    genAlt(__GC_POLYGON_SHADER_DGDY, __GLcontext, polygon.shader.dgdy)
    genAlt(__GC_POLYGON_SHADER_DBDX, __GLcontext, polygon.shader.dbdx)
    genAlt(__GC_POLYGON_SHADER_DBDY, __GLcontext, polygon.shader.dbdy)
    genAlt(__GC_POLYGON_SHADER_DZDX, __GLcontext, polygon.shader.dzdx)
    genAlt(__GC_POLYGON_SHADER_DZDXF, __GLcontext, polygon.shader.dzdxf)
    genAlt(__GC_POLYGON_SHADER_DZDYF, __GLcontext, polygon.shader.dzdyf)
    genAlt(__GC_POLYGON_SHADER_FRAG_COLOR_R, __GLcontext, polygon.shader.frag.color.r)
    genAlt(__GC_POLYGON_SHADER_FRAG_COLOR_G, __GLcontext, polygon.shader.frag.color.g)
    genAlt(__GC_POLYGON_SHADER_FRAG_COLOR_B, __GLcontext, polygon.shader.frag.color.b)
    genAlt(__GC_POLYGON_SHADER_FRAG_Z, __GLcontext, polygon.shader.frag.z)
    genAlt(__GC_POLYGON_SHADER_LENGTH, __GLcontext, polygon.shader.length)
    genAlt(__GC_POLYGON_SHADER_RBIG, __GLcontext, polygon.shader.rBig)
    genAlt(__GC_POLYGON_SHADER_GBIG, __GLcontext, polygon.shader.gBig)
    genAlt(__GC_POLYGON_SHADER_BBIG, __GLcontext, polygon.shader.bBig)
    genAlt(__GC_POLYGON_SHADER_RLITTLE, __GLcontext, polygon.shader.rLittle)
    genAlt(__GC_POLYGON_SHADER_GLITTLE, __GLcontext, polygon.shader.gLittle)
    genAlt(__GC_POLYGON_SHADER_BLITTLE, __GLcontext, polygon.shader.bLittle)
    genAlt(__GC_POLYGON_SHADER_IXLEFT, __GLcontext, polygon.shader.ixLeft)
    genAlt(__GC_POLYGON_SHADER_IXLEFTFRAC, __GLcontext, polygon.shader.ixLeftFrac)
    genAlt(__GC_POLYGON_SHADER_DXLEFTFRAC, __GLcontext, polygon.shader.dxLeftFrac)
    genAlt(__GC_POLYGON_SHADER_IXRIGHT, __GLcontext, polygon.shader.ixRight)
    genAlt(__GC_POLYGON_SHADER_IXRIGHTFRAC, __GLcontext, polygon.shader.ixRightFrac)
    genAlt(__GC_POLYGON_SHADER_DXRIGHTFRAC, __GLcontext, polygon.shader.dxRightFrac)
    genAlt(__GC_POLYGON_SHADER_DXRIGHTBIG, __GLcontext, polygon.shader.dxRightBig)
    genAlt(__GC_POLYGON_SHADER_DXRIGHTLITTLE, __GLcontext, polygon.shader.dxRightLittle)
    genAlt(__GC_POLYGON_SHADER_DXLEFTBIG, __GLcontext, polygon.shader.dxLeftBig)
    genAlt(__GC_POLYGON_SHADER_DXLEFTLITTLE, __GLcontext, polygon.shader.dxLeftLittle)
    genAlt(__GC_POLYGON_SHADER_DZDX, __GLcontext, polygon.shader.dzdx)
    genAlt(__GC_POLYGON_SHADER_ZBUF, __GLcontext, polygon.shader.zbuf)
    genAlt(__GC_POLYGON_SHADER_ZBUFBIG, __GLcontext, polygon.shader.zbufBig)
    genAlt(__GC_POLYGON_SHADER_ZBUFLITTLE, __GLcontext, polygon.shader.zbufLittle)
    genAlt(__GC_POLYGON_SHADER_ZBIG, __GLcontext, polygon.shader.zBig)
    genAlt(__GC_POLYGON_SHADER_ZLITTLE, __GLcontext, polygon.shader.zLittle)
    genAlt(__GC_POLYGON_SHADER_SBUF, __GLcontext, polygon.shader.sbuf)
    genAlt(__GC_POLYGON_SHADER_MODEFLAGS, __GLcontext, polygon.shader.modeFlags)
    genAlt(__GC_POLYGON_SHADER_COLORS, __GLcontext, polygon.shader.colors)
    genAlt(__GC_POLYGON_SHADER_STIPPLEPAT, __GLcontext, polygon.shader.stipplePat)
    genAlt(__GC_POLYGON_SHADER_DONE, __GLcontext, polygon.shader.done)
    genSpc()
    genAlt(__GC_DEPTHBUFFER_BUF_BASE, __GLcontext, depthBuffer.buf.base)
    genAlt(__GC_DEPTHBUFFER_BUF_OUTERWIDTH, __GLcontext, depthBuffer.buf.outerWidth)
    genSpc()
    genAlt(__GC_STENCIL_MASK, __GLcontext, state.stencil.mask)
    genAlt(__GC_STENCIL_TESTFUNCTABLE, __GLcontext, stencilBuffer.testFuncTable)
    genAlt(__GC_STENCIL_FAILOPTABLE, __GLcontext, stencilBuffer.failOpTable)
    genSpc()
    genAlt(__GC_PROCS_SPAN_DEPTHTESTPIXEL, __GLcontext, procs.span.depthTestPixel)

    genCom("Mode flags")
    genNam(__GL_SHADE_DEPTH_TEST)
    genNam(__GL_SHADE_SMOOTH)
    genNam(__GL_SHADE_RGB)
    genNam(__GL_SHADE_DITHER)
    genNam(__GL_SHADE_BLEND)
    genNam(__GL_SHADE_TWOSIDED)

    genCom("Enables")
    genNam(__GL_LINE_STIPPLE_ENABLE)
    genSpc()

    genCom("Transform structure offsets")
    genAlt(__TR_MATRIX, _GLtransform, matrix)
    genAlt(__TR_MATRIX_MATRIXTYPE, _GLtransform, matrix.matrixType)
    genAlt(__TR_UPDATEINVERSE, _GLtransform, updateInverse)
    genAlt(__TR_MATRIX_XF2, _GLtransform, matrix.xf2)
    genAlt(__TR_MATRIX_XF3, _GLtransform, matrix.xf3)
    genAlt(__TR_MATRIX_XF4, _GLtransform, matrix.xf4)
    genAlt(__TR_INVERSETRANSPOSE, _GLtransform, inverseTranspose)
    genAlt(__TR_INVERSETRANSPOSE_XF3, _GLtransform, inverseTranspose.xf3)
    genAlt(__TR_INVERSETRANSPOSE_XF4, _GLtransform, inverseTranspose.xf4)
    genAlt(__TR_MVP, _GLtransform, mvp)
    genAlt(__TR_MVP_MATRIX, _GLtransform, mvp.matrix[0][0])
    genAlt(__TR_MVP_XF2, _GLtransform, mvp.xf2)
    genAlt(__TR_MVP_XF3, _GLtransform, mvp.xf3)
    genAlt(__TR_MVP_XF4, _GLtransform, mvp.xf4)
    genSpc()

    genCom("Matrix structure offsets")
    genAlt(__MATRIX_M00, _GLmatrix, matrix[0][0])
    genAlt(__MATRIX_M01, _GLmatrix, matrix[0][1])
    genAlt(__MATRIX_M02, _GLmatrix, matrix[0][2])
    genAlt(__MATRIX_M03, _GLmatrix, matrix[0][3])
    genAlt(__MATRIX_M10, _GLmatrix, matrix[1][0])
    genAlt(__MATRIX_M11, _GLmatrix, matrix[1][1])
    genAlt(__MATRIX_M12, _GLmatrix, matrix[1][2])
    genAlt(__MATRIX_M13, _GLmatrix, matrix[1][3])
    genAlt(__MATRIX_M20, _GLmatrix, matrix[2][0])
    genAlt(__MATRIX_M21, _GLmatrix, matrix[2][1])
    genAlt(__MATRIX_M22, _GLmatrix, matrix[2][2])
    genAlt(__MATRIX_M23, _GLmatrix, matrix[2][3])
    genAlt(__MATRIX_M30, _GLmatrix, matrix[3][0])
    genAlt(__MATRIX_M31, _GLmatrix, matrix[3][1])
    genAlt(__MATRIX_M32, _GLmatrix, matrix[3][2])
    genAlt(__MATRIX_M33, _GLmatrix, matrix[3][3])
    genSpc()

    genCom("Consts structure offsets")
    genAlt(__GC_CONSTS_ALMOSTHALF, __GLcontext, constants.viewportAlmostHalf)
    genAlt(__GC_CONSTS_HALF, __GLcontext, constants.half)
    genAlt(_GC_CONSTS_ONE, __GLcontext, constants.one)
    genSpc()

    genCom("Vertex structure offsets")
    genAlt(__VX_HAS, __GLvertex, has)
    genAlt(__VX_VALIDATE, __GLvertex, validate)
    genAlt(__VX_CLIPCODE, __GLvertex, clipCode)
    genAlt(__VX_BOUNDARYEDGE, __GLvertex, boundaryEdge)
    genAlt(__VX_OBJ_X, __GLvertex, obj.x)
    genAlt(__VX_OBJ_Y, __GLvertex, obj.y)
    genAlt(__VX_OBJ_Z, __GLvertex, obj.z)
    genAlt(__VX_OBJ_W, __GLvertex, obj.w)
    genAlt(__VX_NORMAL_X, __GLvertex, normal.x)
    genAlt(__VX_NORMAL_Y, __GLvertex, normal.y)
    genAlt(__VX_NORMAL_Z, __GLvertex, normal.z)
    genAlt(__VX_NORMAL_W, __GLvertex, normal.w)
    genAlt(__VX_CLIP_X, __GLvertex, clip.x)
    genAlt(__VX_CLIP_Y, __GLvertex, clip.y)
    genAlt(__VX_CLIP_Z, __GLvertex, clip.z)
    genAlt(__VX_CLIP_W, __GLvertex, clip.w)
    genAlt(__VX_WINDOW_X, __GLvertex, window.x)
    genAlt(__VX_WINDOW_Y, __GLvertex, window.y)
    genAlt(__VX_WINDOW_Z, __GLvertex, window.z)
    genAlt(__VX_WINDOW_W, __GLvertex, window.w)
    genAlt(__VX_EYE_X, __GLvertex, eye.x)
    genAlt(__VX_EYE_Y, __GLvertex, eye.y)
    genAlt(__VX_EYE_Z, __GLvertex, eye.z)
    genAlt(__VX_EYE_W, __GLvertex, eye.w)
    genAlt(__VX_TEXTURE_X, __GLvertex, texture.x)
    genAlt(__VX_TEXTURE_Y, __GLvertex, texture.y)
    genAlt(__VX_TEXTURE_Z, __GLvertex, texture.z)
    genAlt(__VX_TEXTURE_W, __GLvertex, texture.w)
    genAlt(__VX_FOG, __GLvertex, fog)
    genAlt(__VX_COLOR, __GLvertex, color)
    genAlt(__VX_COLORS, __GLvertexx, colors[0]))
    genSpc()

    genCom("Color structure offsets")
    genAlt(__COLOR_R, __GLcolor, r)
    genAlt(__COLOR_G, __GLcolor, g)
    genAlt(__COLOR_B, __GLcolor, b)
    genAlt(__COLOR_A, __GLcolor, a)
    genVal(__COLOR_SIZE, sizeof(__GLcolor))

    genCom("Light machines offsets")
    genAlt(__LSM_FRONT, __GLlightSourceMachine, front)
    genAlt(__LSM_HHAT_X, __GLlightSourceMachine, hHat.x)
    genAlt(__LSM_HHAT_Y, __GLlightSourceMachine, hHat.y)
    genAlt(__LSM_HHAT_Z, __GLlightSourceMachine, hHat.z)
    genAlt(__LSM_UNITVPPLI_X, __GLlightSourceMachine, unitVPpli.x)
    genAlt(__LSM_UNITVPPLI_Y, __GLlightSourceMachine, unitVPpli.y)
    genAlt(__LSM_UNITVPPLI_Z, __GLlightSourceMachine, unitVPpli.z)
    genAlt(__LSM_NEXT, __GLlightSourceMachine, next)

    genAlt(__LSPMM_AMBIENT_R, __GLlightSourcePerMaterialMachine, ambient.r)
    genAlt(__LSPMM_AMBIENT_G, __GLlightSourcePerMaterialMachine, ambient.g)
    genAlt(__LSPMM_AMBIENT_B, __GLlightSourcePerMaterialMachine, ambient.b)
    genAlt(__LSPMM_SPECULAR_R, __GLlightSourcePerMaterialMachine, specular.r)
    genAlt(__LSPMM_SPECULAR_G, __GLlightSourcePerMaterialMachine, specular.g)
    genAlt(__LSPMM_SPECULAR_B, __GLlightSourcePerMaterialMachine, specular.b)
    genAlt(__LSPMM_DIFFUSE_R, __GLlightSourcePerMaterialMachine, diffuse.r)
    genAlt(__LSPMM_DIFFUSE_G, __GLlightSourcePerMaterialMachine, diffuse.g)
    genAlt(__LSPMM_DIFFUSE_B, __GLlightSourcePerMaterialMachine, diffuse.b)
    genVal(__LSPMM_SIZE, sizeof(__GLlightSourcePerMaterialMachine))

    genCom("Material machine offsets")
    genAlt(__MSM_SCENECOLOR_R, __GLmaterialMachine, sceneColor.r)
    genAlt(__MSM_SCENECOLOR_G, __GLmaterialMachine, sceneColor.g)
    genAlt(__MSM_SCENECOLOR_B, __GLmaterialMachine, sceneColor.b)
    genAlt(__MSM_THRESHOLD, __GLmaterialMachine, threshold)
    genAlt(__MSM_SCALE, __GLmaterialMachine, scale)
    genAlt(__MSM_SPECTABLE, __GLmaterialMachine, specTable)
    genAlt(__MSM_ALPHA, __GLmaterialMachine, alpha)
#endif
#if 1
    genCom("POLYDATA offsets")
    genAlt(__POLYDATA_CLIP_W, POLYDATA, clip.w)
    genAlt(__POLYDATA_CLIP_X, POLYDATA, clip.x)
    genAlt(__POLYDATA_CLIP_Y, POLYDATA, clip.y)
    genAlt(__POLYDATA_CLIP_Z, POLYDATA, clip.z)
    genAlt(__POLYDATA_WINDOW_W, POLYDATA, window.w)
    genAlt(__POLYDATA_WINDOW_X, POLYDATA, window.x)
    genAlt(__POLYDATA_WINDOW_Y, POLYDATA, window.y)
    genAlt(__POLYDATA_WINDOW_Z, POLYDATA, window.z)
    genVal(__SIZEOF_POLYDATA, sizeof(POLYDATA))
    genVal(__SIZEOF_GLVERTEX, sizeof(__GLvertex))
    genVal(__SIZEOF_POLYARRAY, sizeof(POLYARRAY))
    genSpc()

    genCom("Coordinate offsets")
    genAlt(__GLCOORD_X, __GLcoord, x)
    genAlt(__GLCOORD_Y, __GLcoord, y)
    genAlt(__GLCOORD_Z, __GLcoord, z)
    genAlt(__GLCOORD_W, __GLcoord, w)
    genSpc()

    genCom("Constants")
    genNam(__GL_CLIP_LEFT)
    genNam(__GL_CLIP_RIGHT)
    genNam(__GL_CLIP_BOTTOM)
    genNam(__GL_CLIP_TOP)
    genNam(__GL_CLIP_NEAR)
    genNam(__GL_CLIP_FAR)
#endif
#if 0
    genNam(__GL_SIZEOF_VERTEX)

    genNam(__GL_TRUE)

    genNam(__GL_HAS_EYE)
    genNam(__GL_HAS_NORMAL)
    genNam(__GL_HAS_LIGHTING)
    genNam(__GL_HAS_FOG)
    genNam(__GL_HAS_CLIP)
    genNam(__GL_HAS_TEXTURE)
    genNam(__GL_HAS_FRONT_COLOR)
    genNam(__GL_HAS_BACK_COLOR)
    genNam(__GL_FRONTFACE)
    genNam(__GL_BACKFACE)
    genNam(__GL_MT_GENERAL)
    genNam(__GL_NORMALIZE_ENABLE)

    genNam(__GL_SPEC_LOOKUP_TABLE_SIZE)
    genSpc()

    genCom("Other constants")
    genSpc()
#endif

    END_LIST
};

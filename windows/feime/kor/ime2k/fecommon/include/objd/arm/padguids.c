

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Thu Feb 13 20:28:25 2025
 */
/* Compiler settings for imepadsv.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IImePadServer,0xefb26460,0xaeba,0x11d2,0x83,0xd2,0x00,0xc0,0x4f,0x7a,0x06,0xe5);


MIDL_DEFINE_GUID(IID, IID_IImePadServerSHM,0xcefcbea2,0xbbc2,0x11d4,0x84,0xc0,0x00,0xc0,0x4f,0x7a,0x06,0xe5);


MIDL_DEFINE_GUID(IID, IID_IImePadCallback,0xefb26461,0xaeba,0x11d2,0x83,0xd2,0x00,0xc0,0x4f,0x7a,0x06,0xe5);


MIDL_DEFINE_GUID(IID, LIBID_IImePadServerLib,0xcefcbea0,0xbbc2,0x11d4,0x84,0xc0,0x00,0xc0,0x4f,0x7a,0x06,0xe5);


MIDL_DEFINE_GUID(CLSID, CLSID_IImePadServerComponent,0xcefcbea1,0xbbc2,0x11d4,0x84,0xc0,0x00,0xc0,0x4f,0x7a,0x06,0xe5);


MIDL_DEFINE_GUID(IID, IID_ISHMClassFactory,0xedc298c2,0x038d,0x11d4,0x84,0x64,0x00,0xc0,0x4f,0x7a,0x06,0xe5);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif




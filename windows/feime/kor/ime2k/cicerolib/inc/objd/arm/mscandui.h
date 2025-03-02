

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for mscandui.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __mscandui_h__
#define __mscandui_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITfCandidateStringFlag_FWD_DEFINED__
#define __ITfCandidateStringFlag_FWD_DEFINED__
typedef interface ITfCandidateStringFlag ITfCandidateStringFlag;
#endif 	/* __ITfCandidateStringFlag_FWD_DEFINED__ */


#ifndef __ITfCandidateStringInlineComment_FWD_DEFINED__
#define __ITfCandidateStringInlineComment_FWD_DEFINED__
typedef interface ITfCandidateStringInlineComment ITfCandidateStringInlineComment;
#endif 	/* __ITfCandidateStringInlineComment_FWD_DEFINED__ */


#ifndef __ITfCandidateStringPopupComment_FWD_DEFINED__
#define __ITfCandidateStringPopupComment_FWD_DEFINED__
typedef interface ITfCandidateStringPopupComment ITfCandidateStringPopupComment;
#endif 	/* __ITfCandidateStringPopupComment_FWD_DEFINED__ */


#ifndef __ITfCandidateStringColor_FWD_DEFINED__
#define __ITfCandidateStringColor_FWD_DEFINED__
typedef interface ITfCandidateStringColor ITfCandidateStringColor;
#endif 	/* __ITfCandidateStringColor_FWD_DEFINED__ */


#ifndef __ITfCandidateStringFixture_FWD_DEFINED__
#define __ITfCandidateStringFixture_FWD_DEFINED__
typedef interface ITfCandidateStringFixture ITfCandidateStringFixture;
#endif 	/* __ITfCandidateStringFixture_FWD_DEFINED__ */


#ifndef __ITfCandidateStringIcon_FWD_DEFINED__
#define __ITfCandidateStringIcon_FWD_DEFINED__
typedef interface ITfCandidateStringIcon ITfCandidateStringIcon;
#endif 	/* __ITfCandidateStringIcon_FWD_DEFINED__ */


#ifndef __ITfCandidateListRawData_FWD_DEFINED__
#define __ITfCandidateListRawData_FWD_DEFINED__
typedef interface ITfCandidateListRawData ITfCandidateListRawData;
#endif 	/* __ITfCandidateListRawData_FWD_DEFINED__ */


#ifndef __ITfCandidateListExtraCandidate_FWD_DEFINED__
#define __ITfCandidateListExtraCandidate_FWD_DEFINED__
typedef interface ITfCandidateListExtraCandidate ITfCandidateListExtraCandidate;
#endif 	/* __ITfCandidateListExtraCandidate_FWD_DEFINED__ */


#ifndef __ITfOptionsCandidateList_FWD_DEFINED__
#define __ITfOptionsCandidateList_FWD_DEFINED__
typedef interface ITfOptionsCandidateList ITfOptionsCandidateList;
#endif 	/* __ITfOptionsCandidateList_FWD_DEFINED__ */


#ifndef __ITfCandidateListTip_FWD_DEFINED__
#define __ITfCandidateListTip_FWD_DEFINED__
typedef interface ITfCandidateListTip ITfCandidateListTip;
#endif 	/* __ITfCandidateListTip_FWD_DEFINED__ */


#ifndef __ITfCandUIKeyTable_FWD_DEFINED__
#define __ITfCandUIKeyTable_FWD_DEFINED__
typedef interface ITfCandUIKeyTable ITfCandUIKeyTable;
#endif 	/* __ITfCandUIKeyTable_FWD_DEFINED__ */


#ifndef __ITfCandUIMenuExtension_FWD_DEFINED__
#define __ITfCandUIMenuExtension_FWD_DEFINED__
typedef interface ITfCandUIMenuExtension ITfCandUIMenuExtension;
#endif 	/* __ITfCandUIMenuExtension_FWD_DEFINED__ */


#ifndef __ITfCandUIMenuEventSink_FWD_DEFINED__
#define __ITfCandUIMenuEventSink_FWD_DEFINED__
typedef interface ITfCandUIMenuEventSink ITfCandUIMenuEventSink;
#endif 	/* __ITfCandUIMenuEventSink_FWD_DEFINED__ */


#ifndef __ITfCandUIAutoFilterEventSink_FWD_DEFINED__
#define __ITfCandUIAutoFilterEventSink_FWD_DEFINED__
typedef interface ITfCandUIAutoFilterEventSink ITfCandUIAutoFilterEventSink;
#endif 	/* __ITfCandUIAutoFilterEventSink_FWD_DEFINED__ */


#ifndef __ITfCandUISortEventSink_FWD_DEFINED__
#define __ITfCandUISortEventSink_FWD_DEFINED__
typedef interface ITfCandUISortEventSink ITfCandUISortEventSink;
#endif 	/* __ITfCandUISortEventSink_FWD_DEFINED__ */


#ifndef __ITfCandUIExtButtonEventSink_FWD_DEFINED__
#define __ITfCandUIExtButtonEventSink_FWD_DEFINED__
typedef interface ITfCandUIExtButtonEventSink ITfCandUIExtButtonEventSink;
#endif 	/* __ITfCandUIExtButtonEventSink_FWD_DEFINED__ */


#ifndef __ITfCandUIFnAutoFilter_FWD_DEFINED__
#define __ITfCandUIFnAutoFilter_FWD_DEFINED__
typedef interface ITfCandUIFnAutoFilter ITfCandUIFnAutoFilter;
#endif 	/* __ITfCandUIFnAutoFilter_FWD_DEFINED__ */


#ifndef __ITfCandUIFnSort_FWD_DEFINED__
#define __ITfCandUIFnSort_FWD_DEFINED__
typedef interface ITfCandUIFnSort ITfCandUIFnSort;
#endif 	/* __ITfCandUIFnSort_FWD_DEFINED__ */


#ifndef __ITfCandUIFnKeyConfig_FWD_DEFINED__
#define __ITfCandUIFnKeyConfig_FWD_DEFINED__
typedef interface ITfCandUIFnKeyConfig ITfCandUIFnKeyConfig;
#endif 	/* __ITfCandUIFnKeyConfig_FWD_DEFINED__ */


#ifndef __ITfCandUIFnUIConfig_FWD_DEFINED__
#define __ITfCandUIFnUIConfig_FWD_DEFINED__
typedef interface ITfCandUIFnUIConfig ITfCandUIFnUIConfig;
#endif 	/* __ITfCandUIFnUIConfig_FWD_DEFINED__ */


#ifndef __ITfCandUIFnExtension_FWD_DEFINED__
#define __ITfCandUIFnExtension_FWD_DEFINED__
typedef interface ITfCandUIFnExtension ITfCandUIFnExtension;
#endif 	/* __ITfCandUIFnExtension_FWD_DEFINED__ */


#ifndef __ITfCandUIObject_FWD_DEFINED__
#define __ITfCandUIObject_FWD_DEFINED__
typedef interface ITfCandUIObject ITfCandUIObject;
#endif 	/* __ITfCandUIObject_FWD_DEFINED__ */


#ifndef __ITfCandUICandWindow_FWD_DEFINED__
#define __ITfCandUICandWindow_FWD_DEFINED__
typedef interface ITfCandUICandWindow ITfCandUICandWindow;
#endif 	/* __ITfCandUICandWindow_FWD_DEFINED__ */


#ifndef __ITfCandUIPopupCommentWindow_FWD_DEFINED__
#define __ITfCandUIPopupCommentWindow_FWD_DEFINED__
typedef interface ITfCandUIPopupCommentWindow ITfCandUIPopupCommentWindow;
#endif 	/* __ITfCandUIPopupCommentWindow_FWD_DEFINED__ */


#ifndef __ITfCandUICandTipWindow_FWD_DEFINED__
#define __ITfCandUICandTipWindow_FWD_DEFINED__
typedef interface ITfCandUICandTipWindow ITfCandUICandTipWindow;
#endif 	/* __ITfCandUICandTipWindow_FWD_DEFINED__ */


#ifndef __ITfCandUICandListBox_FWD_DEFINED__
#define __ITfCandUICandListBox_FWD_DEFINED__
typedef interface ITfCandUICandListBox ITfCandUICandListBox;
#endif 	/* __ITfCandUICandListBox_FWD_DEFINED__ */


#ifndef __ITfCandUIMenuButton_FWD_DEFINED__
#define __ITfCandUIMenuButton_FWD_DEFINED__
typedef interface ITfCandUIMenuButton ITfCandUIMenuButton;
#endif 	/* __ITfCandUIMenuButton_FWD_DEFINED__ */


#ifndef __ITfCandUICaption_FWD_DEFINED__
#define __ITfCandUICaption_FWD_DEFINED__
typedef interface ITfCandUICaption ITfCandUICaption;
#endif 	/* __ITfCandUICaption_FWD_DEFINED__ */


#ifndef __ITfCandUIExtraCandidate_FWD_DEFINED__
#define __ITfCandUIExtraCandidate_FWD_DEFINED__
typedef interface ITfCandUIExtraCandidate ITfCandUIExtraCandidate;
#endif 	/* __ITfCandUIExtraCandidate_FWD_DEFINED__ */


#ifndef __ITfCandUIRawData_FWD_DEFINED__
#define __ITfCandUIRawData_FWD_DEFINED__
typedef interface ITfCandUIRawData ITfCandUIRawData;
#endif 	/* __ITfCandUIRawData_FWD_DEFINED__ */


#ifndef __ITfCandUICandTipButton_FWD_DEFINED__
#define __ITfCandUICandTipButton_FWD_DEFINED__
typedef interface ITfCandUICandTipButton ITfCandUICandTipButton;
#endif 	/* __ITfCandUICandTipButton_FWD_DEFINED__ */


#ifndef __ITfCandUICandString_FWD_DEFINED__
#define __ITfCandUICandString_FWD_DEFINED__
typedef interface ITfCandUICandString ITfCandUICandString;
#endif 	/* __ITfCandUICandString_FWD_DEFINED__ */


#ifndef __ITfCandUICandIndex_FWD_DEFINED__
#define __ITfCandUICandIndex_FWD_DEFINED__
typedef interface ITfCandUICandIndex ITfCandUICandIndex;
#endif 	/* __ITfCandUICandIndex_FWD_DEFINED__ */


#ifndef __ITfCandUIInlineComment_FWD_DEFINED__
#define __ITfCandUIInlineComment_FWD_DEFINED__
typedef interface ITfCandUIInlineComment ITfCandUIInlineComment;
#endif 	/* __ITfCandUIInlineComment_FWD_DEFINED__ */


#ifndef __ITfCandUIToolTip_FWD_DEFINED__
#define __ITfCandUIToolTip_FWD_DEFINED__
typedef interface ITfCandUIToolTip ITfCandUIToolTip;
#endif 	/* __ITfCandUIToolTip_FWD_DEFINED__ */


#ifndef __ITfCandUIPopupCommentTitle_FWD_DEFINED__
#define __ITfCandUIPopupCommentTitle_FWD_DEFINED__
typedef interface ITfCandUIPopupCommentTitle ITfCandUIPopupCommentTitle;
#endif 	/* __ITfCandUIPopupCommentTitle_FWD_DEFINED__ */


#ifndef __ITfCandUIPopupCommentText_FWD_DEFINED__
#define __ITfCandUIPopupCommentText_FWD_DEFINED__
typedef interface ITfCandUIPopupCommentText ITfCandUIPopupCommentText;
#endif 	/* __ITfCandUIPopupCommentText_FWD_DEFINED__ */


#ifndef __ITfCandUIExtObject_FWD_DEFINED__
#define __ITfCandUIExtObject_FWD_DEFINED__
typedef interface ITfCandUIExtObject ITfCandUIExtObject;
#endif 	/* __ITfCandUIExtObject_FWD_DEFINED__ */


#ifndef __ITfCandUIExtSpace_FWD_DEFINED__
#define __ITfCandUIExtSpace_FWD_DEFINED__
typedef interface ITfCandUIExtSpace ITfCandUIExtSpace;
#endif 	/* __ITfCandUIExtSpace_FWD_DEFINED__ */


#ifndef __ITfCandUIExtPushButton_FWD_DEFINED__
#define __ITfCandUIExtPushButton_FWD_DEFINED__
typedef interface ITfCandUIExtPushButton ITfCandUIExtPushButton;
#endif 	/* __ITfCandUIExtPushButton_FWD_DEFINED__ */


#ifndef __ITfCandUIExtToggleButton_FWD_DEFINED__
#define __ITfCandUIExtToggleButton_FWD_DEFINED__
typedef interface ITfCandUIExtToggleButton ITfCandUIExtToggleButton;
#endif 	/* __ITfCandUIExtToggleButton_FWD_DEFINED__ */


#ifndef __ITfCandidateUIContextOwner_FWD_DEFINED__
#define __ITfCandidateUIContextOwner_FWD_DEFINED__
typedef interface ITfCandidateUIContextOwner ITfCandidateUIContextOwner;
#endif 	/* __ITfCandidateUIContextOwner_FWD_DEFINED__ */


#ifndef __ITfCandidateUI_FWD_DEFINED__
#define __ITfCandidateUI_FWD_DEFINED__
typedef interface ITfCandidateUI ITfCandidateUI;
#endif 	/* __ITfCandidateUI_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "msctf.h"
#include "ctffunc.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_mscandui_0000 */
/* [local] */ 

//=--------------------------------------------------------------------------=
// mscandui.h


// UIM declarations.

//=--------------------------------------------------------------------------=
// (C) Copyright 1995-1999 Microsoft Corporation.  All Rights Reserved.
//
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESSED OR TFPLIED, INCLUDING BUT NOT LIMITED TO
// THE TFPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//=--------------------------------------------------------------------------=

#ifndef MSCANDUI_DEFINED
#define MSCANDUI_DEFINED

#include <windows.h>

#ifndef _WINGDI_
typedef /* [uuid] */  DECLSPEC_UUID("b02357f0-f5c7-4ffa-91f5-8c0fb8ba4256") struct LOGFONTA
    {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    CHAR lfFaceName[ 32 ];
    } 	LOGFONTA;

typedef /* [uuid] */  DECLSPEC_UUID("22fe0f52-31fd-4959-9101-25f07148b7b5") struct LOGFONTW
    {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    WCHAR lfFaceName[ 32 ];
    } 	LOGFONTW;

typedef /* [uuid] */  DECLSPEC_UUID("41a50afb-8c61-4900-a3e1-e13b602b91bb") LOGFONTA LOGFONT;

#endif
typedef /* [public][public][public][uuid] */  DECLSPEC_UUID("73636d07-a343-4875-82dd-da74bc27c70b") 
enum __MIDL___MIDL_itf_mscandui_0000_0001
    {	CANDUICOL_DEFAULT	= 0,
	CANDUICOL_SYSTEM	= 1,
	CANDUICOL_COLORREF	= 2
    } 	CANDUICOLORTYPE;

typedef /* [uuid] */  DECLSPEC_UUID("a39152b2-8124-484c-a313-985a799ed78b") struct CANDUICOLOR
    {
    CANDUICOLORTYPE type;
    /* [switch_is][switch_type] */ union 
        {
        /* [case()] */ int nIndex;
        /* [case()] */ COLORREF cr;
        } 	;
    } 	CANDUICOLOR;

typedef /* [public][public][public][uuid] */  DECLSPEC_UUID("e918b745-7267-4849-bf67-4206ffdef009") 
enum __MIDL___MIDL_itf_mscandui_0000_0003
    {	CANDUIRDT_STRING	= 0,
	CANDUIRDT_BITMAP	= 1,
	CANDUIRDT_METAFILE	= 2
    } 	CANDUIRAWDATATYPE;

typedef /* [uuid] */  DECLSPEC_UUID("530658a8-9297-4098-acdd-4e3980badf73") struct CANDUIRAWDATA
    {
    CANDUIRAWDATATYPE type;
    /* [switch_is][switch_type] */ union 
        {
        /* [case()] */ BSTR bstr;
        /* [case()] */ HBITMAP hbmp;
        /* [case()] */ HENHMETAFILE hemf;
        } 	;
    } 	CANDUIRAWDATA;

typedef /* [public][public][public][uuid] */  DECLSPEC_UUID("296fd808-e8e1-4f70-8440-5fe312c8c0c8") 
enum __MIDL___MIDL_itf_mscandui_0000_0005
    {	CANDUIDIR_TOPTOBOTTOM	= 0,
	CANDUIDIR_RIGHTTOLEFT	= 1,
	CANDUIDIR_BOTTOMTOTOP	= 2,
	CANDUIDIR_LEFTTORIGHT	= 3
    } 	CANDUIUIDIRECTION;

typedef /* [public][public][public][uuid] */  DECLSPEC_UUID("b382f954-0602-4865-90b8-379f361c157c") 
enum __MIDL___MIDL_itf_mscandui_0000_0006
    {	CANDUISTY_LIST	= 0,
	CANDUISTY_ROW	= 1
    } 	CANDUISTYLE;

#define	CANDUIOPT_ENABLETHEME	( 0x1 )

typedef /* [public][public][public][public][public][uuid] */  DECLSPEC_UUID("86ca05b3-7976-4eb5-a293-6e896e200cc6") 
enum __MIDL___MIDL_itf_mscandui_0000_0007
    {	CANDUICMD_NONE	= -1,
	CANDUICMD_NOP	= 0,
	CANDUICMD_COMPLETE	= 1,
	CANDUICMD_CANCEL	= 2,
	CANDUICMD_SELECTITEM	= 3,
	CANDUICMD_SELECTLINE	= 4,
	CANDUICMD_MOVESELNEXT	= 5,
	CANDUICMD_MOVESELPREV	= 6,
	CANDUICMD_MOVESELNEXTPG	= 7,
	CANDUICMD_MOVESELPREVPG	= 8,
	CANDUICMD_MOVESELFIRST	= 9,
	CANDUICMD_MOVESELLAST	= 10,
	CANDUICMD_MOVESELUP	= 11,
	CANDUICMD_MOVESELDOWN	= 12,
	CANDUICMD_MOVESELLEFT	= 13,
	CANDUICMD_MOVESELRIGHT	= 14,
	CANDUICMD_OPENCANDMENU	= 15,
	CANDUICMD_SELECTRAWDATA	= 16,
	CANDUICMD_SELECTEXTRACAND	= 17
    } 	CANDUICOMMAND;

#define	CANDUIKEY_VKEY	( 0 )

#define	CANDUIKEY_SHIFT	( 0x1 )

#define	CANDUIKEY_NOSHIFT	( 0x2 )

#define	CANDUIKEY_CTRL	( 0x4 )

#define	CANDUIKEY_NOCTRL	( 0x8 )

#define	CANDUIKEY_RELATIVEDIR	( 0x10 )

#define	CANDUIKEY_CHAR	( 0xffffffff )

typedef /* [uuid] */  DECLSPEC_UUID("ffa2c2aa-bbbc-45ca-b3c6-39823e92296a") struct CANDUIKEYDATA
    {
    DWORD dwFlag;
    UINT uiKey;
    CANDUICOMMAND cmd;
    UINT uiParam;
    } 	CANDUIKEYDATA;

typedef /* [public][public][uuid] */  DECLSPEC_UUID("b164a6e5-fd2c-4fb6-b31d-086fa6da183d") 
enum __MIDL___MIDL_itf_mscandui_0000_0008
    {	CANDUIFST_COMPLETE	= 0,
	CANDUIFST_DETERMINED	= 1,
	CANDUIFST_UNDETERMINED	= 2
    } 	CANDUIFILTERSTR;

typedef /* [public][public][uuid] */  DECLSPEC_UUID("971c2ef2-fa8a-4423-831f-da979c52ddd4") 
enum __MIDL___MIDL_itf_mscandui_0000_0009
    {	CANDUIFEV_ENABLED	= 0,
	CANDUIFEV_DISABLED	= 1,
	CANDUIFEV_UPDATED	= 2,
	CANDUIFEV_NONMATCH	= 3
    } 	CANDUIFILTEREVENT;

typedef /* [public][public][uuid] */  DECLSPEC_UUID("b5f63c6a-d188-4f7b-a9fd-a15c738912fd") 
enum __MIDL___MIDL_itf_mscandui_0000_0010
    {	CANDUISEV_SORTED	= 0,
	CANDUISEV_RESTORED	= 1
    } 	CANDUISORTEVENT;

#define	CANDUISTR_HASINLINECOMMENT	( 0x1 )

#define	CANDUISTR_HASPOPUPCOMMENT	( 0x2 )

#define	CANDUISTR_HASCOLOR	( 0x4 )

#define	CANDUISTR_HASFIXTURE	( 0x8 )

#define	CANDUISTR_HASICON	( 0x10 )



extern RPC_IF_HANDLE __MIDL_itf_mscandui_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mscandui_0000_v0_0_s_ifspec;

#ifndef __ITfCandidateStringFlag_INTERFACE_DEFINED__
#define __ITfCandidateStringFlag_INTERFACE_DEFINED__

/* interface ITfCandidateStringFlag */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandidateStringFlag;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("91114c09-1fb3-4771-9701-74fd18e1309a")
    ITfCandidateStringFlag : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFlag( 
            /* [out] */ DWORD *pdwFlag) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandidateStringFlagVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandidateStringFlag * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandidateStringFlag * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandidateStringFlag * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlag )( 
            ITfCandidateStringFlag * This,
            /* [out] */ DWORD *pdwFlag);
        
        END_INTERFACE
    } ITfCandidateStringFlagVtbl;

    interface ITfCandidateStringFlag
    {
        CONST_VTBL struct ITfCandidateStringFlagVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandidateStringFlag_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandidateStringFlag_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandidateStringFlag_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandidateStringFlag_GetFlag(This,pdwFlag)	\
    (This)->lpVtbl -> GetFlag(This,pdwFlag)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandidateStringFlag_GetFlag_Proxy( 
    ITfCandidateStringFlag * This,
    /* [out] */ DWORD *pdwFlag);


void __RPC_STUB ITfCandidateStringFlag_GetFlag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandidateStringFlag_INTERFACE_DEFINED__ */


#ifndef __ITfCandidateStringInlineComment_INTERFACE_DEFINED__
#define __ITfCandidateStringInlineComment_INTERFACE_DEFINED__

/* interface ITfCandidateStringInlineComment */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandidateStringInlineComment;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a55119cc-fed4-49de-85b2-b6b55f26b00f")
    ITfCandidateStringInlineComment : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetInlineCommentString( 
            /* [out] */ BSTR *pbstr) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandidateStringInlineCommentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandidateStringInlineComment * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandidateStringInlineComment * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandidateStringInlineComment * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInlineCommentString )( 
            ITfCandidateStringInlineComment * This,
            /* [out] */ BSTR *pbstr);
        
        END_INTERFACE
    } ITfCandidateStringInlineCommentVtbl;

    interface ITfCandidateStringInlineComment
    {
        CONST_VTBL struct ITfCandidateStringInlineCommentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandidateStringInlineComment_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandidateStringInlineComment_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandidateStringInlineComment_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandidateStringInlineComment_GetInlineCommentString(This,pbstr)	\
    (This)->lpVtbl -> GetInlineCommentString(This,pbstr)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandidateStringInlineComment_GetInlineCommentString_Proxy( 
    ITfCandidateStringInlineComment * This,
    /* [out] */ BSTR *pbstr);


void __RPC_STUB ITfCandidateStringInlineComment_GetInlineCommentString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandidateStringInlineComment_INTERFACE_DEFINED__ */


#ifndef __ITfCandidateStringPopupComment_INTERFACE_DEFINED__
#define __ITfCandidateStringPopupComment_INTERFACE_DEFINED__

/* interface ITfCandidateStringPopupComment */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandidateStringPopupComment;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("66d2ab70-d46c-4543-a4a9-c68b00b43b4c")
    ITfCandidateStringPopupComment : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPopupCommentString( 
            /* [out] */ BSTR *pbstr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPopupCommentGroupID( 
            /* [out] */ DWORD *pdwGroupID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandidateStringPopupCommentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandidateStringPopupComment * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandidateStringPopupComment * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandidateStringPopupComment * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPopupCommentString )( 
            ITfCandidateStringPopupComment * This,
            /* [out] */ BSTR *pbstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetPopupCommentGroupID )( 
            ITfCandidateStringPopupComment * This,
            /* [out] */ DWORD *pdwGroupID);
        
        END_INTERFACE
    } ITfCandidateStringPopupCommentVtbl;

    interface ITfCandidateStringPopupComment
    {
        CONST_VTBL struct ITfCandidateStringPopupCommentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandidateStringPopupComment_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandidateStringPopupComment_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandidateStringPopupComment_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandidateStringPopupComment_GetPopupCommentString(This,pbstr)	\
    (This)->lpVtbl -> GetPopupCommentString(This,pbstr)

#define ITfCandidateStringPopupComment_GetPopupCommentGroupID(This,pdwGroupID)	\
    (This)->lpVtbl -> GetPopupCommentGroupID(This,pdwGroupID)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandidateStringPopupComment_GetPopupCommentString_Proxy( 
    ITfCandidateStringPopupComment * This,
    /* [out] */ BSTR *pbstr);


void __RPC_STUB ITfCandidateStringPopupComment_GetPopupCommentString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandidateStringPopupComment_GetPopupCommentGroupID_Proxy( 
    ITfCandidateStringPopupComment * This,
    /* [out] */ DWORD *pdwGroupID);


void __RPC_STUB ITfCandidateStringPopupComment_GetPopupCommentGroupID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandidateStringPopupComment_INTERFACE_DEFINED__ */


#ifndef __ITfCandidateStringColor_INTERFACE_DEFINED__
#define __ITfCandidateStringColor_INTERFACE_DEFINED__

/* interface ITfCandidateStringColor */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandidateStringColor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("43fb8eee-ff1c-42a1-810c-77201df6717e")
    ITfCandidateStringColor : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetColor( 
            /* [out] */ CANDUICOLOR *pcol) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandidateStringColorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandidateStringColor * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandidateStringColor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandidateStringColor * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetColor )( 
            ITfCandidateStringColor * This,
            /* [out] */ CANDUICOLOR *pcol);
        
        END_INTERFACE
    } ITfCandidateStringColorVtbl;

    interface ITfCandidateStringColor
    {
        CONST_VTBL struct ITfCandidateStringColorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandidateStringColor_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandidateStringColor_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandidateStringColor_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandidateStringColor_GetColor(This,pcol)	\
    (This)->lpVtbl -> GetColor(This,pcol)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandidateStringColor_GetColor_Proxy( 
    ITfCandidateStringColor * This,
    /* [out] */ CANDUICOLOR *pcol);


void __RPC_STUB ITfCandidateStringColor_GetColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandidateStringColor_INTERFACE_DEFINED__ */


#ifndef __ITfCandidateStringFixture_INTERFACE_DEFINED__
#define __ITfCandidateStringFixture_INTERFACE_DEFINED__

/* interface ITfCandidateStringFixture */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandidateStringFixture;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b85c0208-4fec-418c-85d0-c62ad29a092b")
    ITfCandidateStringFixture : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPrefixString( 
            /* [out] */ BSTR *pbstr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSuffixString( 
            /* [out] */ BSTR *pbstr) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandidateStringFixtureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandidateStringFixture * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandidateStringFixture * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandidateStringFixture * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPrefixString )( 
            ITfCandidateStringFixture * This,
            /* [out] */ BSTR *pbstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetSuffixString )( 
            ITfCandidateStringFixture * This,
            /* [out] */ BSTR *pbstr);
        
        END_INTERFACE
    } ITfCandidateStringFixtureVtbl;

    interface ITfCandidateStringFixture
    {
        CONST_VTBL struct ITfCandidateStringFixtureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandidateStringFixture_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandidateStringFixture_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandidateStringFixture_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandidateStringFixture_GetPrefixString(This,pbstr)	\
    (This)->lpVtbl -> GetPrefixString(This,pbstr)

#define ITfCandidateStringFixture_GetSuffixString(This,pbstr)	\
    (This)->lpVtbl -> GetSuffixString(This,pbstr)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandidateStringFixture_GetPrefixString_Proxy( 
    ITfCandidateStringFixture * This,
    /* [out] */ BSTR *pbstr);


void __RPC_STUB ITfCandidateStringFixture_GetPrefixString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandidateStringFixture_GetSuffixString_Proxy( 
    ITfCandidateStringFixture * This,
    /* [out] */ BSTR *pbstr);


void __RPC_STUB ITfCandidateStringFixture_GetSuffixString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandidateStringFixture_INTERFACE_DEFINED__ */


#ifndef __ITfCandidateStringIcon_INTERFACE_DEFINED__
#define __ITfCandidateStringIcon_INTERFACE_DEFINED__

/* interface ITfCandidateStringIcon */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandidateStringIcon;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("46275059-c606-41b0-aac8-c8aa48b82998")
    ITfCandidateStringIcon : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetIcon( 
            /* [out] */ HICON *phIcon) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandidateStringIconVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandidateStringIcon * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandidateStringIcon * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandidateStringIcon * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIcon )( 
            ITfCandidateStringIcon * This,
            /* [out] */ HICON *phIcon);
        
        END_INTERFACE
    } ITfCandidateStringIconVtbl;

    interface ITfCandidateStringIcon
    {
        CONST_VTBL struct ITfCandidateStringIconVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandidateStringIcon_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandidateStringIcon_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandidateStringIcon_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandidateStringIcon_GetIcon(This,phIcon)	\
    (This)->lpVtbl -> GetIcon(This,phIcon)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandidateStringIcon_GetIcon_Proxy( 
    ITfCandidateStringIcon * This,
    /* [out] */ HICON *phIcon);


void __RPC_STUB ITfCandidateStringIcon_GetIcon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandidateStringIcon_INTERFACE_DEFINED__ */


#ifndef __ITfCandidateListRawData_INTERFACE_DEFINED__
#define __ITfCandidateListRawData_INTERFACE_DEFINED__

/* interface ITfCandidateListRawData */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandidateListRawData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cdd01281-8228-45a0-9b55-cc44c2a2a091")
    ITfCandidateListRawData : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRawData( 
            /* [out] */ CANDUIRAWDATA *prd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRawDataIndex( 
            /* [out] */ ULONG *pnIndex) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandidateListRawDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandidateListRawData * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandidateListRawData * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandidateListRawData * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRawData )( 
            ITfCandidateListRawData * This,
            /* [out] */ CANDUIRAWDATA *prd);
        
        HRESULT ( STDMETHODCALLTYPE *GetRawDataIndex )( 
            ITfCandidateListRawData * This,
            /* [out] */ ULONG *pnIndex);
        
        END_INTERFACE
    } ITfCandidateListRawDataVtbl;

    interface ITfCandidateListRawData
    {
        CONST_VTBL struct ITfCandidateListRawDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandidateListRawData_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandidateListRawData_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandidateListRawData_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandidateListRawData_GetRawData(This,prd)	\
    (This)->lpVtbl -> GetRawData(This,prd)

#define ITfCandidateListRawData_GetRawDataIndex(This,pnIndex)	\
    (This)->lpVtbl -> GetRawDataIndex(This,pnIndex)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandidateListRawData_GetRawData_Proxy( 
    ITfCandidateListRawData * This,
    /* [out] */ CANDUIRAWDATA *prd);


void __RPC_STUB ITfCandidateListRawData_GetRawData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandidateListRawData_GetRawDataIndex_Proxy( 
    ITfCandidateListRawData * This,
    /* [out] */ ULONG *pnIndex);


void __RPC_STUB ITfCandidateListRawData_GetRawDataIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandidateListRawData_INTERFACE_DEFINED__ */


#ifndef __ITfCandidateListExtraCandidate_INTERFACE_DEFINED__
#define __ITfCandidateListExtraCandidate_INTERFACE_DEFINED__

/* interface ITfCandidateListExtraCandidate */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandidateListExtraCandidate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("85bbeeb5-ba64-411e-abb3-ed379275fab4")
    ITfCandidateListExtraCandidate : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetExtraCandidate( 
            /* [out] */ ITfCandidateString **ppCand) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandidateListExtraCandidateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandidateListExtraCandidate * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandidateListExtraCandidate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandidateListExtraCandidate * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetExtraCandidate )( 
            ITfCandidateListExtraCandidate * This,
            /* [out] */ ITfCandidateString **ppCand);
        
        END_INTERFACE
    } ITfCandidateListExtraCandidateVtbl;

    interface ITfCandidateListExtraCandidate
    {
        CONST_VTBL struct ITfCandidateListExtraCandidateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandidateListExtraCandidate_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandidateListExtraCandidate_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandidateListExtraCandidate_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandidateListExtraCandidate_GetExtraCandidate(This,ppCand)	\
    (This)->lpVtbl -> GetExtraCandidate(This,ppCand)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandidateListExtraCandidate_GetExtraCandidate_Proxy( 
    ITfCandidateListExtraCandidate * This,
    /* [out] */ ITfCandidateString **ppCand);


void __RPC_STUB ITfCandidateListExtraCandidate_GetExtraCandidate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandidateListExtraCandidate_INTERFACE_DEFINED__ */


#ifndef __ITfOptionsCandidateList_INTERFACE_DEFINED__
#define __ITfOptionsCandidateList_INTERFACE_DEFINED__

/* interface ITfOptionsCandidateList */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfOptionsCandidateList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("605133F7-758D-42fc-A3FE-10146A7D52F9")
    ITfOptionsCandidateList : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumOptionsCandidates( 
            /* [out] */ IEnumTfCandidates **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOptionsCandidate( 
            /* [in] */ ULONG nIndex,
            /* [out] */ ITfCandidateString **ppCand) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOptionsCandidateNum( 
            /* [out] */ ULONG *pnCnt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOptionsResult( 
            /* [in] */ ULONG nIndex,
            /* [in] */ TfCandidateResult imcr) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfOptionsCandidateListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfOptionsCandidateList * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfOptionsCandidateList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfOptionsCandidateList * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnumOptionsCandidates )( 
            ITfOptionsCandidateList * This,
            /* [out] */ IEnumTfCandidates **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *GetOptionsCandidate )( 
            ITfOptionsCandidateList * This,
            /* [in] */ ULONG nIndex,
            /* [out] */ ITfCandidateString **ppCand);
        
        HRESULT ( STDMETHODCALLTYPE *GetOptionsCandidateNum )( 
            ITfOptionsCandidateList * This,
            /* [out] */ ULONG *pnCnt);
        
        HRESULT ( STDMETHODCALLTYPE *SetOptionsResult )( 
            ITfOptionsCandidateList * This,
            /* [in] */ ULONG nIndex,
            /* [in] */ TfCandidateResult imcr);
        
        END_INTERFACE
    } ITfOptionsCandidateListVtbl;

    interface ITfOptionsCandidateList
    {
        CONST_VTBL struct ITfOptionsCandidateListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfOptionsCandidateList_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfOptionsCandidateList_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfOptionsCandidateList_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfOptionsCandidateList_EnumOptionsCandidates(This,ppEnum)	\
    (This)->lpVtbl -> EnumOptionsCandidates(This,ppEnum)

#define ITfOptionsCandidateList_GetOptionsCandidate(This,nIndex,ppCand)	\
    (This)->lpVtbl -> GetOptionsCandidate(This,nIndex,ppCand)

#define ITfOptionsCandidateList_GetOptionsCandidateNum(This,pnCnt)	\
    (This)->lpVtbl -> GetOptionsCandidateNum(This,pnCnt)

#define ITfOptionsCandidateList_SetOptionsResult(This,nIndex,imcr)	\
    (This)->lpVtbl -> SetOptionsResult(This,nIndex,imcr)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfOptionsCandidateList_EnumOptionsCandidates_Proxy( 
    ITfOptionsCandidateList * This,
    /* [out] */ IEnumTfCandidates **ppEnum);


void __RPC_STUB ITfOptionsCandidateList_EnumOptionsCandidates_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfOptionsCandidateList_GetOptionsCandidate_Proxy( 
    ITfOptionsCandidateList * This,
    /* [in] */ ULONG nIndex,
    /* [out] */ ITfCandidateString **ppCand);


void __RPC_STUB ITfOptionsCandidateList_GetOptionsCandidate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfOptionsCandidateList_GetOptionsCandidateNum_Proxy( 
    ITfOptionsCandidateList * This,
    /* [out] */ ULONG *pnCnt);


void __RPC_STUB ITfOptionsCandidateList_GetOptionsCandidateNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfOptionsCandidateList_SetOptionsResult_Proxy( 
    ITfOptionsCandidateList * This,
    /* [in] */ ULONG nIndex,
    /* [in] */ TfCandidateResult imcr);


void __RPC_STUB ITfOptionsCandidateList_SetOptionsResult_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfOptionsCandidateList_INTERFACE_DEFINED__ */


#ifndef __ITfCandidateListTip_INTERFACE_DEFINED__
#define __ITfCandidateListTip_INTERFACE_DEFINED__

/* interface ITfCandidateListTip */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandidateListTip;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c28a9c90-16b1-4064-a190-0b9e5f592539")
    ITfCandidateListTip : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTipString( 
            /* [out] */ BSTR *pbstr) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandidateListTipVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandidateListTip * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandidateListTip * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandidateListTip * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTipString )( 
            ITfCandidateListTip * This,
            /* [out] */ BSTR *pbstr);
        
        END_INTERFACE
    } ITfCandidateListTipVtbl;

    interface ITfCandidateListTip
    {
        CONST_VTBL struct ITfCandidateListTipVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandidateListTip_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandidateListTip_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandidateListTip_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandidateListTip_GetTipString(This,pbstr)	\
    (This)->lpVtbl -> GetTipString(This,pbstr)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandidateListTip_GetTipString_Proxy( 
    ITfCandidateListTip * This,
    /* [out] */ BSTR *pbstr);


void __RPC_STUB ITfCandidateListTip_GetTipString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandidateListTip_INTERFACE_DEFINED__ */


#ifndef __ITfCandUIKeyTable_INTERFACE_DEFINED__
#define __ITfCandUIKeyTable_INTERFACE_DEFINED__

/* interface ITfCandUIKeyTable */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUIKeyTable;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4f9d0bca-c834-4a46-8def-b7544671d602")
    ITfCandUIKeyTable : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetKeyDataNum( 
            /* [out] */ int *pnCnt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetKeyData( 
            /* [in] */ int iKeyData,
            /* [out] */ CANDUIKEYDATA *pKeyData) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUIKeyTableVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUIKeyTable * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUIKeyTable * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUIKeyTable * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetKeyDataNum )( 
            ITfCandUIKeyTable * This,
            /* [out] */ int *pnCnt);
        
        HRESULT ( STDMETHODCALLTYPE *GetKeyData )( 
            ITfCandUIKeyTable * This,
            /* [in] */ int iKeyData,
            /* [out] */ CANDUIKEYDATA *pKeyData);
        
        END_INTERFACE
    } ITfCandUIKeyTableVtbl;

    interface ITfCandUIKeyTable
    {
        CONST_VTBL struct ITfCandUIKeyTableVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUIKeyTable_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUIKeyTable_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUIKeyTable_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUIKeyTable_GetKeyDataNum(This,pnCnt)	\
    (This)->lpVtbl -> GetKeyDataNum(This,pnCnt)

#define ITfCandUIKeyTable_GetKeyData(This,iKeyData,pKeyData)	\
    (This)->lpVtbl -> GetKeyData(This,iKeyData,pKeyData)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandUIKeyTable_GetKeyDataNum_Proxy( 
    ITfCandUIKeyTable * This,
    /* [out] */ int *pnCnt);


void __RPC_STUB ITfCandUIKeyTable_GetKeyDataNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIKeyTable_GetKeyData_Proxy( 
    ITfCandUIKeyTable * This,
    /* [in] */ int iKeyData,
    /* [out] */ CANDUIKEYDATA *pKeyData);


void __RPC_STUB ITfCandUIKeyTable_GetKeyData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandUIKeyTable_INTERFACE_DEFINED__ */


#ifndef __ITfCandUIMenuExtension_INTERFACE_DEFINED__
#define __ITfCandUIMenuExtension_INTERFACE_DEFINED__

/* interface ITfCandUIMenuExtension */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUIMenuExtension;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6875610e-8912-44c6-bcab-48c6cff915e3")
    ITfCandUIMenuExtension : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFont( 
            /* [in] */ LOGFONTW *pLogFont) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFont( 
            /* [out] */ LOGFONTW *pLogFont) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUIMenuExtensionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUIMenuExtension * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUIMenuExtension * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUIMenuExtension * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            ITfCandUIMenuExtension * This,
            /* [in] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *GetFont )( 
            ITfCandUIMenuExtension * This,
            /* [out] */ LOGFONTW *pLogFont);
        
        END_INTERFACE
    } ITfCandUIMenuExtensionVtbl;

    interface ITfCandUIMenuExtension
    {
        CONST_VTBL struct ITfCandUIMenuExtensionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUIMenuExtension_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUIMenuExtension_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUIMenuExtension_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUIMenuExtension_SetFont(This,pLogFont)	\
    (This)->lpVtbl -> SetFont(This,pLogFont)

#define ITfCandUIMenuExtension_GetFont(This,pLogFont)	\
    (This)->lpVtbl -> GetFont(This,pLogFont)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandUIMenuExtension_SetFont_Proxy( 
    ITfCandUIMenuExtension * This,
    /* [in] */ LOGFONTW *pLogFont);


void __RPC_STUB ITfCandUIMenuExtension_SetFont_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIMenuExtension_GetFont_Proxy( 
    ITfCandUIMenuExtension * This,
    /* [out] */ LOGFONTW *pLogFont);


void __RPC_STUB ITfCandUIMenuExtension_GetFont_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandUIMenuExtension_INTERFACE_DEFINED__ */


#ifndef __ITfCandUIMenuEventSink_INTERFACE_DEFINED__
#define __ITfCandUIMenuEventSink_INTERFACE_DEFINED__

/* interface ITfCandUIMenuEventSink */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUIMenuEventSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("944f237e-f03b-4bb9-b8f3-7afa51582d1a")
    ITfCandUIMenuEventSink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitMenu( 
            /* [in] */ ITfMenu *pMenu) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnMenuCommand( 
            /* [in] */ UINT uiCmd) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUIMenuEventSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUIMenuEventSink * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUIMenuEventSink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUIMenuEventSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *InitMenu )( 
            ITfCandUIMenuEventSink * This,
            /* [in] */ ITfMenu *pMenu);
        
        HRESULT ( STDMETHODCALLTYPE *OnMenuCommand )( 
            ITfCandUIMenuEventSink * This,
            /* [in] */ UINT uiCmd);
        
        END_INTERFACE
    } ITfCandUIMenuEventSinkVtbl;

    interface ITfCandUIMenuEventSink
    {
        CONST_VTBL struct ITfCandUIMenuEventSinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUIMenuEventSink_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUIMenuEventSink_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUIMenuEventSink_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUIMenuEventSink_InitMenu(This,pMenu)	\
    (This)->lpVtbl -> InitMenu(This,pMenu)

#define ITfCandUIMenuEventSink_OnMenuCommand(This,uiCmd)	\
    (This)->lpVtbl -> OnMenuCommand(This,uiCmd)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandUIMenuEventSink_InitMenu_Proxy( 
    ITfCandUIMenuEventSink * This,
    /* [in] */ ITfMenu *pMenu);


void __RPC_STUB ITfCandUIMenuEventSink_InitMenu_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIMenuEventSink_OnMenuCommand_Proxy( 
    ITfCandUIMenuEventSink * This,
    /* [in] */ UINT uiCmd);


void __RPC_STUB ITfCandUIMenuEventSink_OnMenuCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandUIMenuEventSink_INTERFACE_DEFINED__ */


#ifndef __ITfCandUIAutoFilterEventSink_INTERFACE_DEFINED__
#define __ITfCandUIAutoFilterEventSink_INTERFACE_DEFINED__

/* interface ITfCandUIAutoFilterEventSink */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUIAutoFilterEventSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("28ae3d7b-c38f-4efa-aedb-f8cacc1b7422")
    ITfCandUIAutoFilterEventSink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnFilterEvent( 
            /* [in] */ CANDUIFILTEREVENT ev) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUIAutoFilterEventSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUIAutoFilterEventSink * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUIAutoFilterEventSink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUIAutoFilterEventSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnFilterEvent )( 
            ITfCandUIAutoFilterEventSink * This,
            /* [in] */ CANDUIFILTEREVENT ev);
        
        END_INTERFACE
    } ITfCandUIAutoFilterEventSinkVtbl;

    interface ITfCandUIAutoFilterEventSink
    {
        CONST_VTBL struct ITfCandUIAutoFilterEventSinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUIAutoFilterEventSink_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUIAutoFilterEventSink_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUIAutoFilterEventSink_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUIAutoFilterEventSink_OnFilterEvent(This,ev)	\
    (This)->lpVtbl -> OnFilterEvent(This,ev)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandUIAutoFilterEventSink_OnFilterEvent_Proxy( 
    ITfCandUIAutoFilterEventSink * This,
    /* [in] */ CANDUIFILTEREVENT ev);


void __RPC_STUB ITfCandUIAutoFilterEventSink_OnFilterEvent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandUIAutoFilterEventSink_INTERFACE_DEFINED__ */


#ifndef __ITfCandUISortEventSink_INTERFACE_DEFINED__
#define __ITfCandUISortEventSink_INTERFACE_DEFINED__

/* interface ITfCandUISortEventSink */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUISortEventSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("212d4632-58aa-433e-9aea-67a2efe70cb9")
    ITfCandUISortEventSink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnSortEvent( 
            /* [in] */ CANDUISORTEVENT ev) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CompareItem( 
            /* [in] */ ITfCandidateString *pCand1,
            /* [in] */ ITfCandidateString *pCand2,
            /* [out] */ LONG *plResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUISortEventSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUISortEventSink * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUISortEventSink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUISortEventSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnSortEvent )( 
            ITfCandUISortEventSink * This,
            /* [in] */ CANDUISORTEVENT ev);
        
        HRESULT ( STDMETHODCALLTYPE *CompareItem )( 
            ITfCandUISortEventSink * This,
            /* [in] */ ITfCandidateString *pCand1,
            /* [in] */ ITfCandidateString *pCand2,
            /* [out] */ LONG *plResult);
        
        END_INTERFACE
    } ITfCandUISortEventSinkVtbl;

    interface ITfCandUISortEventSink
    {
        CONST_VTBL struct ITfCandUISortEventSinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUISortEventSink_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUISortEventSink_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUISortEventSink_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUISortEventSink_OnSortEvent(This,ev)	\
    (This)->lpVtbl -> OnSortEvent(This,ev)

#define ITfCandUISortEventSink_CompareItem(This,pCand1,pCand2,plResult)	\
    (This)->lpVtbl -> CompareItem(This,pCand1,pCand2,plResult)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandUISortEventSink_OnSortEvent_Proxy( 
    ITfCandUISortEventSink * This,
    /* [in] */ CANDUISORTEVENT ev);


void __RPC_STUB ITfCandUISortEventSink_OnSortEvent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUISortEventSink_CompareItem_Proxy( 
    ITfCandUISortEventSink * This,
    /* [in] */ ITfCandidateString *pCand1,
    /* [in] */ ITfCandidateString *pCand2,
    /* [out] */ LONG *plResult);


void __RPC_STUB ITfCandUISortEventSink_CompareItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandUISortEventSink_INTERFACE_DEFINED__ */


#ifndef __ITfCandUIExtButtonEventSink_INTERFACE_DEFINED__
#define __ITfCandUIExtButtonEventSink_INTERFACE_DEFINED__

/* interface ITfCandUIExtButtonEventSink */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUIExtButtonEventSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5c0fb534-1c7e-48c2-908f-008566c1cbb0")
    ITfCandUIExtButtonEventSink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnButtonPushed( 
            /* [in] */ LONG id) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUIExtButtonEventSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUIExtButtonEventSink * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUIExtButtonEventSink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUIExtButtonEventSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnButtonPushed )( 
            ITfCandUIExtButtonEventSink * This,
            /* [in] */ LONG id);
        
        END_INTERFACE
    } ITfCandUIExtButtonEventSinkVtbl;

    interface ITfCandUIExtButtonEventSink
    {
        CONST_VTBL struct ITfCandUIExtButtonEventSinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUIExtButtonEventSink_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUIExtButtonEventSink_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUIExtButtonEventSink_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUIExtButtonEventSink_OnButtonPushed(This,id)	\
    (This)->lpVtbl -> OnButtonPushed(This,id)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandUIExtButtonEventSink_OnButtonPushed_Proxy( 
    ITfCandUIExtButtonEventSink * This,
    /* [in] */ LONG id);


void __RPC_STUB ITfCandUIExtButtonEventSink_OnButtonPushed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandUIExtButtonEventSink_INTERFACE_DEFINED__ */


#ifndef __ITfCandUIFnAutoFilter_INTERFACE_DEFINED__
#define __ITfCandUIFnAutoFilter_INTERFACE_DEFINED__

/* interface ITfCandUIFnAutoFilter */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUIFnAutoFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("499394ab-67c3-48a5-a45c-5080509e0ffb")
    ITfCandUIFnAutoFilter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ ITfCandUIAutoFilterEventSink *pSink) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unadvise( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Enable( 
            /* [in] */ BOOL fEnable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFilteringString( 
            /* [in] */ CANDUIFILTERSTR strtype,
            /* [out] */ BSTR *pbstr) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUIFnAutoFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUIFnAutoFilter * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUIFnAutoFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUIFnAutoFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            ITfCandUIFnAutoFilter * This,
            /* [in] */ ITfCandUIAutoFilterEventSink *pSink);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            ITfCandUIFnAutoFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            ITfCandUIFnAutoFilter * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *GetFilteringString )( 
            ITfCandUIFnAutoFilter * This,
            /* [in] */ CANDUIFILTERSTR strtype,
            /* [out] */ BSTR *pbstr);
        
        END_INTERFACE
    } ITfCandUIFnAutoFilterVtbl;

    interface ITfCandUIFnAutoFilter
    {
        CONST_VTBL struct ITfCandUIFnAutoFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUIFnAutoFilter_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUIFnAutoFilter_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUIFnAutoFilter_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUIFnAutoFilter_Advise(This,pSink)	\
    (This)->lpVtbl -> Advise(This,pSink)

#define ITfCandUIFnAutoFilter_Unadvise(This)	\
    (This)->lpVtbl -> Unadvise(This)

#define ITfCandUIFnAutoFilter_Enable(This,fEnable)	\
    (This)->lpVtbl -> Enable(This,fEnable)

#define ITfCandUIFnAutoFilter_GetFilteringString(This,strtype,pbstr)	\
    (This)->lpVtbl -> GetFilteringString(This,strtype,pbstr)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandUIFnAutoFilter_Advise_Proxy( 
    ITfCandUIFnAutoFilter * This,
    /* [in] */ ITfCandUIAutoFilterEventSink *pSink);


void __RPC_STUB ITfCandUIFnAutoFilter_Advise_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIFnAutoFilter_Unadvise_Proxy( 
    ITfCandUIFnAutoFilter * This);


void __RPC_STUB ITfCandUIFnAutoFilter_Unadvise_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIFnAutoFilter_Enable_Proxy( 
    ITfCandUIFnAutoFilter * This,
    /* [in] */ BOOL fEnable);


void __RPC_STUB ITfCandUIFnAutoFilter_Enable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIFnAutoFilter_GetFilteringString_Proxy( 
    ITfCandUIFnAutoFilter * This,
    /* [in] */ CANDUIFILTERSTR strtype,
    /* [out] */ BSTR *pbstr);


void __RPC_STUB ITfCandUIFnAutoFilter_GetFilteringString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandUIFnAutoFilter_INTERFACE_DEFINED__ */


#ifndef __ITfCandUIFnSort_INTERFACE_DEFINED__
#define __ITfCandUIFnSort_INTERFACE_DEFINED__

/* interface ITfCandUIFnSort */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUIFnSort;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("db7495f7-bc6c-420c-a49d-7470e41b1a41")
    ITfCandUIFnSort : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ ITfCandUISortEventSink *pSink) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unadvise( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SortCandidateList( 
            /* [in] */ BOOL fSort) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsCandidateListSorted( 
            /* [out] */ BOOL *pfSorted) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUIFnSortVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUIFnSort * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUIFnSort * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUIFnSort * This);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            ITfCandUIFnSort * This,
            /* [in] */ ITfCandUISortEventSink *pSink);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            ITfCandUIFnSort * This);
        
        HRESULT ( STDMETHODCALLTYPE *SortCandidateList )( 
            ITfCandUIFnSort * This,
            /* [in] */ BOOL fSort);
        
        HRESULT ( STDMETHODCALLTYPE *IsCandidateListSorted )( 
            ITfCandUIFnSort * This,
            /* [out] */ BOOL *pfSorted);
        
        END_INTERFACE
    } ITfCandUIFnSortVtbl;

    interface ITfCandUIFnSort
    {
        CONST_VTBL struct ITfCandUIFnSortVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUIFnSort_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUIFnSort_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUIFnSort_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUIFnSort_Advise(This,pSink)	\
    (This)->lpVtbl -> Advise(This,pSink)

#define ITfCandUIFnSort_Unadvise(This)	\
    (This)->lpVtbl -> Unadvise(This)

#define ITfCandUIFnSort_SortCandidateList(This,fSort)	\
    (This)->lpVtbl -> SortCandidateList(This,fSort)

#define ITfCandUIFnSort_IsCandidateListSorted(This,pfSorted)	\
    (This)->lpVtbl -> IsCandidateListSorted(This,pfSorted)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandUIFnSort_Advise_Proxy( 
    ITfCandUIFnSort * This,
    /* [in] */ ITfCandUISortEventSink *pSink);


void __RPC_STUB ITfCandUIFnSort_Advise_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIFnSort_Unadvise_Proxy( 
    ITfCandUIFnSort * This);


void __RPC_STUB ITfCandUIFnSort_Unadvise_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIFnSort_SortCandidateList_Proxy( 
    ITfCandUIFnSort * This,
    /* [in] */ BOOL fSort);


void __RPC_STUB ITfCandUIFnSort_SortCandidateList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIFnSort_IsCandidateListSorted_Proxy( 
    ITfCandUIFnSort * This,
    /* [out] */ BOOL *pfSorted);


void __RPC_STUB ITfCandUIFnSort_IsCandidateListSorted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandUIFnSort_INTERFACE_DEFINED__ */


#ifndef __ITfCandUIFnKeyConfig_INTERFACE_DEFINED__
#define __ITfCandUIFnKeyConfig_INTERFACE_DEFINED__

/* interface ITfCandUIFnKeyConfig */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUIFnKeyConfig;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2ccde6d6-6e0a-4231-9496-ce0da8aaa22b")
    ITfCandUIFnKeyConfig : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetKeyTable( 
            /* [in] */ ITfContext *pic,
            /* [in] */ ITfCandUIKeyTable *pCandUIKeyTable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetKeyTable( 
            /* [in] */ ITfContext *pic,
            /* [out] */ ITfCandUIKeyTable **ppCandUIKeyTable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetKeyTable( 
            /* [in] */ ITfContext *pic) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUIFnKeyConfigVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUIFnKeyConfig * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUIFnKeyConfig * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUIFnKeyConfig * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetKeyTable )( 
            ITfCandUIFnKeyConfig * This,
            /* [in] */ ITfContext *pic,
            /* [in] */ ITfCandUIKeyTable *pCandUIKeyTable);
        
        HRESULT ( STDMETHODCALLTYPE *GetKeyTable )( 
            ITfCandUIFnKeyConfig * This,
            /* [in] */ ITfContext *pic,
            /* [out] */ ITfCandUIKeyTable **ppCandUIKeyTable);
        
        HRESULT ( STDMETHODCALLTYPE *ResetKeyTable )( 
            ITfCandUIFnKeyConfig * This,
            /* [in] */ ITfContext *pic);
        
        END_INTERFACE
    } ITfCandUIFnKeyConfigVtbl;

    interface ITfCandUIFnKeyConfig
    {
        CONST_VTBL struct ITfCandUIFnKeyConfigVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUIFnKeyConfig_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUIFnKeyConfig_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUIFnKeyConfig_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUIFnKeyConfig_SetKeyTable(This,pic,pCandUIKeyTable)	\
    (This)->lpVtbl -> SetKeyTable(This,pic,pCandUIKeyTable)

#define ITfCandUIFnKeyConfig_GetKeyTable(This,pic,ppCandUIKeyTable)	\
    (This)->lpVtbl -> GetKeyTable(This,pic,ppCandUIKeyTable)

#define ITfCandUIFnKeyConfig_ResetKeyTable(This,pic)	\
    (This)->lpVtbl -> ResetKeyTable(This,pic)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandUIFnKeyConfig_SetKeyTable_Proxy( 
    ITfCandUIFnKeyConfig * This,
    /* [in] */ ITfContext *pic,
    /* [in] */ ITfCandUIKeyTable *pCandUIKeyTable);


void __RPC_STUB ITfCandUIFnKeyConfig_SetKeyTable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIFnKeyConfig_GetKeyTable_Proxy( 
    ITfCandUIFnKeyConfig * This,
    /* [in] */ ITfContext *pic,
    /* [out] */ ITfCandUIKeyTable **ppCandUIKeyTable);


void __RPC_STUB ITfCandUIFnKeyConfig_GetKeyTable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIFnKeyConfig_ResetKeyTable_Proxy( 
    ITfCandUIFnKeyConfig * This,
    /* [in] */ ITfContext *pic);


void __RPC_STUB ITfCandUIFnKeyConfig_ResetKeyTable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandUIFnKeyConfig_INTERFACE_DEFINED__ */


#ifndef __ITfCandUIFnUIConfig_INTERFACE_DEFINED__
#define __ITfCandUIFnUIConfig_INTERFACE_DEFINED__

/* interface ITfCandUIFnUIConfig */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUIFnUIConfig;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1037334c-8422-4c73-b854-f1a4616169d7")
    ITfCandUIFnUIConfig : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetUIStyle( 
            /* [in] */ ITfContext *pic,
            /* [in] */ CANDUISTYLE style) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUIStyle( 
            /* [in] */ ITfContext *pic,
            /* [out] */ CANDUISTYLE *pstyle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetUIOption( 
            /* [in] */ ITfContext *pic,
            /* [in] */ DWORD dwOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUIOption( 
            /* [in] */ ITfContext *pic,
            /* [out] */ DWORD *pdwOption) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUIFnUIConfigVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUIFnUIConfig * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUIFnUIConfig * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUIFnUIConfig * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetUIStyle )( 
            ITfCandUIFnUIConfig * This,
            /* [in] */ ITfContext *pic,
            /* [in] */ CANDUISTYLE style);
        
        HRESULT ( STDMETHODCALLTYPE *GetUIStyle )( 
            ITfCandUIFnUIConfig * This,
            /* [in] */ ITfContext *pic,
            /* [out] */ CANDUISTYLE *pstyle);
        
        HRESULT ( STDMETHODCALLTYPE *SetUIOption )( 
            ITfCandUIFnUIConfig * This,
            /* [in] */ ITfContext *pic,
            /* [in] */ DWORD dwOption);
        
        HRESULT ( STDMETHODCALLTYPE *GetUIOption )( 
            ITfCandUIFnUIConfig * This,
            /* [in] */ ITfContext *pic,
            /* [out] */ DWORD *pdwOption);
        
        END_INTERFACE
    } ITfCandUIFnUIConfigVtbl;

    interface ITfCandUIFnUIConfig
    {
        CONST_VTBL struct ITfCandUIFnUIConfigVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUIFnUIConfig_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUIFnUIConfig_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUIFnUIConfig_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUIFnUIConfig_SetUIStyle(This,pic,style)	\
    (This)->lpVtbl -> SetUIStyle(This,pic,style)

#define ITfCandUIFnUIConfig_GetUIStyle(This,pic,pstyle)	\
    (This)->lpVtbl -> GetUIStyle(This,pic,pstyle)

#define ITfCandUIFnUIConfig_SetUIOption(This,pic,dwOption)	\
    (This)->lpVtbl -> SetUIOption(This,pic,dwOption)

#define ITfCandUIFnUIConfig_GetUIOption(This,pic,pdwOption)	\
    (This)->lpVtbl -> GetUIOption(This,pic,pdwOption)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandUIFnUIConfig_SetUIStyle_Proxy( 
    ITfCandUIFnUIConfig * This,
    /* [in] */ ITfContext *pic,
    /* [in] */ CANDUISTYLE style);


void __RPC_STUB ITfCandUIFnUIConfig_SetUIStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIFnUIConfig_GetUIStyle_Proxy( 
    ITfCandUIFnUIConfig * This,
    /* [in] */ ITfContext *pic,
    /* [out] */ CANDUISTYLE *pstyle);


void __RPC_STUB ITfCandUIFnUIConfig_GetUIStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIFnUIConfig_SetUIOption_Proxy( 
    ITfCandUIFnUIConfig * This,
    /* [in] */ ITfContext *pic,
    /* [in] */ DWORD dwOption);


void __RPC_STUB ITfCandUIFnUIConfig_SetUIOption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIFnUIConfig_GetUIOption_Proxy( 
    ITfCandUIFnUIConfig * This,
    /* [in] */ ITfContext *pic,
    /* [out] */ DWORD *pdwOption);


void __RPC_STUB ITfCandUIFnUIConfig_GetUIOption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandUIFnUIConfig_INTERFACE_DEFINED__ */


#ifndef __ITfCandUIFnExtension_INTERFACE_DEFINED__
#define __ITfCandUIFnExtension_INTERFACE_DEFINED__

/* interface ITfCandUIFnExtension */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUIFnExtension;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c441b720-c7a0-4823-a257-8c3cd7bf14ba")
    ITfCandUIFnExtension : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddExtObject( 
            /* [in] */ LONG id,
            /* [in] */ REFIID riid,
            /* [out] */ IUnknown **ppunk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetExtObject( 
            /* [in] */ LONG id,
            /* [in] */ REFIID riid,
            /* [out] */ IUnknown **ppunk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteExtObject( 
            /* [in] */ LONG id) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUIFnExtensionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUIFnExtension * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUIFnExtension * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUIFnExtension * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddExtObject )( 
            ITfCandUIFnExtension * This,
            /* [in] */ LONG id,
            /* [in] */ REFIID riid,
            /* [out] */ IUnknown **ppunk);
        
        HRESULT ( STDMETHODCALLTYPE *GetExtObject )( 
            ITfCandUIFnExtension * This,
            /* [in] */ LONG id,
            /* [in] */ REFIID riid,
            /* [out] */ IUnknown **ppunk);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteExtObject )( 
            ITfCandUIFnExtension * This,
            /* [in] */ LONG id);
        
        END_INTERFACE
    } ITfCandUIFnExtensionVtbl;

    interface ITfCandUIFnExtension
    {
        CONST_VTBL struct ITfCandUIFnExtensionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUIFnExtension_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUIFnExtension_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUIFnExtension_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUIFnExtension_AddExtObject(This,id,riid,ppunk)	\
    (This)->lpVtbl -> AddExtObject(This,id,riid,ppunk)

#define ITfCandUIFnExtension_GetExtObject(This,id,riid,ppunk)	\
    (This)->lpVtbl -> GetExtObject(This,id,riid,ppunk)

#define ITfCandUIFnExtension_DeleteExtObject(This,id)	\
    (This)->lpVtbl -> DeleteExtObject(This,id)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandUIFnExtension_AddExtObject_Proxy( 
    ITfCandUIFnExtension * This,
    /* [in] */ LONG id,
    /* [in] */ REFIID riid,
    /* [out] */ IUnknown **ppunk);


void __RPC_STUB ITfCandUIFnExtension_AddExtObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIFnExtension_GetExtObject_Proxy( 
    ITfCandUIFnExtension * This,
    /* [in] */ LONG id,
    /* [in] */ REFIID riid,
    /* [out] */ IUnknown **ppunk);


void __RPC_STUB ITfCandUIFnExtension_GetExtObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIFnExtension_DeleteExtObject_Proxy( 
    ITfCandUIFnExtension * This,
    /* [in] */ LONG id);


void __RPC_STUB ITfCandUIFnExtension_DeleteExtObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandUIFnExtension_INTERFACE_DEFINED__ */


#ifndef __ITfCandUIObject_INTERFACE_DEFINED__
#define __ITfCandUIObject_INTERFACE_DEFINED__

/* interface ITfCandUIObject */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUIObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c45d5b93-f651-41f0-ac45-13252f35bfdc")
    ITfCandUIObject : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Enable( 
            /* [in] */ BOOL fEnable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsEnabled( 
            /* [out] */ BOOL *pfEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Show( 
            /* [in] */ BOOL fShow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsVisible( 
            /* [out] */ BOOL *pfVisible) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPosition( 
            /* [in] */ POINT *pptPos) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPosition( 
            /* [out] */ POINT *pptPos) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSize( 
            /* [in] */ SIZE *psize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSize( 
            /* [out] */ SIZE *psize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFont( 
            /* [in] */ LOGFONTW *pLogFont) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFont( 
            /* [out] */ LOGFONTW *pLogFont) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetText( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetText( 
            /* [out] */ BSTR *pbtr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetToolTipString( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetToolTipString( 
            /* [out] */ BSTR *pbtr) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUIObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUIObject * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUIObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUIObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            ITfCandUIObject * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )( 
            ITfCandUIObject * This,
            /* [out] */ BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfCandUIObject * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsVisible )( 
            ITfCandUIObject * This,
            /* [out] */ BOOL *pfVisible);
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            ITfCandUIObject * This,
            /* [in] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            ITfCandUIObject * This,
            /* [out] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ITfCandUIObject * This,
            /* [in] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            ITfCandUIObject * This,
            /* [out] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            ITfCandUIObject * This,
            /* [in] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *GetFont )( 
            ITfCandUIObject * This,
            /* [out] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *SetText )( 
            ITfCandUIObject * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ITfCandUIObject * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *SetToolTipString )( 
            ITfCandUIObject * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetToolTipString )( 
            ITfCandUIObject * This,
            /* [out] */ BSTR *pbtr);
        
        END_INTERFACE
    } ITfCandUIObjectVtbl;

    interface ITfCandUIObject
    {
        CONST_VTBL struct ITfCandUIObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUIObject_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUIObject_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUIObject_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUIObject_Enable(This,fEnable)	\
    (This)->lpVtbl -> Enable(This,fEnable)

#define ITfCandUIObject_IsEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> IsEnabled(This,pfEnabled)

#define ITfCandUIObject_Show(This,fShow)	\
    (This)->lpVtbl -> Show(This,fShow)

#define ITfCandUIObject_IsVisible(This,pfVisible)	\
    (This)->lpVtbl -> IsVisible(This,pfVisible)

#define ITfCandUIObject_SetPosition(This,pptPos)	\
    (This)->lpVtbl -> SetPosition(This,pptPos)

#define ITfCandUIObject_GetPosition(This,pptPos)	\
    (This)->lpVtbl -> GetPosition(This,pptPos)

#define ITfCandUIObject_SetSize(This,psize)	\
    (This)->lpVtbl -> SetSize(This,psize)

#define ITfCandUIObject_GetSize(This,psize)	\
    (This)->lpVtbl -> GetSize(This,psize)

#define ITfCandUIObject_SetFont(This,pLogFont)	\
    (This)->lpVtbl -> SetFont(This,pLogFont)

#define ITfCandUIObject_GetFont(This,pLogFont)	\
    (This)->lpVtbl -> GetFont(This,pLogFont)

#define ITfCandUIObject_SetText(This,bstr)	\
    (This)->lpVtbl -> SetText(This,bstr)

#define ITfCandUIObject_GetText(This,pbtr)	\
    (This)->lpVtbl -> GetText(This,pbtr)

#define ITfCandUIObject_SetToolTipString(This,bstr)	\
    (This)->lpVtbl -> SetToolTipString(This,bstr)

#define ITfCandUIObject_GetToolTipString(This,pbtr)	\
    (This)->lpVtbl -> GetToolTipString(This,pbtr)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandUIObject_Enable_Proxy( 
    ITfCandUIObject * This,
    /* [in] */ BOOL fEnable);


void __RPC_STUB ITfCandUIObject_Enable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIObject_IsEnabled_Proxy( 
    ITfCandUIObject * This,
    /* [out] */ BOOL *pfEnabled);


void __RPC_STUB ITfCandUIObject_IsEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIObject_Show_Proxy( 
    ITfCandUIObject * This,
    /* [in] */ BOOL fShow);


void __RPC_STUB ITfCandUIObject_Show_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIObject_IsVisible_Proxy( 
    ITfCandUIObject * This,
    /* [out] */ BOOL *pfVisible);


void __RPC_STUB ITfCandUIObject_IsVisible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIObject_SetPosition_Proxy( 
    ITfCandUIObject * This,
    /* [in] */ POINT *pptPos);


void __RPC_STUB ITfCandUIObject_SetPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIObject_GetPosition_Proxy( 
    ITfCandUIObject * This,
    /* [out] */ POINT *pptPos);


void __RPC_STUB ITfCandUIObject_GetPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIObject_SetSize_Proxy( 
    ITfCandUIObject * This,
    /* [in] */ SIZE *psize);


void __RPC_STUB ITfCandUIObject_SetSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIObject_GetSize_Proxy( 
    ITfCandUIObject * This,
    /* [out] */ SIZE *psize);


void __RPC_STUB ITfCandUIObject_GetSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIObject_SetFont_Proxy( 
    ITfCandUIObject * This,
    /* [in] */ LOGFONTW *pLogFont);


void __RPC_STUB ITfCandUIObject_SetFont_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIObject_GetFont_Proxy( 
    ITfCandUIObject * This,
    /* [out] */ LOGFONTW *pLogFont);


void __RPC_STUB ITfCandUIObject_GetFont_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIObject_SetText_Proxy( 
    ITfCandUIObject * This,
    /* [in] */ BSTR bstr);


void __RPC_STUB ITfCandUIObject_SetText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIObject_GetText_Proxy( 
    ITfCandUIObject * This,
    /* [out] */ BSTR *pbtr);


void __RPC_STUB ITfCandUIObject_GetText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIObject_SetToolTipString_Proxy( 
    ITfCandUIObject * This,
    /* [in] */ BSTR bstr);


void __RPC_STUB ITfCandUIObject_SetToolTipString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIObject_GetToolTipString_Proxy( 
    ITfCandUIObject * This,
    /* [out] */ BSTR *pbtr);


void __RPC_STUB ITfCandUIObject_GetToolTipString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandUIObject_INTERFACE_DEFINED__ */


#ifndef __ITfCandUICandWindow_INTERFACE_DEFINED__
#define __ITfCandUICandWindow_INTERFACE_DEFINED__

/* interface ITfCandUICandWindow */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUICandWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("483324b6-c1a8-4a48-a543-c4f26fd32a29")
    ITfCandUICandWindow : public ITfCandUIObject
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetWindow( 
            /* [out] */ HWND *phWnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetUIDirection( 
            /* [in] */ CANDUIUIDIRECTION UIDir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUIDirection( 
            /* [out] */ CANDUIUIDIRECTION *pUIDir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnableAutoMove( 
            /* [in] */ BOOL fEnable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsAutoMoveEnabled( 
            /* [out] */ BOOL *pfEnabled) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUICandWindowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUICandWindow * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUICandWindow * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUICandWindow * This);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            ITfCandUICandWindow * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )( 
            ITfCandUICandWindow * This,
            /* [out] */ BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfCandUICandWindow * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsVisible )( 
            ITfCandUICandWindow * This,
            /* [out] */ BOOL *pfVisible);
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            ITfCandUICandWindow * This,
            /* [in] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            ITfCandUICandWindow * This,
            /* [out] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ITfCandUICandWindow * This,
            /* [in] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            ITfCandUICandWindow * This,
            /* [out] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            ITfCandUICandWindow * This,
            /* [in] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *GetFont )( 
            ITfCandUICandWindow * This,
            /* [out] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *SetText )( 
            ITfCandUICandWindow * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ITfCandUICandWindow * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *SetToolTipString )( 
            ITfCandUICandWindow * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetToolTipString )( 
            ITfCandUICandWindow * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *GetWindow )( 
            ITfCandUICandWindow * This,
            /* [out] */ HWND *phWnd);
        
        HRESULT ( STDMETHODCALLTYPE *SetUIDirection )( 
            ITfCandUICandWindow * This,
            /* [in] */ CANDUIUIDIRECTION UIDir);
        
        HRESULT ( STDMETHODCALLTYPE *GetUIDirection )( 
            ITfCandUICandWindow * This,
            /* [out] */ CANDUIUIDIRECTION *pUIDir);
        
        HRESULT ( STDMETHODCALLTYPE *EnableAutoMove )( 
            ITfCandUICandWindow * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *IsAutoMoveEnabled )( 
            ITfCandUICandWindow * This,
            /* [out] */ BOOL *pfEnabled);
        
        END_INTERFACE
    } ITfCandUICandWindowVtbl;

    interface ITfCandUICandWindow
    {
        CONST_VTBL struct ITfCandUICandWindowVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUICandWindow_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUICandWindow_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUICandWindow_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUICandWindow_Enable(This,fEnable)	\
    (This)->lpVtbl -> Enable(This,fEnable)

#define ITfCandUICandWindow_IsEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> IsEnabled(This,pfEnabled)

#define ITfCandUICandWindow_Show(This,fShow)	\
    (This)->lpVtbl -> Show(This,fShow)

#define ITfCandUICandWindow_IsVisible(This,pfVisible)	\
    (This)->lpVtbl -> IsVisible(This,pfVisible)

#define ITfCandUICandWindow_SetPosition(This,pptPos)	\
    (This)->lpVtbl -> SetPosition(This,pptPos)

#define ITfCandUICandWindow_GetPosition(This,pptPos)	\
    (This)->lpVtbl -> GetPosition(This,pptPos)

#define ITfCandUICandWindow_SetSize(This,psize)	\
    (This)->lpVtbl -> SetSize(This,psize)

#define ITfCandUICandWindow_GetSize(This,psize)	\
    (This)->lpVtbl -> GetSize(This,psize)

#define ITfCandUICandWindow_SetFont(This,pLogFont)	\
    (This)->lpVtbl -> SetFont(This,pLogFont)

#define ITfCandUICandWindow_GetFont(This,pLogFont)	\
    (This)->lpVtbl -> GetFont(This,pLogFont)

#define ITfCandUICandWindow_SetText(This,bstr)	\
    (This)->lpVtbl -> SetText(This,bstr)

#define ITfCandUICandWindow_GetText(This,pbtr)	\
    (This)->lpVtbl -> GetText(This,pbtr)

#define ITfCandUICandWindow_SetToolTipString(This,bstr)	\
    (This)->lpVtbl -> SetToolTipString(This,bstr)

#define ITfCandUICandWindow_GetToolTipString(This,pbtr)	\
    (This)->lpVtbl -> GetToolTipString(This,pbtr)


#define ITfCandUICandWindow_GetWindow(This,phWnd)	\
    (This)->lpVtbl -> GetWindow(This,phWnd)

#define ITfCandUICandWindow_SetUIDirection(This,UIDir)	\
    (This)->lpVtbl -> SetUIDirection(This,UIDir)

#define ITfCandUICandWindow_GetUIDirection(This,pUIDir)	\
    (This)->lpVtbl -> GetUIDirection(This,pUIDir)

#define ITfCandUICandWindow_EnableAutoMove(This,fEnable)	\
    (This)->lpVtbl -> EnableAutoMove(This,fEnable)

#define ITfCandUICandWindow_IsAutoMoveEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> IsAutoMoveEnabled(This,pfEnabled)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandUICandWindow_GetWindow_Proxy( 
    ITfCandUICandWindow * This,
    /* [out] */ HWND *phWnd);


void __RPC_STUB ITfCandUICandWindow_GetWindow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUICandWindow_SetUIDirection_Proxy( 
    ITfCandUICandWindow * This,
    /* [in] */ CANDUIUIDIRECTION UIDir);


void __RPC_STUB ITfCandUICandWindow_SetUIDirection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUICandWindow_GetUIDirection_Proxy( 
    ITfCandUICandWindow * This,
    /* [out] */ CANDUIUIDIRECTION *pUIDir);


void __RPC_STUB ITfCandUICandWindow_GetUIDirection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUICandWindow_EnableAutoMove_Proxy( 
    ITfCandUICandWindow * This,
    /* [in] */ BOOL fEnable);


void __RPC_STUB ITfCandUICandWindow_EnableAutoMove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUICandWindow_IsAutoMoveEnabled_Proxy( 
    ITfCandUICandWindow * This,
    /* [out] */ BOOL *pfEnabled);


void __RPC_STUB ITfCandUICandWindow_IsAutoMoveEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandUICandWindow_INTERFACE_DEFINED__ */


#ifndef __ITfCandUIPopupCommentWindow_INTERFACE_DEFINED__
#define __ITfCandUIPopupCommentWindow_INTERFACE_DEFINED__

/* interface ITfCandUIPopupCommentWindow */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUIPopupCommentWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6ec789d1-7e81-4ecf-b726-f944c69e9987")
    ITfCandUIPopupCommentWindow : public ITfCandUIObject
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetWindow( 
            /* [out] */ HWND *phWnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDelayTime( 
            /* [in] */ LONG lTime) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDelayTime( 
            /* [in] */ LONG *plTime) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnableAutoMove( 
            /* [in] */ BOOL fEnable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsAutoMoveEnabled( 
            /* [out] */ BOOL *pfEnabled) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUIPopupCommentWindowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUIPopupCommentWindow * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUIPopupCommentWindow * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUIPopupCommentWindow * This);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            ITfCandUIPopupCommentWindow * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )( 
            ITfCandUIPopupCommentWindow * This,
            /* [out] */ BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfCandUIPopupCommentWindow * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsVisible )( 
            ITfCandUIPopupCommentWindow * This,
            /* [out] */ BOOL *pfVisible);
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            ITfCandUIPopupCommentWindow * This,
            /* [in] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            ITfCandUIPopupCommentWindow * This,
            /* [out] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ITfCandUIPopupCommentWindow * This,
            /* [in] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            ITfCandUIPopupCommentWindow * This,
            /* [out] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            ITfCandUIPopupCommentWindow * This,
            /* [in] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *GetFont )( 
            ITfCandUIPopupCommentWindow * This,
            /* [out] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *SetText )( 
            ITfCandUIPopupCommentWindow * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ITfCandUIPopupCommentWindow * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *SetToolTipString )( 
            ITfCandUIPopupCommentWindow * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetToolTipString )( 
            ITfCandUIPopupCommentWindow * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *GetWindow )( 
            ITfCandUIPopupCommentWindow * This,
            /* [out] */ HWND *phWnd);
        
        HRESULT ( STDMETHODCALLTYPE *SetDelayTime )( 
            ITfCandUIPopupCommentWindow * This,
            /* [in] */ LONG lTime);
        
        HRESULT ( STDMETHODCALLTYPE *GetDelayTime )( 
            ITfCandUIPopupCommentWindow * This,
            /* [in] */ LONG *plTime);
        
        HRESULT ( STDMETHODCALLTYPE *EnableAutoMove )( 
            ITfCandUIPopupCommentWindow * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *IsAutoMoveEnabled )( 
            ITfCandUIPopupCommentWindow * This,
            /* [out] */ BOOL *pfEnabled);
        
        END_INTERFACE
    } ITfCandUIPopupCommentWindowVtbl;

    interface ITfCandUIPopupCommentWindow
    {
        CONST_VTBL struct ITfCandUIPopupCommentWindowVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUIPopupCommentWindow_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUIPopupCommentWindow_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUIPopupCommentWindow_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUIPopupCommentWindow_Enable(This,fEnable)	\
    (This)->lpVtbl -> Enable(This,fEnable)

#define ITfCandUIPopupCommentWindow_IsEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> IsEnabled(This,pfEnabled)

#define ITfCandUIPopupCommentWindow_Show(This,fShow)	\
    (This)->lpVtbl -> Show(This,fShow)

#define ITfCandUIPopupCommentWindow_IsVisible(This,pfVisible)	\
    (This)->lpVtbl -> IsVisible(This,pfVisible)

#define ITfCandUIPopupCommentWindow_SetPosition(This,pptPos)	\
    (This)->lpVtbl -> SetPosition(This,pptPos)

#define ITfCandUIPopupCommentWindow_GetPosition(This,pptPos)	\
    (This)->lpVtbl -> GetPosition(This,pptPos)

#define ITfCandUIPopupCommentWindow_SetSize(This,psize)	\
    (This)->lpVtbl -> SetSize(This,psize)

#define ITfCandUIPopupCommentWindow_GetSize(This,psize)	\
    (This)->lpVtbl -> GetSize(This,psize)

#define ITfCandUIPopupCommentWindow_SetFont(This,pLogFont)	\
    (This)->lpVtbl -> SetFont(This,pLogFont)

#define ITfCandUIPopupCommentWindow_GetFont(This,pLogFont)	\
    (This)->lpVtbl -> GetFont(This,pLogFont)

#define ITfCandUIPopupCommentWindow_SetText(This,bstr)	\
    (This)->lpVtbl -> SetText(This,bstr)

#define ITfCandUIPopupCommentWindow_GetText(This,pbtr)	\
    (This)->lpVtbl -> GetText(This,pbtr)

#define ITfCandUIPopupCommentWindow_SetToolTipString(This,bstr)	\
    (This)->lpVtbl -> SetToolTipString(This,bstr)

#define ITfCandUIPopupCommentWindow_GetToolTipString(This,pbtr)	\
    (This)->lpVtbl -> GetToolTipString(This,pbtr)


#define ITfCandUIPopupCommentWindow_GetWindow(This,phWnd)	\
    (This)->lpVtbl -> GetWindow(This,phWnd)

#define ITfCandUIPopupCommentWindow_SetDelayTime(This,lTime)	\
    (This)->lpVtbl -> SetDelayTime(This,lTime)

#define ITfCandUIPopupCommentWindow_GetDelayTime(This,plTime)	\
    (This)->lpVtbl -> GetDelayTime(This,plTime)

#define ITfCandUIPopupCommentWindow_EnableAutoMove(This,fEnable)	\
    (This)->lpVtbl -> EnableAutoMove(This,fEnable)

#define ITfCandUIPopupCommentWindow_IsAutoMoveEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> IsAutoMoveEnabled(This,pfEnabled)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandUIPopupCommentWindow_GetWindow_Proxy( 
    ITfCandUIPopupCommentWindow * This,
    /* [out] */ HWND *phWnd);


void __RPC_STUB ITfCandUIPopupCommentWindow_GetWindow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIPopupCommentWindow_SetDelayTime_Proxy( 
    ITfCandUIPopupCommentWindow * This,
    /* [in] */ LONG lTime);


void __RPC_STUB ITfCandUIPopupCommentWindow_SetDelayTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIPopupCommentWindow_GetDelayTime_Proxy( 
    ITfCandUIPopupCommentWindow * This,
    /* [in] */ LONG *plTime);


void __RPC_STUB ITfCandUIPopupCommentWindow_GetDelayTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIPopupCommentWindow_EnableAutoMove_Proxy( 
    ITfCandUIPopupCommentWindow * This,
    /* [in] */ BOOL fEnable);


void __RPC_STUB ITfCandUIPopupCommentWindow_EnableAutoMove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIPopupCommentWindow_IsAutoMoveEnabled_Proxy( 
    ITfCandUIPopupCommentWindow * This,
    /* [out] */ BOOL *pfEnabled);


void __RPC_STUB ITfCandUIPopupCommentWindow_IsAutoMoveEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandUIPopupCommentWindow_INTERFACE_DEFINED__ */


#ifndef __ITfCandUICandTipWindow_INTERFACE_DEFINED__
#define __ITfCandUICandTipWindow_INTERFACE_DEFINED__

/* interface ITfCandUICandTipWindow */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUICandTipWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2650d06e-6ee7-40bb-989f-73ee917e00ce")
    ITfCandUICandTipWindow : public ITfCandUIObject
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetWindow( 
            /* [out] */ HWND *phWnd) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUICandTipWindowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUICandTipWindow * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUICandTipWindow * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUICandTipWindow * This);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            ITfCandUICandTipWindow * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )( 
            ITfCandUICandTipWindow * This,
            /* [out] */ BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfCandUICandTipWindow * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsVisible )( 
            ITfCandUICandTipWindow * This,
            /* [out] */ BOOL *pfVisible);
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            ITfCandUICandTipWindow * This,
            /* [in] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            ITfCandUICandTipWindow * This,
            /* [out] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ITfCandUICandTipWindow * This,
            /* [in] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            ITfCandUICandTipWindow * This,
            /* [out] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            ITfCandUICandTipWindow * This,
            /* [in] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *GetFont )( 
            ITfCandUICandTipWindow * This,
            /* [out] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *SetText )( 
            ITfCandUICandTipWindow * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ITfCandUICandTipWindow * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *SetToolTipString )( 
            ITfCandUICandTipWindow * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetToolTipString )( 
            ITfCandUICandTipWindow * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *GetWindow )( 
            ITfCandUICandTipWindow * This,
            /* [out] */ HWND *phWnd);
        
        END_INTERFACE
    } ITfCandUICandTipWindowVtbl;

    interface ITfCandUICandTipWindow
    {
        CONST_VTBL struct ITfCandUICandTipWindowVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUICandTipWindow_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUICandTipWindow_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUICandTipWindow_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUICandTipWindow_Enable(This,fEnable)	\
    (This)->lpVtbl -> Enable(This,fEnable)

#define ITfCandUICandTipWindow_IsEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> IsEnabled(This,pfEnabled)

#define ITfCandUICandTipWindow_Show(This,fShow)	\
    (This)->lpVtbl -> Show(This,fShow)

#define ITfCandUICandTipWindow_IsVisible(This,pfVisible)	\
    (This)->lpVtbl -> IsVisible(This,pfVisible)

#define ITfCandUICandTipWindow_SetPosition(This,pptPos)	\
    (This)->lpVtbl -> SetPosition(This,pptPos)

#define ITfCandUICandTipWindow_GetPosition(This,pptPos)	\
    (This)->lpVtbl -> GetPosition(This,pptPos)

#define ITfCandUICandTipWindow_SetSize(This,psize)	\
    (This)->lpVtbl -> SetSize(This,psize)

#define ITfCandUICandTipWindow_GetSize(This,psize)	\
    (This)->lpVtbl -> GetSize(This,psize)

#define ITfCandUICandTipWindow_SetFont(This,pLogFont)	\
    (This)->lpVtbl -> SetFont(This,pLogFont)

#define ITfCandUICandTipWindow_GetFont(This,pLogFont)	\
    (This)->lpVtbl -> GetFont(This,pLogFont)

#define ITfCandUICandTipWindow_SetText(This,bstr)	\
    (This)->lpVtbl -> SetText(This,bstr)

#define ITfCandUICandTipWindow_GetText(This,pbtr)	\
    (This)->lpVtbl -> GetText(This,pbtr)

#define ITfCandUICandTipWindow_SetToolTipString(This,bstr)	\
    (This)->lpVtbl -> SetToolTipString(This,bstr)

#define ITfCandUICandTipWindow_GetToolTipString(This,pbtr)	\
    (This)->lpVtbl -> GetToolTipString(This,pbtr)


#define ITfCandUICandTipWindow_GetWindow(This,phWnd)	\
    (This)->lpVtbl -> GetWindow(This,phWnd)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandUICandTipWindow_GetWindow_Proxy( 
    ITfCandUICandTipWindow * This,
    /* [out] */ HWND *phWnd);


void __RPC_STUB ITfCandUICandTipWindow_GetWindow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandUICandTipWindow_INTERFACE_DEFINED__ */


#ifndef __ITfCandUICandListBox_INTERFACE_DEFINED__
#define __ITfCandUICandListBox_INTERFACE_DEFINED__

/* interface ITfCandUICandListBox */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUICandListBox;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("81defe18-4363-4e9f-a0e4-205bf3d2159e")
    ITfCandUICandListBox : public ITfCandUIObject
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetHeight( 
            /* [in] */ LONG lLines) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHeight( 
            /* [out] */ LONG *plLines) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCandidateStringRect( 
            /* [in] */ ULONG nIndex,
            /* [out] */ RECT *prc) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUICandListBoxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUICandListBox * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUICandListBox * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUICandListBox * This);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            ITfCandUICandListBox * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )( 
            ITfCandUICandListBox * This,
            /* [out] */ BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfCandUICandListBox * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsVisible )( 
            ITfCandUICandListBox * This,
            /* [out] */ BOOL *pfVisible);
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            ITfCandUICandListBox * This,
            /* [in] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            ITfCandUICandListBox * This,
            /* [out] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ITfCandUICandListBox * This,
            /* [in] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            ITfCandUICandListBox * This,
            /* [out] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            ITfCandUICandListBox * This,
            /* [in] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *GetFont )( 
            ITfCandUICandListBox * This,
            /* [out] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *SetText )( 
            ITfCandUICandListBox * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ITfCandUICandListBox * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *SetToolTipString )( 
            ITfCandUICandListBox * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetToolTipString )( 
            ITfCandUICandListBox * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *SetHeight )( 
            ITfCandUICandListBox * This,
            /* [in] */ LONG lLines);
        
        HRESULT ( STDMETHODCALLTYPE *GetHeight )( 
            ITfCandUICandListBox * This,
            /* [out] */ LONG *plLines);
        
        HRESULT ( STDMETHODCALLTYPE *GetCandidateStringRect )( 
            ITfCandUICandListBox * This,
            /* [in] */ ULONG nIndex,
            /* [out] */ RECT *prc);
        
        END_INTERFACE
    } ITfCandUICandListBoxVtbl;

    interface ITfCandUICandListBox
    {
        CONST_VTBL struct ITfCandUICandListBoxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUICandListBox_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUICandListBox_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUICandListBox_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUICandListBox_Enable(This,fEnable)	\
    (This)->lpVtbl -> Enable(This,fEnable)

#define ITfCandUICandListBox_IsEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> IsEnabled(This,pfEnabled)

#define ITfCandUICandListBox_Show(This,fShow)	\
    (This)->lpVtbl -> Show(This,fShow)

#define ITfCandUICandListBox_IsVisible(This,pfVisible)	\
    (This)->lpVtbl -> IsVisible(This,pfVisible)

#define ITfCandUICandListBox_SetPosition(This,pptPos)	\
    (This)->lpVtbl -> SetPosition(This,pptPos)

#define ITfCandUICandListBox_GetPosition(This,pptPos)	\
    (This)->lpVtbl -> GetPosition(This,pptPos)

#define ITfCandUICandListBox_SetSize(This,psize)	\
    (This)->lpVtbl -> SetSize(This,psize)

#define ITfCandUICandListBox_GetSize(This,psize)	\
    (This)->lpVtbl -> GetSize(This,psize)

#define ITfCandUICandListBox_SetFont(This,pLogFont)	\
    (This)->lpVtbl -> SetFont(This,pLogFont)

#define ITfCandUICandListBox_GetFont(This,pLogFont)	\
    (This)->lpVtbl -> GetFont(This,pLogFont)

#define ITfCandUICandListBox_SetText(This,bstr)	\
    (This)->lpVtbl -> SetText(This,bstr)

#define ITfCandUICandListBox_GetText(This,pbtr)	\
    (This)->lpVtbl -> GetText(This,pbtr)

#define ITfCandUICandListBox_SetToolTipString(This,bstr)	\
    (This)->lpVtbl -> SetToolTipString(This,bstr)

#define ITfCandUICandListBox_GetToolTipString(This,pbtr)	\
    (This)->lpVtbl -> GetToolTipString(This,pbtr)


#define ITfCandUICandListBox_SetHeight(This,lLines)	\
    (This)->lpVtbl -> SetHeight(This,lLines)

#define ITfCandUICandListBox_GetHeight(This,plLines)	\
    (This)->lpVtbl -> GetHeight(This,plLines)

#define ITfCandUICandListBox_GetCandidateStringRect(This,nIndex,prc)	\
    (This)->lpVtbl -> GetCandidateStringRect(This,nIndex,prc)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandUICandListBox_SetHeight_Proxy( 
    ITfCandUICandListBox * This,
    /* [in] */ LONG lLines);


void __RPC_STUB ITfCandUICandListBox_SetHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUICandListBox_GetHeight_Proxy( 
    ITfCandUICandListBox * This,
    /* [out] */ LONG *plLines);


void __RPC_STUB ITfCandUICandListBox_GetHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUICandListBox_GetCandidateStringRect_Proxy( 
    ITfCandUICandListBox * This,
    /* [in] */ ULONG nIndex,
    /* [out] */ RECT *prc);


void __RPC_STUB ITfCandUICandListBox_GetCandidateStringRect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandUICandListBox_INTERFACE_DEFINED__ */


#ifndef __ITfCandUIMenuButton_INTERFACE_DEFINED__
#define __ITfCandUIMenuButton_INTERFACE_DEFINED__

/* interface ITfCandUIMenuButton */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUIMenuButton;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("77d031f3-87e5-458d-999c-237d9ae4d897")
    ITfCandUIMenuButton : public ITfCandUIObject
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ ITfCandUIMenuEventSink *pSink) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unadvise( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUIMenuButtonVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUIMenuButton * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUIMenuButton * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUIMenuButton * This);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            ITfCandUIMenuButton * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )( 
            ITfCandUIMenuButton * This,
            /* [out] */ BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfCandUIMenuButton * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsVisible )( 
            ITfCandUIMenuButton * This,
            /* [out] */ BOOL *pfVisible);
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            ITfCandUIMenuButton * This,
            /* [in] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            ITfCandUIMenuButton * This,
            /* [out] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ITfCandUIMenuButton * This,
            /* [in] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            ITfCandUIMenuButton * This,
            /* [out] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            ITfCandUIMenuButton * This,
            /* [in] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *GetFont )( 
            ITfCandUIMenuButton * This,
            /* [out] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *SetText )( 
            ITfCandUIMenuButton * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ITfCandUIMenuButton * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *SetToolTipString )( 
            ITfCandUIMenuButton * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetToolTipString )( 
            ITfCandUIMenuButton * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            ITfCandUIMenuButton * This,
            /* [in] */ ITfCandUIMenuEventSink *pSink);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            ITfCandUIMenuButton * This);
        
        END_INTERFACE
    } ITfCandUIMenuButtonVtbl;

    interface ITfCandUIMenuButton
    {
        CONST_VTBL struct ITfCandUIMenuButtonVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUIMenuButton_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUIMenuButton_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUIMenuButton_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUIMenuButton_Enable(This,fEnable)	\
    (This)->lpVtbl -> Enable(This,fEnable)

#define ITfCandUIMenuButton_IsEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> IsEnabled(This,pfEnabled)

#define ITfCandUIMenuButton_Show(This,fShow)	\
    (This)->lpVtbl -> Show(This,fShow)

#define ITfCandUIMenuButton_IsVisible(This,pfVisible)	\
    (This)->lpVtbl -> IsVisible(This,pfVisible)

#define ITfCandUIMenuButton_SetPosition(This,pptPos)	\
    (This)->lpVtbl -> SetPosition(This,pptPos)

#define ITfCandUIMenuButton_GetPosition(This,pptPos)	\
    (This)->lpVtbl -> GetPosition(This,pptPos)

#define ITfCandUIMenuButton_SetSize(This,psize)	\
    (This)->lpVtbl -> SetSize(This,psize)

#define ITfCandUIMenuButton_GetSize(This,psize)	\
    (This)->lpVtbl -> GetSize(This,psize)

#define ITfCandUIMenuButton_SetFont(This,pLogFont)	\
    (This)->lpVtbl -> SetFont(This,pLogFont)

#define ITfCandUIMenuButton_GetFont(This,pLogFont)	\
    (This)->lpVtbl -> GetFont(This,pLogFont)

#define ITfCandUIMenuButton_SetText(This,bstr)	\
    (This)->lpVtbl -> SetText(This,bstr)

#define ITfCandUIMenuButton_GetText(This,pbtr)	\
    (This)->lpVtbl -> GetText(This,pbtr)

#define ITfCandUIMenuButton_SetToolTipString(This,bstr)	\
    (This)->lpVtbl -> SetToolTipString(This,bstr)

#define ITfCandUIMenuButton_GetToolTipString(This,pbtr)	\
    (This)->lpVtbl -> GetToolTipString(This,pbtr)


#define ITfCandUIMenuButton_Advise(This,pSink)	\
    (This)->lpVtbl -> Advise(This,pSink)

#define ITfCandUIMenuButton_Unadvise(This)	\
    (This)->lpVtbl -> Unadvise(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandUIMenuButton_Advise_Proxy( 
    ITfCandUIMenuButton * This,
    /* [in] */ ITfCandUIMenuEventSink *pSink);


void __RPC_STUB ITfCandUIMenuButton_Advise_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIMenuButton_Unadvise_Proxy( 
    ITfCandUIMenuButton * This);


void __RPC_STUB ITfCandUIMenuButton_Unadvise_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandUIMenuButton_INTERFACE_DEFINED__ */


#ifndef __ITfCandUICaption_INTERFACE_DEFINED__
#define __ITfCandUICaption_INTERFACE_DEFINED__

/* interface ITfCandUICaption */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUICaption;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7243c0cd-474a-4b71-99a7-f88428e04a57")
    ITfCandUICaption : public ITfCandUIObject
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUICaptionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUICaption * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUICaption * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUICaption * This);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            ITfCandUICaption * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )( 
            ITfCandUICaption * This,
            /* [out] */ BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfCandUICaption * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsVisible )( 
            ITfCandUICaption * This,
            /* [out] */ BOOL *pfVisible);
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            ITfCandUICaption * This,
            /* [in] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            ITfCandUICaption * This,
            /* [out] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ITfCandUICaption * This,
            /* [in] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            ITfCandUICaption * This,
            /* [out] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            ITfCandUICaption * This,
            /* [in] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *GetFont )( 
            ITfCandUICaption * This,
            /* [out] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *SetText )( 
            ITfCandUICaption * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ITfCandUICaption * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *SetToolTipString )( 
            ITfCandUICaption * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetToolTipString )( 
            ITfCandUICaption * This,
            /* [out] */ BSTR *pbtr);
        
        END_INTERFACE
    } ITfCandUICaptionVtbl;

    interface ITfCandUICaption
    {
        CONST_VTBL struct ITfCandUICaptionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUICaption_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUICaption_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUICaption_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUICaption_Enable(This,fEnable)	\
    (This)->lpVtbl -> Enable(This,fEnable)

#define ITfCandUICaption_IsEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> IsEnabled(This,pfEnabled)

#define ITfCandUICaption_Show(This,fShow)	\
    (This)->lpVtbl -> Show(This,fShow)

#define ITfCandUICaption_IsVisible(This,pfVisible)	\
    (This)->lpVtbl -> IsVisible(This,pfVisible)

#define ITfCandUICaption_SetPosition(This,pptPos)	\
    (This)->lpVtbl -> SetPosition(This,pptPos)

#define ITfCandUICaption_GetPosition(This,pptPos)	\
    (This)->lpVtbl -> GetPosition(This,pptPos)

#define ITfCandUICaption_SetSize(This,psize)	\
    (This)->lpVtbl -> SetSize(This,psize)

#define ITfCandUICaption_GetSize(This,psize)	\
    (This)->lpVtbl -> GetSize(This,psize)

#define ITfCandUICaption_SetFont(This,pLogFont)	\
    (This)->lpVtbl -> SetFont(This,pLogFont)

#define ITfCandUICaption_GetFont(This,pLogFont)	\
    (This)->lpVtbl -> GetFont(This,pLogFont)

#define ITfCandUICaption_SetText(This,bstr)	\
    (This)->lpVtbl -> SetText(This,bstr)

#define ITfCandUICaption_GetText(This,pbtr)	\
    (This)->lpVtbl -> GetText(This,pbtr)

#define ITfCandUICaption_SetToolTipString(This,bstr)	\
    (This)->lpVtbl -> SetToolTipString(This,bstr)

#define ITfCandUICaption_GetToolTipString(This,pbtr)	\
    (This)->lpVtbl -> GetToolTipString(This,pbtr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfCandUICaption_INTERFACE_DEFINED__ */


#ifndef __ITfCandUIExtraCandidate_INTERFACE_DEFINED__
#define __ITfCandUIExtraCandidate_INTERFACE_DEFINED__

/* interface ITfCandUIExtraCandidate */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUIExtraCandidate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f6510bb9-f697-43d1-a5e2-eff290d00dfc")
    ITfCandUIExtraCandidate : public ITfCandUIObject
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUIExtraCandidateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUIExtraCandidate * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUIExtraCandidate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUIExtraCandidate * This);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            ITfCandUIExtraCandidate * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )( 
            ITfCandUIExtraCandidate * This,
            /* [out] */ BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfCandUIExtraCandidate * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsVisible )( 
            ITfCandUIExtraCandidate * This,
            /* [out] */ BOOL *pfVisible);
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            ITfCandUIExtraCandidate * This,
            /* [in] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            ITfCandUIExtraCandidate * This,
            /* [out] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ITfCandUIExtraCandidate * This,
            /* [in] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            ITfCandUIExtraCandidate * This,
            /* [out] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            ITfCandUIExtraCandidate * This,
            /* [in] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *GetFont )( 
            ITfCandUIExtraCandidate * This,
            /* [out] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *SetText )( 
            ITfCandUIExtraCandidate * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ITfCandUIExtraCandidate * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *SetToolTipString )( 
            ITfCandUIExtraCandidate * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetToolTipString )( 
            ITfCandUIExtraCandidate * This,
            /* [out] */ BSTR *pbtr);
        
        END_INTERFACE
    } ITfCandUIExtraCandidateVtbl;

    interface ITfCandUIExtraCandidate
    {
        CONST_VTBL struct ITfCandUIExtraCandidateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUIExtraCandidate_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUIExtraCandidate_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUIExtraCandidate_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUIExtraCandidate_Enable(This,fEnable)	\
    (This)->lpVtbl -> Enable(This,fEnable)

#define ITfCandUIExtraCandidate_IsEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> IsEnabled(This,pfEnabled)

#define ITfCandUIExtraCandidate_Show(This,fShow)	\
    (This)->lpVtbl -> Show(This,fShow)

#define ITfCandUIExtraCandidate_IsVisible(This,pfVisible)	\
    (This)->lpVtbl -> IsVisible(This,pfVisible)

#define ITfCandUIExtraCandidate_SetPosition(This,pptPos)	\
    (This)->lpVtbl -> SetPosition(This,pptPos)

#define ITfCandUIExtraCandidate_GetPosition(This,pptPos)	\
    (This)->lpVtbl -> GetPosition(This,pptPos)

#define ITfCandUIExtraCandidate_SetSize(This,psize)	\
    (This)->lpVtbl -> SetSize(This,psize)

#define ITfCandUIExtraCandidate_GetSize(This,psize)	\
    (This)->lpVtbl -> GetSize(This,psize)

#define ITfCandUIExtraCandidate_SetFont(This,pLogFont)	\
    (This)->lpVtbl -> SetFont(This,pLogFont)

#define ITfCandUIExtraCandidate_GetFont(This,pLogFont)	\
    (This)->lpVtbl -> GetFont(This,pLogFont)

#define ITfCandUIExtraCandidate_SetText(This,bstr)	\
    (This)->lpVtbl -> SetText(This,bstr)

#define ITfCandUIExtraCandidate_GetText(This,pbtr)	\
    (This)->lpVtbl -> GetText(This,pbtr)

#define ITfCandUIExtraCandidate_SetToolTipString(This,bstr)	\
    (This)->lpVtbl -> SetToolTipString(This,bstr)

#define ITfCandUIExtraCandidate_GetToolTipString(This,pbtr)	\
    (This)->lpVtbl -> GetToolTipString(This,pbtr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfCandUIExtraCandidate_INTERFACE_DEFINED__ */


#ifndef __ITfCandUIRawData_INTERFACE_DEFINED__
#define __ITfCandUIRawData_INTERFACE_DEFINED__

/* interface ITfCandUIRawData */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUIRawData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("afd12370-d6c3-4e9e-a625-88bdfbef7b2f")
    ITfCandUIRawData : public ITfCandUIObject
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUIRawDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUIRawData * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUIRawData * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUIRawData * This);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            ITfCandUIRawData * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )( 
            ITfCandUIRawData * This,
            /* [out] */ BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfCandUIRawData * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsVisible )( 
            ITfCandUIRawData * This,
            /* [out] */ BOOL *pfVisible);
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            ITfCandUIRawData * This,
            /* [in] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            ITfCandUIRawData * This,
            /* [out] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ITfCandUIRawData * This,
            /* [in] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            ITfCandUIRawData * This,
            /* [out] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            ITfCandUIRawData * This,
            /* [in] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *GetFont )( 
            ITfCandUIRawData * This,
            /* [out] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *SetText )( 
            ITfCandUIRawData * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ITfCandUIRawData * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *SetToolTipString )( 
            ITfCandUIRawData * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetToolTipString )( 
            ITfCandUIRawData * This,
            /* [out] */ BSTR *pbtr);
        
        END_INTERFACE
    } ITfCandUIRawDataVtbl;

    interface ITfCandUIRawData
    {
        CONST_VTBL struct ITfCandUIRawDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUIRawData_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUIRawData_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUIRawData_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUIRawData_Enable(This,fEnable)	\
    (This)->lpVtbl -> Enable(This,fEnable)

#define ITfCandUIRawData_IsEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> IsEnabled(This,pfEnabled)

#define ITfCandUIRawData_Show(This,fShow)	\
    (This)->lpVtbl -> Show(This,fShow)

#define ITfCandUIRawData_IsVisible(This,pfVisible)	\
    (This)->lpVtbl -> IsVisible(This,pfVisible)

#define ITfCandUIRawData_SetPosition(This,pptPos)	\
    (This)->lpVtbl -> SetPosition(This,pptPos)

#define ITfCandUIRawData_GetPosition(This,pptPos)	\
    (This)->lpVtbl -> GetPosition(This,pptPos)

#define ITfCandUIRawData_SetSize(This,psize)	\
    (This)->lpVtbl -> SetSize(This,psize)

#define ITfCandUIRawData_GetSize(This,psize)	\
    (This)->lpVtbl -> GetSize(This,psize)

#define ITfCandUIRawData_SetFont(This,pLogFont)	\
    (This)->lpVtbl -> SetFont(This,pLogFont)

#define ITfCandUIRawData_GetFont(This,pLogFont)	\
    (This)->lpVtbl -> GetFont(This,pLogFont)

#define ITfCandUIRawData_SetText(This,bstr)	\
    (This)->lpVtbl -> SetText(This,bstr)

#define ITfCandUIRawData_GetText(This,pbtr)	\
    (This)->lpVtbl -> GetText(This,pbtr)

#define ITfCandUIRawData_SetToolTipString(This,bstr)	\
    (This)->lpVtbl -> SetToolTipString(This,bstr)

#define ITfCandUIRawData_GetToolTipString(This,pbtr)	\
    (This)->lpVtbl -> GetToolTipString(This,pbtr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfCandUIRawData_INTERFACE_DEFINED__ */


#ifndef __ITfCandUICandTipButton_INTERFACE_DEFINED__
#define __ITfCandUICandTipButton_INTERFACE_DEFINED__

/* interface ITfCandUICandTipButton */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUICandTipButton;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b32ec07e-6b08-4ad9-b363-e96e2a060330")
    ITfCandUICandTipButton : public ITfCandUIObject
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUICandTipButtonVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUICandTipButton * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUICandTipButton * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUICandTipButton * This);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            ITfCandUICandTipButton * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )( 
            ITfCandUICandTipButton * This,
            /* [out] */ BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfCandUICandTipButton * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsVisible )( 
            ITfCandUICandTipButton * This,
            /* [out] */ BOOL *pfVisible);
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            ITfCandUICandTipButton * This,
            /* [in] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            ITfCandUICandTipButton * This,
            /* [out] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ITfCandUICandTipButton * This,
            /* [in] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            ITfCandUICandTipButton * This,
            /* [out] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            ITfCandUICandTipButton * This,
            /* [in] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *GetFont )( 
            ITfCandUICandTipButton * This,
            /* [out] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *SetText )( 
            ITfCandUICandTipButton * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ITfCandUICandTipButton * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *SetToolTipString )( 
            ITfCandUICandTipButton * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetToolTipString )( 
            ITfCandUICandTipButton * This,
            /* [out] */ BSTR *pbtr);
        
        END_INTERFACE
    } ITfCandUICandTipButtonVtbl;

    interface ITfCandUICandTipButton
    {
        CONST_VTBL struct ITfCandUICandTipButtonVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUICandTipButton_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUICandTipButton_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUICandTipButton_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUICandTipButton_Enable(This,fEnable)	\
    (This)->lpVtbl -> Enable(This,fEnable)

#define ITfCandUICandTipButton_IsEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> IsEnabled(This,pfEnabled)

#define ITfCandUICandTipButton_Show(This,fShow)	\
    (This)->lpVtbl -> Show(This,fShow)

#define ITfCandUICandTipButton_IsVisible(This,pfVisible)	\
    (This)->lpVtbl -> IsVisible(This,pfVisible)

#define ITfCandUICandTipButton_SetPosition(This,pptPos)	\
    (This)->lpVtbl -> SetPosition(This,pptPos)

#define ITfCandUICandTipButton_GetPosition(This,pptPos)	\
    (This)->lpVtbl -> GetPosition(This,pptPos)

#define ITfCandUICandTipButton_SetSize(This,psize)	\
    (This)->lpVtbl -> SetSize(This,psize)

#define ITfCandUICandTipButton_GetSize(This,psize)	\
    (This)->lpVtbl -> GetSize(This,psize)

#define ITfCandUICandTipButton_SetFont(This,pLogFont)	\
    (This)->lpVtbl -> SetFont(This,pLogFont)

#define ITfCandUICandTipButton_GetFont(This,pLogFont)	\
    (This)->lpVtbl -> GetFont(This,pLogFont)

#define ITfCandUICandTipButton_SetText(This,bstr)	\
    (This)->lpVtbl -> SetText(This,bstr)

#define ITfCandUICandTipButton_GetText(This,pbtr)	\
    (This)->lpVtbl -> GetText(This,pbtr)

#define ITfCandUICandTipButton_SetToolTipString(This,bstr)	\
    (This)->lpVtbl -> SetToolTipString(This,bstr)

#define ITfCandUICandTipButton_GetToolTipString(This,pbtr)	\
    (This)->lpVtbl -> GetToolTipString(This,pbtr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfCandUICandTipButton_INTERFACE_DEFINED__ */


#ifndef __ITfCandUICandString_INTERFACE_DEFINED__
#define __ITfCandUICandString_INTERFACE_DEFINED__

/* interface ITfCandUICandString */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUICandString;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c9e79120-83c5-438e-9927-43008db6c99a")
    ITfCandUICandString : public ITfCandUIObject
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUICandStringVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUICandString * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUICandString * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUICandString * This);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            ITfCandUICandString * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )( 
            ITfCandUICandString * This,
            /* [out] */ BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfCandUICandString * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsVisible )( 
            ITfCandUICandString * This,
            /* [out] */ BOOL *pfVisible);
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            ITfCandUICandString * This,
            /* [in] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            ITfCandUICandString * This,
            /* [out] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ITfCandUICandString * This,
            /* [in] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            ITfCandUICandString * This,
            /* [out] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            ITfCandUICandString * This,
            /* [in] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *GetFont )( 
            ITfCandUICandString * This,
            /* [out] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *SetText )( 
            ITfCandUICandString * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ITfCandUICandString * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *SetToolTipString )( 
            ITfCandUICandString * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetToolTipString )( 
            ITfCandUICandString * This,
            /* [out] */ BSTR *pbtr);
        
        END_INTERFACE
    } ITfCandUICandStringVtbl;

    interface ITfCandUICandString
    {
        CONST_VTBL struct ITfCandUICandStringVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUICandString_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUICandString_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUICandString_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUICandString_Enable(This,fEnable)	\
    (This)->lpVtbl -> Enable(This,fEnable)

#define ITfCandUICandString_IsEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> IsEnabled(This,pfEnabled)

#define ITfCandUICandString_Show(This,fShow)	\
    (This)->lpVtbl -> Show(This,fShow)

#define ITfCandUICandString_IsVisible(This,pfVisible)	\
    (This)->lpVtbl -> IsVisible(This,pfVisible)

#define ITfCandUICandString_SetPosition(This,pptPos)	\
    (This)->lpVtbl -> SetPosition(This,pptPos)

#define ITfCandUICandString_GetPosition(This,pptPos)	\
    (This)->lpVtbl -> GetPosition(This,pptPos)

#define ITfCandUICandString_SetSize(This,psize)	\
    (This)->lpVtbl -> SetSize(This,psize)

#define ITfCandUICandString_GetSize(This,psize)	\
    (This)->lpVtbl -> GetSize(This,psize)

#define ITfCandUICandString_SetFont(This,pLogFont)	\
    (This)->lpVtbl -> SetFont(This,pLogFont)

#define ITfCandUICandString_GetFont(This,pLogFont)	\
    (This)->lpVtbl -> GetFont(This,pLogFont)

#define ITfCandUICandString_SetText(This,bstr)	\
    (This)->lpVtbl -> SetText(This,bstr)

#define ITfCandUICandString_GetText(This,pbtr)	\
    (This)->lpVtbl -> GetText(This,pbtr)

#define ITfCandUICandString_SetToolTipString(This,bstr)	\
    (This)->lpVtbl -> SetToolTipString(This,bstr)

#define ITfCandUICandString_GetToolTipString(This,pbtr)	\
    (This)->lpVtbl -> GetToolTipString(This,pbtr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfCandUICandString_INTERFACE_DEFINED__ */


#ifndef __ITfCandUICandIndex_INTERFACE_DEFINED__
#define __ITfCandUICandIndex_INTERFACE_DEFINED__

/* interface ITfCandUICandIndex */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUICandIndex;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fc0c7cc9-b065-4d8c-b37d-ee470835a486")
    ITfCandUICandIndex : public ITfCandUIObject
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUICandIndexVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUICandIndex * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUICandIndex * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUICandIndex * This);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            ITfCandUICandIndex * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )( 
            ITfCandUICandIndex * This,
            /* [out] */ BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfCandUICandIndex * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsVisible )( 
            ITfCandUICandIndex * This,
            /* [out] */ BOOL *pfVisible);
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            ITfCandUICandIndex * This,
            /* [in] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            ITfCandUICandIndex * This,
            /* [out] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ITfCandUICandIndex * This,
            /* [in] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            ITfCandUICandIndex * This,
            /* [out] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            ITfCandUICandIndex * This,
            /* [in] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *GetFont )( 
            ITfCandUICandIndex * This,
            /* [out] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *SetText )( 
            ITfCandUICandIndex * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ITfCandUICandIndex * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *SetToolTipString )( 
            ITfCandUICandIndex * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetToolTipString )( 
            ITfCandUICandIndex * This,
            /* [out] */ BSTR *pbtr);
        
        END_INTERFACE
    } ITfCandUICandIndexVtbl;

    interface ITfCandUICandIndex
    {
        CONST_VTBL struct ITfCandUICandIndexVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUICandIndex_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUICandIndex_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUICandIndex_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUICandIndex_Enable(This,fEnable)	\
    (This)->lpVtbl -> Enable(This,fEnable)

#define ITfCandUICandIndex_IsEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> IsEnabled(This,pfEnabled)

#define ITfCandUICandIndex_Show(This,fShow)	\
    (This)->lpVtbl -> Show(This,fShow)

#define ITfCandUICandIndex_IsVisible(This,pfVisible)	\
    (This)->lpVtbl -> IsVisible(This,pfVisible)

#define ITfCandUICandIndex_SetPosition(This,pptPos)	\
    (This)->lpVtbl -> SetPosition(This,pptPos)

#define ITfCandUICandIndex_GetPosition(This,pptPos)	\
    (This)->lpVtbl -> GetPosition(This,pptPos)

#define ITfCandUICandIndex_SetSize(This,psize)	\
    (This)->lpVtbl -> SetSize(This,psize)

#define ITfCandUICandIndex_GetSize(This,psize)	\
    (This)->lpVtbl -> GetSize(This,psize)

#define ITfCandUICandIndex_SetFont(This,pLogFont)	\
    (This)->lpVtbl -> SetFont(This,pLogFont)

#define ITfCandUICandIndex_GetFont(This,pLogFont)	\
    (This)->lpVtbl -> GetFont(This,pLogFont)

#define ITfCandUICandIndex_SetText(This,bstr)	\
    (This)->lpVtbl -> SetText(This,bstr)

#define ITfCandUICandIndex_GetText(This,pbtr)	\
    (This)->lpVtbl -> GetText(This,pbtr)

#define ITfCandUICandIndex_SetToolTipString(This,bstr)	\
    (This)->lpVtbl -> SetToolTipString(This,bstr)

#define ITfCandUICandIndex_GetToolTipString(This,pbtr)	\
    (This)->lpVtbl -> GetToolTipString(This,pbtr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfCandUICandIndex_INTERFACE_DEFINED__ */


#ifndef __ITfCandUIInlineComment_INTERFACE_DEFINED__
#define __ITfCandUIInlineComment_INTERFACE_DEFINED__

/* interface ITfCandUIInlineComment */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUIInlineComment;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d4b1e0a2-aaf7-44f4-adf9-818b207bcf39")
    ITfCandUIInlineComment : public ITfCandUIObject
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUIInlineCommentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUIInlineComment * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUIInlineComment * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUIInlineComment * This);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            ITfCandUIInlineComment * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )( 
            ITfCandUIInlineComment * This,
            /* [out] */ BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfCandUIInlineComment * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsVisible )( 
            ITfCandUIInlineComment * This,
            /* [out] */ BOOL *pfVisible);
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            ITfCandUIInlineComment * This,
            /* [in] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            ITfCandUIInlineComment * This,
            /* [out] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ITfCandUIInlineComment * This,
            /* [in] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            ITfCandUIInlineComment * This,
            /* [out] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            ITfCandUIInlineComment * This,
            /* [in] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *GetFont )( 
            ITfCandUIInlineComment * This,
            /* [out] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *SetText )( 
            ITfCandUIInlineComment * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ITfCandUIInlineComment * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *SetToolTipString )( 
            ITfCandUIInlineComment * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetToolTipString )( 
            ITfCandUIInlineComment * This,
            /* [out] */ BSTR *pbtr);
        
        END_INTERFACE
    } ITfCandUIInlineCommentVtbl;

    interface ITfCandUIInlineComment
    {
        CONST_VTBL struct ITfCandUIInlineCommentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUIInlineComment_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUIInlineComment_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUIInlineComment_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUIInlineComment_Enable(This,fEnable)	\
    (This)->lpVtbl -> Enable(This,fEnable)

#define ITfCandUIInlineComment_IsEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> IsEnabled(This,pfEnabled)

#define ITfCandUIInlineComment_Show(This,fShow)	\
    (This)->lpVtbl -> Show(This,fShow)

#define ITfCandUIInlineComment_IsVisible(This,pfVisible)	\
    (This)->lpVtbl -> IsVisible(This,pfVisible)

#define ITfCandUIInlineComment_SetPosition(This,pptPos)	\
    (This)->lpVtbl -> SetPosition(This,pptPos)

#define ITfCandUIInlineComment_GetPosition(This,pptPos)	\
    (This)->lpVtbl -> GetPosition(This,pptPos)

#define ITfCandUIInlineComment_SetSize(This,psize)	\
    (This)->lpVtbl -> SetSize(This,psize)

#define ITfCandUIInlineComment_GetSize(This,psize)	\
    (This)->lpVtbl -> GetSize(This,psize)

#define ITfCandUIInlineComment_SetFont(This,pLogFont)	\
    (This)->lpVtbl -> SetFont(This,pLogFont)

#define ITfCandUIInlineComment_GetFont(This,pLogFont)	\
    (This)->lpVtbl -> GetFont(This,pLogFont)

#define ITfCandUIInlineComment_SetText(This,bstr)	\
    (This)->lpVtbl -> SetText(This,bstr)

#define ITfCandUIInlineComment_GetText(This,pbtr)	\
    (This)->lpVtbl -> GetText(This,pbtr)

#define ITfCandUIInlineComment_SetToolTipString(This,bstr)	\
    (This)->lpVtbl -> SetToolTipString(This,bstr)

#define ITfCandUIInlineComment_GetToolTipString(This,pbtr)	\
    (This)->lpVtbl -> GetToolTipString(This,pbtr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfCandUIInlineComment_INTERFACE_DEFINED__ */


#ifndef __ITfCandUIToolTip_INTERFACE_DEFINED__
#define __ITfCandUIToolTip_INTERFACE_DEFINED__

/* interface ITfCandUIToolTip */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUIToolTip;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8b5ec727-f645-4651-a318-6a4e2ed69666")
    ITfCandUIToolTip : public ITfCandUIObject
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUIToolTipVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUIToolTip * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUIToolTip * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUIToolTip * This);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            ITfCandUIToolTip * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )( 
            ITfCandUIToolTip * This,
            /* [out] */ BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfCandUIToolTip * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsVisible )( 
            ITfCandUIToolTip * This,
            /* [out] */ BOOL *pfVisible);
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            ITfCandUIToolTip * This,
            /* [in] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            ITfCandUIToolTip * This,
            /* [out] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ITfCandUIToolTip * This,
            /* [in] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            ITfCandUIToolTip * This,
            /* [out] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            ITfCandUIToolTip * This,
            /* [in] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *GetFont )( 
            ITfCandUIToolTip * This,
            /* [out] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *SetText )( 
            ITfCandUIToolTip * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ITfCandUIToolTip * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *SetToolTipString )( 
            ITfCandUIToolTip * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetToolTipString )( 
            ITfCandUIToolTip * This,
            /* [out] */ BSTR *pbtr);
        
        END_INTERFACE
    } ITfCandUIToolTipVtbl;

    interface ITfCandUIToolTip
    {
        CONST_VTBL struct ITfCandUIToolTipVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUIToolTip_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUIToolTip_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUIToolTip_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUIToolTip_Enable(This,fEnable)	\
    (This)->lpVtbl -> Enable(This,fEnable)

#define ITfCandUIToolTip_IsEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> IsEnabled(This,pfEnabled)

#define ITfCandUIToolTip_Show(This,fShow)	\
    (This)->lpVtbl -> Show(This,fShow)

#define ITfCandUIToolTip_IsVisible(This,pfVisible)	\
    (This)->lpVtbl -> IsVisible(This,pfVisible)

#define ITfCandUIToolTip_SetPosition(This,pptPos)	\
    (This)->lpVtbl -> SetPosition(This,pptPos)

#define ITfCandUIToolTip_GetPosition(This,pptPos)	\
    (This)->lpVtbl -> GetPosition(This,pptPos)

#define ITfCandUIToolTip_SetSize(This,psize)	\
    (This)->lpVtbl -> SetSize(This,psize)

#define ITfCandUIToolTip_GetSize(This,psize)	\
    (This)->lpVtbl -> GetSize(This,psize)

#define ITfCandUIToolTip_SetFont(This,pLogFont)	\
    (This)->lpVtbl -> SetFont(This,pLogFont)

#define ITfCandUIToolTip_GetFont(This,pLogFont)	\
    (This)->lpVtbl -> GetFont(This,pLogFont)

#define ITfCandUIToolTip_SetText(This,bstr)	\
    (This)->lpVtbl -> SetText(This,bstr)

#define ITfCandUIToolTip_GetText(This,pbtr)	\
    (This)->lpVtbl -> GetText(This,pbtr)

#define ITfCandUIToolTip_SetToolTipString(This,bstr)	\
    (This)->lpVtbl -> SetToolTipString(This,bstr)

#define ITfCandUIToolTip_GetToolTipString(This,pbtr)	\
    (This)->lpVtbl -> GetToolTipString(This,pbtr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfCandUIToolTip_INTERFACE_DEFINED__ */


#ifndef __ITfCandUIPopupCommentTitle_INTERFACE_DEFINED__
#define __ITfCandUIPopupCommentTitle_INTERFACE_DEFINED__

/* interface ITfCandUIPopupCommentTitle */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUIPopupCommentTitle;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cb21bc71-1974-4fb6-a9b0-f5bcc8f3c44b")
    ITfCandUIPopupCommentTitle : public ITfCandUIObject
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUIPopupCommentTitleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUIPopupCommentTitle * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUIPopupCommentTitle * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUIPopupCommentTitle * This);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            ITfCandUIPopupCommentTitle * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )( 
            ITfCandUIPopupCommentTitle * This,
            /* [out] */ BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfCandUIPopupCommentTitle * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsVisible )( 
            ITfCandUIPopupCommentTitle * This,
            /* [out] */ BOOL *pfVisible);
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            ITfCandUIPopupCommentTitle * This,
            /* [in] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            ITfCandUIPopupCommentTitle * This,
            /* [out] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ITfCandUIPopupCommentTitle * This,
            /* [in] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            ITfCandUIPopupCommentTitle * This,
            /* [out] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            ITfCandUIPopupCommentTitle * This,
            /* [in] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *GetFont )( 
            ITfCandUIPopupCommentTitle * This,
            /* [out] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *SetText )( 
            ITfCandUIPopupCommentTitle * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ITfCandUIPopupCommentTitle * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *SetToolTipString )( 
            ITfCandUIPopupCommentTitle * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetToolTipString )( 
            ITfCandUIPopupCommentTitle * This,
            /* [out] */ BSTR *pbtr);
        
        END_INTERFACE
    } ITfCandUIPopupCommentTitleVtbl;

    interface ITfCandUIPopupCommentTitle
    {
        CONST_VTBL struct ITfCandUIPopupCommentTitleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUIPopupCommentTitle_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUIPopupCommentTitle_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUIPopupCommentTitle_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUIPopupCommentTitle_Enable(This,fEnable)	\
    (This)->lpVtbl -> Enable(This,fEnable)

#define ITfCandUIPopupCommentTitle_IsEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> IsEnabled(This,pfEnabled)

#define ITfCandUIPopupCommentTitle_Show(This,fShow)	\
    (This)->lpVtbl -> Show(This,fShow)

#define ITfCandUIPopupCommentTitle_IsVisible(This,pfVisible)	\
    (This)->lpVtbl -> IsVisible(This,pfVisible)

#define ITfCandUIPopupCommentTitle_SetPosition(This,pptPos)	\
    (This)->lpVtbl -> SetPosition(This,pptPos)

#define ITfCandUIPopupCommentTitle_GetPosition(This,pptPos)	\
    (This)->lpVtbl -> GetPosition(This,pptPos)

#define ITfCandUIPopupCommentTitle_SetSize(This,psize)	\
    (This)->lpVtbl -> SetSize(This,psize)

#define ITfCandUIPopupCommentTitle_GetSize(This,psize)	\
    (This)->lpVtbl -> GetSize(This,psize)

#define ITfCandUIPopupCommentTitle_SetFont(This,pLogFont)	\
    (This)->lpVtbl -> SetFont(This,pLogFont)

#define ITfCandUIPopupCommentTitle_GetFont(This,pLogFont)	\
    (This)->lpVtbl -> GetFont(This,pLogFont)

#define ITfCandUIPopupCommentTitle_SetText(This,bstr)	\
    (This)->lpVtbl -> SetText(This,bstr)

#define ITfCandUIPopupCommentTitle_GetText(This,pbtr)	\
    (This)->lpVtbl -> GetText(This,pbtr)

#define ITfCandUIPopupCommentTitle_SetToolTipString(This,bstr)	\
    (This)->lpVtbl -> SetToolTipString(This,bstr)

#define ITfCandUIPopupCommentTitle_GetToolTipString(This,pbtr)	\
    (This)->lpVtbl -> GetToolTipString(This,pbtr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfCandUIPopupCommentTitle_INTERFACE_DEFINED__ */


#ifndef __ITfCandUIPopupCommentText_INTERFACE_DEFINED__
#define __ITfCandUIPopupCommentText_INTERFACE_DEFINED__

/* interface ITfCandUIPopupCommentText */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUIPopupCommentText;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5770e84b-0b59-462d-8836-d70bbc8c8767")
    ITfCandUIPopupCommentText : public ITfCandUIObject
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUIPopupCommentTextVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUIPopupCommentText * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUIPopupCommentText * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUIPopupCommentText * This);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            ITfCandUIPopupCommentText * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )( 
            ITfCandUIPopupCommentText * This,
            /* [out] */ BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfCandUIPopupCommentText * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsVisible )( 
            ITfCandUIPopupCommentText * This,
            /* [out] */ BOOL *pfVisible);
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            ITfCandUIPopupCommentText * This,
            /* [in] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            ITfCandUIPopupCommentText * This,
            /* [out] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ITfCandUIPopupCommentText * This,
            /* [in] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            ITfCandUIPopupCommentText * This,
            /* [out] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            ITfCandUIPopupCommentText * This,
            /* [in] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *GetFont )( 
            ITfCandUIPopupCommentText * This,
            /* [out] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *SetText )( 
            ITfCandUIPopupCommentText * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ITfCandUIPopupCommentText * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *SetToolTipString )( 
            ITfCandUIPopupCommentText * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetToolTipString )( 
            ITfCandUIPopupCommentText * This,
            /* [out] */ BSTR *pbtr);
        
        END_INTERFACE
    } ITfCandUIPopupCommentTextVtbl;

    interface ITfCandUIPopupCommentText
    {
        CONST_VTBL struct ITfCandUIPopupCommentTextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUIPopupCommentText_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUIPopupCommentText_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUIPopupCommentText_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUIPopupCommentText_Enable(This,fEnable)	\
    (This)->lpVtbl -> Enable(This,fEnable)

#define ITfCandUIPopupCommentText_IsEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> IsEnabled(This,pfEnabled)

#define ITfCandUIPopupCommentText_Show(This,fShow)	\
    (This)->lpVtbl -> Show(This,fShow)

#define ITfCandUIPopupCommentText_IsVisible(This,pfVisible)	\
    (This)->lpVtbl -> IsVisible(This,pfVisible)

#define ITfCandUIPopupCommentText_SetPosition(This,pptPos)	\
    (This)->lpVtbl -> SetPosition(This,pptPos)

#define ITfCandUIPopupCommentText_GetPosition(This,pptPos)	\
    (This)->lpVtbl -> GetPosition(This,pptPos)

#define ITfCandUIPopupCommentText_SetSize(This,psize)	\
    (This)->lpVtbl -> SetSize(This,psize)

#define ITfCandUIPopupCommentText_GetSize(This,psize)	\
    (This)->lpVtbl -> GetSize(This,psize)

#define ITfCandUIPopupCommentText_SetFont(This,pLogFont)	\
    (This)->lpVtbl -> SetFont(This,pLogFont)

#define ITfCandUIPopupCommentText_GetFont(This,pLogFont)	\
    (This)->lpVtbl -> GetFont(This,pLogFont)

#define ITfCandUIPopupCommentText_SetText(This,bstr)	\
    (This)->lpVtbl -> SetText(This,bstr)

#define ITfCandUIPopupCommentText_GetText(This,pbtr)	\
    (This)->lpVtbl -> GetText(This,pbtr)

#define ITfCandUIPopupCommentText_SetToolTipString(This,bstr)	\
    (This)->lpVtbl -> SetToolTipString(This,bstr)

#define ITfCandUIPopupCommentText_GetToolTipString(This,pbtr)	\
    (This)->lpVtbl -> GetToolTipString(This,pbtr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfCandUIPopupCommentText_INTERFACE_DEFINED__ */


#ifndef __ITfCandUIExtObject_INTERFACE_DEFINED__
#define __ITfCandUIExtObject_INTERFACE_DEFINED__

/* interface ITfCandUIExtObject */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUIExtObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8cf2f281-9add-4021-9a0d-62c0e11bc384")
    ITfCandUIExtObject : public ITfCandUIObject
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetID( 
            /* [out] */ LONG *pid) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUIExtObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUIExtObject * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUIExtObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUIExtObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            ITfCandUIExtObject * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )( 
            ITfCandUIExtObject * This,
            /* [out] */ BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfCandUIExtObject * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsVisible )( 
            ITfCandUIExtObject * This,
            /* [out] */ BOOL *pfVisible);
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            ITfCandUIExtObject * This,
            /* [in] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            ITfCandUIExtObject * This,
            /* [out] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ITfCandUIExtObject * This,
            /* [in] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            ITfCandUIExtObject * This,
            /* [out] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            ITfCandUIExtObject * This,
            /* [in] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *GetFont )( 
            ITfCandUIExtObject * This,
            /* [out] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *SetText )( 
            ITfCandUIExtObject * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ITfCandUIExtObject * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *SetToolTipString )( 
            ITfCandUIExtObject * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetToolTipString )( 
            ITfCandUIExtObject * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *GetID )( 
            ITfCandUIExtObject * This,
            /* [out] */ LONG *pid);
        
        END_INTERFACE
    } ITfCandUIExtObjectVtbl;

    interface ITfCandUIExtObject
    {
        CONST_VTBL struct ITfCandUIExtObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUIExtObject_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUIExtObject_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUIExtObject_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUIExtObject_Enable(This,fEnable)	\
    (This)->lpVtbl -> Enable(This,fEnable)

#define ITfCandUIExtObject_IsEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> IsEnabled(This,pfEnabled)

#define ITfCandUIExtObject_Show(This,fShow)	\
    (This)->lpVtbl -> Show(This,fShow)

#define ITfCandUIExtObject_IsVisible(This,pfVisible)	\
    (This)->lpVtbl -> IsVisible(This,pfVisible)

#define ITfCandUIExtObject_SetPosition(This,pptPos)	\
    (This)->lpVtbl -> SetPosition(This,pptPos)

#define ITfCandUIExtObject_GetPosition(This,pptPos)	\
    (This)->lpVtbl -> GetPosition(This,pptPos)

#define ITfCandUIExtObject_SetSize(This,psize)	\
    (This)->lpVtbl -> SetSize(This,psize)

#define ITfCandUIExtObject_GetSize(This,psize)	\
    (This)->lpVtbl -> GetSize(This,psize)

#define ITfCandUIExtObject_SetFont(This,pLogFont)	\
    (This)->lpVtbl -> SetFont(This,pLogFont)

#define ITfCandUIExtObject_GetFont(This,pLogFont)	\
    (This)->lpVtbl -> GetFont(This,pLogFont)

#define ITfCandUIExtObject_SetText(This,bstr)	\
    (This)->lpVtbl -> SetText(This,bstr)

#define ITfCandUIExtObject_GetText(This,pbtr)	\
    (This)->lpVtbl -> GetText(This,pbtr)

#define ITfCandUIExtObject_SetToolTipString(This,bstr)	\
    (This)->lpVtbl -> SetToolTipString(This,bstr)

#define ITfCandUIExtObject_GetToolTipString(This,pbtr)	\
    (This)->lpVtbl -> GetToolTipString(This,pbtr)


#define ITfCandUIExtObject_GetID(This,pid)	\
    (This)->lpVtbl -> GetID(This,pid)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandUIExtObject_GetID_Proxy( 
    ITfCandUIExtObject * This,
    /* [out] */ LONG *pid);


void __RPC_STUB ITfCandUIExtObject_GetID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandUIExtObject_INTERFACE_DEFINED__ */


#ifndef __ITfCandUIExtSpace_INTERFACE_DEFINED__
#define __ITfCandUIExtSpace_INTERFACE_DEFINED__

/* interface ITfCandUIExtSpace */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUIExtSpace;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1fc2fb39-99fb-4cc4-9f6f-7ff31fe9f1a2")
    ITfCandUIExtSpace : public ITfCandUIExtObject
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUIExtSpaceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUIExtSpace * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUIExtSpace * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUIExtSpace * This);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            ITfCandUIExtSpace * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )( 
            ITfCandUIExtSpace * This,
            /* [out] */ BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfCandUIExtSpace * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsVisible )( 
            ITfCandUIExtSpace * This,
            /* [out] */ BOOL *pfVisible);
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            ITfCandUIExtSpace * This,
            /* [in] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            ITfCandUIExtSpace * This,
            /* [out] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ITfCandUIExtSpace * This,
            /* [in] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            ITfCandUIExtSpace * This,
            /* [out] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            ITfCandUIExtSpace * This,
            /* [in] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *GetFont )( 
            ITfCandUIExtSpace * This,
            /* [out] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *SetText )( 
            ITfCandUIExtSpace * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ITfCandUIExtSpace * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *SetToolTipString )( 
            ITfCandUIExtSpace * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetToolTipString )( 
            ITfCandUIExtSpace * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *GetID )( 
            ITfCandUIExtSpace * This,
            /* [out] */ LONG *pid);
        
        END_INTERFACE
    } ITfCandUIExtSpaceVtbl;

    interface ITfCandUIExtSpace
    {
        CONST_VTBL struct ITfCandUIExtSpaceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUIExtSpace_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUIExtSpace_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUIExtSpace_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUIExtSpace_Enable(This,fEnable)	\
    (This)->lpVtbl -> Enable(This,fEnable)

#define ITfCandUIExtSpace_IsEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> IsEnabled(This,pfEnabled)

#define ITfCandUIExtSpace_Show(This,fShow)	\
    (This)->lpVtbl -> Show(This,fShow)

#define ITfCandUIExtSpace_IsVisible(This,pfVisible)	\
    (This)->lpVtbl -> IsVisible(This,pfVisible)

#define ITfCandUIExtSpace_SetPosition(This,pptPos)	\
    (This)->lpVtbl -> SetPosition(This,pptPos)

#define ITfCandUIExtSpace_GetPosition(This,pptPos)	\
    (This)->lpVtbl -> GetPosition(This,pptPos)

#define ITfCandUIExtSpace_SetSize(This,psize)	\
    (This)->lpVtbl -> SetSize(This,psize)

#define ITfCandUIExtSpace_GetSize(This,psize)	\
    (This)->lpVtbl -> GetSize(This,psize)

#define ITfCandUIExtSpace_SetFont(This,pLogFont)	\
    (This)->lpVtbl -> SetFont(This,pLogFont)

#define ITfCandUIExtSpace_GetFont(This,pLogFont)	\
    (This)->lpVtbl -> GetFont(This,pLogFont)

#define ITfCandUIExtSpace_SetText(This,bstr)	\
    (This)->lpVtbl -> SetText(This,bstr)

#define ITfCandUIExtSpace_GetText(This,pbtr)	\
    (This)->lpVtbl -> GetText(This,pbtr)

#define ITfCandUIExtSpace_SetToolTipString(This,bstr)	\
    (This)->lpVtbl -> SetToolTipString(This,bstr)

#define ITfCandUIExtSpace_GetToolTipString(This,pbtr)	\
    (This)->lpVtbl -> GetToolTipString(This,pbtr)


#define ITfCandUIExtSpace_GetID(This,pid)	\
    (This)->lpVtbl -> GetID(This,pid)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfCandUIExtSpace_INTERFACE_DEFINED__ */


#ifndef __ITfCandUIExtPushButton_INTERFACE_DEFINED__
#define __ITfCandUIExtPushButton_INTERFACE_DEFINED__

/* interface ITfCandUIExtPushButton */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUIExtPushButton;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4466c342-4fd6-43e4-8d23-34f443ef2d01")
    ITfCandUIExtPushButton : public ITfCandUIExtObject
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ ITfCandUIExtButtonEventSink *pSink) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unadvise( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIcon( 
            /* [in] */ HICON hIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBitmap( 
            /* [in] */ HBITMAP hBitmap) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUIExtPushButtonVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUIExtPushButton * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUIExtPushButton * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUIExtPushButton * This);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            ITfCandUIExtPushButton * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )( 
            ITfCandUIExtPushButton * This,
            /* [out] */ BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfCandUIExtPushButton * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsVisible )( 
            ITfCandUIExtPushButton * This,
            /* [out] */ BOOL *pfVisible);
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            ITfCandUIExtPushButton * This,
            /* [in] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            ITfCandUIExtPushButton * This,
            /* [out] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ITfCandUIExtPushButton * This,
            /* [in] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            ITfCandUIExtPushButton * This,
            /* [out] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            ITfCandUIExtPushButton * This,
            /* [in] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *GetFont )( 
            ITfCandUIExtPushButton * This,
            /* [out] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *SetText )( 
            ITfCandUIExtPushButton * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ITfCandUIExtPushButton * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *SetToolTipString )( 
            ITfCandUIExtPushButton * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetToolTipString )( 
            ITfCandUIExtPushButton * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *GetID )( 
            ITfCandUIExtPushButton * This,
            /* [out] */ LONG *pid);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            ITfCandUIExtPushButton * This,
            /* [in] */ ITfCandUIExtButtonEventSink *pSink);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            ITfCandUIExtPushButton * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetIcon )( 
            ITfCandUIExtPushButton * This,
            /* [in] */ HICON hIcon);
        
        HRESULT ( STDMETHODCALLTYPE *SetBitmap )( 
            ITfCandUIExtPushButton * This,
            /* [in] */ HBITMAP hBitmap);
        
        END_INTERFACE
    } ITfCandUIExtPushButtonVtbl;

    interface ITfCandUIExtPushButton
    {
        CONST_VTBL struct ITfCandUIExtPushButtonVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUIExtPushButton_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUIExtPushButton_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUIExtPushButton_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUIExtPushButton_Enable(This,fEnable)	\
    (This)->lpVtbl -> Enable(This,fEnable)

#define ITfCandUIExtPushButton_IsEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> IsEnabled(This,pfEnabled)

#define ITfCandUIExtPushButton_Show(This,fShow)	\
    (This)->lpVtbl -> Show(This,fShow)

#define ITfCandUIExtPushButton_IsVisible(This,pfVisible)	\
    (This)->lpVtbl -> IsVisible(This,pfVisible)

#define ITfCandUIExtPushButton_SetPosition(This,pptPos)	\
    (This)->lpVtbl -> SetPosition(This,pptPos)

#define ITfCandUIExtPushButton_GetPosition(This,pptPos)	\
    (This)->lpVtbl -> GetPosition(This,pptPos)

#define ITfCandUIExtPushButton_SetSize(This,psize)	\
    (This)->lpVtbl -> SetSize(This,psize)

#define ITfCandUIExtPushButton_GetSize(This,psize)	\
    (This)->lpVtbl -> GetSize(This,psize)

#define ITfCandUIExtPushButton_SetFont(This,pLogFont)	\
    (This)->lpVtbl -> SetFont(This,pLogFont)

#define ITfCandUIExtPushButton_GetFont(This,pLogFont)	\
    (This)->lpVtbl -> GetFont(This,pLogFont)

#define ITfCandUIExtPushButton_SetText(This,bstr)	\
    (This)->lpVtbl -> SetText(This,bstr)

#define ITfCandUIExtPushButton_GetText(This,pbtr)	\
    (This)->lpVtbl -> GetText(This,pbtr)

#define ITfCandUIExtPushButton_SetToolTipString(This,bstr)	\
    (This)->lpVtbl -> SetToolTipString(This,bstr)

#define ITfCandUIExtPushButton_GetToolTipString(This,pbtr)	\
    (This)->lpVtbl -> GetToolTipString(This,pbtr)


#define ITfCandUIExtPushButton_GetID(This,pid)	\
    (This)->lpVtbl -> GetID(This,pid)


#define ITfCandUIExtPushButton_Advise(This,pSink)	\
    (This)->lpVtbl -> Advise(This,pSink)

#define ITfCandUIExtPushButton_Unadvise(This)	\
    (This)->lpVtbl -> Unadvise(This)

#define ITfCandUIExtPushButton_SetIcon(This,hIcon)	\
    (This)->lpVtbl -> SetIcon(This,hIcon)

#define ITfCandUIExtPushButton_SetBitmap(This,hBitmap)	\
    (This)->lpVtbl -> SetBitmap(This,hBitmap)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandUIExtPushButton_Advise_Proxy( 
    ITfCandUIExtPushButton * This,
    /* [in] */ ITfCandUIExtButtonEventSink *pSink);


void __RPC_STUB ITfCandUIExtPushButton_Advise_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIExtPushButton_Unadvise_Proxy( 
    ITfCandUIExtPushButton * This);


void __RPC_STUB ITfCandUIExtPushButton_Unadvise_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIExtPushButton_SetIcon_Proxy( 
    ITfCandUIExtPushButton * This,
    /* [in] */ HICON hIcon);


void __RPC_STUB ITfCandUIExtPushButton_SetIcon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIExtPushButton_SetBitmap_Proxy( 
    ITfCandUIExtPushButton * This,
    /* [in] */ HBITMAP hBitmap);


void __RPC_STUB ITfCandUIExtPushButton_SetBitmap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandUIExtPushButton_INTERFACE_DEFINED__ */


#ifndef __ITfCandUIExtToggleButton_INTERFACE_DEFINED__
#define __ITfCandUIExtToggleButton_INTERFACE_DEFINED__

/* interface ITfCandUIExtToggleButton */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandUIExtToggleButton;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c16a174a-5628-4050-8dfe-0d82e7265ba1")
    ITfCandUIExtToggleButton : public ITfCandUIExtObject
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ ITfCandUIExtButtonEventSink *pSink) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unadvise( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIcon( 
            /* [in] */ HICON hIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBitmap( 
            /* [in] */ HBITMAP hBitmap) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetToggleState( 
            /* [in] */ BOOL fToggle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetToggleState( 
            /* [out] */ BOOL *pfToggled) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandUIExtToggleButtonVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandUIExtToggleButton * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandUIExtToggleButton * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandUIExtToggleButton * This);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            ITfCandUIExtToggleButton * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )( 
            ITfCandUIExtToggleButton * This,
            /* [out] */ BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfCandUIExtToggleButton * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsVisible )( 
            ITfCandUIExtToggleButton * This,
            /* [out] */ BOOL *pfVisible);
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            ITfCandUIExtToggleButton * This,
            /* [in] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            ITfCandUIExtToggleButton * This,
            /* [out] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            ITfCandUIExtToggleButton * This,
            /* [in] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            ITfCandUIExtToggleButton * This,
            /* [out] */ SIZE *psize);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            ITfCandUIExtToggleButton * This,
            /* [in] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *GetFont )( 
            ITfCandUIExtToggleButton * This,
            /* [out] */ LOGFONTW *pLogFont);
        
        HRESULT ( STDMETHODCALLTYPE *SetText )( 
            ITfCandUIExtToggleButton * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ITfCandUIExtToggleButton * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *SetToolTipString )( 
            ITfCandUIExtToggleButton * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetToolTipString )( 
            ITfCandUIExtToggleButton * This,
            /* [out] */ BSTR *pbtr);
        
        HRESULT ( STDMETHODCALLTYPE *GetID )( 
            ITfCandUIExtToggleButton * This,
            /* [out] */ LONG *pid);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            ITfCandUIExtToggleButton * This,
            /* [in] */ ITfCandUIExtButtonEventSink *pSink);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            ITfCandUIExtToggleButton * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetIcon )( 
            ITfCandUIExtToggleButton * This,
            /* [in] */ HICON hIcon);
        
        HRESULT ( STDMETHODCALLTYPE *SetBitmap )( 
            ITfCandUIExtToggleButton * This,
            /* [in] */ HBITMAP hBitmap);
        
        HRESULT ( STDMETHODCALLTYPE *SetToggleState )( 
            ITfCandUIExtToggleButton * This,
            /* [in] */ BOOL fToggle);
        
        HRESULT ( STDMETHODCALLTYPE *GetToggleState )( 
            ITfCandUIExtToggleButton * This,
            /* [out] */ BOOL *pfToggled);
        
        END_INTERFACE
    } ITfCandUIExtToggleButtonVtbl;

    interface ITfCandUIExtToggleButton
    {
        CONST_VTBL struct ITfCandUIExtToggleButtonVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandUIExtToggleButton_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandUIExtToggleButton_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandUIExtToggleButton_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandUIExtToggleButton_Enable(This,fEnable)	\
    (This)->lpVtbl -> Enable(This,fEnable)

#define ITfCandUIExtToggleButton_IsEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> IsEnabled(This,pfEnabled)

#define ITfCandUIExtToggleButton_Show(This,fShow)	\
    (This)->lpVtbl -> Show(This,fShow)

#define ITfCandUIExtToggleButton_IsVisible(This,pfVisible)	\
    (This)->lpVtbl -> IsVisible(This,pfVisible)

#define ITfCandUIExtToggleButton_SetPosition(This,pptPos)	\
    (This)->lpVtbl -> SetPosition(This,pptPos)

#define ITfCandUIExtToggleButton_GetPosition(This,pptPos)	\
    (This)->lpVtbl -> GetPosition(This,pptPos)

#define ITfCandUIExtToggleButton_SetSize(This,psize)	\
    (This)->lpVtbl -> SetSize(This,psize)

#define ITfCandUIExtToggleButton_GetSize(This,psize)	\
    (This)->lpVtbl -> GetSize(This,psize)

#define ITfCandUIExtToggleButton_SetFont(This,pLogFont)	\
    (This)->lpVtbl -> SetFont(This,pLogFont)

#define ITfCandUIExtToggleButton_GetFont(This,pLogFont)	\
    (This)->lpVtbl -> GetFont(This,pLogFont)

#define ITfCandUIExtToggleButton_SetText(This,bstr)	\
    (This)->lpVtbl -> SetText(This,bstr)

#define ITfCandUIExtToggleButton_GetText(This,pbtr)	\
    (This)->lpVtbl -> GetText(This,pbtr)

#define ITfCandUIExtToggleButton_SetToolTipString(This,bstr)	\
    (This)->lpVtbl -> SetToolTipString(This,bstr)

#define ITfCandUIExtToggleButton_GetToolTipString(This,pbtr)	\
    (This)->lpVtbl -> GetToolTipString(This,pbtr)


#define ITfCandUIExtToggleButton_GetID(This,pid)	\
    (This)->lpVtbl -> GetID(This,pid)


#define ITfCandUIExtToggleButton_Advise(This,pSink)	\
    (This)->lpVtbl -> Advise(This,pSink)

#define ITfCandUIExtToggleButton_Unadvise(This)	\
    (This)->lpVtbl -> Unadvise(This)

#define ITfCandUIExtToggleButton_SetIcon(This,hIcon)	\
    (This)->lpVtbl -> SetIcon(This,hIcon)

#define ITfCandUIExtToggleButton_SetBitmap(This,hBitmap)	\
    (This)->lpVtbl -> SetBitmap(This,hBitmap)

#define ITfCandUIExtToggleButton_SetToggleState(This,fToggle)	\
    (This)->lpVtbl -> SetToggleState(This,fToggle)

#define ITfCandUIExtToggleButton_GetToggleState(This,pfToggled)	\
    (This)->lpVtbl -> GetToggleState(This,pfToggled)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandUIExtToggleButton_Advise_Proxy( 
    ITfCandUIExtToggleButton * This,
    /* [in] */ ITfCandUIExtButtonEventSink *pSink);


void __RPC_STUB ITfCandUIExtToggleButton_Advise_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIExtToggleButton_Unadvise_Proxy( 
    ITfCandUIExtToggleButton * This);


void __RPC_STUB ITfCandUIExtToggleButton_Unadvise_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIExtToggleButton_SetIcon_Proxy( 
    ITfCandUIExtToggleButton * This,
    /* [in] */ HICON hIcon);


void __RPC_STUB ITfCandUIExtToggleButton_SetIcon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIExtToggleButton_SetBitmap_Proxy( 
    ITfCandUIExtToggleButton * This,
    /* [in] */ HBITMAP hBitmap);


void __RPC_STUB ITfCandUIExtToggleButton_SetBitmap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIExtToggleButton_SetToggleState_Proxy( 
    ITfCandUIExtToggleButton * This,
    /* [in] */ BOOL fToggle);


void __RPC_STUB ITfCandUIExtToggleButton_SetToggleState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandUIExtToggleButton_GetToggleState_Proxy( 
    ITfCandUIExtToggleButton * This,
    /* [out] */ BOOL *pfToggled);


void __RPC_STUB ITfCandUIExtToggleButton_GetToggleState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandUIExtToggleButton_INTERFACE_DEFINED__ */


#ifndef __ITfCandidateUIContextOwner_INTERFACE_DEFINED__
#define __ITfCandidateUIContextOwner_INTERFACE_DEFINED__

/* interface ITfCandidateUIContextOwner */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandidateUIContextOwner;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9fa4580f-cf50-43f4-af09-5e8cabe372c2")
    ITfCandidateUIContextOwner : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ProcessCommand( 
            /* [in] */ CANDUICOMMAND cmd,
            /* [in] */ INT iParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TestText( 
            /* [in] */ BSTR bstr,
            /* [out] */ BOOL *pfHandles) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandidateUIContextOwnerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandidateUIContextOwner * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandidateUIContextOwner * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandidateUIContextOwner * This);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessCommand )( 
            ITfCandidateUIContextOwner * This,
            /* [in] */ CANDUICOMMAND cmd,
            /* [in] */ INT iParam);
        
        HRESULT ( STDMETHODCALLTYPE *TestText )( 
            ITfCandidateUIContextOwner * This,
            /* [in] */ BSTR bstr,
            /* [out] */ BOOL *pfHandles);
        
        END_INTERFACE
    } ITfCandidateUIContextOwnerVtbl;

    interface ITfCandidateUIContextOwner
    {
        CONST_VTBL struct ITfCandidateUIContextOwnerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandidateUIContextOwner_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandidateUIContextOwner_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandidateUIContextOwner_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandidateUIContextOwner_ProcessCommand(This,cmd,iParam)	\
    (This)->lpVtbl -> ProcessCommand(This,cmd,iParam)

#define ITfCandidateUIContextOwner_TestText(This,bstr,pfHandles)	\
    (This)->lpVtbl -> TestText(This,bstr,pfHandles)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandidateUIContextOwner_ProcessCommand_Proxy( 
    ITfCandidateUIContextOwner * This,
    /* [in] */ CANDUICOMMAND cmd,
    /* [in] */ INT iParam);


void __RPC_STUB ITfCandidateUIContextOwner_ProcessCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandidateUIContextOwner_TestText_Proxy( 
    ITfCandidateUIContextOwner * This,
    /* [in] */ BSTR bstr,
    /* [out] */ BOOL *pfHandles);


void __RPC_STUB ITfCandidateUIContextOwner_TestText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandidateUIContextOwner_INTERFACE_DEFINED__ */


#ifndef __ITfCandidateUI_INTERFACE_DEFINED__
#define __ITfCandidateUI_INTERFACE_DEFINED__

/* interface ITfCandidateUI */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandidateUI;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e45f7b70-a4c3-48cd-8edd-3e784a8f5eae")
    ITfCandidateUI : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetClientId( 
            /* [in] */ TfClientId tid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenCandidateUI( 
            /* [in] */ HWND hWnd,
            /* [in] */ ITfDocumentMgr *pdim,
            /* [in] */ TfEditCookie ec,
            /* [in] */ ITfRange *pRange) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CloseCandidateUI( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCandidateList( 
            /* [in] */ ITfCandidateList *pCandList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSelection( 
            /* [in] */ ULONG nIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSelection( 
            /* [out] */ ULONG *pnIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTargetRange( 
            /* [in] */ ITfRange *pRange) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTargetRange( 
            /* [out] */ ITfRange **ppRange) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUIObject( 
            /* [in] */ REFIID riid,
            /* [out] */ IUnknown **ppunk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFunction( 
            /* [in] */ REFIID riid,
            /* [out] */ IUnknown **ppunk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProcessCommand( 
            /* [in] */ CANDUICOMMAND cmd,
            /* [in] */ INT iParam) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandidateUIVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandidateUI * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandidateUI * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandidateUI * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetClientId )( 
            ITfCandidateUI * This,
            /* [in] */ TfClientId tid);
        
        HRESULT ( STDMETHODCALLTYPE *OpenCandidateUI )( 
            ITfCandidateUI * This,
            /* [in] */ HWND hWnd,
            /* [in] */ ITfDocumentMgr *pdim,
            /* [in] */ TfEditCookie ec,
            /* [in] */ ITfRange *pRange);
        
        HRESULT ( STDMETHODCALLTYPE *CloseCandidateUI )( 
            ITfCandidateUI * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetCandidateList )( 
            ITfCandidateUI * This,
            /* [in] */ ITfCandidateList *pCandList);
        
        HRESULT ( STDMETHODCALLTYPE *SetSelection )( 
            ITfCandidateUI * This,
            /* [in] */ ULONG nIndex);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelection )( 
            ITfCandidateUI * This,
            /* [out] */ ULONG *pnIndex);
        
        HRESULT ( STDMETHODCALLTYPE *SetTargetRange )( 
            ITfCandidateUI * This,
            /* [in] */ ITfRange *pRange);
        
        HRESULT ( STDMETHODCALLTYPE *GetTargetRange )( 
            ITfCandidateUI * This,
            /* [out] */ ITfRange **ppRange);
        
        HRESULT ( STDMETHODCALLTYPE *GetUIObject )( 
            ITfCandidateUI * This,
            /* [in] */ REFIID riid,
            /* [out] */ IUnknown **ppunk);
        
        HRESULT ( STDMETHODCALLTYPE *GetFunction )( 
            ITfCandidateUI * This,
            /* [in] */ REFIID riid,
            /* [out] */ IUnknown **ppunk);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessCommand )( 
            ITfCandidateUI * This,
            /* [in] */ CANDUICOMMAND cmd,
            /* [in] */ INT iParam);
        
        END_INTERFACE
    } ITfCandidateUIVtbl;

    interface ITfCandidateUI
    {
        CONST_VTBL struct ITfCandidateUIVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandidateUI_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITfCandidateUI_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITfCandidateUI_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITfCandidateUI_SetClientId(This,tid)	\
    (This)->lpVtbl -> SetClientId(This,tid)

#define ITfCandidateUI_OpenCandidateUI(This,hWnd,pdim,ec,pRange)	\
    (This)->lpVtbl -> OpenCandidateUI(This,hWnd,pdim,ec,pRange)

#define ITfCandidateUI_CloseCandidateUI(This)	\
    (This)->lpVtbl -> CloseCandidateUI(This)

#define ITfCandidateUI_SetCandidateList(This,pCandList)	\
    (This)->lpVtbl -> SetCandidateList(This,pCandList)

#define ITfCandidateUI_SetSelection(This,nIndex)	\
    (This)->lpVtbl -> SetSelection(This,nIndex)

#define ITfCandidateUI_GetSelection(This,pnIndex)	\
    (This)->lpVtbl -> GetSelection(This,pnIndex)

#define ITfCandidateUI_SetTargetRange(This,pRange)	\
    (This)->lpVtbl -> SetTargetRange(This,pRange)

#define ITfCandidateUI_GetTargetRange(This,ppRange)	\
    (This)->lpVtbl -> GetTargetRange(This,ppRange)

#define ITfCandidateUI_GetUIObject(This,riid,ppunk)	\
    (This)->lpVtbl -> GetUIObject(This,riid,ppunk)

#define ITfCandidateUI_GetFunction(This,riid,ppunk)	\
    (This)->lpVtbl -> GetFunction(This,riid,ppunk)

#define ITfCandidateUI_ProcessCommand(This,cmd,iParam)	\
    (This)->lpVtbl -> ProcessCommand(This,cmd,iParam)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITfCandidateUI_SetClientId_Proxy( 
    ITfCandidateUI * This,
    /* [in] */ TfClientId tid);


void __RPC_STUB ITfCandidateUI_SetClientId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandidateUI_OpenCandidateUI_Proxy( 
    ITfCandidateUI * This,
    /* [in] */ HWND hWnd,
    /* [in] */ ITfDocumentMgr *pdim,
    /* [in] */ TfEditCookie ec,
    /* [in] */ ITfRange *pRange);


void __RPC_STUB ITfCandidateUI_OpenCandidateUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandidateUI_CloseCandidateUI_Proxy( 
    ITfCandidateUI * This);


void __RPC_STUB ITfCandidateUI_CloseCandidateUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandidateUI_SetCandidateList_Proxy( 
    ITfCandidateUI * This,
    /* [in] */ ITfCandidateList *pCandList);


void __RPC_STUB ITfCandidateUI_SetCandidateList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandidateUI_SetSelection_Proxy( 
    ITfCandidateUI * This,
    /* [in] */ ULONG nIndex);


void __RPC_STUB ITfCandidateUI_SetSelection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandidateUI_GetSelection_Proxy( 
    ITfCandidateUI * This,
    /* [out] */ ULONG *pnIndex);


void __RPC_STUB ITfCandidateUI_GetSelection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandidateUI_SetTargetRange_Proxy( 
    ITfCandidateUI * This,
    /* [in] */ ITfRange *pRange);


void __RPC_STUB ITfCandidateUI_SetTargetRange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandidateUI_GetTargetRange_Proxy( 
    ITfCandidateUI * This,
    /* [out] */ ITfRange **ppRange);


void __RPC_STUB ITfCandidateUI_GetTargetRange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandidateUI_GetUIObject_Proxy( 
    ITfCandidateUI * This,
    /* [in] */ REFIID riid,
    /* [out] */ IUnknown **ppunk);


void __RPC_STUB ITfCandidateUI_GetUIObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandidateUI_GetFunction_Proxy( 
    ITfCandidateUI * This,
    /* [in] */ REFIID riid,
    /* [out] */ IUnknown **ppunk);


void __RPC_STUB ITfCandidateUI_GetFunction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITfCandidateUI_ProcessCommand_Proxy( 
    ITfCandidateUI * This,
    /* [in] */ CANDUICOMMAND cmd,
    /* [in] */ INT iParam);


void __RPC_STUB ITfCandidateUI_ProcessCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITfCandidateUI_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_mscandui_0281 */
/* [local] */ 


DEFINE_GUID( CLSID_TFCandidateUI,                    0x93ac9cb8, 0x27d5, 0x4482, 0xbf, 0xdf, 0x68, 0xf2, 0x1c, 0x74, 0x54, 0xa3 );
DEFINE_GUID( IID_ITfCandidateUI,                     0xe45f7b70, 0xa4c3, 0x48cd, 0x8e, 0xdd, 0x3e, 0x78, 0x4a, 0x8f, 0x5e, 0xae );
DEFINE_GUID( IID_ITfCandidateStringFlag,             0x91114c09, 0x1fb3, 0x4771, 0x97, 0x01, 0x74, 0xfd, 0x18, 0xe1, 0x30, 0x9a );
DEFINE_GUID( IID_ITfCandidateStringInlineComment,    0xa55119cc, 0xfed4, 0x49de, 0x85, 0xb2, 0xb6, 0xb5, 0x5f, 0x26, 0xb0, 0x0f );
DEFINE_GUID( IID_ITfCandidateStringPopupComment,     0x66d2ab70, 0xd46c, 0x4543, 0xa4, 0xa9, 0xc6, 0x8b, 0x00, 0xb4, 0x3b, 0x4c );
DEFINE_GUID( IID_ITfCandidateStringColor,            0x43fb8eee, 0xff1c, 0x42a1, 0x81, 0x0c, 0x77, 0x20, 0x1d, 0xf6, 0x71, 0x7e );
DEFINE_GUID( IID_ITfCandidateStringFixture,          0xb85c0208, 0x4fec, 0x418c, 0x85, 0xd0, 0xc6, 0x2a, 0xd2, 0x9a, 0x09, 0x2b );
DEFINE_GUID( IID_ITfCandidateStringIcon,             0x46275059, 0xc606, 0x41b0, 0xaa, 0xc8, 0xc8, 0xaa, 0x48, 0xb8, 0x29, 0x98 );
DEFINE_GUID( IID_ITfCandidateListRawData,            0xcdd01281, 0x8228, 0x45a0, 0x9b, 0x55, 0xcc, 0x44, 0xc2, 0xa2, 0xa0, 0x91 );
DEFINE_GUID( IID_ITfCandidateListExtraCandidate,     0x85bbeeb5, 0xba64, 0x411e, 0xab, 0xb3, 0xed, 0x37, 0x92, 0x75, 0xfa, 0xb4 );
DEFINE_GUID( IID_ITfCandidateListTip,                0xc28a9c90, 0x16b1, 0x4064, 0xa1, 0x90, 0x0b, 0x9e, 0x5f, 0x59, 0x25, 0x39 );
DEFINE_GUID( IID_ITfCandUIKeyTable,                  0x4f9d0bca, 0xc834, 0x4a46, 0x8d, 0xef, 0xb7, 0x54, 0x46, 0x71, 0xd6, 0x02 );
DEFINE_GUID( IID_ITfCandUIMenuExtension,             0x6875610e, 0x8912, 0x44c6, 0xbc, 0xab, 0x48, 0xc6, 0xcf, 0xf9, 0x15, 0xe3 );
DEFINE_GUID( IID_ITfCandUIAutoFilterEventSink,       0x28ae3d7b, 0xc38f, 0x4efa, 0xae, 0xdb, 0xf8, 0xca, 0xcc, 0x1b, 0x74, 0x22 );
DEFINE_GUID( IID_ITfCandUISortEventSink,             0x212d4632, 0x58aa, 0x433e, 0x9a, 0xea, 0x67, 0xa2, 0xef, 0xe7, 0x0c, 0xb9 );
DEFINE_GUID( IID_ITfCandUIMenuEventSink,             0x944f237e, 0xf03b, 0x4bb9, 0xb8, 0xf3, 0x7a, 0xfa, 0x51, 0x58, 0x2d, 0x1a );
DEFINE_GUID( IID_ITfCandUIExtButtonEventSink,        0x5c0fb534, 0x1c7e, 0x48c2, 0x90, 0x8f, 0x00, 0x85, 0x66, 0xc1, 0xcb, 0xb0 );
DEFINE_GUID( IID_ITfCandUIObject,                    0xc45d5b93, 0xf651, 0x41f0, 0xac, 0x45, 0x13, 0x25, 0x2f, 0x35, 0xbf, 0xdc );
DEFINE_GUID( IID_ITfCandUICandWindow,                0x483324b6, 0xc1a8, 0x4a48, 0xa5, 0x43, 0xc4, 0xf2, 0x6f, 0xd3, 0x2a, 0x29 );
DEFINE_GUID( IID_ITfCandUIPopupCommentWindow,        0x6ec789d1, 0x7e81, 0x4ecf, 0xb7, 0x26, 0xf9, 0x44, 0xc6, 0x9e, 0x99, 0x87 );
DEFINE_GUID( IID_ITfCandUICandTipWindow,             0x2650d06e, 0x6ee7, 0x40bb, 0x98, 0x9f, 0x73, 0xee, 0x91, 0x7e, 0x00, 0xce );
DEFINE_GUID( IID_ITfCandUICandListBox,               0x81defe18, 0x4363, 0x4e9f, 0xa0, 0xe4, 0x20, 0x5b, 0xf3, 0xd2, 0x15, 0x9e );
DEFINE_GUID( IID_ITfCandUIMenuButton,                0x77d031f3, 0x87e5, 0x458d, 0x99, 0x9c, 0x23, 0x7d, 0x9a, 0xe4, 0xd8, 0x97 );
DEFINE_GUID( IID_ITfCandUICaption,                   0x7243c0cd, 0x474a, 0x4b71, 0x99, 0xa7, 0xf8, 0x84, 0x28, 0xe0, 0x4a, 0x57 );
DEFINE_GUID( IID_ITfCandUIExtraCandidate,            0xf6510bb9, 0xf697, 0x43d1, 0xa5, 0xe2, 0xef, 0xf2, 0x90, 0xd0, 0x0d, 0xfc );
DEFINE_GUID( IID_ITfCandUIRawData,                   0xafd12370, 0xd6c3, 0x4e9e, 0xa6, 0x25, 0x88, 0xbd, 0xfb, 0xef, 0x7b, 0x2f );
DEFINE_GUID( IID_ITfCandUICandTipButton,             0xb32ec07e, 0x6b08, 0x4ad9, 0xb3, 0x63, 0xe9, 0x6e, 0x2a, 0x06, 0x03, 0x30 );
DEFINE_GUID( IID_ITfCandUICandString,                0xc9e79120, 0x83c5, 0x438e, 0x99, 0x27, 0x43, 0x00, 0x8d, 0xb6, 0xc9, 0x9a );
DEFINE_GUID( IID_ITfCandUICandIndex,                 0xfc0c7cc9, 0xb065, 0x4d8c, 0xb3, 0x7d, 0xee, 0x47, 0x08, 0x35, 0xa4, 0x86 );
DEFINE_GUID( IID_ITfCandUIInlineComment,             0xd4b1e0a2, 0xaaf7, 0x44f4, 0xad, 0xf9, 0x81, 0x8b, 0x20, 0x7b, 0xcf, 0x39 );
DEFINE_GUID( IID_ITfCandUIToolTip,                   0x8b5ec727, 0xf645, 0x4651, 0xa3, 0x18, 0x6a, 0x4e, 0x2e, 0xd6, 0x96, 0x66 );
DEFINE_GUID( IID_ITfCandUIPopupCommentTitle,         0xcb21bc71, 0x1974, 0x4fb6, 0xa9, 0xb0, 0xf5, 0xbc, 0xc8, 0xf3, 0xc4, 0x4b );
DEFINE_GUID( IID_ITfCandUIPopupCommentText,          0x5770e84b, 0x0b59, 0x462d, 0x88, 0x36, 0xd7, 0x0b, 0xbc, 0x8c, 0x87, 0x67 );
DEFINE_GUID( IID_ITfCandUIFnAutoFilter,              0x499394ab, 0x67c3, 0x48a5, 0xa4, 0x5c, 0x50, 0x80, 0x50, 0x9e, 0x0f, 0xfb );
DEFINE_GUID( IID_ITfCandUIFnSort,                    0xdb7495f7, 0xbc6c, 0x420c, 0xa4, 0x9d, 0x74, 0x70, 0xe4, 0x1b, 0x1a, 0x41 );
DEFINE_GUID( IID_ITfCandUIFnKeyConfig,               0x2ccde6d6, 0x6e0a, 0x4231, 0x94, 0x96, 0xce, 0x0d, 0xa8, 0xaa, 0xa2, 0x2b );
DEFINE_GUID( IID_ITfCandUIFnUIConfig,                0x1037334c, 0x8422, 0x4c73, 0xb8, 0x54, 0xf1, 0xa4, 0x61, 0x61, 0x69, 0xd7 );
DEFINE_GUID( IID_ITfCandUIFnExtension,               0xc441b720, 0xc7a0, 0x4823, 0xa2, 0x57, 0x8c, 0x3c, 0xd7, 0xbf, 0x14, 0xba );
DEFINE_GUID( IID_ITfCandUIExtObject,                 0x8cf2f281, 0x9add, 0x4021, 0x9a, 0x0d, 0x62, 0xc0, 0xe1, 0x1b, 0xc3, 0x84 );
DEFINE_GUID( IID_ITfCandUIExtSpace,                  0x1fc2fb39, 0x99fb, 0x4cc4, 0x9f, 0x6f, 0x7f, 0xf3, 0x1f, 0xe9, 0xf1, 0xa2 );
DEFINE_GUID( IID_ITfCandUIExtPushButton,             0x4466c342, 0x4fd6, 0x43e4, 0x8d, 0x23, 0x34, 0xf4, 0x43, 0xef, 0x2d, 0x01 );
DEFINE_GUID( IID_ITfCandUIExtToggleButton,           0xc16a174a, 0x5628, 0x4050, 0x8d, 0xfe, 0x0d, 0x82, 0xe7, 0x26, 0x5b, 0xa1 );
DEFINE_GUID( IID_ITfOptionsCandidateList,			0x605133F7, 0x758D, 0x42fc, 0xA3, 0xFE, 0x10, 0x14, 0x6A, 0x7D, 0x52, 0xF9 );
DEFINE_GUID( IID_ITfCandidateUIContextOwner,         0x9fa4580f, 0xcf50, 0x43f4, 0xaf, 0x09, 0x5e, 0x8c, 0xab, 0xe3, 0x72, 0xc2 );
DEFINE_GUID( GUID_COMPARTMENT_MSCANDIDATEUI_CONTEXT, 0x7a489854, 0x7118, 0x4194, 0xbd, 0x3f, 0xcb, 0x3e, 0xfa, 0x2f, 0x30, 0x79 );
DEFINE_GUID( GUID_COMPARTMENT_MSCANDIDATEUI_CONTEXTOWNER, 0xab2bdcff, 0x42c9, 0x497b, 0xb6, 0xcb, 0x49, 0xa8, 0x33, 0x3d, 0xa5, 0x9d);

#endif // MSCANDUI_DEFINED


extern RPC_IF_HANDLE __MIDL_itf_mscandui_0281_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mscandui_0281_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  HBITMAP_UserSize(     unsigned long *, unsigned long            , HBITMAP * ); 
unsigned char * __RPC_USER  HBITMAP_UserMarshal(  unsigned long *, unsigned char *, HBITMAP * ); 
unsigned char * __RPC_USER  HBITMAP_UserUnmarshal(unsigned long *, unsigned char *, HBITMAP * ); 
void                      __RPC_USER  HBITMAP_UserFree(     unsigned long *, HBITMAP * ); 

unsigned long             __RPC_USER  HENHMETAFILE_UserSize(     unsigned long *, unsigned long            , HENHMETAFILE * ); 
unsigned char * __RPC_USER  HENHMETAFILE_UserMarshal(  unsigned long *, unsigned char *, HENHMETAFILE * ); 
unsigned char * __RPC_USER  HENHMETAFILE_UserUnmarshal(unsigned long *, unsigned char *, HENHMETAFILE * ); 
void                      __RPC_USER  HENHMETAFILE_UserFree(     unsigned long *, HENHMETAFILE * ); 

unsigned long             __RPC_USER  HICON_UserSize(     unsigned long *, unsigned long            , HICON * ); 
unsigned char * __RPC_USER  HICON_UserMarshal(  unsigned long *, unsigned char *, HICON * ); 
unsigned char * __RPC_USER  HICON_UserUnmarshal(unsigned long *, unsigned char *, HICON * ); 
void                      __RPC_USER  HICON_UserFree(     unsigned long *, HICON * ); 

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long *, unsigned long            , HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal(  unsigned long *, unsigned char *, HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long *, HWND * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



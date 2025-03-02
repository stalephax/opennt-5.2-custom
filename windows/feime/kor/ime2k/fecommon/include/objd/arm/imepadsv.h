

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

#ifndef __imepadsv_h__
#define __imepadsv_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IImePadServer_FWD_DEFINED__
#define __IImePadServer_FWD_DEFINED__
typedef interface IImePadServer IImePadServer;
#endif 	/* __IImePadServer_FWD_DEFINED__ */


#ifndef __IImePadServerSHM_FWD_DEFINED__
#define __IImePadServerSHM_FWD_DEFINED__
typedef interface IImePadServerSHM IImePadServerSHM;
#endif 	/* __IImePadServerSHM_FWD_DEFINED__ */


#ifndef __IImePadCallback_FWD_DEFINED__
#define __IImePadCallback_FWD_DEFINED__
typedef interface IImePadCallback IImePadCallback;
#endif 	/* __IImePadCallback_FWD_DEFINED__ */


#ifndef __IImePadServerComponent_FWD_DEFINED__
#define __IImePadServerComponent_FWD_DEFINED__

#ifdef __cplusplus
typedef class IImePadServerComponent IImePadServerComponent;
#else
typedef struct IImePadServerComponent IImePadServerComponent;
#endif /* __cplusplus */

#endif 	/* __IImePadServerComponent_FWD_DEFINED__ */


#ifndef __ISHMClassFactory_FWD_DEFINED__
#define __ISHMClassFactory_FWD_DEFINED__
typedef interface ISHMClassFactory ISHMClassFactory;
#endif 	/* __ISHMClassFactory_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_imepadsv_0000 */
/* [local] */ 

#pragma pack(8)
//////////////////////////////////////////////////////////////////
//IMEPad's client IME's substitute INPUT ID 
#define IMEINPUTID_DEFAULT		0	//Default  IME input ID
#define IMEINPUTID_BOPOMOFO		0	//BOPOMOFO IME input ID
#define IMEINPUTID_CHANGJIE		1	//Changjie IME input ID

#define SZ_IMEPADCLIENTCLASS_IMM		TEXT("msimePad81IMMCLClass")
#define SZ_IMEPADSERVERCLASS_IMM		TEXT("msimePad81IMMSVClass")
#define SZ_IMEPADCLIENTCLASS_UIM		TEXT("msimePad81UIMCLClass")
#define SZ_IMEPADSERVERCLASS_UIM		TEXT("msimePad81UIMSVClass")

//PassData's Data structure ID
#define IMEDATAID_ICONINFO         1
#define IMEDATAID_BITMAPINFO       2
#define IMEDATAID_CONTROL          10
#define IMEDATAID_STRING           11
#define IMEDATAID_STRINGCAND		  12
#define IMEDATAID_COMPOSITION	  13
#define IMEDATAID_APPINFO		  20
#define IMEDATAID_CONVSTATUS		  30
//Command ID
#define IMECMDID_INSERTSTRING		    10
#define IMECMDID_DELETESTRING			11
#define IMECMDID_CHANGESTRING			12
#define IMECMDID_INSERTSTRINGINFO	    13
#define IMECMDID_CHANGESTRINGINFO		14
#define IMECMDID_INSERTSTRINGCAND		15
#define IMECMDID_INSERTSTRINGCANDINFO	16
#define IMECMDID_CHANGESTRINGCANDINFO	17
#define IMECMDID_GETCOMPOSITIONSTRING	18
#define IMECMDID_GETCOMPOSITIONINFO		19
#define IMECMDID_GETAPPLHWND			    20
#define IMECMDID_SENDCTRL			    21
#define IMECMDID_GETCONVERSIONSTATUS	    22
#define IMECMDVALUE_DEFAULT_INSERT_POS	((DWORD)~0)
//Common data header
typedef struct tagIMEDATAHEADER
    {
    DWORD dwSize;
    DWORD dwCmdID;
    DWORD dwDataID;
    DWORD dwDummy;
    } 	IMEDATAHEADER;

typedef struct tagIMEDATAHEADER *LPIMEDATAHEADER;

typedef struct tagIMEDATACONTROL
    {
    IMEDATAHEADER header;
    DWORD dwControl;
    DWORD dwReserved1;
    DWORD dwReserved2;
    } 	IMEDATACONTROL;

typedef struct tagIMEDATACONTROL *LPIMEDATACONTROL;

typedef struct tagIMEDATASTRING
    {
    IMEDATAHEADER header;
    DWORD dwStartPos;
    DWORD dwDeleteLength;
    BOOL fPreConv;
    DWORD dwCharID;
    DWORD dwInfoMask;
    DWORD dwDummy;
    WCHAR wChar[ 1 ];
    } 	IMEDATASTRING;

typedef struct tagIMEDATASTRING *LPIMEDATASTRING;

typedef struct tagIMEDATASTRINGCAND
    {
    IMEDATAHEADER header;
    DWORD dwStartPos;
    DWORD dwDeleteLength;
    BOOL fPreConv;
    DWORD dwCharID;
    DWORD dwInfoMask;
    DWORD dwExtraInfoSize;
    DWORD dwExtraInfoOffset;
    DWORD dwSelIndex;
    DWORD dwStringCount;
    DWORD dwOffsetString[ 1 ];
    } 	IMEDATASTRINGCAND;

typedef struct tagIMEDATASTRINGCAND *LPIMEDATASTRINGCAND;

typedef struct tagIMEDATACOMPOSITION
    {
    IMEDATAHEADER header;
    DWORD dwCaretPos;
    DWORD dwUndeterminedStartPos;
    DWORD dwUndeterminedLength;
    DWORD dwEditStartPos;
    DWORD dwEditLength;
    DWORD dwStringCount;
    DWORD dwOffsetString;
    DWORD dwOffsetCharID;
    DWORD dwReserved1;
    DWORD dwReserved2;
    } 	IMEDATACOMPOSITION;

typedef struct tagIMEDATACOMPOSITION *LPIMEDATACOMPOSITION;

typedef struct tagIMEDATAAPPLINFO
    {
    IMEDATAHEADER header;
    HWND hwndApp;
    DWORD dwProcessID;
    DWORD dwThreadID;
    } 	IMEDATAAPPLINFO;

typedef struct tagIMEDATAAPPLINFO *LPIMEDATAAPPLINFO;

typedef struct tagIMEDATACONVSTATUS
    {
    IMEDATAHEADER header;
    DWORD dwConversionMode;
    DWORD dwSentenceMode;
    } 	IMEDATACONVSTATUS;

typedef struct tagIMEDATACONVSTATUS *LPIMEDATACONVSTATUS;

#pragma pack()
//////////////////////////////////////////////////////////////////
//
// IMEPADAPPLETCFG structure
//
#pragma pack(1)

#define IMEPADAPPLETCFGMASK_TITLE           0x0001
#define IMEPADAPPLETCFGMASK_TITLEFONTFACE   0x0002
#define IMEPADAPPLETCFGMASK_CLSID           0x0004
#define IMEPADAPPLETCFGMASK_IID             0x0008
#define IMEPADAPPLETCFGMASK_CATID           0x0010
#define IMEPADAPPLETCFGMASK_ICON            0x0020
#define IMEPADAPPLETCFGMASK_ALL             0x003F

typedef struct tagIMEPADAPPLETCONFIG
    {
    DWORD dwMask;
    WCHAR wchTitle[ 64 ];
    WCHAR wchTitleFontFace[ 32 ];
    DWORD dwCharSet;
    CLSID clsId;
    IID iid;
    DWORD dwCategory;
    LPARAM hIcon;
    LPARAM lReserved1;
    LPARAM lReserved2;
    } 	IMEPADAPPLETCONFIG;

typedef struct tagIMEPADAPPLETCONFIG *LPIMEPADAPPLETCONFIG;

typedef struct tagIMEPADAPPLYCANDINFO
    {
    LPWSTR lpwstrDisplay;
    LPWSTR lpwstrReading;
    } 	IMEPADAPPLYCANDINFO;

typedef struct tagIMEPADAPPLYCANDINFO *LPIMEPADAPPLYCANDINFO;

#pragma pack()



extern RPC_IF_HANDLE __MIDL_itf_imepadsv_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imepadsv_0000_v0_0_s_ifspec;

#ifndef __IImePadServer_INTERFACE_DEFINED__
#define __IImePadServer_INTERFACE_DEFINED__

/* interface IImePadServer */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IImePadServer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("efb26460-aeba-11d2-83d2-00c04f7a06e5")
    IImePadServer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ DWORD dwProccessID,
            /* [in] */ DWORD dwThreadID,
            /* [in] */ DWORD dwImeLangId,
            /* [in] */ DWORD dwImeSubId,
            /* [in] */ BOOL fUIM,
            /* [in] */ IImePadCallback *lpIImePadCallback,
            /* [out] */ LPARAM *pdwReg,
            /* [in] */ LPARAM dwReserved1,
            /* [in] */ LPARAM dwReserved2) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Terminate( 
            /* [in] */ LPARAM dwReg,
            /* [in] */ LPARAM dwReserved1) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowUI( 
            /* [in] */ BOOL fShow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsVisible( 
            /* [out][in] */ BOOL *pfVisible) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ UINT notify,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifyWithData( 
            /* [in] */ UINT notify,
            /* [in] */ DWORD dwCharID,
            /* [in] */ DWORD dwSelIndex,
            /* [string][in] */ wchar_t *lpwstrDisplay,
            /* [string][in] */ wchar_t *lpwstrReading) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ActivateApplet( 
            /* [in] */ UINT activateId,
            /* [in] */ LPARAM dwActivateParam,
            /* [string][in] */ wchar_t *lpwstrAppletParam1,
            /* [string][in] */ wchar_t *lpwstrAppletParam2) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAppletConfigList( 
            /* [in] */ DWORD dwMask,
            /* [out] */ UINT *pCount,
            /* [size_is][size_is][out] */ IMEPADAPPLETCONFIG **ppCfgList) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IImePadServerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IImePadServer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IImePadServer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IImePadServer * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IImePadServer * This,
            /* [in] */ DWORD dwProccessID,
            /* [in] */ DWORD dwThreadID,
            /* [in] */ DWORD dwImeLangId,
            /* [in] */ DWORD dwImeSubId,
            /* [in] */ BOOL fUIM,
            /* [in] */ IImePadCallback *lpIImePadCallback,
            /* [out] */ LPARAM *pdwReg,
            /* [in] */ LPARAM dwReserved1,
            /* [in] */ LPARAM dwReserved2);
        
        HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IImePadServer * This,
            /* [in] */ LPARAM dwReg,
            /* [in] */ LPARAM dwReserved1);
        
        HRESULT ( STDMETHODCALLTYPE *ShowUI )( 
            IImePadServer * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsVisible )( 
            IImePadServer * This,
            /* [out][in] */ BOOL *pfVisible);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IImePadServer * This,
            /* [in] */ UINT notify,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyWithData )( 
            IImePadServer * This,
            /* [in] */ UINT notify,
            /* [in] */ DWORD dwCharID,
            /* [in] */ DWORD dwSelIndex,
            /* [string][in] */ wchar_t *lpwstrDisplay,
            /* [string][in] */ wchar_t *lpwstrReading);
        
        HRESULT ( STDMETHODCALLTYPE *ActivateApplet )( 
            IImePadServer * This,
            /* [in] */ UINT activateId,
            /* [in] */ LPARAM dwActivateParam,
            /* [string][in] */ wchar_t *lpwstrAppletParam1,
            /* [string][in] */ wchar_t *lpwstrAppletParam2);
        
        HRESULT ( STDMETHODCALLTYPE *GetAppletConfigList )( 
            IImePadServer * This,
            /* [in] */ DWORD dwMask,
            /* [out] */ UINT *pCount,
            /* [size_is][size_is][out] */ IMEPADAPPLETCONFIG **ppCfgList);
        
        END_INTERFACE
    } IImePadServerVtbl;

    interface IImePadServer
    {
        CONST_VTBL struct IImePadServerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IImePadServer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IImePadServer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IImePadServer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IImePadServer_Initialize(This,dwProccessID,dwThreadID,dwImeLangId,dwImeSubId,fUIM,lpIImePadCallback,pdwReg,dwReserved1,dwReserved2)	\
    (This)->lpVtbl -> Initialize(This,dwProccessID,dwThreadID,dwImeLangId,dwImeSubId,fUIM,lpIImePadCallback,pdwReg,dwReserved1,dwReserved2)

#define IImePadServer_Terminate(This,dwReg,dwReserved1)	\
    (This)->lpVtbl -> Terminate(This,dwReg,dwReserved1)

#define IImePadServer_ShowUI(This,fShow)	\
    (This)->lpVtbl -> ShowUI(This,fShow)

#define IImePadServer_IsVisible(This,pfVisible)	\
    (This)->lpVtbl -> IsVisible(This,pfVisible)

#define IImePadServer_Notify(This,notify,wParam,lParam)	\
    (This)->lpVtbl -> Notify(This,notify,wParam,lParam)

#define IImePadServer_NotifyWithData(This,notify,dwCharID,dwSelIndex,lpwstrDisplay,lpwstrReading)	\
    (This)->lpVtbl -> NotifyWithData(This,notify,dwCharID,dwSelIndex,lpwstrDisplay,lpwstrReading)

#define IImePadServer_ActivateApplet(This,activateId,dwActivateParam,lpwstrAppletParam1,lpwstrAppletParam2)	\
    (This)->lpVtbl -> ActivateApplet(This,activateId,dwActivateParam,lpwstrAppletParam1,lpwstrAppletParam2)

#define IImePadServer_GetAppletConfigList(This,dwMask,pCount,ppCfgList)	\
    (This)->lpVtbl -> GetAppletConfigList(This,dwMask,pCount,ppCfgList)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IImePadServer_Initialize_Proxy( 
    IImePadServer * This,
    /* [in] */ DWORD dwProccessID,
    /* [in] */ DWORD dwThreadID,
    /* [in] */ DWORD dwImeLangId,
    /* [in] */ DWORD dwImeSubId,
    /* [in] */ BOOL fUIM,
    /* [in] */ IImePadCallback *lpIImePadCallback,
    /* [out] */ LPARAM *pdwReg,
    /* [in] */ LPARAM dwReserved1,
    /* [in] */ LPARAM dwReserved2);


void __RPC_STUB IImePadServer_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImePadServer_Terminate_Proxy( 
    IImePadServer * This,
    /* [in] */ LPARAM dwReg,
    /* [in] */ LPARAM dwReserved1);


void __RPC_STUB IImePadServer_Terminate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImePadServer_ShowUI_Proxy( 
    IImePadServer * This,
    /* [in] */ BOOL fShow);


void __RPC_STUB IImePadServer_ShowUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImePadServer_IsVisible_Proxy( 
    IImePadServer * This,
    /* [out][in] */ BOOL *pfVisible);


void __RPC_STUB IImePadServer_IsVisible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImePadServer_Notify_Proxy( 
    IImePadServer * This,
    /* [in] */ UINT notify,
    /* [in] */ WPARAM wParam,
    /* [in] */ LPARAM lParam);


void __RPC_STUB IImePadServer_Notify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImePadServer_NotifyWithData_Proxy( 
    IImePadServer * This,
    /* [in] */ UINT notify,
    /* [in] */ DWORD dwCharID,
    /* [in] */ DWORD dwSelIndex,
    /* [string][in] */ wchar_t *lpwstrDisplay,
    /* [string][in] */ wchar_t *lpwstrReading);


void __RPC_STUB IImePadServer_NotifyWithData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImePadServer_ActivateApplet_Proxy( 
    IImePadServer * This,
    /* [in] */ UINT activateId,
    /* [in] */ LPARAM dwActivateParam,
    /* [string][in] */ wchar_t *lpwstrAppletParam1,
    /* [string][in] */ wchar_t *lpwstrAppletParam2);


void __RPC_STUB IImePadServer_ActivateApplet_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImePadServer_GetAppletConfigList_Proxy( 
    IImePadServer * This,
    /* [in] */ DWORD dwMask,
    /* [out] */ UINT *pCount,
    /* [size_is][size_is][out] */ IMEPADAPPLETCONFIG **ppCfgList);


void __RPC_STUB IImePadServer_GetAppletConfigList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IImePadServer_INTERFACE_DEFINED__ */


#ifndef __IImePadServerSHM_INTERFACE_DEFINED__
#define __IImePadServerSHM_INTERFACE_DEFINED__

/* interface IImePadServerSHM */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IImePadServerSHM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cefcbea2-bbc2-11d4-84c0-00c04f7a06e5")
    IImePadServerSHM : public IImePadServer
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IImePadServerSHMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IImePadServerSHM * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IImePadServerSHM * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IImePadServerSHM * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IImePadServerSHM * This,
            /* [in] */ DWORD dwProccessID,
            /* [in] */ DWORD dwThreadID,
            /* [in] */ DWORD dwImeLangId,
            /* [in] */ DWORD dwImeSubId,
            /* [in] */ BOOL fUIM,
            /* [in] */ IImePadCallback *lpIImePadCallback,
            /* [out] */ LPARAM *pdwReg,
            /* [in] */ LPARAM dwReserved1,
            /* [in] */ LPARAM dwReserved2);
        
        HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IImePadServerSHM * This,
            /* [in] */ LPARAM dwReg,
            /* [in] */ LPARAM dwReserved1);
        
        HRESULT ( STDMETHODCALLTYPE *ShowUI )( 
            IImePadServerSHM * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsVisible )( 
            IImePadServerSHM * This,
            /* [out][in] */ BOOL *pfVisible);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IImePadServerSHM * This,
            /* [in] */ UINT notify,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyWithData )( 
            IImePadServerSHM * This,
            /* [in] */ UINT notify,
            /* [in] */ DWORD dwCharID,
            /* [in] */ DWORD dwSelIndex,
            /* [string][in] */ wchar_t *lpwstrDisplay,
            /* [string][in] */ wchar_t *lpwstrReading);
        
        HRESULT ( STDMETHODCALLTYPE *ActivateApplet )( 
            IImePadServerSHM * This,
            /* [in] */ UINT activateId,
            /* [in] */ LPARAM dwActivateParam,
            /* [string][in] */ wchar_t *lpwstrAppletParam1,
            /* [string][in] */ wchar_t *lpwstrAppletParam2);
        
        HRESULT ( STDMETHODCALLTYPE *GetAppletConfigList )( 
            IImePadServerSHM * This,
            /* [in] */ DWORD dwMask,
            /* [out] */ UINT *pCount,
            /* [size_is][size_is][out] */ IMEPADAPPLETCONFIG **ppCfgList);
        
        END_INTERFACE
    } IImePadServerSHMVtbl;

    interface IImePadServerSHM
    {
        CONST_VTBL struct IImePadServerSHMVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IImePadServerSHM_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IImePadServerSHM_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IImePadServerSHM_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IImePadServerSHM_Initialize(This,dwProccessID,dwThreadID,dwImeLangId,dwImeSubId,fUIM,lpIImePadCallback,pdwReg,dwReserved1,dwReserved2)	\
    (This)->lpVtbl -> Initialize(This,dwProccessID,dwThreadID,dwImeLangId,dwImeSubId,fUIM,lpIImePadCallback,pdwReg,dwReserved1,dwReserved2)

#define IImePadServerSHM_Terminate(This,dwReg,dwReserved1)	\
    (This)->lpVtbl -> Terminate(This,dwReg,dwReserved1)

#define IImePadServerSHM_ShowUI(This,fShow)	\
    (This)->lpVtbl -> ShowUI(This,fShow)

#define IImePadServerSHM_IsVisible(This,pfVisible)	\
    (This)->lpVtbl -> IsVisible(This,pfVisible)

#define IImePadServerSHM_Notify(This,notify,wParam,lParam)	\
    (This)->lpVtbl -> Notify(This,notify,wParam,lParam)

#define IImePadServerSHM_NotifyWithData(This,notify,dwCharID,dwSelIndex,lpwstrDisplay,lpwstrReading)	\
    (This)->lpVtbl -> NotifyWithData(This,notify,dwCharID,dwSelIndex,lpwstrDisplay,lpwstrReading)

#define IImePadServerSHM_ActivateApplet(This,activateId,dwActivateParam,lpwstrAppletParam1,lpwstrAppletParam2)	\
    (This)->lpVtbl -> ActivateApplet(This,activateId,dwActivateParam,lpwstrAppletParam1,lpwstrAppletParam2)

#define IImePadServerSHM_GetAppletConfigList(This,dwMask,pCount,ppCfgList)	\
    (This)->lpVtbl -> GetAppletConfigList(This,dwMask,pCount,ppCfgList)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IImePadServerSHM_INTERFACE_DEFINED__ */


#ifndef __IImePadCallback_INTERFACE_DEFINED__
#define __IImePadCallback_INTERFACE_DEFINED__

/* interface IImePadCallback */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IImePadCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("efb26461-aeba-11d2-83d2-00c04f7a06e5")
    IImePadCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnStart( 
            /* [in] */ DWORD dwParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnClose( 
            /* [in] */ DWORD dwParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnPing( 
            /* [in] */ DWORD dwParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PassData( 
            /* [in] */ long nSize,
            /* [size_is][in] */ byte *pByte,
            /* [out][in] */ DWORD *pdwCharID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReceiveData( 
            /* [in] */ DWORD dwCmdID,
            /* [in] */ DWORD dwDataID,
            /* [out] */ long *pSize,
            /* [size_is][size_is][out] */ byte **ppByte) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IImePadCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IImePadCallback * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IImePadCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IImePadCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnStart )( 
            IImePadCallback * This,
            /* [in] */ DWORD dwParam);
        
        HRESULT ( STDMETHODCALLTYPE *OnClose )( 
            IImePadCallback * This,
            /* [in] */ DWORD dwParam);
        
        HRESULT ( STDMETHODCALLTYPE *OnPing )( 
            IImePadCallback * This,
            /* [in] */ DWORD dwParam);
        
        HRESULT ( STDMETHODCALLTYPE *PassData )( 
            IImePadCallback * This,
            /* [in] */ long nSize,
            /* [size_is][in] */ byte *pByte,
            /* [out][in] */ DWORD *pdwCharID);
        
        HRESULT ( STDMETHODCALLTYPE *ReceiveData )( 
            IImePadCallback * This,
            /* [in] */ DWORD dwCmdID,
            /* [in] */ DWORD dwDataID,
            /* [out] */ long *pSize,
            /* [size_is][size_is][out] */ byte **ppByte);
        
        END_INTERFACE
    } IImePadCallbackVtbl;

    interface IImePadCallback
    {
        CONST_VTBL struct IImePadCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IImePadCallback_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IImePadCallback_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IImePadCallback_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IImePadCallback_OnStart(This,dwParam)	\
    (This)->lpVtbl -> OnStart(This,dwParam)

#define IImePadCallback_OnClose(This,dwParam)	\
    (This)->lpVtbl -> OnClose(This,dwParam)

#define IImePadCallback_OnPing(This,dwParam)	\
    (This)->lpVtbl -> OnPing(This,dwParam)

#define IImePadCallback_PassData(This,nSize,pByte,pdwCharID)	\
    (This)->lpVtbl -> PassData(This,nSize,pByte,pdwCharID)

#define IImePadCallback_ReceiveData(This,dwCmdID,dwDataID,pSize,ppByte)	\
    (This)->lpVtbl -> ReceiveData(This,dwCmdID,dwDataID,pSize,ppByte)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IImePadCallback_OnStart_Proxy( 
    IImePadCallback * This,
    /* [in] */ DWORD dwParam);


void __RPC_STUB IImePadCallback_OnStart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImePadCallback_OnClose_Proxy( 
    IImePadCallback * This,
    /* [in] */ DWORD dwParam);


void __RPC_STUB IImePadCallback_OnClose_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImePadCallback_OnPing_Proxy( 
    IImePadCallback * This,
    /* [in] */ DWORD dwParam);


void __RPC_STUB IImePadCallback_OnPing_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImePadCallback_PassData_Proxy( 
    IImePadCallback * This,
    /* [in] */ long nSize,
    /* [size_is][in] */ byte *pByte,
    /* [out][in] */ DWORD *pdwCharID);


void __RPC_STUB IImePadCallback_PassData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImePadCallback_ReceiveData_Proxy( 
    IImePadCallback * This,
    /* [in] */ DWORD dwCmdID,
    /* [in] */ DWORD dwDataID,
    /* [out] */ long *pSize,
    /* [size_is][size_is][out] */ byte **ppByte);


void __RPC_STUB IImePadCallback_ReceiveData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IImePadCallback_INTERFACE_DEFINED__ */



#ifndef __IImePadServerLib_LIBRARY_DEFINED__
#define __IImePadServerLib_LIBRARY_DEFINED__

/* library IImePadServerLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_IImePadServerLib;

EXTERN_C const CLSID CLSID_IImePadServerComponent;

#ifdef __cplusplus

class DECLSPEC_UUID("cefcbea1-bbc2-11d4-84c0-00c04f7a06e5")
IImePadServerComponent;
#endif
#endif /* __IImePadServerLib_LIBRARY_DEFINED__ */

#ifndef __ISHMClassFactory_INTERFACE_DEFINED__
#define __ISHMClassFactory_INTERFACE_DEFINED__

/* interface ISHMClassFactory */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISHMClassFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("edc298c2-038d-11d4-8464-00c04f7a06e5")
    ISHMClassFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateObject( 
            /* [in] */ REFIID refiid,
            /* [iid_is][out] */ void **p) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISHMClassFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISHMClassFactory * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISHMClassFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISHMClassFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateObject )( 
            ISHMClassFactory * This,
            /* [in] */ REFIID refiid,
            /* [iid_is][out] */ void **p);
        
        END_INTERFACE
    } ISHMClassFactoryVtbl;

    interface ISHMClassFactory
    {
        CONST_VTBL struct ISHMClassFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISHMClassFactory_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISHMClassFactory_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISHMClassFactory_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISHMClassFactory_CreateObject(This,refiid,p)	\
    (This)->lpVtbl -> CreateObject(This,refiid,p)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISHMClassFactory_CreateObject_Proxy( 
    ISHMClassFactory * This,
    /* [in] */ REFIID refiid,
    /* [iid_is][out] */ void **p);


void __RPC_STUB ISHMClassFactory_CreateObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISHMClassFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_imepadsv_0119 */
/* [local] */ 

//define
//----------------------------------------------------------------
//IImePadApplet category ID
//----------------------------------------------------------------
#define IPACID_NONE                 0x0000
#define IPACID_SOFTKEY              0x0001
#define IPACID_HANDWRITING          0x0002
#define IPACID_STROKESEARCH         0x0003
#define IPACID_RADICALSEARCH        0x0004
#define IPACID_SYMBOLSEARCH         0x0005
#define IPACID_VOICE                0x0006
#define IPACID_EPWING               0x0007
#define IPACID_OCR                  0x0008
#define IPACID_USER                 0x0100

//////////////////////////////////////////////////////////////////
//
//Notify message for IImePadInternal::Notify()
//
//----------------------------------------------------------------
// Notify composition string's window rect
// WPARAM wParam: no use
// LPARAM lParam: LPRECT lpRect = (LPRECT)lParam;
//----------------------------------------------------------------
#define IMEPADNOTIFY_RECTCHANGED				0x0001

//----------------------------------------------------------------
// Notify context's activation
// WPARAM wParam: BOOL fActivate = (BOOL)wParam;
// LPARAM lParam: no use
//----------------------------------------------------------------
#define IMEPADNOTIFY_ACTIVATECONTEXT			0x0002

//----------------------------------------------------------------
// Notify for mode changed
// WPARAM wParam: (INT) convMode    = (INT)wParam;
// LPARAM lParam: (INT) sentenceMode= (INT)lParam;
// conversion mode and sentence mode are IME_CMODE_XX or IME_SMODE_XX 
//----------------------------------------------------------------
#define	IMEPADNOTIFY_MODECHANGED				0x0006

//----------------------------------------------------------------
// Notify for start composition 
// WPARAM wParam: not defined
// LPARAM lParam: not defined
//----------------------------------------------------------------
#define IMEPADNOTIFY_STARTCOMPOSITION			0x0007

//----------------------------------------------------------------
// Notify for composition
// WPARAM wParam: not defined
// LPARAM lParam: not defined
//----------------------------------------------------------------
#define IMEPADNOTIFY_COMPOSITION				0x0008

//----------------------------------------------------------------
// Notify for end composition 
// WPARAM wParam: not defined
// LPARAM lParam: not defined
//----------------------------------------------------------------
#define IMEPADNOTIFY_ENDCOMPOSITION				0x0009

//----------------------------------------------------------------
// Notify for open candidate
// WPARAM wParam: not defined
// LPARAM lParam: not defined
//----------------------------------------------------------------
#define IMEPADNOTIFY_OPENCANDIDATE				0x000A

//----------------------------------------------------------------
// Notify for close candidate
// WPARAM wParam: not defined
// LPARAM lParam: not defined
//----------------------------------------------------------------
#define IMEPADNOTIFY_CLOSECANDIDATE				0x000B

//----------------------------------------------------------------
// Notify for Candidate Applied
// WPARAM wParam: dwCharId = (DWORD)wParam;
// LPARAM lParam: iSelIndex = (INT)lParam;
//----------------------------------------------------------------
#define IMEPADNOTIFY_APPLYCANDIDATE				0x000C

//----------------------------------------------------------------
// Notify for Querying Candidate
// WPARAM wParam: dwCharId = (DWORD)wParam;
// LPARAM lParam: 0. not used.
//----------------------------------------------------------------
#define IMEPADNOTIFY_QUERYCANDIDATE				0x000D


//----------------------------------------------------------------
// Notify for Candidate Applied
// WPARAM wParam: dwCharId = (DWORD)wParam;
// LPARAM lParam: lpApplyCandEx = (LPIMEPADAPPLYCANDEX)lParam;
//----------------------------------------------------------------
#define IMEPADNOTIFY_APPLYCANDIDATE_EX			0x000E



//----------------------------------------------------------------
//Notify for Destroying ImePad's current thread window
//WPARAM wParam: no use 
//LPARAM lParam: no use
//----------------------------------------------------------------
#define IMEPADNOTIFY_ONIMEWINDOWDESTROY			0x0100




//////////////////////////////////////////////////////////////////
//
// ActivateId for IImePadInternal::ActivateApplet()
//
//----------------------------------------------------------------
// IMEPADACTID_ACTIVATEBYCATID requests ImePad to 
// Activate Applet by CategoryId.
//
// UINT		activateId:			IMEPADACTID_ACTIVATEBYCATID;
// LPARAM	lParamActivate:		IPACID_XXXX;
// LPWSTR	lpwstrAppletParam1:	string passed to applet.
// LPWSTR	lpwstrAppletParam2:	string passed to applet.

#define IMEPADACTID_ACTIVATEBYCATID			1000

//----------------------------------------------------------------
// IMEPADACTID_ACTIVATEBYIID requests ImePad to 
// activate applet by Interface ID
//
// UINT		activateId:			IMEPADACTID_ACTIVATEBYIID;
// DWORD	dwActivateParam:	(DWORD)(IID *)pIID;
// LPWSTR	lpwstrAppletParam1:	string passed to applet.
// LPWSTR	lpwstrAppletParam2:	string passed to applet.

#define IMEPADACTID_ACTIVATEBYIID			1001

//----------------------------------------------------------------
// IMEPADACTID_ACTIVATEBYNAME requests ImePad to 
// activaet applet by applet's title name.
//
// UINT		activateId:			IMEPADACTID_ACTIVATEBYNAME
// DWORD	dwActivateParam:	(DWORD)(LPWSTR)lpwstrTitle;
// LPWSTR	lpwstrAppletParam1:	string passed to applet.
// LPWSTR	lpwstrAppletParam2:	string passed to applet.

#define IMEPADACTID_ACTIVATEBYNAME			1003


extern RPC_IF_HANDLE __MIDL_itf_imepadsv_0119_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imepadsv_0119_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



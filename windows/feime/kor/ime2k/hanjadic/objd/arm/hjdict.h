

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for hjdict.idl:
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


#ifndef __hjdict_h__
#define __hjdict_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IHJDict_FWD_DEFINED__
#define __IHJDict_FWD_DEFINED__
typedef interface IHJDict IHJDict;
#endif 	/* __IHJDict_FWD_DEFINED__ */


#ifndef __HJDict_FWD_DEFINED__
#define __HJDict_FWD_DEFINED__

#ifdef __cplusplus
typedef class HJDict HJDict;
#else
typedef struct HJDict HJDict;
#endif /* __cplusplus */

#endif 	/* __HJDict_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_hjdict_0000 */
/* [local] */ 

/*-------------------------------------------------------------------------
 *
 *  Korean Hanja Dictionary interface
 *  Copyright 2000 Microsoft Corporation.
 *
 *  GENERATED FILE!!!  DO NOT EDIT!!!
 *
 *------------------------------------------------------------------------*/
#ifndef _HJDICT_H__INCLUDED
#define _HJDICT_H__INCLUDED


extern RPC_IF_HANDLE __MIDL_itf_hjdict_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hjdict_0000_v0_0_s_ifspec;


#ifndef __HJDICTLib_LIBRARY_DEFINED__
#define __HJDICTLib_LIBRARY_DEFINED__

/* library HJDICTLib */
/* [helpstring][version][uuid] */ 



EXTERN_C const IID LIBID_HJDICTLib;

#ifndef __IHJDict_INTERFACE_DEFINED__
#define __IHJDict_INTERFACE_DEFINED__

/* interface IHJDict */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IHJDict;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("22BA0232-F708-485A-917B-FE70B4222D89")
    IHJDict : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Init( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LookupHangulOfHanja( 
            /* [in] */ LPCWSTR pwszHanja,
            /* [out] */ LPWSTR pwszHangul,
            /* [in] */ int cchHangul) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LookupMeaning( 
            /* [in] */ WCHAR wchHanja,
            /* [out] */ LPWSTR pwszMeaning,
            /* [in] */ int cchMeaning) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHJDictVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IHJDict * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IHJDict * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IHJDict * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IHJDict * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LookupHangulOfHanja )( 
            IHJDict * This,
            /* [in] */ LPCWSTR pwszHanja,
            /* [out] */ LPWSTR pwszHangul,
            /* [in] */ int cchHangul);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LookupMeaning )( 
            IHJDict * This,
            /* [in] */ WCHAR wchHanja,
            /* [out] */ LPWSTR pwszMeaning,
            /* [in] */ int cchMeaning);
        
        END_INTERFACE
    } IHJDictVtbl;

    interface IHJDict
    {
        CONST_VTBL struct IHJDictVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHJDict_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IHJDict_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IHJDict_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IHJDict_Init(This)	\
    (This)->lpVtbl -> Init(This)

#define IHJDict_LookupHangulOfHanja(This,pwszHanja,pwszHangul,cchHangul)	\
    (This)->lpVtbl -> LookupHangulOfHanja(This,pwszHanja,pwszHangul,cchHangul)

#define IHJDict_LookupMeaning(This,wchHanja,pwszMeaning,cchMeaning)	\
    (This)->lpVtbl -> LookupMeaning(This,wchHanja,pwszMeaning,cchMeaning)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IHJDict_Init_Proxy( 
    IHJDict * This);


void __RPC_STUB IHJDict_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IHJDict_LookupHangulOfHanja_Proxy( 
    IHJDict * This,
    /* [in] */ LPCWSTR pwszHanja,
    /* [out] */ LPWSTR pwszHangul,
    /* [in] */ int cchHangul);


void __RPC_STUB IHJDict_LookupHangulOfHanja_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IHJDict_LookupMeaning_Proxy( 
    IHJDict * This,
    /* [in] */ WCHAR wchHanja,
    /* [out] */ LPWSTR pwszMeaning,
    /* [in] */ int cchMeaning);


void __RPC_STUB IHJDict_LookupMeaning_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IHJDict_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HJDict;

#ifdef __cplusplus

class DECLSPEC_UUID("0631B62B-67EA-46D5-B5C9-E632E0D1493D")
HJDict;
#endif
#endif /* __HJDICTLib_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_hjdict_0115 */
/* [local] */ 

#endif // _HJDICT_H__INCLUDED


extern RPC_IF_HANDLE __MIDL_itf_hjdict_0115_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hjdict_0115_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



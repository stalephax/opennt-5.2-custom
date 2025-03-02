

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for tdc.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __tdc_h__
#define __tdc_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __OLEDBSimpleProviderX_FWD_DEFINED__
#define __OLEDBSimpleProviderX_FWD_DEFINED__
typedef interface OLEDBSimpleProviderX OLEDBSimpleProviderX;
#endif 	/* __OLEDBSimpleProviderX_FWD_DEFINED__ */


#ifndef __ITDCCtl_FWD_DEFINED__
#define __ITDCCtl_FWD_DEFINED__
typedef interface ITDCCtl ITDCCtl;
#endif 	/* __ITDCCtl_FWD_DEFINED__ */


#ifndef __ITDCCtlEvents_FWD_DEFINED__
#define __ITDCCtlEvents_FWD_DEFINED__
typedef interface ITDCCtlEvents ITDCCtlEvents;
#endif 	/* __ITDCCtlEvents_FWD_DEFINED__ */


#ifndef __CTDCCtl_FWD_DEFINED__
#define __CTDCCtl_FWD_DEFINED__

#ifdef __cplusplus
typedef class CTDCCtl CTDCCtl;
#else
typedef struct CTDCCtl CTDCCtl;
#endif /* __cplusplus */

#endif 	/* __CTDCCtl_FWD_DEFINED__ */


#ifndef __IAmTheTDC_FWD_DEFINED__
#define __IAmTheTDC_FWD_DEFINED__
typedef interface IAmTheTDC IAmTheTDC;
#endif 	/* __IAmTheTDC_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 


#ifndef __TDCLib_LIBRARY_DEFINED__
#define __TDCLib_LIBRARY_DEFINED__

/* library TDCLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_TDCLib;

#ifndef __OLEDBSimpleProviderX_INTERFACE_DEFINED__
#define __OLEDBSimpleProviderX_INTERFACE_DEFINED__

/* interface OLEDBSimpleProviderX */
/* [object][dual][uuid] */ 


EXTERN_C const IID IID_OLEDBSimpleProviderX;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E0E270C0-C0BE-11d0-8FE4-00A0C90A6341")
    OLEDBSimpleProviderX : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct OLEDBSimpleProviderXVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            OLEDBSimpleProviderX * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            OLEDBSimpleProviderX * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            OLEDBSimpleProviderX * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            OLEDBSimpleProviderX * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            OLEDBSimpleProviderX * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            OLEDBSimpleProviderX * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            OLEDBSimpleProviderX * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } OLEDBSimpleProviderXVtbl;

    interface OLEDBSimpleProviderX
    {
        CONST_VTBL struct OLEDBSimpleProviderXVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define OLEDBSimpleProviderX_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define OLEDBSimpleProviderX_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define OLEDBSimpleProviderX_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define OLEDBSimpleProviderX_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define OLEDBSimpleProviderX_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define OLEDBSimpleProviderX_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define OLEDBSimpleProviderX_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __OLEDBSimpleProviderX_INTERFACE_DEFINED__ */


#ifndef __ITDCCtl_INTERFACE_DEFINED__
#define __ITDCCtl_INTERFACE_DEFINED__

/* interface ITDCCtl */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ITDCCtl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("333C7BC5-460F-11D0-BC04-0080C7055A83")
    ITDCCtl : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FieldDelim( 
            /* [retval][out] */ BSTR *pbstrFieldDelim) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_FieldDelim( 
            /* [in] */ BSTR bstrFieldDelim) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RowDelim( 
            /* [retval][out] */ BSTR *pbstrRowDelim) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RowDelim( 
            /* [in] */ BSTR bstrRowDelim) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TextQualifier( 
            /* [retval][out] */ BSTR *pbstrTextQualifier) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_TextQualifier( 
            /* [in] */ BSTR bstrTextQualifier) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EscapeChar( 
            /* [retval][out] */ BSTR *pbstrEscapeChar) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_EscapeChar( 
            /* [in] */ BSTR bstrEscapeChar) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UseHeader( 
            /* [retval][out] */ VARIANT_BOOL *pfUseHeader) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_UseHeader( 
            /* [in] */ VARIANT_BOOL fUseHeader) = 0;
        
        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_SortColumn( 
            /* [retval][out] */ BSTR *pbstrSortColumn) = 0;
        
        virtual /* [hidden][id][propput] */ HRESULT STDMETHODCALLTYPE put_SortColumn( 
            /* [in] */ BSTR bstrSortColumn) = 0;
        
        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_SortAscending( 
            /* [retval][out] */ VARIANT_BOOL *pfSortAscending) = 0;
        
        virtual /* [hidden][id][propput] */ HRESULT STDMETHODCALLTYPE put_SortAscending( 
            /* [in] */ VARIANT_BOOL fSortAscending) = 0;
        
        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_FilterValue( 
            /* [retval][out] */ BSTR *pbstrFilterValue) = 0;
        
        virtual /* [hidden][id][propput] */ HRESULT STDMETHODCALLTYPE put_FilterValue( 
            /* [in] */ BSTR bstrFilterValue) = 0;
        
        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_FilterCriterion( 
            /* [retval][out] */ BSTR *pbstrFilterCriterion) = 0;
        
        virtual /* [hidden][id][propput] */ HRESULT STDMETHODCALLTYPE put_FilterCriterion( 
            /* [in] */ BSTR bstrFilterCriterion) = 0;
        
        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_FilterColumn( 
            /* [retval][out] */ BSTR *pbstrFilterColumn) = 0;
        
        virtual /* [hidden][id][propput] */ HRESULT STDMETHODCALLTYPE put_FilterColumn( 
            /* [in] */ BSTR bstrFilterColumn) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CharSet( 
            /* [retval][out] */ BSTR *pbstrCharSet) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_CharSet( 
            /* [in] */ BSTR bstrCharSet) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Language( 
            /* [retval][out] */ BSTR *pbstrLanguage) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Language( 
            /* [in] */ BSTR bstrLanguage) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CaseSensitive( 
            /* [retval][out] */ VARIANT_BOOL *pfCaseSensitive) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_CaseSensitive( 
            /* [in] */ VARIANT_BOOL fCaseSensitive) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DataURL( 
            /* [retval][out] */ BSTR *pbstrDataURL) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DataURL( 
            /* [in] */ BSTR bstrDataURL) = 0;
        
        virtual /* [id][restricted] */ HRESULT STDMETHODCALLTYPE msDataSourceObject( 
            /* [in] */ BSTR qualifier,
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
        virtual /* [id][restricted] */ HRESULT STDMETHODCALLTYPE addDataSourceListener( 
            /* [in] */ IUnknown *pEvent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [restricted][hidden] */ HRESULT STDMETHODCALLTYPE _OnTimer( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Filter( 
            /* [retval][out] */ BSTR *pbstrFilterExpr) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Filter( 
            /* [in] */ BSTR bstrFilterExpr) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Sort( 
            /* [retval][out] */ BSTR *pbstrSortExpr) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Sort( 
            /* [in] */ BSTR bstrSortExpr) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ReadyState( 
            /* [retval][out] */ long *state) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ReadyState( 
            /* [in] */ long state) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AppendData( 
            /* [retval][out] */ VARIANT_BOOL *pfAppendData) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AppendData( 
            /* [in] */ VARIANT_BOOL fAppendData) = 0;
        
        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_OSP( 
            /* [retval][out] */ OLEDBSimpleProviderX **ppISTD) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITDCCtlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITDCCtl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITDCCtl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITDCCtl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITDCCtl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITDCCtl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITDCCtl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITDCCtl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FieldDelim )( 
            ITDCCtl * This,
            /* [retval][out] */ BSTR *pbstrFieldDelim);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FieldDelim )( 
            ITDCCtl * This,
            /* [in] */ BSTR bstrFieldDelim);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RowDelim )( 
            ITDCCtl * This,
            /* [retval][out] */ BSTR *pbstrRowDelim);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RowDelim )( 
            ITDCCtl * This,
            /* [in] */ BSTR bstrRowDelim);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TextQualifier )( 
            ITDCCtl * This,
            /* [retval][out] */ BSTR *pbstrTextQualifier);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TextQualifier )( 
            ITDCCtl * This,
            /* [in] */ BSTR bstrTextQualifier);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EscapeChar )( 
            ITDCCtl * This,
            /* [retval][out] */ BSTR *pbstrEscapeChar);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EscapeChar )( 
            ITDCCtl * This,
            /* [in] */ BSTR bstrEscapeChar);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseHeader )( 
            ITDCCtl * This,
            /* [retval][out] */ VARIANT_BOOL *pfUseHeader);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseHeader )( 
            ITDCCtl * This,
            /* [in] */ VARIANT_BOOL fUseHeader);
        
        /* [hidden][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SortColumn )( 
            ITDCCtl * This,
            /* [retval][out] */ BSTR *pbstrSortColumn);
        
        /* [hidden][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SortColumn )( 
            ITDCCtl * This,
            /* [in] */ BSTR bstrSortColumn);
        
        /* [hidden][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SortAscending )( 
            ITDCCtl * This,
            /* [retval][out] */ VARIANT_BOOL *pfSortAscending);
        
        /* [hidden][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SortAscending )( 
            ITDCCtl * This,
            /* [in] */ VARIANT_BOOL fSortAscending);
        
        /* [hidden][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FilterValue )( 
            ITDCCtl * This,
            /* [retval][out] */ BSTR *pbstrFilterValue);
        
        /* [hidden][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FilterValue )( 
            ITDCCtl * This,
            /* [in] */ BSTR bstrFilterValue);
        
        /* [hidden][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FilterCriterion )( 
            ITDCCtl * This,
            /* [retval][out] */ BSTR *pbstrFilterCriterion);
        
        /* [hidden][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FilterCriterion )( 
            ITDCCtl * This,
            /* [in] */ BSTR bstrFilterCriterion);
        
        /* [hidden][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FilterColumn )( 
            ITDCCtl * This,
            /* [retval][out] */ BSTR *pbstrFilterColumn);
        
        /* [hidden][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FilterColumn )( 
            ITDCCtl * This,
            /* [in] */ BSTR bstrFilterColumn);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CharSet )( 
            ITDCCtl * This,
            /* [retval][out] */ BSTR *pbstrCharSet);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CharSet )( 
            ITDCCtl * This,
            /* [in] */ BSTR bstrCharSet);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Language )( 
            ITDCCtl * This,
            /* [retval][out] */ BSTR *pbstrLanguage);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Language )( 
            ITDCCtl * This,
            /* [in] */ BSTR bstrLanguage);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CaseSensitive )( 
            ITDCCtl * This,
            /* [retval][out] */ VARIANT_BOOL *pfCaseSensitive);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CaseSensitive )( 
            ITDCCtl * This,
            /* [in] */ VARIANT_BOOL fCaseSensitive);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataURL )( 
            ITDCCtl * This,
            /* [retval][out] */ BSTR *pbstrDataURL);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataURL )( 
            ITDCCtl * This,
            /* [in] */ BSTR bstrDataURL);
        
        /* [id][restricted] */ HRESULT ( STDMETHODCALLTYPE *msDataSourceObject )( 
            ITDCCtl * This,
            /* [in] */ BSTR qualifier,
            /* [retval][out] */ IUnknown **ppUnk);
        
        /* [id][restricted] */ HRESULT ( STDMETHODCALLTYPE *addDataSourceListener )( 
            ITDCCtl * This,
            /* [in] */ IUnknown *pEvent);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            ITDCCtl * This);
        
        /* [restricted][hidden] */ HRESULT ( STDMETHODCALLTYPE *_OnTimer )( 
            ITDCCtl * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Filter )( 
            ITDCCtl * This,
            /* [retval][out] */ BSTR *pbstrFilterExpr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Filter )( 
            ITDCCtl * This,
            /* [in] */ BSTR bstrFilterExpr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sort )( 
            ITDCCtl * This,
            /* [retval][out] */ BSTR *pbstrSortExpr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Sort )( 
            ITDCCtl * This,
            /* [in] */ BSTR bstrSortExpr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReadyState )( 
            ITDCCtl * This,
            /* [retval][out] */ long *state);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReadyState )( 
            ITDCCtl * This,
            /* [in] */ long state);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AppendData )( 
            ITDCCtl * This,
            /* [retval][out] */ VARIANT_BOOL *pfAppendData);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AppendData )( 
            ITDCCtl * This,
            /* [in] */ VARIANT_BOOL fAppendData);
        
        /* [hidden][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OSP )( 
            ITDCCtl * This,
            /* [retval][out] */ OLEDBSimpleProviderX **ppISTD);
        
        END_INTERFACE
    } ITDCCtlVtbl;

    interface ITDCCtl
    {
        CONST_VTBL struct ITDCCtlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITDCCtl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITDCCtl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITDCCtl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITDCCtl_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ITDCCtl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ITDCCtl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ITDCCtl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ITDCCtl_get_FieldDelim(This,pbstrFieldDelim)	\
    (This)->lpVtbl -> get_FieldDelim(This,pbstrFieldDelim)

#define ITDCCtl_put_FieldDelim(This,bstrFieldDelim)	\
    (This)->lpVtbl -> put_FieldDelim(This,bstrFieldDelim)

#define ITDCCtl_get_RowDelim(This,pbstrRowDelim)	\
    (This)->lpVtbl -> get_RowDelim(This,pbstrRowDelim)

#define ITDCCtl_put_RowDelim(This,bstrRowDelim)	\
    (This)->lpVtbl -> put_RowDelim(This,bstrRowDelim)

#define ITDCCtl_get_TextQualifier(This,pbstrTextQualifier)	\
    (This)->lpVtbl -> get_TextQualifier(This,pbstrTextQualifier)

#define ITDCCtl_put_TextQualifier(This,bstrTextQualifier)	\
    (This)->lpVtbl -> put_TextQualifier(This,bstrTextQualifier)

#define ITDCCtl_get_EscapeChar(This,pbstrEscapeChar)	\
    (This)->lpVtbl -> get_EscapeChar(This,pbstrEscapeChar)

#define ITDCCtl_put_EscapeChar(This,bstrEscapeChar)	\
    (This)->lpVtbl -> put_EscapeChar(This,bstrEscapeChar)

#define ITDCCtl_get_UseHeader(This,pfUseHeader)	\
    (This)->lpVtbl -> get_UseHeader(This,pfUseHeader)

#define ITDCCtl_put_UseHeader(This,fUseHeader)	\
    (This)->lpVtbl -> put_UseHeader(This,fUseHeader)

#define ITDCCtl_get_SortColumn(This,pbstrSortColumn)	\
    (This)->lpVtbl -> get_SortColumn(This,pbstrSortColumn)

#define ITDCCtl_put_SortColumn(This,bstrSortColumn)	\
    (This)->lpVtbl -> put_SortColumn(This,bstrSortColumn)

#define ITDCCtl_get_SortAscending(This,pfSortAscending)	\
    (This)->lpVtbl -> get_SortAscending(This,pfSortAscending)

#define ITDCCtl_put_SortAscending(This,fSortAscending)	\
    (This)->lpVtbl -> put_SortAscending(This,fSortAscending)

#define ITDCCtl_get_FilterValue(This,pbstrFilterValue)	\
    (This)->lpVtbl -> get_FilterValue(This,pbstrFilterValue)

#define ITDCCtl_put_FilterValue(This,bstrFilterValue)	\
    (This)->lpVtbl -> put_FilterValue(This,bstrFilterValue)

#define ITDCCtl_get_FilterCriterion(This,pbstrFilterCriterion)	\
    (This)->lpVtbl -> get_FilterCriterion(This,pbstrFilterCriterion)

#define ITDCCtl_put_FilterCriterion(This,bstrFilterCriterion)	\
    (This)->lpVtbl -> put_FilterCriterion(This,bstrFilterCriterion)

#define ITDCCtl_get_FilterColumn(This,pbstrFilterColumn)	\
    (This)->lpVtbl -> get_FilterColumn(This,pbstrFilterColumn)

#define ITDCCtl_put_FilterColumn(This,bstrFilterColumn)	\
    (This)->lpVtbl -> put_FilterColumn(This,bstrFilterColumn)

#define ITDCCtl_get_CharSet(This,pbstrCharSet)	\
    (This)->lpVtbl -> get_CharSet(This,pbstrCharSet)

#define ITDCCtl_put_CharSet(This,bstrCharSet)	\
    (This)->lpVtbl -> put_CharSet(This,bstrCharSet)

#define ITDCCtl_get_Language(This,pbstrLanguage)	\
    (This)->lpVtbl -> get_Language(This,pbstrLanguage)

#define ITDCCtl_put_Language(This,bstrLanguage)	\
    (This)->lpVtbl -> put_Language(This,bstrLanguage)

#define ITDCCtl_get_CaseSensitive(This,pfCaseSensitive)	\
    (This)->lpVtbl -> get_CaseSensitive(This,pfCaseSensitive)

#define ITDCCtl_put_CaseSensitive(This,fCaseSensitive)	\
    (This)->lpVtbl -> put_CaseSensitive(This,fCaseSensitive)

#define ITDCCtl_get_DataURL(This,pbstrDataURL)	\
    (This)->lpVtbl -> get_DataURL(This,pbstrDataURL)

#define ITDCCtl_put_DataURL(This,bstrDataURL)	\
    (This)->lpVtbl -> put_DataURL(This,bstrDataURL)

#define ITDCCtl_msDataSourceObject(This,qualifier,ppUnk)	\
    (This)->lpVtbl -> msDataSourceObject(This,qualifier,ppUnk)

#define ITDCCtl_addDataSourceListener(This,pEvent)	\
    (This)->lpVtbl -> addDataSourceListener(This,pEvent)

#define ITDCCtl_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define ITDCCtl__OnTimer(This)	\
    (This)->lpVtbl -> _OnTimer(This)

#define ITDCCtl_get_Filter(This,pbstrFilterExpr)	\
    (This)->lpVtbl -> get_Filter(This,pbstrFilterExpr)

#define ITDCCtl_put_Filter(This,bstrFilterExpr)	\
    (This)->lpVtbl -> put_Filter(This,bstrFilterExpr)

#define ITDCCtl_get_Sort(This,pbstrSortExpr)	\
    (This)->lpVtbl -> get_Sort(This,pbstrSortExpr)

#define ITDCCtl_put_Sort(This,bstrSortExpr)	\
    (This)->lpVtbl -> put_Sort(This,bstrSortExpr)

#define ITDCCtl_get_ReadyState(This,state)	\
    (This)->lpVtbl -> get_ReadyState(This,state)

#define ITDCCtl_put_ReadyState(This,state)	\
    (This)->lpVtbl -> put_ReadyState(This,state)

#define ITDCCtl_get_AppendData(This,pfAppendData)	\
    (This)->lpVtbl -> get_AppendData(This,pfAppendData)

#define ITDCCtl_put_AppendData(This,fAppendData)	\
    (This)->lpVtbl -> put_AppendData(This,fAppendData)

#define ITDCCtl_get_OSP(This,ppISTD)	\
    (This)->lpVtbl -> get_OSP(This,ppISTD)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITDCCtl_get_FieldDelim_Proxy( 
    ITDCCtl * This,
    /* [retval][out] */ BSTR *pbstrFieldDelim);


void __RPC_STUB ITDCCtl_get_FieldDelim_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITDCCtl_put_FieldDelim_Proxy( 
    ITDCCtl * This,
    /* [in] */ BSTR bstrFieldDelim);


void __RPC_STUB ITDCCtl_put_FieldDelim_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITDCCtl_get_RowDelim_Proxy( 
    ITDCCtl * This,
    /* [retval][out] */ BSTR *pbstrRowDelim);


void __RPC_STUB ITDCCtl_get_RowDelim_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITDCCtl_put_RowDelim_Proxy( 
    ITDCCtl * This,
    /* [in] */ BSTR bstrRowDelim);


void __RPC_STUB ITDCCtl_put_RowDelim_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITDCCtl_get_TextQualifier_Proxy( 
    ITDCCtl * This,
    /* [retval][out] */ BSTR *pbstrTextQualifier);


void __RPC_STUB ITDCCtl_get_TextQualifier_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITDCCtl_put_TextQualifier_Proxy( 
    ITDCCtl * This,
    /* [in] */ BSTR bstrTextQualifier);


void __RPC_STUB ITDCCtl_put_TextQualifier_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITDCCtl_get_EscapeChar_Proxy( 
    ITDCCtl * This,
    /* [retval][out] */ BSTR *pbstrEscapeChar);


void __RPC_STUB ITDCCtl_get_EscapeChar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITDCCtl_put_EscapeChar_Proxy( 
    ITDCCtl * This,
    /* [in] */ BSTR bstrEscapeChar);


void __RPC_STUB ITDCCtl_put_EscapeChar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITDCCtl_get_UseHeader_Proxy( 
    ITDCCtl * This,
    /* [retval][out] */ VARIANT_BOOL *pfUseHeader);


void __RPC_STUB ITDCCtl_get_UseHeader_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITDCCtl_put_UseHeader_Proxy( 
    ITDCCtl * This,
    /* [in] */ VARIANT_BOOL fUseHeader);


void __RPC_STUB ITDCCtl_put_UseHeader_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE ITDCCtl_get_SortColumn_Proxy( 
    ITDCCtl * This,
    /* [retval][out] */ BSTR *pbstrSortColumn);


void __RPC_STUB ITDCCtl_get_SortColumn_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][id][propput] */ HRESULT STDMETHODCALLTYPE ITDCCtl_put_SortColumn_Proxy( 
    ITDCCtl * This,
    /* [in] */ BSTR bstrSortColumn);


void __RPC_STUB ITDCCtl_put_SortColumn_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE ITDCCtl_get_SortAscending_Proxy( 
    ITDCCtl * This,
    /* [retval][out] */ VARIANT_BOOL *pfSortAscending);


void __RPC_STUB ITDCCtl_get_SortAscending_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][id][propput] */ HRESULT STDMETHODCALLTYPE ITDCCtl_put_SortAscending_Proxy( 
    ITDCCtl * This,
    /* [in] */ VARIANT_BOOL fSortAscending);


void __RPC_STUB ITDCCtl_put_SortAscending_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE ITDCCtl_get_FilterValue_Proxy( 
    ITDCCtl * This,
    /* [retval][out] */ BSTR *pbstrFilterValue);


void __RPC_STUB ITDCCtl_get_FilterValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][id][propput] */ HRESULT STDMETHODCALLTYPE ITDCCtl_put_FilterValue_Proxy( 
    ITDCCtl * This,
    /* [in] */ BSTR bstrFilterValue);


void __RPC_STUB ITDCCtl_put_FilterValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE ITDCCtl_get_FilterCriterion_Proxy( 
    ITDCCtl * This,
    /* [retval][out] */ BSTR *pbstrFilterCriterion);


void __RPC_STUB ITDCCtl_get_FilterCriterion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][id][propput] */ HRESULT STDMETHODCALLTYPE ITDCCtl_put_FilterCriterion_Proxy( 
    ITDCCtl * This,
    /* [in] */ BSTR bstrFilterCriterion);


void __RPC_STUB ITDCCtl_put_FilterCriterion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE ITDCCtl_get_FilterColumn_Proxy( 
    ITDCCtl * This,
    /* [retval][out] */ BSTR *pbstrFilterColumn);


void __RPC_STUB ITDCCtl_get_FilterColumn_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][id][propput] */ HRESULT STDMETHODCALLTYPE ITDCCtl_put_FilterColumn_Proxy( 
    ITDCCtl * This,
    /* [in] */ BSTR bstrFilterColumn);


void __RPC_STUB ITDCCtl_put_FilterColumn_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITDCCtl_get_CharSet_Proxy( 
    ITDCCtl * This,
    /* [retval][out] */ BSTR *pbstrCharSet);


void __RPC_STUB ITDCCtl_get_CharSet_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITDCCtl_put_CharSet_Proxy( 
    ITDCCtl * This,
    /* [in] */ BSTR bstrCharSet);


void __RPC_STUB ITDCCtl_put_CharSet_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITDCCtl_get_Language_Proxy( 
    ITDCCtl * This,
    /* [retval][out] */ BSTR *pbstrLanguage);


void __RPC_STUB ITDCCtl_get_Language_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITDCCtl_put_Language_Proxy( 
    ITDCCtl * This,
    /* [in] */ BSTR bstrLanguage);


void __RPC_STUB ITDCCtl_put_Language_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITDCCtl_get_CaseSensitive_Proxy( 
    ITDCCtl * This,
    /* [retval][out] */ VARIANT_BOOL *pfCaseSensitive);


void __RPC_STUB ITDCCtl_get_CaseSensitive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITDCCtl_put_CaseSensitive_Proxy( 
    ITDCCtl * This,
    /* [in] */ VARIANT_BOOL fCaseSensitive);


void __RPC_STUB ITDCCtl_put_CaseSensitive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITDCCtl_get_DataURL_Proxy( 
    ITDCCtl * This,
    /* [retval][out] */ BSTR *pbstrDataURL);


void __RPC_STUB ITDCCtl_get_DataURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITDCCtl_put_DataURL_Proxy( 
    ITDCCtl * This,
    /* [in] */ BSTR bstrDataURL);


void __RPC_STUB ITDCCtl_put_DataURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][restricted] */ HRESULT STDMETHODCALLTYPE ITDCCtl_msDataSourceObject_Proxy( 
    ITDCCtl * This,
    /* [in] */ BSTR qualifier,
    /* [retval][out] */ IUnknown **ppUnk);


void __RPC_STUB ITDCCtl_msDataSourceObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][restricted] */ HRESULT STDMETHODCALLTYPE ITDCCtl_addDataSourceListener_Proxy( 
    ITDCCtl * This,
    /* [in] */ IUnknown *pEvent);


void __RPC_STUB ITDCCtl_addDataSourceListener_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITDCCtl_Reset_Proxy( 
    ITDCCtl * This);


void __RPC_STUB ITDCCtl_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [restricted][hidden] */ HRESULT STDMETHODCALLTYPE ITDCCtl__OnTimer_Proxy( 
    ITDCCtl * This);


void __RPC_STUB ITDCCtl__OnTimer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITDCCtl_get_Filter_Proxy( 
    ITDCCtl * This,
    /* [retval][out] */ BSTR *pbstrFilterExpr);


void __RPC_STUB ITDCCtl_get_Filter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITDCCtl_put_Filter_Proxy( 
    ITDCCtl * This,
    /* [in] */ BSTR bstrFilterExpr);


void __RPC_STUB ITDCCtl_put_Filter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITDCCtl_get_Sort_Proxy( 
    ITDCCtl * This,
    /* [retval][out] */ BSTR *pbstrSortExpr);


void __RPC_STUB ITDCCtl_get_Sort_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITDCCtl_put_Sort_Proxy( 
    ITDCCtl * This,
    /* [in] */ BSTR bstrSortExpr);


void __RPC_STUB ITDCCtl_put_Sort_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITDCCtl_get_ReadyState_Proxy( 
    ITDCCtl * This,
    /* [retval][out] */ long *state);


void __RPC_STUB ITDCCtl_get_ReadyState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITDCCtl_put_ReadyState_Proxy( 
    ITDCCtl * This,
    /* [in] */ long state);


void __RPC_STUB ITDCCtl_put_ReadyState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITDCCtl_get_AppendData_Proxy( 
    ITDCCtl * This,
    /* [retval][out] */ VARIANT_BOOL *pfAppendData);


void __RPC_STUB ITDCCtl_get_AppendData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITDCCtl_put_AppendData_Proxy( 
    ITDCCtl * This,
    /* [in] */ VARIANT_BOOL fAppendData);


void __RPC_STUB ITDCCtl_put_AppendData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE ITDCCtl_get_OSP_Proxy( 
    ITDCCtl * This,
    /* [retval][out] */ OLEDBSimpleProviderX **ppISTD);


void __RPC_STUB ITDCCtl_get_OSP_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITDCCtl_INTERFACE_DEFINED__ */


#ifndef __ITDCCtlEvents_INTERFACE_DEFINED__
#define __ITDCCtlEvents_INTERFACE_DEFINED__

/* interface ITDCCtlEvents */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ITDCCtlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("333C7BC6-460F-11D0-BC04-0080C7055A83")
    ITDCCtlEvents : public IDispatch
    {
    public:
        virtual /* [id] */ void STDMETHODCALLTYPE onreadystatechange( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITDCCtlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITDCCtlEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITDCCtlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITDCCtlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITDCCtlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITDCCtlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITDCCtlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITDCCtlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ void ( STDMETHODCALLTYPE *onreadystatechange )( 
            ITDCCtlEvents * This);
        
        END_INTERFACE
    } ITDCCtlEventsVtbl;

    interface ITDCCtlEvents
    {
        CONST_VTBL struct ITDCCtlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITDCCtlEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITDCCtlEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITDCCtlEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITDCCtlEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ITDCCtlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ITDCCtlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ITDCCtlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ITDCCtlEvents_onreadystatechange(This)	\
    (This)->lpVtbl -> onreadystatechange(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ void STDMETHODCALLTYPE ITDCCtlEvents_onreadystatechange_Proxy( 
    ITDCCtlEvents * This);


void __RPC_STUB ITDCCtlEvents_onreadystatechange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITDCCtlEvents_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CTDCCtl;

#ifdef __cplusplus

class DECLSPEC_UUID("333C7BC4-460F-11D0-BC04-0080C7055A83")
CTDCCtl;
#endif

#ifndef __IAmTheTDC_INTERFACE_DEFINED__
#define __IAmTheTDC_INTERFACE_DEFINED__

/* interface IAmTheTDC */
/* [object][uuid] */ 


EXTERN_C const IID IID_IAmTheTDC;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f6c2-98b5-11cf-bb82-00aa00bdce0b")
    IAmTheTDC : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IAmTheTDCVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAmTheTDC * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAmTheTDC * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAmTheTDC * This);
        
        END_INTERFACE
    } IAmTheTDCVtbl;

    interface IAmTheTDC
    {
        CONST_VTBL struct IAmTheTDCVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAmTheTDC_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAmTheTDC_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAmTheTDC_Release(This)	\
    (This)->lpVtbl -> Release(This)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAmTheTDC_INTERFACE_DEFINED__ */

#endif /* __TDCLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



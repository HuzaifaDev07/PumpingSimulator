#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Firebase.Analytics.Parameter[]
struct ParameterU5BU5D_tF777A69F0CD968F78075EB10F2E1FE58C87DD0DA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.DivideByZeroException
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t5AD8517EA34467536BAC8C7C6EB4D4B6880312A2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// System.OutOfMemoryException
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// Firebase.Analytics.Parameter
struct Parameter_t53E3C0E61EE5B09E97ECA94713B1B8EFF293E85E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41;
// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper
struct SWIGStringHelper_tE2F6265E4A42E0E3BA40653E956F6636F8F453C9;
// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF;
// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD;
// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t7AE3C25C2F1DC51FA9D2BE7D7CC77FC63D4C4FF7;

IL2CPP_EXTERN_C RuntimeClass* ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAnalyticsPINVOKE_tF0113FEFD12C99A48C83D58CF33B18F6097272D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAnalytics_t04B9FAB0E66C2DAB7301E7D1C74019B4F500DAAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_t7AE3C25C2F1DC51FA9D2BE7D7CC77FC63D4C4FF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_tE2F6265E4A42E0E3BA40653E956F6636F8F453C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B47BC9031A69F662702621810EC706E2C081467;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_LogEvent_m27351A3469E8FBC2446717BED1A31193588BC42D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_SetAnalyticsCollectionEnabled_m3CA629C8843874EB10469B1AFB411BC93A746224_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parameter__ctor_m5925AE5BE26DAA8C98EAD1A67E149571B202DA1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parameter__ctor_m71889DACE276FEFBBA79A6FD792C9B3D70107E7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_m4937E684176D259F9F0DDDB49A51C7E5EF2A2689_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_m2A871F3A9A9CF2EC436E658A8A588511D87E8472_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_m83641808A82547F6BF8D6D2286D8A9EC40C4CAFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6F5CD59C2BF8544A10EB93D610B4C02359BFED72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m5C60C270EC9D9D8BBE94305DEEF34790542787AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_m462486421E7D016951F2DC4DA9221D883CDA1BD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_mBEFF0726B066D5CBD849F285B0D8380BE999FB14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m46EED3094E45A0F2C567F294041C913B4A0BA38D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m1BD4471332877E6BC3E11595C262566A9ABD06C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_m3065F3AC2CE1821CAFA23546704E6BAB34449FC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m789A56567632FCDC0A253BC9E3CA0DAC44568D1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_mE1A227D1D30CEBE9863562343AFEB0BCC2B44B2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_mCC4ABF49EC27A94568C5D32FB4FDAC9A434D1358_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_mE08DD6F21A4BA8A16D1FF2E995E5FC9B1AFE56FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_m0D69283A740E826969387F6E718986068375B73E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_mF82959F2314ECD2B42B1F2D83B86A0AFEBA507C8_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ParameterU5BU5D_tF777A69F0CD968F78075EB10F2E1FE58C87DD0DA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t19739086C3A01C1CE1CCE3FF97388233AA878F20 
{
};

// Firebase.Analytics.FirebaseAnalytics
struct FirebaseAnalytics_t04B9FAB0E66C2DAB7301E7D1C74019B4F500DAAF  : public RuntimeObject
{
};

// Firebase.Analytics.FirebaseAnalyticsPINVOKE
struct FirebaseAnalyticsPINVOKE_tF0113FEFD12C99A48C83D58CF33B18F6097272D2  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41  : public RuntimeObject
{
};

// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGPendingException
struct SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D  : public RuntimeObject
{
};

// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper
struct SWIGStringHelper_tE2F6265E4A42E0E3BA40653E956F6636F8F453C9  : public RuntimeObject
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F 
{
	// System.Object System.Runtime.InteropServices.HandleRef::_wrapper
	RuntimeObject* ____wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::_handle
	intptr_t ____handle_1;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_3;
	// System.EventHandler Firebase.FirebaseApp::AppDisposed
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___AppDisposed_4;
	// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::appPlatform
	FirebaseAppPlatform_t5AD8517EA34467536BAC8C7C6EB4D4B6880312A2* ___appPlatform_14;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Firebase.Analytics.Parameter
struct Parameter_t53E3C0E61EE5B09E97ECA94713B1B8EFF293E85E  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Analytics.Parameter::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Analytics.Parameter::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OutOfMemoryException
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF  : public MulticastDelegate_t
{
};

// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD  : public MulticastDelegate_t
{
};

// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t7AE3C25C2F1DC51FA9D2BE7D7CC77FC63D4C4FF7  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.DivideByZeroException
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// <Module>

// <Module>

// Firebase.Analytics.FirebaseAnalytics
struct FirebaseAnalytics_t04B9FAB0E66C2DAB7301E7D1C74019B4F500DAAF_StaticFields
{
	// Firebase.FirebaseApp Firebase.Analytics.FirebaseAnalytics::app
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___app_0;
};

// Firebase.Analytics.FirebaseAnalytics

// Firebase.Analytics.FirebaseAnalyticsPINVOKE
struct FirebaseAnalyticsPINVOKE_tF0113FEFD12C99A48C83D58CF33B18F6097272D2_StaticFields
{
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper Firebase.Analytics.FirebaseAnalyticsPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41* ___swigExceptionHelper_0;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper Firebase.Analytics.FirebaseAnalyticsPINVOKE::swigStringHelper
	SWIGStringHelper_tE2F6265E4A42E0E3BA40653E956F6636F8F453C9* ___swigStringHelper_1;
};

// Firebase.Analytics.FirebaseAnalyticsPINVOKE

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields
{
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___applicationDelegate_0;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___arithmeticDelegate_1;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___divideByZeroDelegate_2;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___indexOutOfRangeDelegate_3;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___invalidCastDelegate_4;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___invalidOperationDelegate_5;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___ioDelegate_6;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___nullReferenceDelegate_7;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___outOfMemoryDelegate_8;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___overflowDelegate_9;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___systemDelegate_10;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* ___argumentDelegate_11;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* ___argumentNullDelegate_12;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* ___argumentOutOfRangeDelegate_13;
};

// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper

// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGPendingException
struct SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_StaticFields
{
	// System.Int32 Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;
	// System.Object Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGPendingException::exceptionsLock
	RuntimeObject* ___exceptionsLock_2;
};

// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGPendingException
struct SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_ThreadStaticFields
{
	// System.Exception Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGPendingException::pendingException
	Exception_t* ___pendingException_0;
};

// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper
struct SWIGStringHelper_tE2F6265E4A42E0E3BA40653E956F6636F8F453C9_StaticFields
{
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper/SWIGStringDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_t7AE3C25C2F1DC51FA9D2BE7D7CC77FC63D4C4FF7* ___stringDelegate_0;
};

// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Runtime.InteropServices.HandleRef

// System.Runtime.InteropServices.HandleRef

// System.ApplicationException

// System.ApplicationException

// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields
{
	// System.Object Firebase.FirebaseApp::disposeLock
	RuntimeObject* ___disposeLock_2;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* ___nameToProxy_5;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3* ___cPtrToProxy_6;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_7;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject* ___AppUtilCallbacksLock_8;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_9;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_10;
	// System.Boolean Firebase.FirebaseApp::userAgentRegistered
	bool ___userAgentRegistered_11;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_12;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject* ___CheckDependenciesThreadLock_13;
};

// Firebase.FirebaseApp

// System.MulticastDelegate

// System.MulticastDelegate

// Firebase.Analytics.Parameter

// Firebase.Analytics.Parameter

// System.SystemException

// System.SystemException

// System.ArgumentException

// System.ArgumentException

// System.ArithmeticException

// System.ArithmeticException

// System.IO.IOException

// System.IO.IOException

// System.IndexOutOfRangeException

// System.IndexOutOfRangeException

// System.InvalidCastException

// System.InvalidCastException

// System.InvalidOperationException

// System.InvalidOperationException

// System.NullReferenceException

// System.NullReferenceException

// System.OutOfMemoryException

// System.OutOfMemoryException

// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate

// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate

// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate

// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate

// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper/SWIGStringDelegate

// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper/SWIGStringDelegate

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// System.DivideByZeroException

// System.DivideByZeroException

// System.OverflowException

// System.OverflowException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Firebase.Analytics.Parameter[]
struct ParameterU5BU5D_tF777A69F0CD968F78075EB10F2E1FE58C87DD0DA  : public RuntimeArray
{
	ALIGN_FIELD (8) Parameter_t53E3C0E61EE5B09E97ECA94713B1B8EFF293E85E* m_Items[1];

	inline Parameter_t53E3C0E61EE5B09E97ECA94713B1B8EFF293E85E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Parameter_t53E3C0E61EE5B09E97ECA94713B1B8EFF293E85E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Parameter_t53E3C0E61EE5B09E97ECA94713B1B8EFF293E85E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Parameter_t53E3C0E61EE5B09E97ECA94713B1B8EFF293E85E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Parameter_t53E3C0E61EE5B09E97ECA94713B1B8EFF293E85E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Parameter_t53E3C0E61EE5B09E97ECA94713B1B8EFF293E85E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832  : public RuntimeArray
{
	ALIGN_FIELD (8) intptr_t m_Items[1];

	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, RuntimeObject* ___0_wrapper, intptr_t ___1_handle, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.Parameter::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter_Dispose_m7D9FED432495C01E5C197E377E50D1843080552D (Parameter_t53E3C0E61EE5B09E97ECA94713B1B8EFF293E85E* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::delete_Parameter(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_delete_Parameter_mD048E0587B80B58C8F0B7E84509770AC4F126C5B (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Analytics.FirebaseAnalyticsPINVOKE::new_Parameter__SWIG_0(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseAnalyticsPINVOKE_new_Parameter__SWIG_0_m27BDCC2D980AE8B0F3BB631F4FAA90E5523AE93F (String_t* ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.Parameter::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter__ctor_m645D10D57442DF831C9E028821C94B94A0E58FA1 (Parameter_t53E3C0E61EE5B09E97ECA94713B1B8EFF293E85E* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE (const RuntimeMethod* method) ;
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51 (const RuntimeMethod* method) ;
// System.IntPtr Firebase.Analytics.FirebaseAnalyticsPINVOKE::new_Parameter__SWIG_2(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseAnalyticsPINVOKE_new_Parameter__SWIG_2_mDA7C29AE1278EF125D738F42AF1B7A058593013E (String_t* ___0_jarg1, double ___1_jarg2, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m0977C2538183A07492F33E8A112CF065035D66D1 (SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m3730C9B37CEFF8DA8A55EB601BCE6CA5ABA77D4D (SWIGStringHelper_tE2F6265E4A42E0E3BA40653E956F6636F8F453C9* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m4937E684176D259F9F0DDDB49A51C7E5EF2A2689 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m5C60C270EC9D9D8BBE94305DEEF34790542787AC (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m462486421E7D016951F2DC4DA9221D883CDA1BD5 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m46EED3094E45A0F2C567F294041C913B4A0BA38D (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m1BD4471332877E6BC3E11595C262566A9ABD06C4 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m3065F3AC2CE1821CAFA23546704E6BAB34449FC9 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mBEFF0726B066D5CBD849F285B0D8380BE999FB14 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m789A56567632FCDC0A253BC9E3CA0DAC44568D1C (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_mE1A227D1D30CEBE9863562343AFEB0BCC2B44B2F (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mCC4ABF49EC27A94568C5D32FB4FDAC9A434D1358 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_mE08DD6F21A4BA8A16D1FF2E995E5FC9B1AFE56FA (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m2A871F3A9A9CF2EC436E658A8A588511D87E8472 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m83641808A82547F6BF8D6D2286D8A9EC40C4CAFC (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6F5CD59C2BF8544A10EB93D610B4C02359BFED72 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Exception Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_m1D44BBBB6046736C0B7AD2F3B3E29D07C8F9A519 (const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m0D69283A740E826969387F6E718986068375B73E (Exception_t* ___0_e, const RuntimeMethod* method) ;
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m880D58CC9B6CD2F0E867298BA748343216D89A8B (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_mE15900048AEEE9B66A4DD9F2ACAC4448D85D4F23 (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m390691571A232F79022C84ED002FDEF8974255E1 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m40BCFD6C1C79DE81191B829AF71BEB590E300396 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mD00D7FE987C285C8DB23883700F44BC0025F55EF (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_mC60E0CF8E50CA43F0518570ACC051F6BA8A1D1F2 (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_mB00A07CDB7E5230B8D2BB31696E63F3CB1C36EF9 (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m790F28810569425B0503056EF1A9CDDF9AFBB3F0 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, Exception_t* ___2_innerException, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mC19FB60B6C5D3DAD0A175B4415682C68755C4DBA (ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m0A03D3E7CBEE3D095D5B2BA83466B053C0C21BBE (ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_FirebaseAnalytics(Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseAnalytics_mF8715CBD59523BCA3E745ED907B0A110542BCE01 (ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___0_applicationDelegate, ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___1_arithmeticDelegate, ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___2_divideByZeroDelegate, ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___3_indexOutOfRangeDelegate, ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___4_invalidCastDelegate, ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___5_invalidOperationDelegate, ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___6_ioDelegate, ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___7_nullReferenceDelegate, ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___8_outOfMemoryDelegate, ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___9_overflowDelegate, ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___10_systemExceptionDelegate, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_FirebaseAnalytics(Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseAnalytics_m64B92800747A1DF0624B22252A0DF5C4450FDF95 (ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* ___0_argumentDelegate, ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* ___1_argumentNullDelegate, ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* ___2_argumentOutOfRangeDelegate, const RuntimeMethod* method) ;
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mF82959F2314ECD2B42B1F2D83B86A0AFEBA507C8 (String_t* ___0_cString, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m90DEDB63030E111981EAA108CDE8AEEAE71D4C91 (SWIGStringDelegate_t7AE3C25C2F1DC51FA9D2BE7D7CC77FC63D4C4FF7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_FirebaseAnalytics(Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_FirebaseAnalytics_m4558265C93BD347FD1FD0D5E1AD886C7252627A9 (SWIGStringDelegate_t7AE3C25C2F1DC51FA9D2BE7D7CC77FC63D4C4FF7* ___0_stringDelegate, const RuntimeMethod* method) ;
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0 (const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::SetAnalyticsCollectionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_SetAnalyticsCollectionEnabled_m0C400A214FBC970072185FC2BC0A7070FEF2AEFD (bool ___0_jarg1, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.Analytics.Parameter::getCPtr(Firebase.Analytics.Parameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F Parameter_getCPtr_mCE6F6C1ED39D2FC6715C9A483403B018F3613053 (Parameter_t53E3C0E61EE5B09E97ECA94713B1B8EFF293E85E* ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.HandleRef::op_Explicit(System.Runtime.InteropServices.HandleRef)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_op_Explicit_mAA2DBC27D3432B8B4A32D269949122D9ED6A2B7A_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_value, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::LogEvent__SWIG_5(System.String,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_LogEvent__SWIG_5_mA16DEE74EB70A05DCD702CEC0681804B4E4D8676 (String_t* ___0_jarg1, intptr_t ___1_arg, int32_t ___2_jarg2, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Analytics_CSharp_new_Parameter__SWIG_0(char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Analytics_CSharp_new_Parameter__SWIG_2(char*, double);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Analytics_CSharp_delete_Parameter(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Analytics_CSharp_SetAnalyticsCollectionEnabled(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Analytics_CSharp_LogEvent__SWIG_5(char*, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_FirebaseAnalytics(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionArgumentCallbacks_FirebaseAnalytics(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_FirebaseAnalytics(Il2CppMethodPointer);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Analytics.Parameter::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter__ctor_m645D10D57442DF831C9E028821C94B94A0E58FA1 (Parameter_t53E3C0E61EE5B09E97ECA94713B1B8EFF293E85E* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___1_cMemoryOwn;
		__this->___swigCMemOwn_1 = L_0;
		intptr_t L_1 = ___0_cPtr;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->___swigCPtr_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Analytics.Parameter::getCPtr(Firebase.Analytics.Parameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F Parameter_getCPtr_mCE6F6C1ED39D2FC6715C9A483403B018F3613053 (Parameter_t53E3C0E61EE5B09E97ECA94713B1B8EFF293E85E* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F V_0;
	memset((&V_0), 0, sizeof(V_0));
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		Parameter_t53E3C0E61EE5B09E97ECA94713B1B8EFF293E85E* L_0 = ___0_obj;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		Parameter_t53E3C0E61EE5B09E97ECA94713B1B8EFF293E85E* L_1 = ___0_obj;
		NullCheck(L_1);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2 = L_1->___swigCPtr_0;
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_000c:
	{
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_4), NULL, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_5 = V_0;
		return L_5;
	}
}
// System.Void Firebase.Analytics.Parameter::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter_Finalize_m65A60722D2B177FFCCD12A2D78091C5748E3BFBB (Parameter_t53E3C0E61EE5B09E97ECA94713B1B8EFF293E85E* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Parameter_Dispose_m7D9FED432495C01E5C197E377E50D1843080552D(__this, (bool)0, NULL);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Analytics.Parameter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter_Dispose_mC99B13B274CA4268C94264E6F3B627B3777225A8 (Parameter_t53E3C0E61EE5B09E97ECA94713B1B8EFF293E85E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Parameter_Dispose_m7D9FED432495C01E5C197E377E50D1843080552D(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.Analytics.Parameter::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter_Dispose_m7D9FED432495C01E5C197E377E50D1843080552D (Parameter_t53E3C0E61EE5B09E97ECA94713B1B8EFF293E85E* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_tF0113FEFD12C99A48C83D58CF33B18F6097272D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0072;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0072:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_4 = (&__this->___swigCPtr_0);
				intptr_t L_5;
				L_5 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_4, NULL);
				intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_7;
				L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_5, L_6, NULL);
				V_2 = L_7;
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_005e_1;
				}
			}
			{
				bool L_9 = __this->___swigCMemOwn_1;
				V_3 = L_9;
				bool L_10 = V_3;
				if (!L_10)
				{
					goto IL_004c_1;
				}
			}
			{
				__this->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_11 = __this->___swigCPtr_0;
				il2cpp_codegen_runtime_class_init_inline(FirebaseAnalyticsPINVOKE_tF0113FEFD12C99A48C83D58CF33B18F6097272D2_il2cpp_TypeInfo_var);
				FirebaseAnalyticsPINVOKE_delete_Parameter_mD048E0587B80B58C8F0B7E84509770AC4F126C5B(L_11, NULL);
			}

IL_004c_1:
			{
				intptr_t L_12 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_13;
				memset((&L_13), 0, sizeof(L_13));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_13), NULL, L_12, /*hidden argument*/NULL);
				__this->___swigCPtr_0 = L_13;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
			}

IL_005e_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				goto IL_0073;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0073:
	{
		return;
	}
}
// System.Void Firebase.Analytics.Parameter::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter__ctor_m71889DACE276FEFBBA79A6FD792C9B3D70107E7A (Parameter_t53E3C0E61EE5B09E97ECA94713B1B8EFF293E85E* __this, String_t* ___0_parameterName, String_t* ___1_parameterValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_tF0113FEFD12C99A48C83D58CF33B18F6097272D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___0_parameterName;
		String_t* L_1 = ___1_parameterValue;
		il2cpp_codegen_runtime_class_init_inline(FirebaseAnalyticsPINVOKE_tF0113FEFD12C99A48C83D58CF33B18F6097272D2_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = FirebaseAnalyticsPINVOKE_new_Parameter__SWIG_0_m27BDCC2D980AE8B0F3BB631F4FAA90E5523AE93F(L_0, L_1, NULL);
		Parameter__ctor_m645D10D57442DF831C9E028821C94B94A0E58FA1(__this, L_2, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Parameter__ctor_m71889DACE276FEFBBA79A6FD792C9B3D70107E7A_RuntimeMethod_var)));
	}

IL_001f:
	{
		return;
	}
}
// System.Void Firebase.Analytics.Parameter::.ctor(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter__ctor_m5925AE5BE26DAA8C98EAD1A67E149571B202DA1E (Parameter_t53E3C0E61EE5B09E97ECA94713B1B8EFF293E85E* __this, String_t* ___0_parameterName, double ___1_parameterValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_tF0113FEFD12C99A48C83D58CF33B18F6097272D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___0_parameterName;
		double L_1 = ___1_parameterValue;
		il2cpp_codegen_runtime_class_init_inline(FirebaseAnalyticsPINVOKE_tF0113FEFD12C99A48C83D58CF33B18F6097272D2_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = FirebaseAnalyticsPINVOKE_new_Parameter__SWIG_2_mDA7C29AE1278EF125D738F42AF1B7A058593013E(L_0, L_1, NULL);
		Parameter__ctor_m645D10D57442DF831C9E028821C94B94A0E58FA1(__this, L_2, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Parameter__ctor_m5925AE5BE26DAA8C98EAD1A67E149571B202DA1E_RuntimeMethod_var)));
	}

IL_001f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE__cctor_m87FB410E902EF5394802748921696842BCC41D3D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_tF0113FEFD12C99A48C83D58CF33B18F6097272D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_tE2F6265E4A42E0E3BA40653E956F6636F8F453C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41* L_0 = (SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41*)il2cpp_codegen_object_new(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SWIGExceptionHelper__ctor_m0977C2538183A07492F33E8A112CF065035D66D1(L_0, NULL);
		((FirebaseAnalyticsPINVOKE_tF0113FEFD12C99A48C83D58CF33B18F6097272D2_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAnalyticsPINVOKE_tF0113FEFD12C99A48C83D58CF33B18F6097272D2_il2cpp_TypeInfo_var))->___swigExceptionHelper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseAnalyticsPINVOKE_tF0113FEFD12C99A48C83D58CF33B18F6097272D2_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAnalyticsPINVOKE_tF0113FEFD12C99A48C83D58CF33B18F6097272D2_il2cpp_TypeInfo_var))->___swigExceptionHelper_0), (void*)L_0);
		SWIGStringHelper_tE2F6265E4A42E0E3BA40653E956F6636F8F453C9* L_1 = (SWIGStringHelper_tE2F6265E4A42E0E3BA40653E956F6636F8F453C9*)il2cpp_codegen_object_new(SWIGStringHelper_tE2F6265E4A42E0E3BA40653E956F6636F8F453C9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SWIGStringHelper__ctor_m3730C9B37CEFF8DA8A55EB601BCE6CA5ABA77D4D(L_1, NULL);
		((FirebaseAnalyticsPINVOKE_tF0113FEFD12C99A48C83D58CF33B18F6097272D2_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAnalyticsPINVOKE_tF0113FEFD12C99A48C83D58CF33B18F6097272D2_il2cpp_TypeInfo_var))->___swigStringHelper_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseAnalyticsPINVOKE_tF0113FEFD12C99A48C83D58CF33B18F6097272D2_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAnalyticsPINVOKE_tF0113FEFD12C99A48C83D58CF33B18F6097272D2_il2cpp_TypeInfo_var))->___swigStringHelper_1), (void*)L_1);
		return;
	}
}
// System.IntPtr Firebase.Analytics.FirebaseAnalyticsPINVOKE::new_Parameter__SWIG_0(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseAnalyticsPINVOKE_new_Parameter__SWIG_0_m27BDCC2D980AE8B0F3BB631F4FAA90E5523AE93F (String_t* ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_Analytics_CSharp_new_Parameter__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	char* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = il2cpp_codegen_marshal_string(___0_jarg1);

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_new_Parameter__SWIG_0)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_jarg1' native representation
	il2cpp_codegen_marshal_free(____0_jarg1_marshaled);
	____0_jarg1_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Analytics.FirebaseAnalyticsPINVOKE::new_Parameter__SWIG_2(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseAnalyticsPINVOKE_new_Parameter__SWIG_2_mDA7C29AE1278EF125D738F42AF1B7A058593013E (String_t* ___0_jarg1, double ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, double);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_Analytics_CSharp_new_Parameter__SWIG_2", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	char* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = il2cpp_codegen_marshal_string(___0_jarg1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_new_Parameter__SWIG_2)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

	// Marshaling cleanup of parameter '___0_jarg1' native representation
	il2cpp_codegen_marshal_free(____0_jarg1_marshaled);
	____0_jarg1_marshaled = NULL;

	return returnValue;
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::delete_Parameter(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_delete_Parameter_mD048E0587B80B58C8F0B7E84509770AC4F126C5B (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_Analytics_CSharp_delete_Parameter", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_delete_Parameter)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::SetAnalyticsCollectionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_SetAnalyticsCollectionEnabled_m0C400A214FBC970072185FC2BC0A7070FEF2AEFD (bool ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_Analytics_CSharp_SetAnalyticsCollectionEnabled", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_SetAnalyticsCollectionEnabled)(static_cast<int32_t>(___0_jarg1));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___0_jarg1));
	#endif

}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::LogEvent__SWIG_5(System.String,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_LogEvent__SWIG_5_mA16DEE74EB70A05DCD702CEC0681804B4E4D8676 (String_t* ___0_jarg1, intptr_t ___1_arg, int32_t ___2_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_Analytics_CSharp_LogEvent__SWIG_5", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	char* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = il2cpp_codegen_marshal_string(___0_jarg1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_LogEvent__SWIG_5)(____0_jarg1_marshaled, ___1_arg, ___2_jarg2);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_arg, ___2_jarg2);
	#endif

	// Marshaling cleanup of parameter '___0_jarg1' native representation
	il2cpp_codegen_marshal_free(____0_jarg1_marshaled);
	____0_jarg1_marshaled = NULL;

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m4937E684176D259F9F0DDDB49A51C7E5EF2A2689(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_m4937E684176D259F9F0DDDB49A51C7E5EF2A2689(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m5C60C270EC9D9D8BBE94305DEEF34790542787AC(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m5C60C270EC9D9D8BBE94305DEEF34790542787AC(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m462486421E7D016951F2DC4DA9221D883CDA1BD5(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_m462486421E7D016951F2DC4DA9221D883CDA1BD5(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m46EED3094E45A0F2C567F294041C913B4A0BA38D(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m46EED3094E45A0F2C567F294041C913B4A0BA38D(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m1BD4471332877E6BC3E11595C262566A9ABD06C4(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m1BD4471332877E6BC3E11595C262566A9ABD06C4(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m3065F3AC2CE1821CAFA23546704E6BAB34449FC9(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_m3065F3AC2CE1821CAFA23546704E6BAB34449FC9(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_mBEFF0726B066D5CBD849F285B0D8380BE999FB14(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_mBEFF0726B066D5CBD849F285B0D8380BE999FB14(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m789A56567632FCDC0A253BC9E3CA0DAC44568D1C(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m789A56567632FCDC0A253BC9E3CA0DAC44568D1C(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_mE1A227D1D30CEBE9863562343AFEB0BCC2B44B2F(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_mE1A227D1D30CEBE9863562343AFEB0BCC2B44B2F(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_mCC4ABF49EC27A94568C5D32FB4FDAC9A434D1358(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_mCC4ABF49EC27A94568C5D32FB4FDAC9A434D1358(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_mE08DD6F21A4BA8A16D1FF2E995E5FC9B1AFE56FA(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_mE08DD6F21A4BA8A16D1FF2E995E5FC9B1AFE56FA(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m2A871F3A9A9CF2EC436E658A8A588511D87E8472(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_m2A871F3A9A9CF2EC436E658A8A588511D87E8472(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_m83641808A82547F6BF8D6D2286D8A9EC40C4CAFC(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_m83641808A82547F6BF8D6D2286D8A9EC40C4CAFC(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6F5CD59C2BF8544A10EB93D610B4C02359BFED72(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6F5CD59C2BF8544A10EB93D610B4C02359BFED72(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_FirebaseAnalytics(Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseAnalytics_mF8715CBD59523BCA3E745ED907B0A110542BCE01 (ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___0_applicationDelegate, ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___1_arithmeticDelegate, ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___2_divideByZeroDelegate, ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___3_indexOutOfRangeDelegate, ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___4_invalidCastDelegate, ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___5_invalidOperationDelegate, ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___6_ioDelegate, ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___7_nullReferenceDelegate, ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___8_outOfMemoryDelegate, ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___9_overflowDelegate, ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* ___10_systemExceptionDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "SWIGRegisterExceptionCallbacks_FirebaseAnalytics", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_applicationDelegate' to native representation
	Il2CppMethodPointer ____0_applicationDelegate_marshaled = NULL;
	____0_applicationDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_applicationDelegate));

	// Marshaling of parameter '___1_arithmeticDelegate' to native representation
	Il2CppMethodPointer ____1_arithmeticDelegate_marshaled = NULL;
	____1_arithmeticDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_arithmeticDelegate));

	// Marshaling of parameter '___2_divideByZeroDelegate' to native representation
	Il2CppMethodPointer ____2_divideByZeroDelegate_marshaled = NULL;
	____2_divideByZeroDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_divideByZeroDelegate));

	// Marshaling of parameter '___3_indexOutOfRangeDelegate' to native representation
	Il2CppMethodPointer ____3_indexOutOfRangeDelegate_marshaled = NULL;
	____3_indexOutOfRangeDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___3_indexOutOfRangeDelegate));

	// Marshaling of parameter '___4_invalidCastDelegate' to native representation
	Il2CppMethodPointer ____4_invalidCastDelegate_marshaled = NULL;
	____4_invalidCastDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___4_invalidCastDelegate));

	// Marshaling of parameter '___5_invalidOperationDelegate' to native representation
	Il2CppMethodPointer ____5_invalidOperationDelegate_marshaled = NULL;
	____5_invalidOperationDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___5_invalidOperationDelegate));

	// Marshaling of parameter '___6_ioDelegate' to native representation
	Il2CppMethodPointer ____6_ioDelegate_marshaled = NULL;
	____6_ioDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___6_ioDelegate));

	// Marshaling of parameter '___7_nullReferenceDelegate' to native representation
	Il2CppMethodPointer ____7_nullReferenceDelegate_marshaled = NULL;
	____7_nullReferenceDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___7_nullReferenceDelegate));

	// Marshaling of parameter '___8_outOfMemoryDelegate' to native representation
	Il2CppMethodPointer ____8_outOfMemoryDelegate_marshaled = NULL;
	____8_outOfMemoryDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___8_outOfMemoryDelegate));

	// Marshaling of parameter '___9_overflowDelegate' to native representation
	Il2CppMethodPointer ____9_overflowDelegate_marshaled = NULL;
	____9_overflowDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___9_overflowDelegate));

	// Marshaling of parameter '___10_systemExceptionDelegate' to native representation
	Il2CppMethodPointer ____10_systemExceptionDelegate_marshaled = NULL;
	____10_systemExceptionDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___10_systemExceptionDelegate));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_FirebaseAnalytics)(____0_applicationDelegate_marshaled, ____1_arithmeticDelegate_marshaled, ____2_divideByZeroDelegate_marshaled, ____3_indexOutOfRangeDelegate_marshaled, ____4_invalidCastDelegate_marshaled, ____5_invalidOperationDelegate_marshaled, ____6_ioDelegate_marshaled, ____7_nullReferenceDelegate_marshaled, ____8_outOfMemoryDelegate_marshaled, ____9_overflowDelegate_marshaled, ____10_systemExceptionDelegate_marshaled);
	#else
	il2cppPInvokeFunc(____0_applicationDelegate_marshaled, ____1_arithmeticDelegate_marshaled, ____2_divideByZeroDelegate_marshaled, ____3_indexOutOfRangeDelegate_marshaled, ____4_invalidCastDelegate_marshaled, ____5_invalidOperationDelegate_marshaled, ____6_ioDelegate_marshaled, ____7_nullReferenceDelegate_marshaled, ____8_outOfMemoryDelegate_marshaled, ____9_overflowDelegate_marshaled, ____10_systemExceptionDelegate_marshaled);
	#endif

}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_FirebaseAnalytics(Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseAnalytics_m64B92800747A1DF0624B22252A0DF5C4450FDF95 (ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* ___0_argumentDelegate, ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* ___1_argumentNullDelegate, ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* ___2_argumentOutOfRangeDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "SWIGRegisterExceptionArgumentCallbacks_FirebaseAnalytics", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_argumentDelegate' to native representation
	Il2CppMethodPointer ____0_argumentDelegate_marshaled = NULL;
	____0_argumentDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_argumentDelegate));

	// Marshaling of parameter '___1_argumentNullDelegate' to native representation
	Il2CppMethodPointer ____1_argumentNullDelegate_marshaled = NULL;
	____1_argumentNullDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_argumentNullDelegate));

	// Marshaling of parameter '___2_argumentOutOfRangeDelegate' to native representation
	Il2CppMethodPointer ____2_argumentOutOfRangeDelegate_marshaled = NULL;
	____2_argumentOutOfRangeDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_argumentOutOfRangeDelegate));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionArgumentCallbacks_FirebaseAnalytics)(____0_argumentDelegate_marshaled, ____1_argumentNullDelegate_marshaled, ____2_argumentOutOfRangeDelegate_marshaled);
	#else
	il2cppPInvokeFunc(____0_argumentDelegate_marshaled, ____1_argumentNullDelegate_marshaled, ____2_argumentOutOfRangeDelegate_marshaled);
	#endif

}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m4937E684176D259F9F0DDDB49A51C7E5EF2A2689 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m1D44BBBB6046736C0B7AD2F3B3E29D07C8F9A519(NULL);
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_2 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m0D69283A740E826969387F6E718986068375B73E(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m5C60C270EC9D9D8BBE94305DEEF34790542787AC (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m1D44BBBB6046736C0B7AD2F3B3E29D07C8F9A519(NULL);
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_2 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArithmeticException__ctor_m880D58CC9B6CD2F0E867298BA748343216D89A8B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m0D69283A740E826969387F6E718986068375B73E(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m462486421E7D016951F2DC4DA9221D883CDA1BD5 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m1D44BBBB6046736C0B7AD2F3B3E29D07C8F9A519(NULL);
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_2 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DivideByZeroException__ctor_mE15900048AEEE9B66A4DD9F2ACAC4448D85D4F23(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m0D69283A740E826969387F6E718986068375B73E(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m46EED3094E45A0F2C567F294041C913B4A0BA38D (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m1D44BBBB6046736C0B7AD2F3B3E29D07C8F9A519(NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_2 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IndexOutOfRangeException__ctor_m390691571A232F79022C84ED002FDEF8974255E1(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m0D69283A740E826969387F6E718986068375B73E(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m1BD4471332877E6BC3E11595C262566A9ABD06C4 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m1D44BBBB6046736C0B7AD2F3B3E29D07C8F9A519(NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidCastException__ctor_m40BCFD6C1C79DE81191B829AF71BEB590E300396(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m0D69283A740E826969387F6E718986068375B73E(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m3065F3AC2CE1821CAFA23546704E6BAB34449FC9 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m1D44BBBB6046736C0B7AD2F3B3E29D07C8F9A519(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m0D69283A740E826969387F6E718986068375B73E(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mBEFF0726B066D5CBD849F285B0D8380BE999FB14 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m1D44BBBB6046736C0B7AD2F3B3E29D07C8F9A519(NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_2 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m0D69283A740E826969387F6E718986068375B73E(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m789A56567632FCDC0A253BC9E3CA0DAC44568D1C (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m1D44BBBB6046736C0B7AD2F3B3E29D07C8F9A519(NULL);
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NullReferenceException__ctor_mD00D7FE987C285C8DB23883700F44BC0025F55EF(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m0D69283A740E826969387F6E718986068375B73E(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_mE1A227D1D30CEBE9863562343AFEB0BCC2B44B2F (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m1D44BBBB6046736C0B7AD2F3B3E29D07C8F9A519(NULL);
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_2 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OutOfMemoryException__ctor_mC60E0CF8E50CA43F0518570ACC051F6BA8A1D1F2(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m0D69283A740E826969387F6E718986068375B73E(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mCC4ABF49EC27A94568C5D32FB4FDAC9A434D1358 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m1D44BBBB6046736C0B7AD2F3B3E29D07C8F9A519(NULL);
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_2 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OverflowException__ctor_mB00A07CDB7E5230B8D2BB31696E63F3CB1C36EF9(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m0D69283A740E826969387F6E718986068375B73E(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_mE08DD6F21A4BA8A16D1FF2E995E5FC9B1AFE56FA (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m1D44BBBB6046736C0B7AD2F3B3E29D07C8F9A519(NULL);
		SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* L_2 = (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295*)il2cpp_codegen_object_new(SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m0D69283A740E826969387F6E718986068375B73E(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m2A871F3A9A9CF2EC436E658A8A588511D87E8472 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		String_t* L_1 = ___1_paramName;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_m1D44BBBB6046736C0B7AD2F3B3E29D07C8F9A519(NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArgumentException__ctor_m790F28810569425B0503056EF1A9CDDF9AFBB3F0(L_3, L_0, L_1, L_2, NULL);
		SWIGPendingException_Set_m0D69283A740E826969387F6E718986068375B73E(L_3, NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m83641808A82547F6BF8D6D2286D8A9EC40C4CAFC (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		Exception_t* L_0;
		L_0 = SWIGPendingException_Retrieve_m1D44BBBB6046736C0B7AD2F3B3E29D07C8F9A519(NULL);
		V_0 = L_0;
		Exception_t* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Exception_t*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___0_message;
		Exception_t* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_3, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_5, NULL);
		___0_message = L_6;
	}

IL_0022:
	{
		String_t* L_7 = ___1_paramName;
		String_t* L_8 = ___0_message;
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_9, L_7, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m0D69283A740E826969387F6E718986068375B73E(L_9, NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6F5CD59C2BF8544A10EB93D610B4C02359BFED72 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		Exception_t* L_0;
		L_0 = SWIGPendingException_Retrieve_m1D44BBBB6046736C0B7AD2F3B3E29D07C8F9A519(NULL);
		V_0 = L_0;
		Exception_t* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Exception_t*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___0_message;
		Exception_t* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_3, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_5, NULL);
		___0_message = L_6;
	}

IL_0022:
	{
		String_t* L_7 = ___1_paramName;
		String_t* L_8 = ___0_message;
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_9, L_7, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m0D69283A740E826969387F6E718986068375B73E(L_9, NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_mA893DDC4C9889DB01619DC9F9A6CB1B93F832027 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingApplicationException_m4937E684176D259F9F0DDDB49A51C7E5EF2A2689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentException_m2A871F3A9A9CF2EC436E658A8A588511D87E8472_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentNullException_m83641808A82547F6BF8D6D2286D8A9EC40C4CAFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6F5CD59C2BF8544A10EB93D610B4C02359BFED72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArithmeticException_m5C60C270EC9D9D8BBE94305DEEF34790542787AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingDivideByZeroException_m462486421E7D016951F2DC4DA9221D883CDA1BD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIOException_mBEFF0726B066D5CBD849F285B0D8380BE999FB14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m46EED3094E45A0F2C567F294041C913B4A0BA38D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidCastException_m1BD4471332877E6BC3E11595C262566A9ABD06C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidOperationException_m3065F3AC2CE1821CAFA23546704E6BAB34449FC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingNullReferenceException_m789A56567632FCDC0A253BC9E3CA0DAC44568D1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOutOfMemoryException_mE1A227D1D30CEBE9863562343AFEB0BCC2B44B2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOverflowException_mCC4ABF49EC27A94568C5D32FB4FDAC9A434D1358_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingSystemException_mE08DD6F21A4BA8A16D1FF2E995E5FC9B1AFE56FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* L_0 = (ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD*)il2cpp_codegen_object_new(ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExceptionDelegate__ctor_mC19FB60B6C5D3DAD0A175B4415682C68755C4DBA(L_0, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingApplicationException_m4937E684176D259F9F0DDDB49A51C7E5EF2A2689_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___applicationDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___applicationDelegate_0), (void*)L_0);
		ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* L_1 = (ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD*)il2cpp_codegen_object_new(ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ExceptionDelegate__ctor_mC19FB60B6C5D3DAD0A175B4415682C68755C4DBA(L_1, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArithmeticException_m5C60C270EC9D9D8BBE94305DEEF34790542787AC_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___arithmeticDelegate_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___arithmeticDelegate_1), (void*)L_1);
		ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* L_2 = (ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD*)il2cpp_codegen_object_new(ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ExceptionDelegate__ctor_mC19FB60B6C5D3DAD0A175B4415682C68755C4DBA(L_2, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingDivideByZeroException_m462486421E7D016951F2DC4DA9221D883CDA1BD5_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2), (void*)L_2);
		ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* L_3 = (ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD*)il2cpp_codegen_object_new(ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ExceptionDelegate__ctor_mC19FB60B6C5D3DAD0A175B4415682C68755C4DBA(L_3, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m46EED3094E45A0F2C567F294041C913B4A0BA38D_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3), (void*)L_3);
		ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* L_4 = (ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD*)il2cpp_codegen_object_new(ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ExceptionDelegate__ctor_mC19FB60B6C5D3DAD0A175B4415682C68755C4DBA(L_4, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidCastException_m1BD4471332877E6BC3E11595C262566A9ABD06C4_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___invalidCastDelegate_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___invalidCastDelegate_4), (void*)L_4);
		ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* L_5 = (ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD*)il2cpp_codegen_object_new(ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ExceptionDelegate__ctor_mC19FB60B6C5D3DAD0A175B4415682C68755C4DBA(L_5, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidOperationException_m3065F3AC2CE1821CAFA23546704E6BAB34449FC9_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5), (void*)L_5);
		ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* L_6 = (ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD*)il2cpp_codegen_object_new(ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ExceptionDelegate__ctor_mC19FB60B6C5D3DAD0A175B4415682C68755C4DBA(L_6, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIOException_mBEFF0726B066D5CBD849F285B0D8380BE999FB14_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___ioDelegate_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___ioDelegate_6), (void*)L_6);
		ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* L_7 = (ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD*)il2cpp_codegen_object_new(ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ExceptionDelegate__ctor_mC19FB60B6C5D3DAD0A175B4415682C68755C4DBA(L_7, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingNullReferenceException_m789A56567632FCDC0A253BC9E3CA0DAC44568D1C_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7), (void*)L_7);
		ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* L_8 = (ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD*)il2cpp_codegen_object_new(ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ExceptionDelegate__ctor_mC19FB60B6C5D3DAD0A175B4415682C68755C4DBA(L_8, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOutOfMemoryException_mE1A227D1D30CEBE9863562343AFEB0BCC2B44B2F_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8), (void*)L_8);
		ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* L_9 = (ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD*)il2cpp_codegen_object_new(ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ExceptionDelegate__ctor_mC19FB60B6C5D3DAD0A175B4415682C68755C4DBA(L_9, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOverflowException_mCC4ABF49EC27A94568C5D32FB4FDAC9A434D1358_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___overflowDelegate_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___overflowDelegate_9), (void*)L_9);
		ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* L_10 = (ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD*)il2cpp_codegen_object_new(ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ExceptionDelegate__ctor_mC19FB60B6C5D3DAD0A175B4415682C68755C4DBA(L_10, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingSystemException_mE08DD6F21A4BA8A16D1FF2E995E5FC9B1AFE56FA_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___systemDelegate_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___systemDelegate_10), (void*)L_10);
		ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* L_11 = (ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ExceptionArgumentDelegate__ctor_m0A03D3E7CBEE3D095D5B2BA83466B053C0C21BBE(L_11, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentException_m2A871F3A9A9CF2EC436E658A8A588511D87E8472_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___argumentDelegate_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___argumentDelegate_11), (void*)L_11);
		ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* L_12 = (ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ExceptionArgumentDelegate__ctor_m0A03D3E7CBEE3D095D5B2BA83466B053C0C21BBE(L_12, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentNullException_m83641808A82547F6BF8D6D2286D8A9EC40C4CAFC_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___argumentNullDelegate_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___argumentNullDelegate_12), (void*)L_12);
		ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* L_13 = (ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		ExceptionArgumentDelegate__ctor_m0A03D3E7CBEE3D095D5B2BA83466B053C0C21BBE(L_13, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6F5CD59C2BF8544A10EB93D610B4C02359BFED72_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13), (void*)L_13);
		ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* L_14 = ((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___applicationDelegate_0;
		ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* L_15 = ((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___arithmeticDelegate_1;
		ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* L_16 = ((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2;
		ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* L_17 = ((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3;
		ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* L_18 = ((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___invalidCastDelegate_4;
		ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* L_19 = ((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5;
		ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* L_20 = ((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___ioDelegate_6;
		ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* L_21 = ((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7;
		ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* L_22 = ((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8;
		ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* L_23 = ((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___overflowDelegate_9;
		ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* L_24 = ((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___systemDelegate_10;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseAnalytics_mF8715CBD59523BCA3E745ED907B0A110542BCE01(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, NULL);
		ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* L_25 = ((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___argumentDelegate_11;
		ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* L_26 = ((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___argumentNullDelegate_12;
		ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* L_27 = ((SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseAnalytics_m64B92800747A1DF0624B22252A0DF5C4450FDF95(L_25, L_26, L_27, NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m0977C2538183A07492F33E8A112CF065035D66D1 (SWIGExceptionHelper_t1FF2D77DBF5CEE8642ABEF3532185D1FAA99BF41* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ExceptionDelegate_Invoke_m04F81A1F411CB5CE0C9E3B773A56840A31A6D45C_Multicast(ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* currentDelegate = reinterpret_cast<ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionDelegate_Invoke_m04F81A1F411CB5CE0C9E3B773A56840A31A6D45C_OpenInst(ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void ExceptionDelegate_Invoke_m04F81A1F411CB5CE0C9E3B773A56840A31A6D45C_OpenStatic(ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void ExceptionDelegate_Invoke_m04F81A1F411CB5CE0C9E3B773A56840A31A6D45C_OpenStaticInvoker(ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_message);
}
void ExceptionDelegate_Invoke_m04F81A1F411CB5CE0C9E3B773A56840A31A6D45C_ClosedStaticInvoker(ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD (ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_message' to native representation
	char* ____0_message_marshaled = NULL;
	____0_message_marshaled = il2cpp_codegen_marshal_string(___0_message);

	// Native function invocation
	il2cppPInvokeFunc(____0_message_marshaled);

	// Marshaling cleanup of parameter '___0_message' native representation
	il2cpp_codegen_marshal_free(____0_message_marshaled);
	____0_message_marshaled = NULL;

}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mC19FB60B6C5D3DAD0A175B4415682C68755C4DBA (ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m04F81A1F411CB5CE0C9E3B773A56840A31A6D45C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m04F81A1F411CB5CE0C9E3B773A56840A31A6D45C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m04F81A1F411CB5CE0C9E3B773A56840A31A6D45C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m04F81A1F411CB5CE0C9E3B773A56840A31A6D45C_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionDelegate_Invoke_m04F81A1F411CB5CE0C9E3B773A56840A31A6D45C_Multicast;
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_m04F81A1F411CB5CE0C9E3B773A56840A31A6D45C (ExceptionDelegate_tD00A98ECFFCB64A06B57CFDC29A7560F7C7E86FD* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ExceptionArgumentDelegate_Invoke_m1F2056A3878B433B7BBE59429E796F7733A70B0B_Multicast(ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* currentDelegate = reinterpret_cast<ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, ___1_paramName, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionArgumentDelegate_Invoke_m1F2056A3878B433B7BBE59429E796F7733A70B0B_OpenInst(ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, ___1_paramName, method);
}
void ExceptionArgumentDelegate_Invoke_m1F2056A3878B433B7BBE59429E796F7733A70B0B_OpenStatic(ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, ___1_paramName, method);
}
void ExceptionArgumentDelegate_Invoke_m1F2056A3878B433B7BBE59429E796F7733A70B0B_OpenStaticInvoker(ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_message, ___1_paramName);
}
void ExceptionArgumentDelegate_Invoke_m1F2056A3878B433B7BBE59429E796F7733A70B0B_ClosedStaticInvoker(ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message, ___1_paramName);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF (ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_message' to native representation
	char* ____0_message_marshaled = NULL;
	____0_message_marshaled = il2cpp_codegen_marshal_string(___0_message);

	// Marshaling of parameter '___1_paramName' to native representation
	char* ____1_paramName_marshaled = NULL;
	____1_paramName_marshaled = il2cpp_codegen_marshal_string(___1_paramName);

	// Native function invocation
	il2cppPInvokeFunc(____0_message_marshaled, ____1_paramName_marshaled);

	// Marshaling cleanup of parameter '___0_message' native representation
	il2cpp_codegen_marshal_free(____0_message_marshaled);
	____0_message_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_paramName' native representation
	il2cpp_codegen_marshal_free(____1_paramName_marshaled);
	____1_paramName_marshaled = NULL;

}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m0A03D3E7CBEE3D095D5B2BA83466B053C0C21BBE (ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m1F2056A3878B433B7BBE59429E796F7733A70B0B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m1F2056A3878B433B7BBE59429E796F7733A70B0B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m1F2056A3878B433B7BBE59429E796F7733A70B0B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m1F2056A3878B433B7BBE59429E796F7733A70B0B_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m1F2056A3878B433B7BBE59429E796F7733A70B0B_Multicast;
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m1F2056A3878B433B7BBE59429E796F7733A70B0B (ExceptionArgumentDelegate_t8D17A63372C1F2B3479D1FACFCAFF41BA4F26CDF* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, ___1_paramName, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m0D69283A740E826969387F6E718986068375B73E (Exception_t* ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		Exception_t* L_0 = ((SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var))->___pendingException_0;
		V_0 = (bool)((!(((RuntimeObject*)(Exception_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var)));
		Exception_t* L_2 = ((SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var))))->___pendingException_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), NULL);
		Exception_t* L_5 = ___0_e;
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_6 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_6, L_4, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_Set_m0D69283A740E826969387F6E718986068375B73E_RuntimeMethod_var)));
	}

IL_002d:
	{
		Exception_t* L_7 = ___0_e;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		((SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var))->___pendingException_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var))->___pendingException_0), (void*)L_7);
		RuntimeObject* L_8 = ((SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var))->___exceptionsLock_2;
		V_1 = L_8;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_9 = V_2;
					if (!L_9)
					{
						goto IL_005e;
					}
				}
				{
					RuntimeObject* L_10 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_10, NULL);
				}

IL_005e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_11 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_11, (&V_2), NULL);
			il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
			int32_t L_12 = ((SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
			goto IL_005f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		return;
	}
}
// System.Exception Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_m1D44BBBB6046736C0B7AD2F3B3E29D07C8F9A519 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	Exception_t* V_5 = NULL;
	{
		V_0 = (Exception_t*)NULL;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
		V_1 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		Exception_t* L_2 = ((SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var))->___pendingException_0;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0058;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		Exception_t* L_4 = ((SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var))->___pendingException_0;
		V_0 = L_4;
		((SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var))->___pendingException_0 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var))->___pendingException_0), (void*)(Exception_t*)NULL);
		RuntimeObject* L_5 = ((SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var))->___exceptionsLock_2;
		V_3 = L_5;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004b:
			{// begin finally (depth: 1)
				{
					bool L_6 = V_4;
					if (!L_6)
					{
						goto IL_0056;
					}
				}
				{
					RuntimeObject* L_7 = V_3;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_7, NULL);
				}

IL_0056:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_8 = V_3;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_8, (&V_4), NULL);
			il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
			int32_t L_9 = ((SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
			goto IL_0057;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0057:
	{
	}

IL_0058:
	{
	}

IL_0059:
	{
		Exception_t* L_10 = V_0;
		V_5 = L_10;
		goto IL_005e;
	}

IL_005e:
	{
		Exception_t* L_11 = V_5;
		return L_11;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGPendingException::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException__cctor_mD12B102C40FF515F9234DEAADD323879909F22C3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var))->___pendingException_0 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var))->___pendingException_0), (void*)(Exception_t*)NULL);
		((SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = 0;
		((SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var))->___exceptionsLock_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var))->___exceptionsLock_2), (void*)NULL);
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var))->___exceptionsLock_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tD29195FBCD256ECE5FD322B05B7CD69A85BF011D_il2cpp_TypeInfo_var))->___exceptionsLock_2), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_mF82959F2314ECD2B42B1F2D83B86A0AFEBA507C8(char* ___0_cString)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_cString' to managed representation
	String_t* ____0_cString_unmarshaled = NULL;
	____0_cString_unmarshaled = il2cpp_codegen_marshal_string_result(___0_cString);

	// Managed method invocation
	String_t* returnValue;
	returnValue = SWIGStringHelper_CreateString_mF82959F2314ECD2B42B1F2D83B86A0AFEBA507C8(____0_cString_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_FirebaseAnalytics(Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_FirebaseAnalytics_m4558265C93BD347FD1FD0D5E1AD886C7252627A9 (SWIGStringDelegate_t7AE3C25C2F1DC51FA9D2BE7D7CC77FC63D4C4FF7* ___0_stringDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "SWIGRegisterStringCallback_FirebaseAnalytics", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_stringDelegate' to native representation
	Il2CppMethodPointer ____0_stringDelegate_marshaled = NULL;
	____0_stringDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_stringDelegate));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_FirebaseAnalytics)(____0_stringDelegate_marshaled);
	#else
	il2cppPInvokeFunc(____0_stringDelegate_marshaled);
	#endif

}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mF82959F2314ECD2B42B1F2D83B86A0AFEBA507C8 (String_t* ___0_cString, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___0_cString;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_m8F9D8E42769ED661BCA623252521BA2459075CB6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringDelegate_t7AE3C25C2F1DC51FA9D2BE7D7CC77FC63D4C4FF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_CreateString_mF82959F2314ECD2B42B1F2D83B86A0AFEBA507C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_tE2F6265E4A42E0E3BA40653E956F6636F8F453C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_t7AE3C25C2F1DC51FA9D2BE7D7CC77FC63D4C4FF7* L_0 = (SWIGStringDelegate_t7AE3C25C2F1DC51FA9D2BE7D7CC77FC63D4C4FF7*)il2cpp_codegen_object_new(SWIGStringDelegate_t7AE3C25C2F1DC51FA9D2BE7D7CC77FC63D4C4FF7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SWIGStringDelegate__ctor_m90DEDB63030E111981EAA108CDE8AEEAE71D4C91(L_0, NULL, (intptr_t)((void*)SWIGStringHelper_CreateString_mF82959F2314ECD2B42B1F2D83B86A0AFEBA507C8_RuntimeMethod_var), NULL);
		((SWIGStringHelper_tE2F6265E4A42E0E3BA40653E956F6636F8F453C9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tE2F6265E4A42E0E3BA40653E956F6636F8F453C9_il2cpp_TypeInfo_var))->___stringDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGStringHelper_tE2F6265E4A42E0E3BA40653E956F6636F8F453C9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tE2F6265E4A42E0E3BA40653E956F6636F8F453C9_il2cpp_TypeInfo_var))->___stringDelegate_0), (void*)L_0);
		SWIGStringDelegate_t7AE3C25C2F1DC51FA9D2BE7D7CC77FC63D4C4FF7* L_1 = ((SWIGStringHelper_tE2F6265E4A42E0E3BA40653E956F6636F8F453C9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tE2F6265E4A42E0E3BA40653E956F6636F8F453C9_il2cpp_TypeInfo_var))->___stringDelegate_0;
		SWIGStringHelper_SWIGRegisterStringCallback_FirebaseAnalytics_m4558265C93BD347FD1FD0D5E1AD886C7252627A9(L_1, NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m3730C9B37CEFF8DA8A55EB601BCE6CA5ABA77D4D (SWIGStringHelper_tE2F6265E4A42E0E3BA40653E956F6636F8F453C9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
String_t* SWIGStringDelegate_Invoke_m47EA104E396B4E59322268A79A82694DCCE1E100_Multicast(SWIGStringDelegate_t7AE3C25C2F1DC51FA9D2BE7D7CC77FC63D4C4FF7* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	String_t* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SWIGStringDelegate_t7AE3C25C2F1DC51FA9D2BE7D7CC77FC63D4C4FF7* currentDelegate = reinterpret_cast<SWIGStringDelegate_t7AE3C25C2F1DC51FA9D2BE7D7CC77FC63D4C4FF7*>(delegatesToInvoke[i]);
		typedef String_t* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
String_t* SWIGStringDelegate_Invoke_m47EA104E396B4E59322268A79A82694DCCE1E100_OpenInst(SWIGStringDelegate_t7AE3C25C2F1DC51FA9D2BE7D7CC77FC63D4C4FF7* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
String_t* SWIGStringDelegate_Invoke_m47EA104E396B4E59322268A79A82694DCCE1E100_OpenStatic(SWIGStringDelegate_t7AE3C25C2F1DC51FA9D2BE7D7CC77FC63D4C4FF7* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
String_t* SWIGStringDelegate_Invoke_m47EA104E396B4E59322268A79A82694DCCE1E100_OpenStaticInvoker(SWIGStringDelegate_t7AE3C25C2F1DC51FA9D2BE7D7CC77FC63D4C4FF7* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_message);
}
String_t* SWIGStringDelegate_Invoke_m47EA104E396B4E59322268A79A82694DCCE1E100_ClosedStaticInvoker(SWIGStringDelegate_t7AE3C25C2F1DC51FA9D2BE7D7CC77FC63D4C4FF7* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< String_t*, RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_t7AE3C25C2F1DC51FA9D2BE7D7CC77FC63D4C4FF7 (SWIGStringDelegate_t7AE3C25C2F1DC51FA9D2BE7D7CC77FC63D4C4FF7* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_message' to native representation
	char* ____0_message_marshaled = NULL;
	____0_message_marshaled = il2cpp_codegen_marshal_string(___0_message);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____0_message_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___0_message' native representation
	il2cpp_codegen_marshal_free(____0_message_marshaled);
	____0_message_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m90DEDB63030E111981EAA108CDE8AEEAE71D4C91 (SWIGStringDelegate_t7AE3C25C2F1DC51FA9D2BE7D7CC77FC63D4C4FF7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m47EA104E396B4E59322268A79A82694DCCE1E100_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m47EA104E396B4E59322268A79A82694DCCE1E100_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m47EA104E396B4E59322268A79A82694DCCE1E100_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m47EA104E396B4E59322268A79A82694DCCE1E100_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SWIGStringDelegate_Invoke_m47EA104E396B4E59322268A79A82694DCCE1E100_Multicast;
}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m47EA104E396B4E59322268A79A82694DCCE1E100 (SWIGStringDelegate_t7AE3C25C2F1DC51FA9D2BE7D7CC77FC63D4C4FF7* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	typedef String_t* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Analytics.FirebaseAnalytics::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics__cctor_mC245C283209D04E164172DD540ACA071E394B5F0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalytics_t04B9FAB0E66C2DAB7301E7D1C74019B4F500DAAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0;
		L_0 = FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0(NULL);
		((FirebaseAnalytics_t04B9FAB0E66C2DAB7301E7D1C74019B4F500DAAF_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAnalytics_t04B9FAB0E66C2DAB7301E7D1C74019B4F500DAAF_il2cpp_TypeInfo_var))->___app_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseAnalytics_t04B9FAB0E66C2DAB7301E7D1C74019B4F500DAAF_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAnalytics_t04B9FAB0E66C2DAB7301E7D1C74019B4F500DAAF_il2cpp_TypeInfo_var))->___app_0), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalytics::SetAnalyticsCollectionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics_SetAnalyticsCollectionEnabled_m3CA629C8843874EB10469B1AFB411BC93A746224 (bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_tF0113FEFD12C99A48C83D58CF33B18F6097272D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(FirebaseAnalyticsPINVOKE_tF0113FEFD12C99A48C83D58CF33B18F6097272D2_il2cpp_TypeInfo_var);
		FirebaseAnalyticsPINVOKE_SetAnalyticsCollectionEnabled_m0C400A214FBC970072185FC2BC0A7070FEF2AEFD(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAnalytics_SetAnalyticsCollectionEnabled_m3CA629C8843874EB10469B1AFB411BC93A746224_RuntimeMethod_var)));
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalytics::LogEvent(System.String,Firebase.Analytics.Parameter[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics_LogEvent_m27351A3469E8FBC2446717BED1A31193588BC42D (String_t* ___0_name, ParameterU5BU5D_tF777A69F0CD968F78075EB10F2E1FE58C87DD0DA* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_tF0113FEFD12C99A48C83D58CF33B18F6097272D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	intptr_t* V_3 = NULL;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_4 = NULL;
	bool V_5 = false;
	{
		ParameterU5BU5D_tF777A69F0CD968F78075EB10F2E1FE58C87DD0DA* L_0 = ___1_parameters;
		NullCheck(L_0);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_1 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0024;
	}

IL_000e:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_2 = V_0;
		int32_t L_3 = V_1;
		ParameterU5BU5D_tF777A69F0CD968F78075EB10F2E1FE58C87DD0DA* L_4 = ___1_parameters;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Parameter_t53E3C0E61EE5B09E97ECA94713B1B8EFF293E85E* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_8;
		L_8 = Parameter_getCPtr_mCE6F6C1ED39D2FC6715C9A483403B018F3613053(L_7, NULL);
		intptr_t L_9;
		L_9 = HandleRef_op_Explicit_mAA2DBC27D3432B8B4A32D269949122D9ED6A2B7A_inline(L_8, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (intptr_t)L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0024:
	{
		int32_t L_11 = V_1;
		ParameterU5BU5D_tF777A69F0CD968F78075EB10F2E1FE58C87DD0DA* L_12 = ___1_parameters;
		NullCheck(L_12);
		V_2 = (bool)((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_000e;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_14 = V_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_15 = L_14;
		V_4 = L_15;
		if (!L_15)
		{
			goto IL_003a;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_16 = V_4;
		NullCheck(L_16);
		if (((int32_t)(((RuntimeArray*)L_16)->max_length)))
		{
			goto IL_003f;
		}
	}

IL_003a:
	{
		V_3 = (intptr_t*)((uintptr_t)0);
		goto IL_0049;
	}

IL_003f:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_17 = V_4;
		NullCheck(L_17);
		V_3 = (intptr_t*)((uintptr_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0049:
	{
		String_t* L_18 = ___0_name;
		intptr_t* L_19 = V_3;
		intptr_t L_20;
		L_20 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_19, NULL);
		ParameterU5BU5D_tF777A69F0CD968F78075EB10F2E1FE58C87DD0DA* L_21 = ___1_parameters;
		NullCheck(L_21);
		il2cpp_codegen_runtime_class_init_inline(FirebaseAnalyticsPINVOKE_tF0113FEFD12C99A48C83D58CF33B18F6097272D2_il2cpp_TypeInfo_var);
		FirebaseAnalyticsPINVOKE_LogEvent__SWIG_5_mA16DEE74EB70A05DCD702CEC0681804B4E4D8676(L_18, L_20, ((int32_t)(((RuntimeArray*)L_21)->max_length)), NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_5 = L_22;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_006b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_24;
		L_24 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAnalytics_LogEvent_m27351A3469E8FBC2446717BED1A31193588BC42D_RuntimeMethod_var)));
	}

IL_006b:
	{
		V_4 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)NULL;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____handle_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_op_Explicit_mAA2DBC27D3432B8B4A32D269949122D9ED6A2B7A_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_value, const RuntimeMethod* method) 
{
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = ___0_value;
		intptr_t L_1 = L_0.____handle_1;
		return L_1;
	}
}

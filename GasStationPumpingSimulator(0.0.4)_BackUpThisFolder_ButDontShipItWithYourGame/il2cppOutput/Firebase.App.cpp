﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
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
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
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
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action>
struct Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<Firebase.DependencyStatus>
struct Func_1_tB6381823DCD9F89B9A71E30B5258FBBE2ED482AE;
// System.Func`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t5CB4EF138CF2C1A8C937FFA22680521119BE3305;
// System.Func`2<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_tCEEA1029036C146011A9093868E254F314AB661E;
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t9BE3E8B687E18A04BF29999D209D4EEF1B34F7BF;
// System.Func`2<System.Threading.Tasks.Task,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t0C62219A7981BC3254B9E9404B17F934FE7D7908;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Firebase.FutureVoid/Action>
struct KeyCollection_t64B328CBA09D4559DCD9C28BDD9E42AB4C4C2996;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,Firebase.FirebaseApp>
struct KeyCollection_tAB507529225B3EB42B0879866AEDE113EA9F84C6;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Firebase.FirebaseApp>
struct KeyCollection_t36952DE4619194BF1ABDA8312B5B931AA393A610;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886;
// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t334979F66DE5C2F333F2975D91AA0EEB6E6B35D7;
// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct TaskFactory_1_tA1370864EDB73BA30BF7ECF3D38054C6957BC988;
// System.Threading.Tasks.TaskFactory`1<Firebase.DependencyStatus>
struct TaskFactory_1_tA1BF99B45C5D8E4EBA82339084E38BD2DB72E0C1;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3;
// System.Threading.Tasks.TaskFactory`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Task_1_t3769315417372EBDBD431895C2D9EB5B42C48672;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266;
// System.Threading.Tasks.Task`1<Firebase.DependencyStatus>
struct Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Firebase.FutureVoid/Action>
struct ValueCollection_t0F49903A3AD3505D44F5E4AF817A6F4C953BBF8E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.IntPtr,Firebase.FirebaseApp>
struct ValueCollection_tA737476D641727992993201D18FD0038E69FF7E3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Firebase.FirebaseApp>
struct ValueCollection_t4AEAB6680417FA890D93A2B67CE64787BBAE4ABA;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Firebase.FutureVoid/Action>[]
struct EntryU5BU5D_tB5EA28F4DCD0923DA1488296778DE261A90AB5CF;
// System.Collections.Generic.Dictionary`2/Entry<System.IntPtr,Firebase.FirebaseApp>[]
struct EntryU5BU5D_t77C90FC3D55561F15144FE79F278D07F9D58098E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Firebase.FirebaseApp>[]
struct EntryU5BU5D_t4425584C0F3D1BC5FAEFC1F6C51833B07CB36F40;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>[]
struct KeyValuePair_2U5BU5D_tEA2EBC56D51C33037B041DD38F518261CEE2C84C;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
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
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.DivideByZeroException
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t5AD8517EA34467536BAC8C7C6EB4D4B6880312A2;
// Firebase.Platform.FirebaseAppUtils
struct FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F;
// Firebase.FirebaseException
struct FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED;
// Firebase.FutureBase
struct FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36;
// Firebase.FutureVoid
struct FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Firebase.Platform.IFirebaseAppUtils
struct IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// Firebase.InitializationException
struct InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// Firebase.LogUtil
struct LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Firebase.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_tD9985ACFF80199E37095A632974C17F37B31A703;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// System.OutOfMemoryException
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// Firebase.StringStringMap
struct StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB;
// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Firebase.AppUtilPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150;
// Firebase.AppUtilPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t52FE8935E712DEC744640398FC8B4806F5FF4534;
// Firebase.FirebaseApp/<>c
struct U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C;
// Firebase.FirebaseApp/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_tD42798DED94E0739CFCAF00A186CF7E16A97F8E8;
// Firebase.FirebaseApp/<>c__DisplayClass60_0
struct U3CU3Ec__DisplayClass60_0_t2405D4DB7DF66A50C23215BD4C3358528D4028ED;
// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73;
// Firebase.FirebaseApp/EnableModuleParams
struct EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762;
// Firebase.FutureVoid/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t6BC89DFF3EF637AC4998ABB6D062E6A629AB0D51;
// Firebase.FutureVoid/Action
struct Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F;
// Firebase.FutureVoid/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C;
// Firebase.LogUtil/LogMessageDelegate
struct LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4;
// Firebase.StringStringMap/StringStringMapEnumerator
struct StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2;
// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2;
// Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t8DE60A9CF4030497616BDFC28662C81B33456879;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tB6381823DCD9F89B9A71E30B5258FBBE2ED482AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5CB4EF138CF2C1A8C937FFA22680521119BE3305_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t9BE3E8B687E18A04BF29999D209D4EEF1B34F7BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_t8DE60A9CF4030497616BDFC28662C81B33456879_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_t52FE8935E712DEC744640398FC8B4806F5FF4534_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t334979F66DE5C2F333F2975D91AA0EEB6E6B35D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass58_0_tD42798DED94E0739CFCAF00A186CF7E16A97F8E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t6BC89DFF3EF637AC4998ABB6D062E6A629AB0D51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass60_0_t2405D4DB7DF66A50C23215BD4C3358528D4028ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral04B9FAB0E66C2DAB7301E7D1C74019B4F500DAAF;
IL2CPP_EXTERN_C String_t* _stringLiteral0B47BC9031A69F662702621810EC706E2C081467;
IL2CPP_EXTERN_C String_t* _stringLiteral0FBCAB8C3D9EDED5D0224DC45891EB0E0AAB4BB3;
IL2CPP_EXTERN_C String_t* _stringLiteral1103241B0617CC2365FF633B3B7D5125D1128C22;
IL2CPP_EXTERN_C String_t* _stringLiteral1611D456D2CEE02CE1487EE8445E48898D131F6B;
IL2CPP_EXTERN_C String_t* _stringLiteral16687478A33D5A15482DF6D441B61A0189583C64;
IL2CPP_EXTERN_C String_t* _stringLiteral175FF9BBE95367D4C96387F57879518EEC27BA25;
IL2CPP_EXTERN_C String_t* _stringLiteral1B7B4B5C42CA1C2ED60073710A5266DC268AB4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral238329B64A3729607F223FFEFA394456AE114908;
IL2CPP_EXTERN_C String_t* _stringLiteral24ED59ED9090E09DB40A7847435D91BFAE584ECF;
IL2CPP_EXTERN_C String_t* _stringLiteral324FB463A34E73070FCEDC655BCD2F40B2E47971;
IL2CPP_EXTERN_C String_t* _stringLiteral32E8916355B734142247F16D33AC51F0ABA2C28F;
IL2CPP_EXTERN_C String_t* _stringLiteral380FCBD323D8B608651CCA1F4D65A0B1AA362A2A;
IL2CPP_EXTERN_C String_t* _stringLiteral3818B2A66126D8DEEF8DD9AFC89B116464489DA5;
IL2CPP_EXTERN_C String_t* _stringLiteral39655E1CF62FCA36F81637138EABB8E0E88FF960;
IL2CPP_EXTERN_C String_t* _stringLiteral3D20C767EAE028E07642EC56369E049DCB56F6C8;
IL2CPP_EXTERN_C String_t* _stringLiteral403CDB792BDB39DFA5B32B9F5BF62F3460A11FFC;
IL2CPP_EXTERN_C String_t* _stringLiteral41AFC5CF6BD87FAE855E565E56413D254EFDD312;
IL2CPP_EXTERN_C String_t* _stringLiteral469058482DD7BE31765E4E966F8C98EA4B3B6930;
IL2CPP_EXTERN_C String_t* _stringLiteral47655613208A2442002F378BF374CC45952A31F8;
IL2CPP_EXTERN_C String_t* _stringLiteral515AE8FDB9C25ACAE2FBF81A8470F0F8B3FDD6FC;
IL2CPP_EXTERN_C String_t* _stringLiteral548196CBB5E5F5105E575F464FE92F73144DFB34;
IL2CPP_EXTERN_C String_t* _stringLiteral572FD223BFCEC6E8E552A7CC84FEDA3269F3A5F7;
IL2CPP_EXTERN_C String_t* _stringLiteral61DC9D5B9D0D0872BCFFE89C3B93B577646F49EC;
IL2CPP_EXTERN_C String_t* _stringLiteral62550204912BC90809B03D0FE60F2B4874EB15F8;
IL2CPP_EXTERN_C String_t* _stringLiteral62ADD91054A91B61299B0BA0A51937BA842068BB;
IL2CPP_EXTERN_C String_t* _stringLiteral67A6CCCC9B988CA6C77F51058F6A4BE90887BA98;
IL2CPP_EXTERN_C String_t* _stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54;
IL2CPP_EXTERN_C String_t* _stringLiteral6B9EE94C7F4915E6739895F8E1EF487BB8906396;
IL2CPP_EXTERN_C String_t* _stringLiteral7AAEF17DD886943DA28485F945C0BC92C838450F;
IL2CPP_EXTERN_C String_t* _stringLiteral7EA8F2DF39C94049CBEAACE46B64E4034C3E90C1;
IL2CPP_EXTERN_C String_t* _stringLiteral87335D17F4C1DED94C576C65C1DC4F16D278C988;
IL2CPP_EXTERN_C String_t* _stringLiteral875842D645C31A13810035132C84A4C226BFDDA6;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral88B277217AED4CBAA42043A4D5CD8DB154680BFA;
IL2CPP_EXTERN_C String_t* _stringLiteral890A68C9701B6B7B9E0ECC8C54874D634FB51E11;
IL2CPP_EXTERN_C String_t* _stringLiteral8DE0CBA7BF0AAAFA4927500E94B54EAA544A2E0C;
IL2CPP_EXTERN_C String_t* _stringLiteral955802D1A6D5235C4CF60C6BA2074F90F06CECCE;
IL2CPP_EXTERN_C String_t* _stringLiteralA37BC83F5B58D09130EA87C7BFA23EEF1ED5CE5D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3A98A8B1C98564A92ABAE5D3EB9AB9D7723903A;
IL2CPP_EXTERN_C String_t* _stringLiteralADA172ACC20A09E7D83BFE71E65356790E5B24CE;
IL2CPP_EXTERN_C String_t* _stringLiteralAF3E6E43968D1C156E887454B8F9BDB7723036D3;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB7EFBEA6AABC35E96367379C5A6B509BB4044717;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18;
IL2CPP_EXTERN_C String_t* _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC2BB0CEDEC57E9981F22698838128030E062BF12;
IL2CPP_EXTERN_C String_t* _stringLiteralC79C1E7C1AB013FFB3AD9A42073405EF4995E70F;
IL2CPP_EXTERN_C String_t* _stringLiteralC8F137D4118E68E1AA31E3046D7C7D47594CAD9C;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE;
IL2CPP_EXTERN_C String_t* _stringLiteralCE7E620B6BAD964BAD6753F86F18F5350AD73DAB;
IL2CPP_EXTERN_C String_t* _stringLiteralCF713BCAEC5B32A45A72E5F3972B1092DCC4FFB3;
IL2CPP_EXTERN_C String_t* _stringLiteralD03CEEC65910C548D635624A78A8CFA458103DED;
IL2CPP_EXTERN_C String_t* _stringLiteralD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF;
IL2CPP_EXTERN_C String_t* _stringLiteralD555DED7CEC14AAFD2389F4CA5DB31942645053F;
IL2CPP_EXTERN_C String_t* _stringLiteralD7D6709CAC9D8FCE4933C82CDA34EE45277DBD95;
IL2CPP_EXTERN_C String_t* _stringLiteralD8E3A88F5BFAC46D4EA8953E6A2EA7D3C25746CC;
IL2CPP_EXTERN_C String_t* _stringLiteralDE83EFF84A2045FE5379CA94C53B51BA575BD5A6;
IL2CPP_EXTERN_C String_t* _stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8;
IL2CPP_EXTERN_C String_t* _stringLiteralE6F00725B1CE2641D3D5ED19F65223CA4D3F8BAE;
IL2CPP_EXTERN_C String_t* _stringLiteralE952D19344D880EF06EC8AACBF9B79603FCE8F3A;
IL2CPP_EXTERN_C String_t* _stringLiteralEA5B9DDB87B05728AF950352BA404136EF4EA09B;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309;
IL2CPP_EXTERN_C String_t* _stringLiteralEE248ED951626ABDD49B64B81CAEAF341755AF6C;
IL2CPP_EXTERN_C String_t* _stringLiteralF21B662C3F976D9980F52B473208474F6C31CBE5;
IL2CPP_EXTERN_C String_t* _stringLiteralF2A5607525186BE61B973E77753BBA0D8227A406;
IL2CPP_EXTERN_C String_t* _stringLiteralF56258CA08196A0AA345480C655C78D0172F29E6;
IL2CPP_EXTERN_C String_t* _stringLiteralFB12F16C75DE3806ED28E20C65FB81D432F0D52F;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_AppEnableLogCallback_m9FE8159D116019E4E918F4B7CEC39687DD64B2EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_CheckAndroidDependencies_m0D39BD88D8B8246E40B4F874956BE9884C8E0C93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_GetEnabledAppCallbackByName_m979A86ABDBC2257B697ABDE5015AA76DE5D04F70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_InitializePlayServicesInternal_m89751D7035A1D3816E68F8FDCB4B5B2F8D2F23D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_PollCallbacks_mB25BC1FD5126974F80860A05910301AAF7589BFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_SetEnabledAllAppCallbacks_m0C41A4271764464915ACA461AE8A309AEDAFA6AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_SetEnabledAppCallbackByName_m59C6CB27D92D72FD0841031C207D86C2F684F366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_SetLogFunction_m1C535B70AA8069AC3CE81CB05882946F841DACCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_TerminatePlayServicesInternal_mED5F11E95B315C4014E0680574592ED30EBFF772_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m152F1DE099A6441F30DB01049310A23447A99CC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m7A0B03D4435A96C5CB96AAFD5DDBEF49294C7C5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mE92CC8C926DDAFEDB2A50CCEA0B6571DED3D57E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m6CD864883E697C6EA206A9653365B8F6B18A70EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m6E5B2FEEC491D083B03A11DA6FA39A580A2369A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD9203985461B343144479403BB91596E7FD479F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m11A6F16438BDFA5BB4D619721B6F24400CDB4B17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8F62E1C352E79E91D4BA07FB3DAE1E55115004CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9ECDA1EAD89A6D781E5CE4E813451CFD7DF269E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m320B502DBB8BB9D371AD03B9E0A23453D8C63E8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m37FF7170A65FE1A27B5EADEF6AC8AC59F8AF7FD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m646A0C479D12D665388558549E99ED1C949D5538_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m984B6FF03912DD47210B97F3876A8E68BD477586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_AppSetDefaultConfigPath_m9712BA055777DA0F98524BD85A6C97FBFC5C6192_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_CheckDependenciesInternal_m738CFE3533F41FC660E43B2EFCCD44BF6EF0AFE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_CreateAndTrack_m3EFC2B1BFE4FF3BE069B04DE63E93A257CD65B3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_CreateInternal_m63EB3F64189DA8E6C5B2E1C95B11D63EF7F7BC4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_InitializeAppUtilCallbacks_m69A50FD352AE820F31C0DBA793A462BC774F4B20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_InitializeCrashlyticsIfPresent_m543A1327364F796F96120C0CD4D7805B412529B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_LogHeartbeatInternal_m849C31C3F73680D986D5672C464BEBCA899FBEFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_RegisterLibrariesInternal_m03B7487A8CAECC33FFFFFC110445811D0DDB35F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_ReleaseReferenceInternal_mA281FCA13BCF136D9D9B4311C40925B99614D63D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_SetCheckDependenciesThread_mFE57ACFA06A8CBAAD19379B430621763999C3563_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_ThrowIfCheckDependenciesRunning_mCC374EEFD25964DB6A38DA14EC987792DE119D9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_ThrowIfNull_mEBB4A7F4A0E30B8F6969C68C340AF30D44491B20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_TranslateDllNotFoundException_m8A53BF93797E69E0A396E5D387C8BE2FAC5A887E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_get_DefaultName_mE170961E3E149AB409453866F8FBEDE07E9C3714_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_get_NameInternal_m493D9AEC87709D1197A1997C7560AFEBB107FBCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAE5FCABDB6F0D5495736534F2072751B25E840B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureBase_error_m47E3B5E0A43B4C19510A77B3658EE5D7D10B6030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureBase_error_message_m5CC18319253B1ECC3C8AC675B213A08B1755D527_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureBase_status_mC75FD35438B176F95462D3A5D7D9194629211902_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureVoid_SWIG_CompletionDispatcher_mE9933C19D489F4E5B7B8F99C087A7A1C95681554_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureVoid_SWIG_FreeCompletionData_m6570E091DBEF492143DA3BB5B21C5E500495AB87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureVoid_SWIG_OnCompletion_mD6E8C709E067EC3FCCC1DD9F8F7C664D7479B634_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureVoid_ThrowIfDisposed_m58FAFA498227E36B2075EDAF83F346CD70BD9739_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mC76BE8DEB14377BA47C72BDFC7D0BBD37330F36B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LogUtil_LogMessageFromCallback_m3EA336850B4BE115C393BA3AD71981D1AA654307_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LogUtil_U3C_ctorU3Eb__9_0_m057EE72CCDA8877817C356F04A3FB0403BDC8268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_m7FE3B7ADC198F4ED5A180BC5ECD18CC371444591_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_m82CC529F5355DF173784D29CDB197BC3AAA353BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_m1A239C193A01B3E73BD763718FB528ED933847A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m1F079CDB1AC454648BEFF38716F88AFE6FA8F926_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m5DA562871B81FA3E688FD12D78E82882F5ADC315_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_m7AE515E72B8E23D18919432B5B7BF0F06CCD18E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_mA50448F1AA4CA664C39B8AB78EF912F18E0DDF50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mCD203C03B85ADB38206622594E5DEECA14C1CA7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m64057305E28A3122C79BFF5A8C441D72B04C6E5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_m4CE89FA918E3D9CA7C6391147792F8226CF6BA07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m0CE8D326228371436AB3BBCE9AA7464619030A35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_mB4209DD263A50C83F1E9CE39A85ADDAE18F51759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_m366DEFCF657EFE4CBABD2ADCD7D09BD6144E25B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_mE317DA81F256CF3BD75CAC264E25961D7A536191_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_m7EB577A3129E190D2FBAF8CB9C9CAB7F87DA2642_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_m929C4B0922610C0571E685F27F79757BF669C77F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMapEnumerator_Reset_mFE28DCE2D21F6639E75B255AAF56D34BFA7A151A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMapEnumerator_get_Current_mE221D98D4E0B07220825ED8752B9714AADBCB04E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap_Add_m01048CFD777D82B2F693B6D71A4D452FAF7AEAC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap_Clear_mC33CC5FAC952437E4A1844D77F07682AB4A440A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap_ContainsKey_mD13F26BD8A08E581ADB303D38074819105C605A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap_CopyTo_m5D78F9003BE6B16285A5C22504731EA6D14B6454_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap_Remove_m986E61004827D7F62831AEE307E6020383C3CB4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap__ctor_m5295C0F5394545250F06A5F0A53C9ABB48D67794_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap_create_iterator_begin_mF1C81519248E3646D376EC9F288C1C6A2065630D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap_destroy_iterator_m75AD241AD5316B8B09070BF04C571918FE34BA04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap_get_next_key_m92C94637FF8B9A00B08BFCAD08CD41705AEAEE9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap_getitem_m8DADD76F6CD52B4B98611DD4292910963C079C1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap_setitem_mC5A0170C20E03D926C187A4B7AC6B0B96FB18C00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap_size_m9C20BFD104A8B49600AD587CC29C4A748F408DC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetCanceled_mAD782AAED9E467C7CD39801AA1B6365C9562C44A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_m2BD5F2CC6C343DF947BB026CB4B1FB72EBD24A93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_mEAC57DB80E5D80F41A490DB1AE90B89A4B2CA2E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mE2B94C03A4FD1C3411C2ED506508F8B93ED25C7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m5FEF07332DD178987B44AD842559F18D9254224B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskExtensions_Unwrap_TisDependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_mA8A63E7E7E6B006A25BC9AFB3C60D14C48AE5849_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_TisTask_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF_m1A7A10DF8B625077E1FC8B29E0D834614EAE0155_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_ContinueWith_TisTask_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF_mBD511CA5A5F2ACD9B0DFAA5064DAF1419E505810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_Run_TisDependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_m6C591DC2396836DA8270AA4EEAE2131BE3B34C4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCheckAndFixDependenciesAsyncU3Eb__57_0_m9404F3BF637CC9AE29CC521159638C07E55E9513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCheckAndFixDependenciesAsyncU3Eb__57_1_m910DECA8F467A4E6A55360C8962CB5C85EB2B8ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCheckDependenciesAsyncU3Eb__56_0_m636488EA2B782D4C9144E642E528E6E85F8C2129_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateAndTrackU3Eb__48_0_m353C5F1E7C6BDE8601757A37801E17C89CA49AC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateU3Eb__15_0_mF43BDAE5875C0C407791D7735DC43BB00EB29F32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFixDependenciesAsyncU3Eb__60_1_mE24B887D7A05989A5250E16C95370FEF0A6920EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass58_0_U3CCheckDependenciesU3Eb__0_m4CEFE0A719711F3C0563FD9C9FDDF2F652553AF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CGetTaskU3Eb__0_m3C63FB12C6FC4D1551D9D48B32F123DF7EAA4AE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass60_0_U3CFixDependenciesAsyncU3Eb__0_mA216F8EE30AAE8DB85F3BD26CFA937C99363D009_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_tEA2EBC56D51C33037B041DD38F518261CEE2C84C;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t38F8D7FF0E4B0B0C8677AFFB63A1DD3829C03FEB 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action>
struct Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB5EA28F4DCD0923DA1488296778DE261A90AB5CF* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t64B328CBA09D4559DCD9C28BDD9E42AB4C4C2996* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t0F49903A3AD3505D44F5E4AF817A6F4C953BBF8E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t77C90FC3D55561F15144FE79F278D07F9D58098E* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tAB507529225B3EB42B0879866AEDE113EA9F84C6* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA737476D641727992993201D18FD0038E69FF7E3* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t4425584C0F3D1BC5FAEFC1F6C51833B07CB36F40* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t36952DE4619194BF1ABDA8312B5B931AA393A610* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t4AEAB6680417FA890D93A2B67CE64787BBAE4ABA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t334979F66DE5C2F333F2975D91AA0EEB6E6B35D7  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ____task_0;
};

// Firebase.AppUtil
struct AppUtil_tD511CFFF45A0C91E2CC7F969B82B3BEE25BD31AB  : public RuntimeObject
{
};

// Firebase.AppUtilPINVOKE
struct AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342  : public RuntimeObject
{
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// Firebase.ErrorMessages
struct ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t5AD8517EA34467536BAC8C7C6EB4D4B6880312A2  : public RuntimeObject
{
};

// Firebase.Platform.FirebaseAppUtils
struct FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F  : public RuntimeObject
{
};

// Firebase.LogUtil
struct LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39  : public RuntimeObject
{
	// System.Boolean Firebase.LogUtil::_disposed
	bool ____disposed_2;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
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

// Firebase.VersionInfo
struct VersionInfo_t94C48C6F8F37BB4AB53DF332514056A9FE6ACACB  : public RuntimeObject
{
};

// Firebase.AppUtilPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150  : public RuntimeObject
{
};

// Firebase.AppUtilPINVOKE/SWIGPendingException
struct SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63  : public RuntimeObject
{
};

// Firebase.AppUtilPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t52FE8935E712DEC744640398FC8B4806F5FF4534  : public RuntimeObject
{
};

// Firebase.FirebaseApp/<>c
struct U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C  : public RuntimeObject
{
};

// Firebase.FirebaseApp/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_tD42798DED94E0739CFCAF00A186CF7E16A97F8E8  : public RuntimeObject
{
	// Firebase.DependencyStatus Firebase.FirebaseApp/<>c__DisplayClass58_0::status
	int32_t ___status_0;
};

// Firebase.FirebaseApp/<>c__DisplayClass60_0
struct U3CU3Ec__DisplayClass60_0_t2405D4DB7DF66A50C23215BD4C3358528D4028ED  : public RuntimeObject
{
	// System.Threading.Tasks.Task Firebase.FirebaseApp/<>c__DisplayClass60_0::task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task_0;
};

// Firebase.FirebaseApp/EnableModuleParams
struct EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762  : public RuntimeObject
{
	// System.String Firebase.FirebaseApp/EnableModuleParams::<CppModuleName>k__BackingField
	String_t* ___U3CCppModuleNameU3Ek__BackingField_0;
	// System.String Firebase.FirebaseApp/EnableModuleParams::<CSharpClassName>k__BackingField
	String_t* ___U3CCSharpClassNameU3Ek__BackingField_1;
	// System.Boolean Firebase.FirebaseApp/EnableModuleParams::<AlwaysEnable>k__BackingField
	bool ___U3CAlwaysEnableU3Ek__BackingField_2;
};

// Firebase.FutureVoid/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t6BC89DFF3EF637AC4998ABB6D062E6A629AB0D51  : public RuntimeObject
{
	// Firebase.FutureVoid Firebase.FutureVoid/<>c__DisplayClass5_0::fu
	FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* ___fu_0;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Int32> Firebase.FutureVoid/<>c__DisplayClass5_0::tcs
	TaskCompletionSource_1_t334979F66DE5C2F333F2975D91AA0EEB6E6B35D7* ___tcs_1;
};

// Firebase.StringStringMap/StringStringMapEnumerator
struct StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18  : public RuntimeObject
{
	// Firebase.StringStringMap Firebase.StringStringMap/StringStringMapEnumerator::collectionRef
	StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* ___collectionRef_0;
	// System.Collections.Generic.IList`1<System.String> Firebase.StringStringMap/StringStringMapEnumerator::keyCollection
	RuntimeObject* ___keyCollection_1;
	// System.Int32 Firebase.StringStringMap/StringStringMapEnumerator::currentIndex
	int32_t ___currentIndex_2;
	// System.Object Firebase.StringStringMap/StringStringMapEnumerator::currentObject
	RuntimeObject* ___currentObject_3;
	// System.Int32 Firebase.StringStringMap/StringStringMapEnumerator::currentSize
	int32_t ___currentSize_4;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Task_1_t3769315417372EBDBD431895C2D9EB5B42C48672  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Firebase.DependencyStatus>
struct Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;
};

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// Firebase.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_tD9985ACFF80199E37095A632974C17F37B31A703  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_9;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_10;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_11;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_12;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_13;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_14;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_15;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_16;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_17;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_18;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_19;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_20;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F  : public Exception_t
{
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* ___m_innerExceptions_18;
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

// Firebase.FirebaseException
struct FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED  : public Exception_t
{
	// System.Int32 Firebase.FirebaseException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_18;
};

// Firebase.FutureBase
struct FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.FutureBase::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.FutureBase::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.InitializationException
struct InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E  : public Exception_t
{
	// Firebase.InitResult Firebase.InitializationException::<InitResult>k__BackingField
	int32_t ___U3CInitResultU3Ek__BackingField_18;
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

// Firebase.StringStringMap
struct StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.StringStringMap::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.StringStringMap::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Func`1<Firebase.DependencyStatus>
struct Func_1_tB6381823DCD9F89B9A71E30B5258FBBE2ED482AE  : public MulticastDelegate_t
{
};

// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t5CB4EF138CF2C1A8C937FFA22680521119BE3305  : public MulticastDelegate_t
{
};

// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t9BE3E8B687E18A04BF29999D209D4EEF1B34F7BF  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
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

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// Firebase.FutureVoid
struct FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480  : public FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36
{
	// System.Runtime.InteropServices.HandleRef Firebase.FutureVoid::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_2;
	// System.IntPtr Firebase.FutureVoid::callbackData
	intptr_t ___callbackData_6;
	// Firebase.FutureVoid/SWIG_CompletionDelegate Firebase.FutureVoid::SWIG_CompletionCB
	SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C* ___SWIG_CompletionCB_7;
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

// System.TypeLoadException
struct TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_18;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_19;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_20;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_21;
};

// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73  : public MulticastDelegate_t
{
};

// Firebase.FutureVoid/Action
struct Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F  : public MulticastDelegate_t
{
};

// Firebase.FutureVoid/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C  : public MulticastDelegate_t
{
};

// Firebase.LogUtil/LogMessageDelegate
struct LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4  : public MulticastDelegate_t
{
};

// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2  : public MulticastDelegate_t
{
};

// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2  : public MulticastDelegate_t
{
};

// Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t8DE60A9CF4030497616BDFC28662C81B33456879  : public MulticastDelegate_t
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

// System.DllNotFoundException
struct DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534  : public TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32
{
};

// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
	// System.String System.IO.FileNotFoundException::<FileName>k__BackingField
	String_t* ___U3CFileNameU3Ek__BackingField_18;
	// System.String System.IO.FileNotFoundException::<FusionLog>k__BackingField
	String_t* ___U3CFusionLogU3Ek__BackingField_19;
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action>

// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action>

// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>

// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>

// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>

// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>

// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Firebase.AppUtil

// Firebase.AppUtil

// Firebase.AppUtilPINVOKE
struct AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_StaticFields
{
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper Firebase.AppUtilPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150* ___swigExceptionHelper_0;
	// Firebase.AppUtilPINVOKE/SWIGStringHelper Firebase.AppUtilPINVOKE::swigStringHelper
	SWIGStringHelper_t52FE8935E712DEC744640398FC8B4806F5FF4534* ___swigStringHelper_1;
};

// Firebase.AppUtilPINVOKE

// System.Reflection.Assembly

// System.Reflection.Assembly

// System.Attribute

// System.Attribute

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject

// Firebase.ErrorMessages
struct ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_StaticFields
{
	// System.String Firebase.ErrorMessages::DEPENDENCY_NOT_FOUND_ERROR_ANDROID
	String_t* ___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0;
	// System.String Firebase.ErrorMessages::DEPENDENCY_NOT_FOUND_ERROR_IOS
	String_t* ___DEPENDENCY_NOT_FOUND_ERROR_IOS_1;
	// System.String Firebase.ErrorMessages::DEPENDENCY_NOT_FOUND_ERROR_GENERIC
	String_t* ___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2;
	// System.String Firebase.ErrorMessages::DLL_NOT_FOUND_ERROR_ANDROID
	String_t* ___DLL_NOT_FOUND_ERROR_ANDROID_3;
	// System.String Firebase.ErrorMessages::DLL_NOT_FOUND_ERROR_IOS
	String_t* ___DLL_NOT_FOUND_ERROR_IOS_4;
	// System.String Firebase.ErrorMessages::DLL_NOT_FOUND_ERROR_GENERIC
	String_t* ___DLL_NOT_FOUND_ERROR_GENERIC_5;
};

// Firebase.ErrorMessages

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.EventArgs

// Firebase.Platform.FirebaseAppPlatform

// Firebase.Platform.FirebaseAppPlatform

// Firebase.Platform.FirebaseAppUtils
struct FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F_StaticFields
{
	// Firebase.Platform.FirebaseAppUtils Firebase.Platform.FirebaseAppUtils::instance
	FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F* ___instance_0;
};

// Firebase.Platform.FirebaseAppUtils

// Firebase.LogUtil
struct LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_StaticFields
{
	// Firebase.LogUtil Firebase.LogUtil::_instance
	LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39* ____instance_0;
	// System.Object Firebase.LogUtil::InitializeLoggingLock
	RuntimeObject* ___InitializeLoggingLock_1;
};

// Firebase.LogUtil

// System.MarshalByRefObject

// System.MarshalByRefObject

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.ValueType

// System.ValueType

// Firebase.VersionInfo

// Firebase.VersionInfo

// Firebase.AppUtilPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields
{
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___applicationDelegate_0;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___arithmeticDelegate_1;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___divideByZeroDelegate_2;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___indexOutOfRangeDelegate_3;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___invalidCastDelegate_4;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___invalidOperationDelegate_5;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___ioDelegate_6;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___nullReferenceDelegate_7;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___outOfMemoryDelegate_8;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___overflowDelegate_9;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___systemDelegate_10;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* ___argumentDelegate_11;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* ___argumentNullDelegate_12;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* ___argumentOutOfRangeDelegate_13;
};

// Firebase.AppUtilPINVOKE/SWIGExceptionHelper

// Firebase.AppUtilPINVOKE/SWIGPendingException
struct SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_StaticFields
{
	// System.Int32 Firebase.AppUtilPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;
	// System.Object Firebase.AppUtilPINVOKE/SWIGPendingException::exceptionsLock
	RuntimeObject* ___exceptionsLock_2;
};

// Firebase.AppUtilPINVOKE/SWIGPendingException
struct SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_ThreadStaticFields
{
	// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::pendingException
	Exception_t* ___pendingException_0;
};

// Firebase.AppUtilPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t52FE8935E712DEC744640398FC8B4806F5FF4534_StaticFields
{
	// Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate Firebase.AppUtilPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_t8DE60A9CF4030497616BDFC28662C81B33456879* ___stringDelegate_0;
};

// Firebase.AppUtilPINVOKE/SWIGStringHelper

// Firebase.FirebaseApp/<>c
struct U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields
{
	// Firebase.FirebaseApp/<>c Firebase.FirebaseApp/<>c::<>9
	U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C* ___U3CU3E9_0;
	// Firebase.FirebaseApp/CreateDelegate Firebase.FirebaseApp/<>c::<>9__15_0
	CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73* ___U3CU3E9__15_0_1;
	// System.Func`1<System.Boolean> Firebase.FirebaseApp/<>c::<>9__48_0
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CU3E9__48_0_2;
	// System.Func`1<Firebase.DependencyStatus> Firebase.FirebaseApp/<>c::<>9__56_0
	Func_1_tB6381823DCD9F89B9A71E30B5258FBBE2ED482AE* ___U3CU3E9__56_0_3;
	// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp/<>c::<>9__57_1
	Func_2_t9BE3E8B687E18A04BF29999D209D4EEF1B34F7BF* ___U3CU3E9__57_1_4;
	// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp/<>c::<>9__57_0
	Func_2_t5CB4EF138CF2C1A8C937FFA22680521119BE3305* ___U3CU3E9__57_0_5;
	// System.Action`1<System.Threading.Tasks.Task> Firebase.FirebaseApp/<>c::<>9__60_1
	Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* ___U3CU3E9__60_1_6;
};

// Firebase.FirebaseApp/<>c

// Firebase.FirebaseApp/<>c__DisplayClass58_0

// Firebase.FirebaseApp/<>c__DisplayClass58_0

// Firebase.FirebaseApp/<>c__DisplayClass60_0

// Firebase.FirebaseApp/<>c__DisplayClass60_0

// Firebase.FirebaseApp/EnableModuleParams

// Firebase.FirebaseApp/EnableModuleParams

// Firebase.FutureVoid/<>c__DisplayClass5_0

// Firebase.FutureVoid/<>c__DisplayClass5_0

// Firebase.StringStringMap/StringStringMapEnumerator

// Firebase.StringStringMap/StringStringMapEnumerator

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Task_1_t3769315417372EBDBD431895C2D9EB5B42C48672_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tA1370864EDB73BA30BF7ECF3D38054C6957BC988* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>

// System.Threading.Tasks.Task`1<Firebase.DependencyStatus>
struct Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tA1BF99B45C5D8E4EBA82339084E38BD2DB72E0C1* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Firebase.DependencyStatus>

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Int32>

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// Firebase.MonoPInvokeCallbackAttribute

// Firebase.MonoPInvokeCallbackAttribute

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// System.UInt32

// System.UInt32

// System.Void

// System.Void

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};

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

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.AggregateException

// System.AggregateException

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

// Firebase.FirebaseException

// Firebase.FirebaseException

// Firebase.FutureBase

// Firebase.FutureBase

// Firebase.InitializationException

// Firebase.InitializationException

// System.MulticastDelegate

// System.MulticastDelegate

// Firebase.StringStringMap

// Firebase.StringStringMap

// System.SystemException

// System.SystemException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<System.Threading.Tasks.Task>

// System.Action`1<System.Threading.Tasks.Task>

// System.Func`1<System.Boolean>

// System.Func`1<System.Boolean>

// System.Func`1<Firebase.DependencyStatus>

// System.Func`1<Firebase.DependencyStatus>

// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>

// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>

// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>

// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>

// System.Action

// System.Action

// System.ArgumentException

// System.ArgumentException

// System.ArithmeticException

// System.ArithmeticException

// System.EventHandler

// System.EventHandler

// Firebase.FutureVoid
struct FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action> Firebase.FutureVoid::Callbacks
	Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A* ___Callbacks_3;
	// System.Int32 Firebase.FutureVoid::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.FutureVoid::CallbackLock
	RuntimeObject* ___CallbackLock_5;
};

// Firebase.FutureVoid

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

// System.TypeLoadException

// System.TypeLoadException

// Firebase.FirebaseApp/CreateDelegate

// Firebase.FirebaseApp/CreateDelegate

// Firebase.FutureVoid/Action

// Firebase.FutureVoid/Action

// Firebase.FutureVoid/SWIG_CompletionDelegate

// Firebase.FutureVoid/SWIG_CompletionDelegate

// Firebase.LogUtil/LogMessageDelegate

// Firebase.LogUtil/LogMessageDelegate

// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate

// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate

// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate

// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate

// Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate

// Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// System.DivideByZeroException

// System.DivideByZeroException

// System.DllNotFoundException

// System.DllNotFoundException

// System.IO.FileNotFoundException

// System.IO.FileNotFoundException

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
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>[]
struct KeyValuePair_2U5BU5D_tEA2EBC56D51C33037B041DD38F518261CEE2C84C  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A m_Items[1];

	inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
// Firebase.FirebaseApp/EnableModuleParams[]
struct EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118  : public RuntimeArray
{
	ALIGN_FIELD (8) EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* m_Items[1];

	inline EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mD6DB19F66035FC77675F1ED9FE696A65CF9C0F23_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_m58C4BD8A0F4F1FAA417EC05E2EDC79F0D6C5ADB7_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SetCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetCanceled_m094D37FCDE8D0431163D8998A9000CA96CADBB45_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m20A3A9EACC332D8ECC8AA9E690B90E6C56835CED_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mC73A4FCEBBAB90CB7B7AB16321F3F98FBBF12596_gshared (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_RunOnMainThread_TisIl2CppFullySharedGenericAny_mF11E1A87243C76F8CCDA631B80AD72595F58BEAD_gshared (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___0_f, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_Run_TisIl2CppFullySharedGenericAny_m9B8B1B2F2FE04689FD7BADCD0E57F38E4B5FBF69_gshared (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___0_function, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TNewResult> System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ContinueWith<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`2<System.Threading.Tasks.Task`1<TResult>,TNewResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_1_ContinueWith_TisIl2CppFullySharedGenericAny_m5EC0995ECF6B3762E499B8EF6B9BDA56D512551C_gshared (/*System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* __this, Func_2_tCEEA1029036C146011A9093868E254F314AB661E* ___0_continuationFunction, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskExtensions::Unwrap<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskExtensions_Unwrap_TisIl2CppFullySharedGenericAny_m4FB34270E579A71A15A0CCE1ACA21650A7D80AA7_gshared (Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266* ___0_task, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1_get_Result_mF84A04F573B3700E098DF189233DA4CB3E14D53C_gshared (/*System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::ContinueWith<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`2<System.Threading.Tasks.Task,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_ContinueWith_TisIl2CppFullySharedGenericAny_mE349C374FBD67F9F87A74035D3EB3F3CC41D95CE_gshared (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22* ___0_continuationFunction, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;

// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseException::set_ErrorCode(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseException_set_ErrorCode_m65B2880424E85063D56405A009DAA13E3B106465_inline (FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.InitializationException::set_InitResult(Firebase.InitResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InitializationException_set_InitResult_m94032AD57F63718F6F20625FDB98958766C9D764_inline (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Boolean Firebase.Platform.PlatformInformation::get_IsAndroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformInformation_get_IsAndroid_mA671D9472B9FDCE9060CD79409611B524ACEB61B (const RuntimeMethod* method) ;
// System.Boolean Firebase.Platform.PlatformInformation::get_IsIOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformInformation_get_IsIOS_mC19E79F4C15D4B8B2CF22DE2517074235DCF7082 (const RuntimeMethod* method) ;
// System.String Firebase.ErrorMessages::get_DependencyNotFoundErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorMessages_get_DependencyNotFoundErrorMessage_mA71EBFCD6E5CC0C61BD0E3624738175EADBCC0F7 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void Firebase.LogUtil::LogMessageFromCallback(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessageFromCallback_m3EA336850B4BE115C393BA3AD71981D1AA654307 (int32_t ___0_logLevel, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Firebase.LogUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil__ctor_mFE64F3E0CAE4C8D317093D419552825F2187F3EA (LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtil::AppEnableLogCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_AppEnableLogCallback_m9FE8159D116019E4E918F4B7CEC39687DD64B2EA (bool ___0_arg0, const RuntimeMethod* method) ;
// Firebase.Platform.PlatformLogLevel Firebase.LogUtil::ConvertLogLevel(Firebase.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogUtil_ConvertLogLevel_mE58CCE065A1D6EBEDDDDA2CDE76AFEA71E474216 (int32_t ___0_logLevel, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseLogger::LogMessage(Firebase.Platform.PlatformLogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseLogger_LogMessage_mA369905E81D1C7988F02D10C909588A688017AA4 (int32_t ___0_logLevel, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Boolean Firebase.Platform.FirebaseLogger::get_CanRedirectNativeLogs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseLogger_get_CanRedirectNativeLogs_m1EEC26D9564564880A37D4DCBE6D4E288CD6C7DD (const RuntimeMethod* method) ;
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49 (int32_t ___0_logLevel, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Firebase.LogUtil/LogMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMessageDelegate__ctor_mB6AACCCEAE43E818C4B0DFCF6388FF4CC7200F10 (LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtil::SetLogFunction(Firebase.LogUtil/LogMessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetLogFunction_m1C535B70AA8069AC3CE81CB05882946F841DACCB (LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4* ___0_arg0, const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.AppDomain::add_DomainUnload(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDomain_add_DomainUnload_mC24E729ABD7550A0A1F018EBF215FDF03AA1064F (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Firebase.LogUtil::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_Dispose_m97EA8C366043F8F98301F73F488901880DA431CB (LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, RuntimeObject* ___0_wrapper, intptr_t ___1_handle, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE::delete_FutureBase(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_delete_FutureBase_mBA1AC9D7BE7977A080996ED289972DF8449F7BC5 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Int32 Firebase.AppUtilPINVOKE::FutureBase_status(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_FutureBase_status_m3056FA61BBB6B002A5BEE4F34F75DCD0858BC27C (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE (const RuntimeMethod* method) ;
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51 (const RuntimeMethod* method) ;
// System.Int32 Firebase.AppUtilPINVOKE::FutureBase_error(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_FutureBase_error_mDB0C901628E9EE247400F57E7E697743B69906E3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.AppUtilPINVOKE::FutureBase_error_message(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_FutureBase_error_message_mDB4089A47D35BF6D3457750C5355B1908C4BE46B (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE::delete_StringStringMap(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_delete_StringStringMap_m9ACE5D4FA3CBE366F2925D4328DBE077A95E7196 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.StringStringMap::getitem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringStringMap_getitem_m8DADD76F6CD52B4B98611DD4292910963C079C1B (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void Firebase.StringStringMap::setitem(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_setitem_mC5A0170C20E03D926C187A4B7AC6B0B96FB18C00 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, String_t* ___0_key, String_t* ___1_x, const RuntimeMethod* method) ;
// System.Boolean Firebase.StringStringMap::ContainsKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringStringMap_ContainsKey_mD13F26BD8A08E581ADB303D38074819105C605A5 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, String_t* ___0_key, const RuntimeMethod* method) ;
// System.String Firebase.StringStringMap::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringStringMap_get_Item_m01061069FC7C194E45C518987A14FA5918806BE1 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, String_t* ___0_key, const RuntimeMethod* method) ;
// System.UInt32 Firebase.StringStringMap::size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t StringStringMap_size_m9C20BFD104A8B49600AD587CC29C4A748F408DC4 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Int32 Firebase.StringStringMap::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringStringMap_get_Count_m2B11AF48BF1530FCB3ED130712C6B5BADC76A848 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, const RuntimeMethod* method) ;
// System.IntPtr Firebase.StringStringMap::create_iterator_begin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StringStringMap_create_iterator_begin_mF1C81519248E3646D376EC9F288C1C6A2065630D (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, const RuntimeMethod* method) ;
// System.String Firebase.StringStringMap::get_next_key(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringStringMap_get_next_key_m92C94637FF8B9A00B08BFCAD08CD41705AEAEE9B (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, intptr_t ___0_swigiterator, const RuntimeMethod* method) ;
// System.Void Firebase.StringStringMap::destroy_iterator(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_destroy_iterator_m75AD241AD5316B8B09070BF04C571918FE34BA04 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, intptr_t ___0_swigiterator, const RuntimeMethod* method) ;
// Firebase.StringStringMap/StringStringMapEnumerator Firebase.StringStringMap::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18* StringStringMap_GetEnumerator_m5629FBE397B23B93415341566E71A149DBF1362A (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String> Firebase.StringStringMap/StringStringMapEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A StringStringMapEnumerator_get_Current_mE221D98D4E0B07220825ED8752B9714AADBCB04E (StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean Firebase.StringStringMap/StringStringMapEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringStringMapEnumerator_MoveNext_m19D42D8E29467683964512499AABEF93BD9830E1 (StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Firebase.StringStringMap::Add(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_Add_m01048CFD777D82B2F693B6D71A4D452FAF7AEAC1 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Boolean Firebase.StringStringMap::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringStringMap_Contains_m5F1544CEFA19C9797BD02C53E7DD9EB2C9097916 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ___0_item, const RuntimeMethod* method) ;
// System.Boolean Firebase.StringStringMap::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringStringMap_Remove_m986E61004827D7F62831AEE307E6020383C3CB4D (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, String_t* ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Collections.Generic.ICollection`1<System.String> Firebase.StringStringMap::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringStringMap_get_Keys_m558C6C1516539080580AB4D6F8B2905B4B604AC4 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (RuntimeObject*)___0_collection, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.String>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mC76BE8DEB14377BA47C72BDFC7D0BBD37330F36B (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___0_value, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void Firebase.StringStringMap/StringStringMapEnumerator::.ctor(Firebase.StringStringMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMapEnumerator__ctor_m1659D491782A6E753AC1792C39802A79860F75B3 (StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18* __this, StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* ___0_collection, const RuntimeMethod* method) ;
// System.IntPtr Firebase.AppUtilPINVOKE::new_StringStringMap__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_new_StringStringMap__SWIG_0_m84D097C2772CA3A9AC5F931078FB79C3D3C1AF5E (const RuntimeMethod* method) ;
// System.Void Firebase.StringStringMap::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap__ctor_m493F3867E24E87A4D890A56366DAE5D3E2172E35 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.UInt32 Firebase.AppUtilPINVOKE::StringStringMap_size(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AppUtilPINVOKE_StringStringMap_size_mD8D9155E1FE3473C2D52EF30DB99A8054B8036C0 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE::StringStringMap_Clear(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_StringStringMap_Clear_m8D2936F5AC4C42D9E10C8A296765929E80819E6A (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.AppUtilPINVOKE::StringStringMap_getitem(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_StringStringMap_getitem_m9D4E9FAA3CA338A73368072EEA97E99D4BA5FC35 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE::StringStringMap_setitem(System.Runtime.InteropServices.HandleRef,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_StringStringMap_setitem_mF52AA2B0DD2B1C82C96641B73D967C5AA0AA3F04 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, String_t* ___2_jarg3, const RuntimeMethod* method) ;
// System.Boolean Firebase.AppUtilPINVOKE::StringStringMap_ContainsKey(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtilPINVOKE_StringStringMap_ContainsKey_mD1DB16B8E96A716AA7D6E9EF19565228BE89314A (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE::StringStringMap_Add(System.Runtime.InteropServices.HandleRef,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_StringStringMap_Add_mB5BC4CE692924D407020A29EB1D91EA5FD4DACDA (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, String_t* ___2_jarg3, const RuntimeMethod* method) ;
// System.Boolean Firebase.AppUtilPINVOKE::StringStringMap_Remove(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtilPINVOKE_StringStringMap_Remove_mC01EAA294015A6D9D894D19B73DE6455110EBDA8 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) ;
// System.IntPtr Firebase.AppUtilPINVOKE::StringStringMap_create_iterator_begin(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_StringStringMap_create_iterator_begin_mBBC01E5599A704C943471C9CEFF97810AC4054A1 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.AppUtilPINVOKE::StringStringMap_get_next_key(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_StringStringMap_get_next_key_mDE2CD543826A393C6BEF7562D4A81B66872826DB (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE::StringStringMap_destroy_iterator(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_StringStringMap_destroy_iterator_mD19027EE722AC2BD93E8F886D93AC6D0C3B56209 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.FutureVoid::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid_SWIG_CompletionDispatcher_mE9933C19D489F4E5B7B8F99C087A7A1C95681554 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.IntPtr Firebase.AppUtilPINVOKE::FutureVoid_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_FutureVoid_SWIGUpcast_m8D1EB93463FFA3A9F14A49FD1459CBE45E8957CC (intptr_t ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.FutureBase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase__ctor_m98C8AE4F030730C1CEE7E0B4A1816C623F2B9BE0 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Void Firebase.FutureVoid::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid_SetCompletionData_mB5B6BB51BB7E9B0D64631B560A2D6E947B369D45 (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* __this, intptr_t ___0_data, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE::delete_FutureVoid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_delete_FutureVoid_m9F8202898737C91464B6621C899505CE987A6393 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.FutureBase::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_m17D716EFFAF752B7DBF402C73D757D02C34457EB (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Void Firebase.FutureVoid/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m89776A34BECBA50695D3E5F098200BF8227A9FE9 (U3CU3Ec__DisplayClass5_0_t6BC89DFF3EF637AC4998ABB6D062E6A629AB0D51* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
inline void TaskCompletionSource_1__ctor_mE2B94C03A4FD1C3411C2ED506508F8B93ED25C7F (TaskCompletionSource_1_t334979F66DE5C2F333F2975D91AA0EEB6E6B35D7* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mD6DB19F66035FC77675F1ED9FE696A65CF9C0F23_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_m2BD5F2CC6C343DF947BB026CB4B1FB72EBD24A93 (TaskCompletionSource_1_t334979F66DE5C2F333F2975D91AA0EEB6E6B35D7* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, Exception_t*, const RuntimeMethod*))TaskCompletionSource_1_SetException_m58C4BD8A0F4F1FAA417EC05E2EDC79F0D6C5ADB7_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, ___0_exception, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
inline Task_1_t4C228DE57804012969575431CFF12D57C875552D* TaskCompletionSource_1_get_Task_m5FEF07332DD178987B44AD842559F18D9254224B_inline (TaskCompletionSource_1_t334979F66DE5C2F333F2975D91AA0EEB6E6B35D7* __this, const RuntimeMethod* method)
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* il2cppRetVal = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
	return (Task_1_t4C228DE57804012969575431CFF12D57C875552D*)il2cppRetVal;
}
// Firebase.FutureStatus Firebase.FutureBase::status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_status_mC75FD35438B176F95462D3A5D7D9194629211902 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseException__ctor_m18D67DA955D2B4EA2BC58BCE0E96AC0A177DD70F (FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* __this, int32_t ___0_errorCode, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Firebase.FutureVoid/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mED144299E578968B25C10C34315DFE3EF08B445E (Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.FutureVoid::SetOnCompletionCallback(Firebase.FutureVoid/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid_SetOnCompletionCallback_m917E3BBFE7A06872EEA6F4FC13F557E5F2B6652D (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* __this, Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F* ___0_userCompletionCallback, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void Firebase.FutureVoid::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid_ThrowIfDisposed_m58FAFA498227E36B2075EDAF83F346CD70BD9739 (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* __this, const RuntimeMethod* method) ;
// System.Void Firebase.FutureVoid/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_mE4580033D452974357EA9E700C2AB1D7FBABA5E5 (SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action>::.ctor()
inline void Dictionary_2__ctor_m9ECDA1EAD89A6D781E5CE4E813451CFD7DF269E4 (Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m37FF7170A65FE1A27B5EADEF6AC8AC59F8AF7FD8 (Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A* __this, int32_t ___0_key, Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.IntPtr Firebase.FutureVoid::SWIG_OnCompletion(Firebase.FutureVoid/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FutureVoid_SWIG_OnCompletion_mD6E8C709E067EC3FCCC1DD9F8F7C664D7479B634 (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* __this, SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C* ___0_cs_callback, int32_t ___1_cs_key, const RuntimeMethod* method) ;
// System.Void Firebase.FutureVoid::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid_SWIG_FreeCompletionData_m6570E091DBEF492143DA3BB5B21C5E500495AB87 (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* __this, intptr_t ___0_data, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m6CD864883E697C6EA206A9653365B8F6B18A70EC (Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A* __this, int32_t ___0_key, Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action>::Remove(TKey)
inline bool Dictionary_2_Remove_mE92CC8C926DDAFEDB2A50CCEA0B6571DED3D57E3 (Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, method);
}
// System.Void Firebase.FutureVoid/Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_mB0C4867EC8469233A3647955D2408E97D6107F91_inline (Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F* __this, const RuntimeMethod* method) ;
// System.IntPtr Firebase.AppUtilPINVOKE::FutureVoid_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.FutureVoid/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_FutureVoid_SWIG_OnCompletion_mFD32977A7A2E4A35F4DF9D05E4890FEF115BACB9 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C* ___1_jarg2, int32_t ___2_jarg3, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE::FutureVoid_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_FutureVoid_SWIG_FreeCompletionData_m86022295E0D79AB64EF071771596414899834326 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetCanceled()
inline void TaskCompletionSource_1_SetCanceled_mAD782AAED9E467C7CD39801AA1B6365C9562C44A (TaskCompletionSource_1_t334979F66DE5C2F333F2975D91AA0EEB6E6B35D7* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1_SetCanceled_m094D37FCDE8D0431163D8998A9000CA96CADBB45_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
}
// System.Int32 Firebase.FutureBase::error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_error_m47E3B5E0A43B4C19510A77B3658EE5D7D10B6030 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) ;
// System.String Firebase.FutureBase::error_message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FutureBase_error_message_m5CC18319253B1ECC3C8AC675B213A08B1755D527 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_mEAC57DB80E5D80F41A490DB1AE90B89A4B2CA2E7 (TaskCompletionSource_1_t334979F66DE5C2F333F2975D91AA0EEB6E6B35D7* __this, int32_t ___0_result, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m20A3A9EACC332D8ECC8AA9E690B90E6C56835CED_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, (Il2CppFullySharedGenericAny)&___0_result, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void Firebase.FutureBase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_m32193D02DE4608C6C3EDF42F3D0495707DA4D15E (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_Dispose_m7AA869727509B99D04399B9BA7F1FEEC0251974A (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.String Firebase.FirebaseApp::get_NameInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_NameInternal_m493D9AEC87709D1197A1997C7560AFEBB107FBCE (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::RemoveReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_RemoveReference_m3C28724EDB5D9F20A2A4924E517A8FF79C7E3425 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>::.ctor()
inline void Dictionary_2__ctor_m8F62E1C352E79E91D4BA07FB3DAE1E55115004CB (Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>::.ctor()
inline void Dictionary_2__ctor_m11A6F16438BDFA5BB4D619721B6F24400CDB4B17 (Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void Firebase.LogUtil::InitializeLogging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_InitializeLogging_mC8B6DCC4B1E24F42B676EA58E1AD2EBCDF2967CE (const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.String Firebase.ErrorMessages::get_DllNotFoundExceptionErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorMessages_get_DllNotFoundExceptionErrorMessage_m0B273BB2A0E048AACEA44918DBBBBACB38B579F3 (const RuntimeMethod* method) ;
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_mC48C74EE90B137CDEA82068C2E1695D81974C5BF (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* __this, int32_t ___0_result, String_t* ___1_message, const RuntimeMethod* method) ;
// System.String Firebase.FirebaseApp::get_DefaultName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_DefaultName_mE170961E3E149AB409453866F8FBEDE07E9C3714 (const RuntimeMethod* method) ;
// Firebase.FirebaseApp Firebase.FirebaseApp::GetInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseApp_GetInstance_m9BAC597B32771401771C8915446DA531E7B66EC5 (String_t* ___0_name, const RuntimeMethod* method) ;
// Firebase.FirebaseApp Firebase.FirebaseApp::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseApp_Create_mB737A2508FF5A06F35D01D4A8CD4AEF1F8944512 (const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::ThrowIfCheckDependenciesRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ThrowIfCheckDependenciesRunning_mCC374EEFD25964DB6A38DA14EC987792DE119D9B (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m6E5B2FEEC491D083B03A11DA6FA39A580A2369A1 (Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* __this, String_t* ___0_key, FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>::Remove(TKey)
inline bool Dictionary_2_Remove_m7A0B03D4435A96C5CB96AAFD5DDBEF49294C7C5F (Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// System.Void Firebase.FirebaseApp/CreateDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateDelegate__ctor_m966C39812E422F82DD3AACF101F012749B1F9E12 (CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// Firebase.FirebaseApp Firebase.FirebaseApp::CreateAndTrack(Firebase.FirebaseApp/CreateDelegate,Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseApp_CreateAndTrack_m3EFC2B1BFE4FF3BE069B04DE63E93A257CD65B3E (CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73* ___0_createDelegate, FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___1_existingProxy, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ThrowIfNull_mEBB4A7F4A0E30B8F6969C68C340AF30D44491B20 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, const RuntimeMethod* method) ;
// System.Int32 Firebase.AppUtilPINVOKE::FirebaseApp_GetLogLevelInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_FirebaseApp_GetLogLevelInternal_mAF74BAD43730ACCFFB25EFBDCB0F40CA30CE1940 (const RuntimeMethod* method) ;
// System.String Firebase.FirebaseApp::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_m89C11F96726C8E4FD3CCAE04A5DC3129F7CD975E (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m646A0C479D12D665388558549E99ED1C949D5538 (Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* __this, String_t* ___0_key, FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m984B6FF03912DD47210B97F3876A8E68BD477586 (Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3* __this, intptr_t ___0_key, FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>::get_Count()
inline int32_t Dictionary_2_get_Count_m320B502DBB8BB9D371AD03B9E0A23453D8C63E8F (Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>::Remove(TKey)
inline bool Dictionary_2_Remove_m152F1DE099A6441F30DB01049310A23447A99CC6 (Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3* __this, intptr_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, method);
}
// System.Void Firebase.FirebaseApp::ReleaseReferenceInternal(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ReleaseReferenceInternal_mA281FCA13BCF136D9D9B4311C40925B99614D63D (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::OnAllAppsDestroyed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_OnAllAppsDestroyed_m19CF36FB1A2439786994BBB55F1E405B7B43CAAB (const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp/EnableModuleParams::.ctor(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableModuleParams__ctor_m448B394AF46BBC2CE9C3301F732850625F6B37EF (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* __this, String_t* ___0_csharp, String_t* ___1_cpp, bool ___2_always, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtil::SetEnabledAllAppCallbacks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetEnabledAllAppCallbacks_m0C41A4271764464915ACA461AE8A309AEDAFA6AC (bool ___0_arg0, const RuntimeMethod* method) ;
// System.String Firebase.FirebaseApp/EnableModuleParams::get_CSharpClassName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CSharpClassName_m04AD392AA82FCE1E6636F812672C77F294AC16EC_inline (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.String Firebase.FirebaseApp/EnableModuleParams::get_CppModuleName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CppModuleName_mB91981F21F3F94D82CD64DD7BD810741CBB04E3A_inline (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* __this, const RuntimeMethod* method) ;
// System.Boolean Firebase.AppUtil::GetEnabledAppCallbackByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtil_GetEnabledAppCallbackByName_m979A86ABDBC2257B697ABDE5015AA76DE5D04F70 (String_t* ___0_arg0, const RuntimeMethod* method) ;
// System.Boolean Firebase.FirebaseApp/EnableModuleParams::get_AlwaysEnable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EnableModuleParams_get_AlwaysEnable_mC44F8EA7A9EDCD493C6B8E04E3B3CF00D09FDEA6_inline (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtil::SetEnabledAppCallbackByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetEnabledAppCallbackByName_m59C6CB27D92D72FD0841031C207D86C2F684F366 (String_t* ___0_arg0, bool ___1_arg1, const RuntimeMethod* method) ;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* Assembly_Load_mC42733BACCA273EEAA32A341CBF53722A44DCC90 (String_t* ___0_assemblyString, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D (Type_t* __this, String_t* ___0_name, int32_t ___1_bindingAttr, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1 (MethodInfo_t* ___0_left, MethodInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___0_obj, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_parameters, const RuntimeMethod* method) ;
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_m1384021A3E1B7B0E372257380559D926BD6200BF (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* __this, int32_t ___0_result, String_t* ___1_message, Exception_t* ___2_inner, const RuntimeMethod* method) ;
// Firebase.Platform.FirebaseAppUtils Firebase.Platform.FirebaseAppUtils::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F* FirebaseAppUtils_get_Instance_m844818D4028B3E8866E21AD1CB6E559038CEEC41 (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::Create(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_Create_mDC243F751CBDC835EDF2388C04C1A48FD9238FE9 (RuntimeObject* ___0_appUtils, const RuntimeMethod* method) ;
// System.Void Firebase.StringStringMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap__ctor_m5295C0F5394545250F06A5F0A53C9ABB48D67794 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, const RuntimeMethod* method) ;
// System.String Firebase.Platform.PlatformInformation::get_RuntimeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_RuntimeName_m3412CC566E5CE3DFA00A4C2DF5AAC46C548B7B4A (const RuntimeMethod* method) ;
// System.String Firebase.VersionInfo::get_SdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VersionInfo_get_SdkVersion_mC32BFBE632414898F8525BD5AED76B512BA0E266 (const RuntimeMethod* method) ;
// System.Void Firebase.StringStringMap::set_Item(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_set_Item_m975DA3FC714B74CB4E7D4CAAE0482D7B669D186F (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) ;
// System.String Firebase.Platform.PlatformInformation::get_RuntimeVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_RuntimeVersion_mD8F3490DE409C7635E2876FE28631DC79240A45B (const RuntimeMethod* method) ;
// System.String Firebase.VersionInfo::get_BuildSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VersionInfo_get_BuildSource_mFEB9E963780C505D73965545BFED5EB50EA7BAD5 (const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::RegisterLibrariesInternal(Firebase.StringStringMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_RegisterLibrariesInternal_m03B7487A8CAECC33FFFFFC110445811D0DDB35F2 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* ___0_libraries, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::InitializeAppUtilCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_InitializeAppUtilCallbacks_m69A50FD352AE820F31C0DBA793A462BC774F4B20 (const RuntimeMethod* method) ;
// System.String Firebase.Platform.PlatformInformation::get_DefaultConfigLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_DefaultConfigLocation_mAC7DD97F2C49460091AA1709BF677FFFA1D4BC74 (const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::AppSetDefaultConfigPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_AppSetDefaultConfigPath_m9712BA055777DA0F98524BD85A6C97FBFC5C6192 (String_t* ___0_path, const RuntimeMethod* method) ;
// Firebase.FirebaseApp Firebase.FirebaseApp/CreateDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* CreateDelegate_Invoke_m3C05F10053C0FD938376079571835049ADDD6186_inline (CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73* __this, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FirebaseApp_getCPtr_m54B5DAC73BA43E79771E0181BEFD846BBE06C84F (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mD9203985461B343144479403BB91596E7FD479F0 (Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3* __this, intptr_t ___0_key, FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
// System.Void Firebase.FirebaseApp::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_Dispose_mC1965A7AE8BAB834DB652BF0BACF377F3D45192B (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::LogHeartbeatInternal(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_LogHeartbeatInternal_m849C31C3F73680D986D5672C464BEBCA899FBEFC (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::AddReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_AddReference_m562BA6DFE00568AC30B15C36D8BB848F14EDED95 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, const RuntimeMethod* method) ;
// System.Boolean Firebase.FirebaseApp::IsCheckDependenciesRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseApp_IsCheckDependenciesRunning_m14D0D3293F91F52A79382CB3B8B2C93EBE3FDB59 (const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mC73A4FCEBBAB90CB7B7AB16321F3F98FBBF12596_gshared)((Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*)__this, ___0_object, ___1_method, method);
}
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<System.Boolean>(System.Func`1<TResult>)
inline bool FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAE5FCABDB6F0D5495736534F2072751B25E840B4 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_f, const RuntimeMethod* method)
{
	bool il2cppRetVal;
	((  void (*) (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))FirebaseHandler_RunOnMainThread_TisIl2CppFullySharedGenericAny_mF11E1A87243C76F8CCDA631B80AD72595F58BEAD_gshared)((Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*)___0_f, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD (const RuntimeMethod* method) ;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::SetCheckDependenciesThread(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_SetCheckDependenciesThread_mFE57ACFA06A8CBAAD19379B430621763999C3563 (int32_t ___0_threadId, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::CreatePartialOnMainThread(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_CreatePartialOnMainThread_mA40B80D6BC5D9D1DCEAB433495451ECC436027C5 (RuntimeObject* ___0_appUtils, const RuntimeMethod* method) ;
// System.Void System.Func`1<Firebase.DependencyStatus>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mFA265D430759E241E3F5F67F57FFD31EC0184C85 (Func_1_tB6381823DCD9F89B9A71E30B5258FBBE2ED482AE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mC73A4FCEBBAB90CB7B7AB16321F3F98FBBF12596_gshared)((Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*)__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<Firebase.DependencyStatus>(System.Func`1<TResult>)
inline Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* Task_Run_TisDependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_m6C591DC2396836DA8270AA4EEAE2131BE3B34C4B (Func_1_tB6381823DCD9F89B9A71E30B5258FBBE2ED482AE* ___0_function, const RuntimeMethod* method)
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* il2cppRetVal = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, const RuntimeMethod*))Task_Run_TisIl2CppFullySharedGenericAny_m9B8B1B2F2FE04689FD7BADCD0E57F38E4B5FBF69_gshared)((Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*)___0_function, method);
	return (Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF*)il2cppRetVal;
}
// System.Threading.Tasks.Task`1<Firebase.DependencyStatus> Firebase.FirebaseApp::CheckDependenciesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* FirebaseApp_CheckDependenciesAsync_m75E00BB4F43A6D11511A55F146E0D9DD94405BCD (const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m3DDDBBF7BF33CC0C30A2E047E29DEDD13DDF3482 (Func_2_t5CB4EF138CF2C1A8C937FFA22680521119BE3305* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task`1<TNewResult> System.Threading.Tasks.Task`1<Firebase.DependencyStatus>::ContinueWith<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>(System.Func`2<System.Threading.Tasks.Task`1<TResult>,TNewResult>)
inline Task_1_t3769315417372EBDBD431895C2D9EB5B42C48672* Task_1_ContinueWith_TisTask_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF_m1A7A10DF8B625077E1FC8B29E0D834614EAE0155 (Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* __this, Func_2_t5CB4EF138CF2C1A8C937FFA22680521119BE3305* ___0_continuationFunction, const RuntimeMethod* method)
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* il2cppRetVal = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (/*System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Func_2_tCEEA1029036C146011A9093868E254F314AB661E*, const RuntimeMethod*))Task_1_ContinueWith_TisIl2CppFullySharedGenericAny_m5EC0995ECF6B3762E499B8EF6B9BDA56D512551C_gshared)((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this, (Func_2_tCEEA1029036C146011A9093868E254F314AB661E*)___0_continuationFunction, method);
	return (Task_1_t3769315417372EBDBD431895C2D9EB5B42C48672*)il2cppRetVal;
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskExtensions::Unwrap<Firebase.DependencyStatus>(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<TResult>>)
inline Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* TaskExtensions_Unwrap_TisDependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_mA8A63E7E7E6B006A25BC9AFB3C60D14C48AE5849 (Task_1_t3769315417372EBDBD431895C2D9EB5B42C48672* ___0_task, const RuntimeMethod* method)
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* il2cppRetVal = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266*, const RuntimeMethod*))TaskExtensions_Unwrap_TisIl2CppFullySharedGenericAny_m4FB34270E579A71A15A0CCE1ACA21650A7D80AA7_gshared)((Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266*)___0_task, method);
	return (Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF*)il2cppRetVal;
}
// System.Void Firebase.FirebaseApp/<>c__DisplayClass58_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0__ctor_m7192D3B51ED821A760AF82992CBBFC8652897AA5 (U3CU3Ec__DisplayClass58_0_tD42798DED94E0739CFCAF00A186CF7E16A97F8E8* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::TranslateDllNotFoundException(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_TranslateDllNotFoundException_m8A53BF93797E69E0A396E5D387C8BE2FAC5A887E (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_closureToExecute, const RuntimeMethod* method) ;
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0 (const RuntimeMethod* method) ;
// Firebase.InitResult Firebase.InitializationException::get_InitResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InitializationException_get_InitResult_mC611CCB6BD3529EFD841FCF4BC099532973F75F2_inline (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* __this, const RuntimeMethod* method) ;
// Firebase.GooglePlayServicesAvailability Firebase.AppUtil::CheckAndroidDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtil_CheckAndroidDependencies_m0D39BD88D8B8246E40B4F874956BE9884C8E0C93 (const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp/<>c__DisplayClass60_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass60_0__ctor_m14A111BEE6E3DE63EDF0086569D3D9C9D5D708B5 (U3CU3Ec__DisplayClass60_0_t2405D4DB7DF66A50C23215BD4C3358528D4028ED* __this, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtil::InitializePlayServicesInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_InitializePlayServicesInternal_m89751D7035A1D3816E68F8FDCB4B5B2F8D2F23D2 (const RuntimeMethod* method) ;
// System.IntPtr Firebase.AppUtilPINVOKE::FirebaseApp_CreateInternal__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_FirebaseApp_CreateInternal__SWIG_0_m8C61ECBE5407D4A591827E10595AE28EFE8C6CE5 (const RuntimeMethod* method) ;
// System.Void Firebase.AppUtil::TerminatePlayServicesInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_TerminatePlayServicesInternal_mED5F11E95B315C4014E0680574592ED30EBFF772 (const RuntimeMethod* method) ;
// System.String Firebase.AppUtilPINVOKE::FirebaseApp_NameInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_FirebaseApp_NameInternal_get_mE4931CA287567E2C7F91442E07F30AE96AE91172 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp__ctor_mC539AF748C2E16CD3B7820D6039B9A29DBDF908C (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE::FirebaseApp_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_FirebaseApp_ReleaseReferenceInternal_m5A184BBB9E09539CDDB771120995526D0328439B (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.StringStringMap::getCPtr(Firebase.StringStringMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F StringStringMap_getCPtr_m9E30BAD269827991D469F743D10098904502616D (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* ___0_obj, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE::FirebaseApp_RegisterLibrariesInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_FirebaseApp_RegisterLibrariesInternal_m6A299F866D396117D75C2243115E25F2B8A6F00E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE::FirebaseApp_LogHeartbeatInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_FirebaseApp_LogHeartbeatInternal_m6BA2A1959A135C6D953FC965A4C09D80DA62C838 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE::FirebaseApp_AppSetDefaultConfigPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_FirebaseApp_AppSetDefaultConfigPath_m461EBC1DCEA9353F3C927FAEEB1590BA130E69DB (String_t* ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.AppUtilPINVOKE::FirebaseApp_DefaultName_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_FirebaseApp_DefaultName_get_m7561CF63339BB772F6A9690B9E07D9E21BA70D2A (const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp/EnableModuleParams::set_CSharpClassName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnableModuleParams_set_CSharpClassName_m9152635BDD8F608352C12F3447962C10F7DF4F43_inline (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp/EnableModuleParams::set_CppModuleName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnableModuleParams_set_CppModuleName_mF1C3FE3BBE44DEDB23AF2879630075AEAC7106DF_inline (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp/EnableModuleParams::set_AlwaysEnable(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnableModuleParams_set_AlwaysEnable_m3F7638041BDA0CC3669AD7119C68ABD2B6F7C482_inline (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m463FBDE085153371662615419AFD8228F4704F75 (U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C* __this, const RuntimeMethod* method) ;
// Firebase.FirebaseApp Firebase.FirebaseApp::CreateInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseApp_CreateInternal_m63EB3F64189DA8E6C5B2E1C95B11D63EF7F7BC4B (const RuntimeMethod* method) ;
// System.Boolean Firebase.FirebaseApp::InitializeCrashlyticsIfPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseApp_InitializeCrashlyticsIfPresent_m543A1327364F796F96120C0CD4D7805B412529B6 (const RuntimeMethod* method) ;
// Firebase.DependencyStatus Firebase.FirebaseApp::CheckDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseApp_CheckDependencies_mF21910BC5E3CEF3AD82DE4055B05FA2CFF07CBA1 (const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<Firebase.DependencyStatus>::get_Result()
inline int32_t Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA (Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* __this, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (/*System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Task_1_get_Result_mF84A04F573B3700E098DF189233DA4CB3E14D53C_gshared)((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Threading.Tasks.Task Firebase.FirebaseApp::FixDependenciesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseApp_FixDependenciesAsync_m3E5A198309832981F2E4C516D60078247E1607C3 (const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m2ECCBB49DBEDDD0C1B5C38990F01A61338706778 (Func_2_t9BE3E8B687E18A04BF29999D209D4EEF1B34F7BF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::ContinueWith<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>(System.Func`2<System.Threading.Tasks.Task,TResult>)
inline Task_1_t3769315417372EBDBD431895C2D9EB5B42C48672* Task_ContinueWith_TisTask_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF_mBD511CA5A5F2ACD9B0DFAA5064DAF1419E505810 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Func_2_t9BE3E8B687E18A04BF29999D209D4EEF1B34F7BF* ___0_continuationFunction, const RuntimeMethod* method)
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* il2cppRetVal = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22*, const RuntimeMethod*))Task_ContinueWith_TisIl2CppFullySharedGenericAny_mE349C374FBD67F9F87A74035D3EB3F3CC41D95CE_gshared)((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)__this, (Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22*)___0_continuationFunction, method);
	return (Task_1_t3769315417372EBDBD431895C2D9EB5B42C48672*)il2cppRetVal;
}
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t51B6205846DFB356B94452702201DD239D44422F* Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::ResetDefaultAppCPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ResetDefaultAppCPtr_m1D38FAF9DA97DFA0C3DB217134369DEA8DA86035 (const RuntimeMethod* method) ;
// Firebase.DependencyStatus Firebase.FirebaseApp::CheckDependenciesInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseApp_CheckDependenciesInternal_m738CFE3533F41FC660E43B2EFCCD44BF6EF0AFE5 (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.AppUtil::FixAndroidDependenciesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AppUtil_FixAndroidDependenciesAsync_m27A782E22791F6CE0E354216AA5A652683BDDAD7 (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0 (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_ContinueWith_m4150CBD0F7AC870F40F5E8D84E265B47A642C06C (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* ___0_continuationAction, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m4DB6794D8CB5F1A9740C37B0C257B69982C013B9 (SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150* __this, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_mF5EBABDC102D937A919B6A6CCA3690E2244ECE85 (SWIGStringHelper_t52FE8935E712DEC744640398FC8B4806F5FF4534* __this, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m7FE3B7ADC198F4ED5A180BC5ECD18CC371444591 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m5DA562871B81FA3E688FD12D78E82882F5ADC315 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m7AE515E72B8E23D18919432B5B7BF0F06CCD18E7 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mCD203C03B85ADB38206622594E5DEECA14C1CA7E (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m64057305E28A3122C79BFF5A8C441D72B04C6E5B (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m4CE89FA918E3D9CA7C6391147792F8226CF6BA07 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mA50448F1AA4CA664C39B8AB78EF912F18E0DDF50 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m0CE8D326228371436AB3BBCE9AA7464619030A35 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_mB4209DD263A50C83F1E9CE39A85ADDAE18F51759 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m366DEFCF657EFE4CBABD2ADCD7D09BD6144E25B0 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_mE317DA81F256CF3BD75CAC264E25961D7A536191 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m82CC529F5355DF173784D29CDB197BC3AAA353BC (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m1A239C193A01B3E73BD763718FB528ED933847A0 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m1F079CDB1AC454648BEFF38716F88AFE6FA8F926 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m7EB577A3129E190D2FBAF8CB9C9CAB7F87DA2642 (Exception_t* ___0_e, const RuntimeMethod* method) ;
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
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m49AB94CEC8E6544CE0D7B1E2300735728EE336D8 (ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m45E4EFAE5F14FFEC5843A00ABEF4D0E1F0854629 (ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_AppUtil(Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AppUtil_m37C58735D4F8200BA3896F46FD46006F467A604D (ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___0_applicationDelegate, ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___1_arithmeticDelegate, ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___2_divideByZeroDelegate, ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___3_indexOutOfRangeDelegate, ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___4_invalidCastDelegate, ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___5_invalidOperationDelegate, ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___6_ioDelegate, ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___7_nullReferenceDelegate, ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___8_outOfMemoryDelegate, ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___9_overflowDelegate, ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___10_systemExceptionDelegate, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_AppUtil(Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AppUtil_m20CAE98AF0AFEDCADBBEAA94148843C8C671F8D5 (ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* ___0_argumentDelegate, ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* ___1_argumentNullDelegate, ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* ___2_argumentOutOfRangeDelegate, const RuntimeMethod* method) ;
// System.String Firebase.AppUtilPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m929C4B0922610C0571E685F27F79757BF669C77F (String_t* ___0_cString, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m4D5B167B33345B58192AD3B50D1F8901A18F4F4D (SWIGStringDelegate_t8DE60A9CF4030497616BDFC28662C81B33456879* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_AppUtil(Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_AppUtil_m6DC4FCA4611C8A5521BE0E65F5CCE26D000E4DD1 (SWIGStringDelegate_t8DE60A9CF4030497616BDFC28662C81B33456879* ___0_stringDelegate, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE::PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_PollCallbacks_mD2FF7C60A52AF22E9AC028564A06E0F3974B6D56 (const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE::AppEnableLogCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_AppEnableLogCallback_m5BB69B725FD3DF1FE26C20DE516F14E02E82BDB3 (bool ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE::SetEnabledAllAppCallbacks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_SetEnabledAllAppCallbacks_m6A273BFF682F24C5D1F66273B0AA3AF975B29019 (bool ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE::SetEnabledAppCallbackByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_SetEnabledAppCallbackByName_m4705ADB8109C59533C8D2117C87E6336EEB54A05 (String_t* ___0_jarg1, bool ___1_jarg2, const RuntimeMethod* method) ;
// System.Boolean Firebase.AppUtilPINVOKE::GetEnabledAppCallbackByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtilPINVOKE_GetEnabledAppCallbackByName_m97E56E8BCA68A8391B677BC814B1E3584FD985C5 (String_t* ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE::SetLogFunction(Firebase.LogUtil/LogMessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_SetLogFunction_m76775D9FA055C83D4C65B6E6E7192E941A433EAE (LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4* ___0_jarg1, const RuntimeMethod* method) ;
// System.Int32 Firebase.AppUtilPINVOKE::CheckAndroidDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_CheckAndroidDependencies_m4FCC7A6957631074F898E119E993E423A6EB6C48 (const RuntimeMethod* method) ;
// System.IntPtr Firebase.AppUtilPINVOKE::FixAndroidDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_FixAndroidDependencies_m1C8B8699F37268F8755608458DEAE04014F9D7C0 (const RuntimeMethod* method) ;
// System.Void Firebase.FutureVoid::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid__ctor_m6E0B9CCC4BD6777C7369CA92E236C003CCCBC043 (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.FutureVoid::GetTask(Firebase.FutureVoid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FutureVoid_GetTask_m68B083F4868870F64B15374FE3D1343543C863DF (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* ___0_fu, const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE::InitializePlayServicesInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_InitializePlayServicesInternal_m0027EC41EE00DCF8A530695B979F8AC1EBCEF814 (const RuntimeMethod* method) ;
// System.Void Firebase.AppUtilPINVOKE::TerminatePlayServicesInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_TerminatePlayServicesInternal_mABD31836A1A4B753A27CFD9472F2513746ED4499 (const RuntimeMethod* method) ;
// System.Void Firebase.AppUtil::PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_PollCallbacks_mB25BC1FD5126974F80860A05910301AAF7589BFC (const RuntimeMethod* method) ;
// Firebase.LogLevel Firebase.FirebaseApp::get_LogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseApp_get_LogLevel_m64B54EED8CF1B5F8EA074612CF09E58026D23603 (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseAppUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtils__ctor_m77E9C2ADF611B1553A685AC953C5508DFD636CD4 (FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F* __this, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_delete_FutureBase(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_App_CSharp_FutureBase_status(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_App_CSharp_FutureBase_error(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_CSharp_FutureBase_error_message(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_App_CSharp_new_StringStringMap__SWIG_0();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C uint32_t DEFAULT_CALL Firebase_App_CSharp_StringStringMap_size(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_StringStringMap_Clear(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_CSharp_StringStringMap_getitem(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_StringStringMap_setitem(void*, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_App_CSharp_StringStringMap_ContainsKey(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_StringStringMap_Add(void*, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_App_CSharp_StringStringMap_Remove(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_App_CSharp_StringStringMap_create_iterator_begin(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_CSharp_StringStringMap_get_next_key(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_StringStringMap_destroy_iterator(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_delete_StringStringMap(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_App_CSharp_FutureVoid_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_FutureVoid_SWIG_FreeCompletionData(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_delete_FutureVoid(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_CSharp_FirebaseApp_NameInternal_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_App_CSharp_FirebaseApp_CreateInternal__SWIG_0();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_FirebaseApp_ReleaseReferenceInternal(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_App_CSharp_FirebaseApp_GetLogLevelInternal();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_FirebaseApp_RegisterLibrariesInternal(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_FirebaseApp_LogHeartbeatInternal(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_FirebaseApp_AppSetDefaultConfigPath(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_CSharp_FirebaseApp_DefaultName_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_PollCallbacks();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_AppEnableLogCallback(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_SetEnabledAllAppCallbacks(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_SetEnabledAppCallbackByName(char*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_App_CSharp_GetEnabledAppCallbackByName(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_SetLogFunction(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_App_CSharp_CheckAndroidDependencies();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_App_CSharp_FixAndroidDependencies();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_InitializePlayServicesInternal();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_TerminatePlayServicesInternal();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_App_CSharp_FutureVoid_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_AppUtil(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionArgumentCallbacks_AppUtil(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_AppUtil(Il2CppMethodPointer);
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
// System.Void Firebase.FirebaseException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseException__ctor_m18D67DA955D2B4EA2BC58BCE0E96AC0A177DD70F (FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* __this, int32_t ___0_errorCode, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		int32_t L_1 = ___0_errorCode;
		FirebaseException_set_ErrorCode_m65B2880424E85063D56405A009DAA13E3B106465_inline(__this, L_1, NULL);
		return;
	}
}
// System.Void Firebase.FirebaseException::set_ErrorCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseException_set_ErrorCode_m65B2880424E85063D56405A009DAA13E3B106465 (FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CErrorCodeU3Ek__BackingField_18 = L_0;
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
// Firebase.InitResult Firebase.InitializationException::get_InitResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InitializationException_get_InitResult_mC611CCB6BD3529EFD841FCF4BC099532973F75F2 (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CInitResultU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void Firebase.InitializationException::set_InitResult(Firebase.InitResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException_set_InitResult_m94032AD57F63718F6F20625FDB98958766C9D764 (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CInitResultU3Ek__BackingField_18 = L_0;
		return;
	}
}
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_mC48C74EE90B137CDEA82068C2E1695D81974C5BF (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* __this, int32_t ___0_result, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		int32_t L_1 = ___0_result;
		InitializationException_set_InitResult_m94032AD57F63718F6F20625FDB98958766C9D764_inline(__this, L_1, NULL);
		return;
	}
}
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_m1384021A3E1B7B0E372257380559D926BD6200BF (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* __this, int32_t ___0_result, String_t* ___1_message, Exception_t* ___2_inner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___1_message;
		Exception_t* L_1 = ___2_inner;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		int32_t L_2 = ___0_result;
		InitializationException_set_InitResult_m94032AD57F63718F6F20625FDB98958766C9D764_inline(__this, L_2, NULL);
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
// System.String Firebase.ErrorMessages::get_DependencyNotFoundErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorMessages_get_DependencyNotFoundErrorMessage_mA71EBFCD6E5CC0C61BD0E3624738175EADBCC0F7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = PlatformInformation_get_IsAndroid_mA671D9472B9FDCE9060CD79409611B524ACEB61B(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var);
		String_t* L_2 = ((ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var))->___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0;
		V_1 = L_2;
		goto IL_002e;
	}

IL_0013:
	{
		bool L_3;
		L_3 = PlatformInformation_get_IsIOS_mC19E79F4C15D4B8B2CF22DE2517074235DCF7082(NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var);
		String_t* L_5 = ((ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var))->___DEPENDENCY_NOT_FOUND_ERROR_IOS_1;
		V_1 = L_5;
		goto IL_002e;
	}

IL_0025:
	{
		il2cpp_codegen_runtime_class_init_inline(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var);
		String_t* L_6 = ((ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var))->___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2;
		V_1 = L_6;
		goto IL_002e;
	}

IL_002e:
	{
		String_t* L_7 = V_1;
		return L_7;
	}
}
// System.String Firebase.ErrorMessages::get_DllNotFoundExceptionErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorMessages_get_DllNotFoundExceptionErrorMessage_m0B273BB2A0E048AACEA44918DBBBBACB38B579F3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		bool L_0;
		L_0 = PlatformInformation_get_IsAndroid_mA671D9472B9FDCE9060CD79409611B524ACEB61B(NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var);
		String_t* L_2 = ((ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var))->___DLL_NOT_FOUND_ERROR_ANDROID_3;
		V_0 = L_2;
		goto IL_002f;
	}

IL_0014:
	{
		bool L_3;
		L_3 = PlatformInformation_get_IsIOS_mC19E79F4C15D4B8B2CF22DE2517074235DCF7082(NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var);
		String_t* L_5 = ((ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var))->___DLL_NOT_FOUND_ERROR_IOS_4;
		V_0 = L_5;
		goto IL_002f;
	}

IL_0027:
	{
		il2cpp_codegen_runtime_class_init_inline(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var);
		String_t* L_6 = ((ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var))->___DLL_NOT_FOUND_ERROR_GENERIC_5;
		V_0 = L_6;
	}

IL_002f:
	{
		String_t* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = ErrorMessages_get_DependencyNotFoundErrorMessage_mA71EBFCD6E5CC0C61BD0E3624738175EADBCC0F7(NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_7, L_8, NULL);
		V_3 = L_9;
		goto IL_003d;
	}

IL_003d:
	{
		String_t* L_10 = V_3;
		return L_10;
	}
}
// System.Void Firebase.ErrorMessages::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorMessages__cctor_m15AA44253303AB0779074729761A927C52A9DD82 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24ED59ED9090E09DB40A7847435D91BFAE584ECF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral403CDB792BDB39DFA5B32B9F5BF62F3460A11FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B9EE94C7F4915E6739895F8E1EF487BB8906396);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8F137D4118E68E1AA31E3046D7C7D47594CAD9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6F00725B1CE2641D3D5ED19F65223CA4D3F8BAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA5B9DDB87B05728AF950352BA404136EF4EA09B);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var))->___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0 = _stringLiteralEA5B9DDB87B05728AF950352BA404136EF4EA09B;
		Il2CppCodeGenWriteBarrier((void**)(&((ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var))->___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0), (void*)_stringLiteralEA5B9DDB87B05728AF950352BA404136EF4EA09B);
		((ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var))->___DEPENDENCY_NOT_FOUND_ERROR_IOS_1 = _stringLiteral6B9EE94C7F4915E6739895F8E1EF487BB8906396;
		Il2CppCodeGenWriteBarrier((void**)(&((ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var))->___DEPENDENCY_NOT_FOUND_ERROR_IOS_1), (void*)_stringLiteral6B9EE94C7F4915E6739895F8E1EF487BB8906396);
		((ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var))->___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2 = _stringLiteralE6F00725B1CE2641D3D5ED19F65223CA4D3F8BAE;
		Il2CppCodeGenWriteBarrier((void**)(&((ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var))->___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2), (void*)_stringLiteralE6F00725B1CE2641D3D5ED19F65223CA4D3F8BAE);
		((ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var))->___DLL_NOT_FOUND_ERROR_ANDROID_3 = _stringLiteral403CDB792BDB39DFA5B32B9F5BF62F3460A11FFC;
		Il2CppCodeGenWriteBarrier((void**)(&((ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var))->___DLL_NOT_FOUND_ERROR_ANDROID_3), (void*)_stringLiteral403CDB792BDB39DFA5B32B9F5BF62F3460A11FFC);
		((ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var))->___DLL_NOT_FOUND_ERROR_IOS_4 = _stringLiteralC8F137D4118E68E1AA31E3046D7C7D47594CAD9C;
		Il2CppCodeGenWriteBarrier((void**)(&((ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var))->___DLL_NOT_FOUND_ERROR_IOS_4), (void*)_stringLiteralC8F137D4118E68E1AA31E3046D7C7D47594CAD9C);
		((ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var))->___DLL_NOT_FOUND_ERROR_GENERIC_5 = _stringLiteral24ED59ED9090E09DB40A7847435D91BFAE584ECF;
		Il2CppCodeGenWriteBarrier((void**)(&((ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var))->___DLL_NOT_FOUND_ERROR_GENERIC_5), (void*)_stringLiteral24ED59ED9090E09DB40A7847435D91BFAE584ECF);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_LogUtil_LogMessageFromCallback_m3EA336850B4BE115C393BA3AD71981D1AA654307(int32_t ___0_logLevel, char* ___1_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___1_message' to managed representation
	String_t* ____1_message_unmarshaled = NULL;
	____1_message_unmarshaled = il2cpp_codegen_marshal_string_result(___1_message);

	// Managed method invocation
	LogUtil_LogMessageFromCallback_m3EA336850B4BE115C393BA3AD71981D1AA654307(___0_logLevel, ____1_message_unmarshaled, NULL);

}
// System.Void Firebase.LogUtil::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil__cctor_m65D0A76AA61474FFF64D462091D3620818923C9E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var))->____instance_0 = (LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var))->____instance_0), (void*)(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39*)NULL);
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var))->___InitializeLoggingLock_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var))->___InitializeLoggingLock_1), (void*)L_0);
		LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39* L_1 = (LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39*)il2cpp_codegen_object_new(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		LogUtil__ctor_mFE64F3E0CAE4C8D317093D419552825F2187F3EA(L_1, NULL);
		((LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var))->____instance_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var))->____instance_0), (void*)L_1);
		return;
	}
}
// System.Void Firebase.LogUtil::InitializeLogging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_InitializeLogging_mC8B6DCC4B1E24F42B676EA58E1AD2EBCDF2967CE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var))->___InitializeLoggingLock_1;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001d:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0027;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0027:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			AppUtil_AppEnableLogCallback_m9FE8159D116019E4E918F4B7CEC39687DD64B2EA((bool)1, NULL);
			goto IL_0028;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0028:
	{
		return;
	}
}
// Firebase.Platform.PlatformLogLevel Firebase.LogUtil::ConvertLogLevel(Firebase.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogUtil_ConvertLogLevel_mE58CCE065A1D6EBEDDDDA2CDE76AFEA71E474216 (int32_t ___0_logLevel, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_logLevel;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0023;
			}
			case 3:
			{
				goto IL_0027;
			}
			case 4:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_002f;
	}

IL_001f:
	{
		V_1 = 0;
		goto IL_0033;
	}

IL_0023:
	{
		V_1 = 2;
		goto IL_0033;
	}

IL_0027:
	{
		V_1 = 3;
		goto IL_0033;
	}

IL_002b:
	{
		V_1 = 4;
		goto IL_0033;
	}

IL_002f:
	{
		V_1 = 1;
		goto IL_0033;
	}

IL_0033:
	{
		int32_t L_2 = V_1;
		return L_2;
	}
}
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49 (int32_t ___0_logLevel, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_logLevel;
		il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = LogUtil_ConvertLogLevel_mE58CCE065A1D6EBEDDDDA2CDE76AFEA71E474216(L_0, NULL);
		String_t* L_2 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		FirebaseLogger_LogMessage_mA369905E81D1C7988F02D10C909588A688017AA4(L_1, L_2, NULL);
		return;
	}
}
// System.Void Firebase.LogUtil::LogMessageFromCallback(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessageFromCallback_m3EA336850B4BE115C393BA3AD71981D1AA654307 (int32_t ___0_logLevel, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = FirebaseLogger_get_CanRedirectNativeLogs_m1EEC26D9564564880A37D4DCBE6D4E288CD6C7DD(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = ___0_logLevel;
		String_t* L_3 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49(L_2, L_3, NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.LogUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil__ctor_mFE64F3E0CAE4C8D317093D419552825F2187F3EA (LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_LogMessageFromCallback_m3EA336850B4BE115C393BA3AD71981D1AA654307_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_U3C_ctorU3Eb__9_0_m057EE72CCDA8877817C356F04A3FB0403BDC8268_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____disposed_2 = (bool)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4* L_0 = (LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4*)il2cpp_codegen_object_new(LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogMessageDelegate__ctor_mB6AACCCEAE43E818C4B0DFCF6388FF4CC7200F10(L_0, NULL, (intptr_t)((void*)LogUtil_LogMessageFromCallback_m3EA336850B4BE115C393BA3AD71981D1AA654307_RuntimeMethod_var), NULL);
		AppUtil_SetLogFunction_m1C535B70AA8069AC3CE81CB05882946F841DACCB(L_0, NULL);
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_1;
		L_1 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_2, __this, (intptr_t)((void*)LogUtil_U3C_ctorU3Eb__9_0_m057EE72CCDA8877817C356F04A3FB0403BDC8268_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		AppDomain_add_DomainUnload_mC24E729ABD7550A0A1F018EBF215FDF03AA1064F(L_1, L_2, NULL);
		return;
	}
}
// System.Void Firebase.LogUtil::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_Finalize_mA58D6095B47CD414CEED5AB924C2D53F34FF9D55 (LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39* __this, const RuntimeMethod* method) 
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
			LogUtil_Dispose_m97EA8C366043F8F98301F73F488901880DA431CB(__this, (bool)0, NULL);
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
// System.Void Firebase.LogUtil::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_Dispose_m69B36B965145091F6023543E577B1D882AAD3F31 (LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LogUtil_Dispose_m97EA8C366043F8F98301F73F488901880DA431CB(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.LogUtil::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_Dispose_m97EA8C366043F8F98301F73F488901880DA431CB (LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->____disposed_2;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		AppUtil_SetLogFunction_m1C535B70AA8069AC3CE81CB05882946F841DACCB((LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4*)NULL, NULL);
		__this->____disposed_2 = (bool)1;
	}

IL_001e:
	{
		return;
	}
}
// System.Void Firebase.LogUtil::<.ctor>b__9_0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_U3C_ctorU3Eb__9_0_m057EE72CCDA8877817C356F04A3FB0403BDC8268 (LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method) 
{
	{
		LogUtil_Dispose_m97EA8C366043F8F98301F73F488901880DA431CB(__this, (bool)0, NULL);
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
void LogMessageDelegate_Invoke_m93848481738EC2A03FD8F5600C132464290BDAC8_Multicast(LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4* __this, int32_t ___0_log_level, String_t* ___1_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4* currentDelegate = reinterpret_cast<LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_log_level, ___1_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LogMessageDelegate_Invoke_m93848481738EC2A03FD8F5600C132464290BDAC8_OpenInst(LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4* __this, int32_t ___0_log_level, String_t* ___1_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_log_level, ___1_message, method);
}
void LogMessageDelegate_Invoke_m93848481738EC2A03FD8F5600C132464290BDAC8_OpenStatic(LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4* __this, int32_t ___0_log_level, String_t* ___1_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_log_level, ___1_message, method);
}
void LogMessageDelegate_Invoke_m93848481738EC2A03FD8F5600C132464290BDAC8_OpenStaticInvoker(LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4* __this, int32_t ___0_log_level, String_t* ___1_message, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_log_level, ___1_message);
}
void LogMessageDelegate_Invoke_m93848481738EC2A03FD8F5600C132464290BDAC8_ClosedStaticInvoker(LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4* __this, int32_t ___0_log_level, String_t* ___1_message, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_log_level, ___1_message);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4 (LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4* __this, int32_t ___0_log_level, String_t* ___1_message, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_message' to native representation
	char* ____1_message_marshaled = NULL;
	____1_message_marshaled = il2cpp_codegen_marshal_string(___1_message);

	// Native function invocation
	il2cppPInvokeFunc(___0_log_level, ____1_message_marshaled);

	// Marshaling cleanup of parameter '___1_message' native representation
	il2cpp_codegen_marshal_free(____1_message_marshaled);
	____1_message_marshaled = NULL;

}
// System.Void Firebase.LogUtil/LogMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMessageDelegate__ctor_mB6AACCCEAE43E818C4B0DFCF6388FF4CC7200F10 (LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&LogMessageDelegate_Invoke_m93848481738EC2A03FD8F5600C132464290BDAC8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LogMessageDelegate_Invoke_m93848481738EC2A03FD8F5600C132464290BDAC8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LogMessageDelegate_Invoke_m93848481738EC2A03FD8F5600C132464290BDAC8_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&LogMessageDelegate_Invoke_m93848481738EC2A03FD8F5600C132464290BDAC8_Multicast;
}
// System.Void Firebase.LogUtil/LogMessageDelegate::Invoke(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMessageDelegate_Invoke_m93848481738EC2A03FD8F5600C132464290BDAC8 (LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4* __this, int32_t ___0_log_level, String_t* ___1_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_log_level, ___1_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.MonoPInvokeCallbackAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_m4AE84268E5E69C1E4E1E8CD7AF145EF3C73DDA02 (MonoPInvokeCallbackAttribute_tD9985ACFF80199E37095A632974C17F37B31A703* __this, Type_t* ___0_t, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Firebase.FutureBase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase__ctor_m98C8AE4F030730C1CEE7E0B4A1816C623F2B9BE0 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
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
// System.Void Firebase.FutureBase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Finalize_m9CD99D25C0199A337732E16288ABCE051A4D5CB7 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) 
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
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.FutureBase::Dispose(System.Boolean) */, __this, (bool)0);
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
// System.Void Firebase.FutureBase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_m32193D02DE4608C6C3EDF42F3D0495707DA4D15E (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.FutureBase::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.FutureBase::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_m17D716EFFAF752B7DBF402C73D757D02C34457EB (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
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
				il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
				AppUtilPINVOKE_delete_FutureBase_mBA1AC9D7BE7977A080996ED289972DF8449F7BC5(L_11, NULL);
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
// Firebase.FutureStatus Firebase.FutureBase::status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_status_mC75FD35438B176F95462D3A5D7D9194629211902 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = AppUtilPINVOKE_FutureBase_status_m3056FA61BBB6B002A5BEE4F34F75DCD0858BC27C(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FutureBase_status_mC75FD35438B176F95462D3A5D7D9194629211902_RuntimeMethod_var)));
	}

IL_001c:
	{
		int32_t L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_6 = V_2;
		return L_6;
	}
}
// System.Int32 Firebase.FutureBase::error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_error_m47E3B5E0A43B4C19510A77B3658EE5D7D10B6030 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = AppUtilPINVOKE_FutureBase_error_mDB0C901628E9EE247400F57E7E697743B69906E3(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FutureBase_error_m47E3B5E0A43B4C19510A77B3658EE5D7D10B6030_RuntimeMethod_var)));
	}

IL_001c:
	{
		int32_t L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_6 = V_2;
		return L_6;
	}
}
// System.String Firebase.FutureBase::error_message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FutureBase_error_message_m5CC18319253B1ECC3C8AC675B213A08B1755D527 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AppUtilPINVOKE_FutureBase_error_message_mDB4089A47D35BF6D3457750C5355B1908C4BE46B(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FutureBase_error_message_m5CC18319253B1ECC3C8AC675B213A08B1755D527_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		String_t* L_6 = V_2;
		return L_6;
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
// System.Void Firebase.StringStringMap::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap__ctor_m493F3867E24E87A4D890A56366DAE5D3E2172E35 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
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
// System.Runtime.InteropServices.HandleRef Firebase.StringStringMap::getCPtr(Firebase.StringStringMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F StringStringMap_getCPtr_m9E30BAD269827991D469F743D10098904502616D (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* ___0_obj, const RuntimeMethod* method) 
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
		StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* L_0 = ___0_obj;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* L_1 = ___0_obj;
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
// System.Void Firebase.StringStringMap::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_Finalize_mE24B29EBA8476775366BE1E56D51757FF34412D6 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, const RuntimeMethod* method) 
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
			VirtualActionInvoker1< bool >::Invoke(22 /* System.Void Firebase.StringStringMap::Dispose(System.Boolean) */, __this, (bool)0);
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
// System.Void Firebase.StringStringMap::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_Dispose_mFECCAB7DCE0572DDE5BAFE9999616BBAD5B42D12 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(22 /* System.Void Firebase.StringStringMap::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.StringStringMap::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_Dispose_m88AC30342C42C0575CC7029859A48F77BCCA4AC0 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
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
				il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
				AppUtilPINVOKE_delete_StringStringMap_m9ACE5D4FA3CBE366F2925D4328DBE077A95E7196(L_11, NULL);
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
// System.String Firebase.StringStringMap::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringStringMap_get_Item_m01061069FC7C194E45C518987A14FA5918806BE1 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___0_key;
		String_t* L_1;
		L_1 = StringStringMap_getitem_m8DADD76F6CD52B4B98611DD4292910963C079C1B(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Firebase.StringStringMap::set_Item(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_set_Item_m975DA3FC714B74CB4E7D4CAAE0482D7B669D186F (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_key;
		String_t* L_1 = ___1_value;
		StringStringMap_setitem_mC5A0170C20E03D926C187A4B7AC6B0B96FB18C00(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Boolean Firebase.StringStringMap::TryGetValue(System.String,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringStringMap_TryGetValue_mEF4B761217F202E2F25001244A02516D4B85263D (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, String_t* ___0_key, String_t** ___1_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		String_t* L_0 = ___0_key;
		bool L_1;
		L_1 = StringStringMap_ContainsKey_mD13F26BD8A08E581ADB303D38074819105C605A5(__this, L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		String_t** L_3 = ___1_value;
		String_t* L_4 = ___0_key;
		String_t* L_5;
		L_5 = StringStringMap_get_Item_m01061069FC7C194E45C518987A14FA5918806BE1(__this, L_4, NULL);
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_5);
		V_1 = (bool)1;
		goto IL_0021;
	}

IL_001a:
	{
		String_t** L_6 = ___1_value;
		*((RuntimeObject**)L_6) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)NULL);
		V_1 = (bool)0;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Int32 Firebase.StringStringMap::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringStringMap_get_Count_m2B11AF48BF1530FCB3ED130712C6B5BADC76A848 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0;
		L_0 = StringStringMap_size_m9C20BFD104A8B49600AD587CC29C4A748F408DC4(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Firebase.StringStringMap::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringStringMap_get_IsReadOnly_m679F53D527AD174BC0D08D0F86998D53FDA6F481 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<System.String> Firebase.StringStringMap::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringStringMap_get_Keys_m558C6C1516539080580AB4D6F8B2905B4B604AC4 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_0;
		int32_t L_1;
		L_1 = StringStringMap_get_Count_m2B11AF48BF1530FCB3ED130712C6B5BADC76A848(__this, NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		V_2 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		intptr_t L_4;
		L_4 = StringStringMap_create_iterator_begin_mF1C81519248E3646D376EC9F288C1C6A2065630D(__this, NULL);
		V_3 = L_4;
		V_4 = 0;
		goto IL_0039;
	}

IL_0023:
	{
		RuntimeObject* L_5 = V_0;
		intptr_t L_6 = V_3;
		String_t* L_7;
		L_7 = StringStringMap_get_next_key_m92C94637FF8B9A00B08BFCAD08CD41705AEAEE9B(__this, L_6, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(T) */, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_5, L_7);
		int32_t L_8 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0039:
	{
		int32_t L_9 = V_4;
		int32_t L_10 = V_1;
		V_5 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (L_11)
		{
			goto IL_0023;
		}
	}
	{
		intptr_t L_12 = V_3;
		StringStringMap_destroy_iterator_m75AD241AD5316B8B09070BF04C571918FE34BA04(__this, L_12, NULL);
	}

IL_004d:
	{
		RuntimeObject* L_13 = V_0;
		V_6 = L_13;
		goto IL_0052;
	}

IL_0052:
	{
		RuntimeObject* L_14 = V_6;
		return L_14;
	}
}
// System.Collections.Generic.ICollection`1<System.String> Firebase.StringStringMap::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringStringMap_get_Values_m55F926C89AA88AEC46FA2BE15C4812B205D35FC6 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18* V_1 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_0;
		StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18* L_1;
		L_1 = StringStringMap_GetEnumerator_m5629FBE397B23B93415341566E71A149DBF1362A(__this, NULL);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				{
					StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18* L_2 = V_1;
					if (!L_2)
					{
						goto IL_003c;
					}
				}
				{
					StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18* L_3 = V_1;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_0011_1:
			{
				StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18* L_4 = V_1;
				NullCheck(L_4);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_5;
				L_5 = StringStringMapEnumerator_get_Current_mE221D98D4E0B07220825ED8752B9714AADBCB04E(L_4, NULL);
				V_2 = L_5;
				RuntimeObject* L_6 = V_0;
				String_t* L_7;
				L_7 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_2), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_6);
				InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(T) */, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_6, L_7);
			}

IL_0028_1:
			{
				StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18* L_8 = V_1;
				NullCheck(L_8);
				bool L_9;
				L_9 = StringStringMapEnumerator_MoveNext_m19D42D8E29467683964512499AABEF93BD9830E1(L_8, NULL);
				if (L_9)
				{
					goto IL_0011_1;
				}
			}
			{
				goto IL_003d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		RuntimeObject* L_10 = V_0;
		V_3 = L_10;
		goto IL_0041;
	}

IL_0041:
	{
		RuntimeObject* L_11 = V_3;
		return L_11;
	}
}
// System.Void Firebase.StringStringMap::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_Add_mA5E43086723E81409FB93BD34211779B2B95B466 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&___0_item), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		String_t* L_1;
		L_1 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&___0_item), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		StringStringMap_Add_m01048CFD777D82B2F693B6D71A4D452FAF7AEAC1(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Boolean Firebase.StringStringMap::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringStringMap_Remove_m403C3C6E00AF3F626AFF1EF753E5A69AC4D4C06A (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_0 = ___0_item;
		bool L_1;
		L_1 = StringStringMap_Contains_m5F1544CEFA19C9797BD02C53E7DD9EB2C9097916(__this, L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_3;
		L_3 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&___0_item), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		bool L_4;
		L_4 = StringStringMap_Remove_m986E61004827D7F62831AEE307E6020383C3CB4D(__this, L_3, NULL);
		V_1 = L_4;
		goto IL_0022;
	}

IL_001d:
	{
		V_1 = (bool)0;
		goto IL_0022;
	}

IL_0022:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean Firebase.StringStringMap::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringStringMap_Contains_m5F1544CEFA19C9797BD02C53E7DD9EB2C9097916 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&___0_item), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		String_t* L_1;
		L_1 = StringStringMap_get_Item_m01061069FC7C194E45C518987A14FA5918806BE1(__this, L_0, NULL);
		String_t* L_2;
		L_2 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&___0_item), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0028;
	}

IL_0023:
	{
		V_1 = (bool)0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void Firebase.StringStringMap::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.String>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_CopyTo_m5D78F9003BE6B16285A5C22504731EA6D14B6454 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, KeyValuePair_2U5BU5D_tEA2EBC56D51C33037B041DD38F518261CEE2C84C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mC76BE8DEB14377BA47C72BDFC7D0BBD37330F36B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	bool V_7 = false;
	{
		KeyValuePair_2U5BU5D_tEA2EBC56D51C33037B041DD38F518261CEE2C84C* L_0 = ___0_array;
		V_1 = (bool)((((RuntimeObject*)(KeyValuePair_2U5BU5D_tEA2EBC56D51C33037B041DD38F518261CEE2C84C*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringStringMap_CopyTo_m5D78F9003BE6B16285A5C22504731EA6D14B6454_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3 = ___1_arrayIndex;
		V_2 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFB12F16C75DE3806ED28E20C65FB81D432F0D52F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringStringMap_CopyTo_m5D78F9003BE6B16285A5C22504731EA6D14B6454_RuntimeMethod_var)));
	}

IL_002c:
	{
		KeyValuePair_2U5BU5D_tEA2EBC56D51C33037B041DD38F518261CEE2C84C* L_6 = ___0_array;
		NullCheck((RuntimeArray*)L_6);
		int32_t L_7;
		L_7 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F((RuntimeArray*)L_6, NULL);
		V_3 = (bool)((((int32_t)L_7) > ((int32_t)1))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF2A5607525186BE61B973E77753BBA0D8227A406)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringStringMap_CopyTo_m5D78F9003BE6B16285A5C22504731EA6D14B6454_RuntimeMethod_var)));
	}

IL_0049:
	{
		int32_t L_10 = ___1_arrayIndex;
		int32_t L_11;
		L_11 = StringStringMap_get_Count_m2B11AF48BF1530FCB3ED130712C6B5BADC76A848(__this, NULL);
		KeyValuePair_2U5BU5D_tEA2EBC56D51C33037B041DD38F518261CEE2C84C* L_12 = ___0_array;
		NullCheck(L_12);
		V_4 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11))) > ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0067;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral87335D17F4C1DED94C576C65C1DC4F16D278C988)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringStringMap_CopyTo_m5D78F9003BE6B16285A5C22504731EA6D14B6454_RuntimeMethod_var)));
	}

IL_0067:
	{
		RuntimeObject* L_15;
		L_15 = StringStringMap_get_Keys_m558C6C1516539080580AB4D6F8B2905B4B604AC4(__this, NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_16, L_15, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		V_0 = L_16;
		V_5 = 0;
		goto IL_00a9;
	}

IL_0078:
	{
		RuntimeObject* L_17 = V_0;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.String>::get_Item(System.Int32) */, IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var, L_17, L_18);
		V_6 = L_19;
		KeyValuePair_2U5BU5D_tEA2EBC56D51C33037B041DD38F518261CEE2C84C* L_20 = ___0_array;
		String_t* L_21 = V_6;
		String_t* L_22 = V_6;
		String_t* L_23;
		L_23 = StringStringMap_get_Item_m01061069FC7C194E45C518987A14FA5918806BE1(__this, L_22, NULL);
		KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_24;
		memset((&L_24), 0, sizeof(L_24));
		KeyValuePair_2__ctor_mC76BE8DEB14377BA47C72BDFC7D0BBD37330F36B((&L_24), L_21, L_23, /*hidden argument*/KeyValuePair_2__ctor_mC76BE8DEB14377BA47C72BDFC7D0BBD37330F36B_RuntimeMethod_var);
		KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_25 = L_24;
		RuntimeObject* L_26 = Box(KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_il2cpp_TypeInfo_var, &L_25);
		int32_t L_27 = ___1_arrayIndex;
		int32_t L_28 = V_5;
		NullCheck((RuntimeArray*)L_20);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8((RuntimeArray*)L_20, L_26, ((int32_t)il2cpp_codegen_add(L_27, L_28)), NULL);
		int32_t L_29 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00a9:
	{
		int32_t L_30 = V_5;
		RuntimeObject* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_31);
		V_7 = (bool)((((int32_t)L_30) < ((int32_t)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (L_33)
		{
			goto IL_0078;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> Firebase.StringStringMap::global::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.String>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringStringMap_globalU3AU3ASystem_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_StringU3EU3E_GetEnumerator_m4B458CA8BEE64D77627CBEF5804F460379D3CCEC (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18* L_0 = (StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18*)il2cpp_codegen_object_new(StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringStringMapEnumerator__ctor_m1659D491782A6E753AC1792C39802A79860F75B3(L_0, __this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Collections.IEnumerator Firebase.StringStringMap::global::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringStringMap_globalU3AU3ASystem_Collections_IEnumerable_GetEnumerator_m9A35129110F7B5928202096310FDD2CCEBFC9CAF (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18* L_0 = (StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18*)il2cpp_codegen_object_new(StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringStringMapEnumerator__ctor_m1659D491782A6E753AC1792C39802A79860F75B3(L_0, __this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Firebase.StringStringMap/StringStringMapEnumerator Firebase.StringStringMap::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18* StringStringMap_GetEnumerator_m5629FBE397B23B93415341566E71A149DBF1362A (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18* V_0 = NULL;
	{
		StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18* L_0 = (StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18*)il2cpp_codegen_object_new(StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringStringMapEnumerator__ctor_m1659D491782A6E753AC1792C39802A79860F75B3(L_0, __this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18* L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.StringStringMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap__ctor_m5295C0F5394545250F06A5F0A53C9ABB48D67794 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = AppUtilPINVOKE_new_StringStringMap__SWIG_0_m84D097C2772CA3A9AC5F931078FB79C3D3C1AF5E(NULL);
		StringStringMap__ctor_m493F3867E24E87A4D890A56366DAE5D3E2172E35(__this, L_0, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringStringMap__ctor_m5295C0F5394545250F06A5F0A53C9ABB48D67794_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// System.UInt32 Firebase.StringStringMap::size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t StringStringMap_size_m9C20BFD104A8B49600AD587CC29C4A748F408DC4 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = AppUtilPINVOKE_StringStringMap_size_mD8D9155E1FE3473C2D52EF30DB99A8054B8036C0(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringStringMap_size_m9C20BFD104A8B49600AD587CC29C4A748F408DC4_RuntimeMethod_var)));
	}

IL_001c:
	{
		uint32_t L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		uint32_t L_6 = V_2;
		return L_6;
	}
}
// System.Void Firebase.StringStringMap::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_Clear_mC33CC5FAC952437E4A1844D77F07682AB4A440A8 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_StringStringMap_Clear_m8D2936F5AC4C42D9E10C8A296765929E80819E6A(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringStringMap_Clear_mC33CC5FAC952437E4A1844D77F07682AB4A440A8_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// System.String Firebase.StringStringMap::getitem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringStringMap_getitem_m8DADD76F6CD52B4B98611DD4292910963C079C1B (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		String_t* L_1 = ___0_key;
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = AppUtilPINVOKE_StringStringMap_getitem_m9D4E9FAA3CA338A73368072EEA97E99D4BA5FC35(L_0, L_1, NULL);
		V_0 = L_2;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringStringMap_getitem_m8DADD76F6CD52B4B98611DD4292910963C079C1B_RuntimeMethod_var)));
	}

IL_001d:
	{
		String_t* L_6 = V_0;
		V_2 = L_6;
		goto IL_0021;
	}

IL_0021:
	{
		String_t* L_7 = V_2;
		return L_7;
	}
}
// System.Void Firebase.StringStringMap::setitem(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_setitem_mC5A0170C20E03D926C187A4B7AC6B0B96FB18C00 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, String_t* ___0_key, String_t* ___1_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		String_t* L_1 = ___0_key;
		String_t* L_2 = ___1_x;
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_StringStringMap_setitem_mF52AA2B0DD2B1C82C96641B73D967C5AA0AA3F04(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringStringMap_setitem_mC5A0170C20E03D926C187A4B7AC6B0B96FB18C00_RuntimeMethod_var)));
	}

IL_001e:
	{
		return;
	}
}
// System.Boolean Firebase.StringStringMap::ContainsKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringStringMap_ContainsKey_mD13F26BD8A08E581ADB303D38074819105C605A5 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		String_t* L_1 = ___0_key;
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AppUtilPINVOKE_StringStringMap_ContainsKey_mD1DB16B8E96A716AA7D6E9EF19565228BE89314A(L_0, L_1, NULL);
		V_0 = L_2;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringStringMap_ContainsKey_mD13F26BD8A08E581ADB303D38074819105C605A5_RuntimeMethod_var)));
	}

IL_001d:
	{
		bool L_6 = V_0;
		V_2 = L_6;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_7 = V_2;
		return L_7;
	}
}
// System.Void Firebase.StringStringMap::Add(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_Add_m01048CFD777D82B2F693B6D71A4D452FAF7AEAC1 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		String_t* L_1 = ___0_key;
		String_t* L_2 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_StringStringMap_Add_mB5BC4CE692924D407020A29EB1D91EA5FD4DACDA(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringStringMap_Add_m01048CFD777D82B2F693B6D71A4D452FAF7AEAC1_RuntimeMethod_var)));
	}

IL_001e:
	{
		return;
	}
}
// System.Boolean Firebase.StringStringMap::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringStringMap_Remove_m986E61004827D7F62831AEE307E6020383C3CB4D (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		String_t* L_1 = ___0_key;
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AppUtilPINVOKE_StringStringMap_Remove_mC01EAA294015A6D9D894D19B73DE6455110EBDA8(L_0, L_1, NULL);
		V_0 = L_2;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringStringMap_Remove_m986E61004827D7F62831AEE307E6020383C3CB4D_RuntimeMethod_var)));
	}

IL_001d:
	{
		bool L_6 = V_0;
		V_2 = L_6;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_7 = V_2;
		return L_7;
	}
}
// System.IntPtr Firebase.StringStringMap::create_iterator_begin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StringStringMap_create_iterator_begin_mF1C81519248E3646D376EC9F288C1C6A2065630D (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = AppUtilPINVOKE_StringStringMap_create_iterator_begin_mBBC01E5599A704C943471C9CEFF97810AC4054A1(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringStringMap_create_iterator_begin_mF1C81519248E3646D376EC9F288C1C6A2065630D_RuntimeMethod_var)));
	}

IL_001c:
	{
		intptr_t L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		intptr_t L_6 = V_2;
		return L_6;
	}
}
// System.String Firebase.StringStringMap::get_next_key(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringStringMap_get_next_key_m92C94637FF8B9A00B08BFCAD08CD41705AEAEE9B (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, intptr_t ___0_swigiterator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		intptr_t L_1 = ___0_swigiterator;
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = AppUtilPINVOKE_StringStringMap_get_next_key_mDE2CD543826A393C6BEF7562D4A81B66872826DB(L_0, L_1, NULL);
		V_0 = L_2;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringStringMap_get_next_key_m92C94637FF8B9A00B08BFCAD08CD41705AEAEE9B_RuntimeMethod_var)));
	}

IL_001d:
	{
		String_t* L_6 = V_0;
		V_2 = L_6;
		goto IL_0021;
	}

IL_0021:
	{
		String_t* L_7 = V_2;
		return L_7;
	}
}
// System.Void Firebase.StringStringMap::destroy_iterator(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_destroy_iterator_m75AD241AD5316B8B09070BF04C571918FE34BA04 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* __this, intptr_t ___0_swigiterator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		intptr_t L_1 = ___0_swigiterator;
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_StringStringMap_destroy_iterator_mD19027EE722AC2BD93E8F886D93AC6D0C3B56209(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringStringMap_destroy_iterator_m75AD241AD5316B8B09070BF04C571918FE34BA04_RuntimeMethod_var)));
	}

IL_001d:
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
// System.Void Firebase.StringStringMap/StringStringMapEnumerator::.ctor(Firebase.StringStringMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMapEnumerator__ctor_m1659D491782A6E753AC1792C39802A79860F75B3 (StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18* __this, StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* ___0_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* L_0 = ___0_collection;
		__this->___collectionRef_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collectionRef_0), (void*)L_0);
		StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* L_1 = ___0_collection;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = StringStringMap_get_Keys_m558C6C1516539080580AB4D6F8B2905B4B604AC4(L_1, NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_3, L_2, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		__this->___keyCollection_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keyCollection_1), (void*)L_3);
		__this->___currentIndex_2 = (-1);
		__this->___currentObject_3 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentObject_3), (void*)NULL);
		StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* L_4 = __this->___collectionRef_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = StringStringMap_get_Count_m2B11AF48BF1530FCB3ED130712C6B5BADC76A848(L_4, NULL);
		__this->___currentSize_4 = L_5;
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,System.String> Firebase.StringStringMap/StringStringMapEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A StringStringMapEnumerator_get_Current_mE221D98D4E0B07220825ED8752B9714AADBCB04E (StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___currentIndex_2;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88B277217AED4CBAA42043A4D5CD8DB154680BFA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringStringMapEnumerator_get_Current_mE221D98D4E0B07220825ED8752B9714AADBCB04E_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3 = __this->___currentIndex_2;
		int32_t L_4 = __this->___currentSize_4;
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, 1))))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD7D6709CAC9D8FCE4933C82CDA34EE45277DBD95)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringStringMapEnumerator_get_Current_mE221D98D4E0B07220825ED8752B9714AADBCB04E_RuntimeMethod_var)));
	}

IL_0038:
	{
		RuntimeObject* L_7 = __this->___currentObject_3;
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral572FD223BFCEC6E8E552A7CC84FEDA3269F3A5F7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringStringMapEnumerator_get_Current_mE221D98D4E0B07220825ED8752B9714AADBCB04E_RuntimeMethod_var)));
	}

IL_0050:
	{
		RuntimeObject* L_10 = __this->___currentObject_3;
		V_3 = ((*(KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*)((KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*)(KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*)UnBox(L_10, KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_il2cpp_TypeInfo_var))));
		goto IL_005e;
	}

IL_005e:
	{
		KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_11 = V_3;
		return L_11;
	}
}
// System.Object Firebase.StringStringMap/StringStringMapEnumerator::global::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringStringMapEnumerator_globalU3AU3ASystem_Collections_IEnumerator_get_Current_mF90B634B9E830DB2302FBCBC3F6DC9625AB41FBF (StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_0;
		L_0 = StringStringMapEnumerator_get_Current_mE221D98D4E0B07220825ED8752B9714AADBCB04E(__this, NULL);
		KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_1 = L_0;
		RuntimeObject* L_2 = Box(KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_il2cpp_TypeInfo_var, &L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Firebase.StringStringMap/StringStringMapEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringStringMapEnumerator_MoveNext_m19D42D8E29467683964512499AABEF93BD9830E1 (StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mC76BE8DEB14377BA47C72BDFC7D0BBD37330F36B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* L_0 = __this->___collectionRef_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = StringStringMap_get_Count_m2B11AF48BF1530FCB3ED130712C6B5BADC76A848(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = __this->___currentIndex_2;
		int32_t L_3 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_2, 1))) >= ((int32_t)L_3)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = __this->___currentSize_4;
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_8 = __this->___currentIndex_2;
		__this->___currentIndex_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		RuntimeObject* L_9 = __this->___keyCollection_1;
		int32_t L_10 = __this->___currentIndex_2;
		NullCheck(L_9);
		String_t* L_11;
		L_11 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.String>::get_Item(System.Int32) */, IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var, L_9, L_10);
		V_3 = L_11;
		String_t* L_12 = V_3;
		StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* L_13 = __this->___collectionRef_0;
		String_t* L_14 = V_3;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = StringStringMap_get_Item_m01061069FC7C194E45C518987A14FA5918806BE1(L_13, L_14, NULL);
		KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_16;
		memset((&L_16), 0, sizeof(L_16));
		KeyValuePair_2__ctor_mC76BE8DEB14377BA47C72BDFC7D0BBD37330F36B((&L_16), L_12, L_15, /*hidden argument*/KeyValuePair_2__ctor_mC76BE8DEB14377BA47C72BDFC7D0BBD37330F36B_RuntimeMethod_var);
		KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_17 = L_16;
		RuntimeObject* L_18 = Box(KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_il2cpp_TypeInfo_var, &L_17);
		__this->___currentObject_3 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentObject_3), (void*)L_18);
		goto IL_0074;
	}

IL_006b:
	{
		__this->___currentObject_3 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentObject_3), (void*)NULL);
	}

IL_0074:
	{
		bool L_19 = V_1;
		V_4 = L_19;
		goto IL_0079;
	}

IL_0079:
	{
		bool L_20 = V_4;
		return L_20;
	}
}
// System.Void Firebase.StringStringMap/StringStringMapEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMapEnumerator_Reset_mFE28DCE2D21F6639E75B255AAF56D34BFA7A151A (StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		__this->___currentIndex_2 = (-1);
		__this->___currentObject_3 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentObject_3), (void*)NULL);
		StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* L_0 = __this->___collectionRef_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = StringStringMap_get_Count_m2B11AF48BF1530FCB3ED130712C6B5BADC76A848(L_0, NULL);
		int32_t L_2 = __this->___currentSize_4;
		V_0 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral572FD223BFCEC6E8E552A7CC84FEDA3269F3A5F7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringStringMapEnumerator_Reset_mFE28DCE2D21F6639E75B255AAF56D34BFA7A151A_RuntimeMethod_var)));
	}

IL_0035:
	{
		return;
	}
}
// System.Void Firebase.StringStringMap/StringStringMapEnumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMapEnumerator_Dispose_mDB957DDBEF7D7D2207BEF3C8EF98D4AF2357B9E8 (StringStringMapEnumerator_t8F216585B1B600BF44AF6A75F58BAB83DDAB3D18* __this, const RuntimeMethod* method) 
{
	{
		__this->___currentIndex_2 = (-1);
		__this->___currentObject_3 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentObject_3), (void*)NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_FutureVoid_SWIG_CompletionDispatcher_mE9933C19D489F4E5B7B8F99C087A7A1C95681554(int32_t ___0_key)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	FutureVoid_SWIG_CompletionDispatcher_mE9933C19D489F4E5B7B8F99C087A7A1C95681554(___0_key, NULL);

}
// System.Void Firebase.FutureVoid::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid__ctor_m6E0B9CCC4BD6777C7369CA92E236C003CCCBC043 (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___callbackData_6 = L_0;
		__this->___SWIG_CompletionCB_7 = (SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SWIG_CompletionCB_7), (void*)(SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C*)NULL);
		intptr_t L_1 = ___0_cPtr;
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = AppUtilPINVOKE_FutureVoid_SWIGUpcast_m8D1EB93463FFA3A9F14A49FD1459CBE45E8957CC(L_1, NULL);
		bool L_3 = ___1_cMemoryOwn;
		FutureBase__ctor_m98C8AE4F030730C1CEE7E0B4A1816C623F2B9BE0(__this, L_2, L_3, NULL);
		intptr_t L_4 = ___0_cPtr;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_5;
		memset((&L_5), 0, sizeof(L_5));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_5), __this, L_4, /*hidden argument*/NULL);
		__this->___swigCPtr_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_2))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Void Firebase.FutureVoid::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid_Dispose_mE53AC3550993F046EC655040D365FA932C784DE0 (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
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

FINALLY_007c:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0086;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0086:
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
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_4 = (&__this->___swigCPtr_2);
				intptr_t L_5;
				L_5 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_4, NULL);
				intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_7;
				L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_5, L_6, NULL);
				V_2 = L_7;
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_006a_1;
				}
			}
			{
				intptr_t L_9 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				FutureVoid_SetCompletionData_mB5B6BB51BB7E9B0D64631B560A2D6E947B369D45(__this, L_9, NULL);
				bool L_10 = ((FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36*)__this)->___swigCMemOwn_1;
				V_3 = L_10;
				bool L_11 = V_3;
				if (!L_11)
				{
					goto IL_0058_1;
				}
			}
			{
				((FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36*)__this)->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_12 = __this->___swigCPtr_2;
				il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
				AppUtilPINVOKE_delete_FutureVoid_m9F8202898737C91464B6621C899505CE987A6393(L_12, NULL);
			}

IL_0058_1:
			{
				intptr_t L_13 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_14;
				memset((&L_14), 0, sizeof(L_14));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_14), NULL, L_13, /*hidden argument*/NULL);
				__this->___swigCPtr_2 = L_14;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_2))->____wrapper_0), (void*)NULL);
			}

IL_006a_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				bool L_15 = ___0_disposing;
				FutureBase_Dispose_m17D716EFFAF752B7DBF402C73D757D02C34457EB(__this, L_15, NULL);
				goto IL_0087;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		return;
	}
}
// System.Threading.Tasks.Task Firebase.FutureVoid::GetTask(Firebase.FutureVoid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FutureVoid_GetTask_m68B083F4868870F64B15374FE3D1343543C863DF (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* ___0_fu, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_m2BD5F2CC6C343DF947BB026CB4B1FB72EBD24A93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mE2B94C03A4FD1C3411C2ED506508F8B93ED25C7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m5FEF07332DD178987B44AD842559F18D9254224B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t334979F66DE5C2F333F2975D91AA0EEB6E6B35D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CGetTaskU3Eb__0_m3C63FB12C6FC4D1551D9D48B32F123DF7EAA4AE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t6BC89DFF3EF637AC4998ABB6D062E6A629AB0D51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t6BC89DFF3EF637AC4998ABB6D062E6A629AB0D51* V_0 = NULL;
	bool V_1 = false;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_2 = NULL;
	bool V_3 = false;
	{
		U3CU3Ec__DisplayClass5_0_t6BC89DFF3EF637AC4998ABB6D062E6A629AB0D51* L_0 = (U3CU3Ec__DisplayClass5_0_t6BC89DFF3EF637AC4998ABB6D062E6A629AB0D51*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t6BC89DFF3EF637AC4998ABB6D062E6A629AB0D51_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m89776A34BECBA50695D3E5F098200BF8227A9FE9(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t6BC89DFF3EF637AC4998ABB6D062E6A629AB0D51* L_1 = V_0;
		FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* L_2 = ___0_fu;
		NullCheck(L_1);
		L_1->___fu_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___fu_0), (void*)L_2);
		U3CU3Ec__DisplayClass5_0_t6BC89DFF3EF637AC4998ABB6D062E6A629AB0D51* L_3 = V_0;
		TaskCompletionSource_1_t334979F66DE5C2F333F2975D91AA0EEB6E6B35D7* L_4 = (TaskCompletionSource_1_t334979F66DE5C2F333F2975D91AA0EEB6E6B35D7*)il2cpp_codegen_object_new(TaskCompletionSource_1_t334979F66DE5C2F333F2975D91AA0EEB6E6B35D7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TaskCompletionSource_1__ctor_mE2B94C03A4FD1C3411C2ED506508F8B93ED25C7F(L_4, TaskCompletionSource_1__ctor_mE2B94C03A4FD1C3411C2ED506508F8B93ED25C7F_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___tcs_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___tcs_1), (void*)L_4);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		U3CU3Ec__DisplayClass5_0_t6BC89DFF3EF637AC4998ABB6D062E6A629AB0D51* L_7 = V_0;
		NullCheck(L_7);
		TaskCompletionSource_1_t334979F66DE5C2F333F2975D91AA0EEB6E6B35D7* L_8 = L_7->___tcs_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		Exception_t* L_9;
		L_9 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		NullCheck(L_8);
		TaskCompletionSource_1_SetException_m2BD5F2CC6C343DF947BB026CB4B1FB72EBD24A93(L_8, L_9, TaskCompletionSource_1_SetException_m2BD5F2CC6C343DF947BB026CB4B1FB72EBD24A93_RuntimeMethod_var);
		U3CU3Ec__DisplayClass5_0_t6BC89DFF3EF637AC4998ABB6D062E6A629AB0D51* L_10 = V_0;
		NullCheck(L_10);
		TaskCompletionSource_1_t334979F66DE5C2F333F2975D91AA0EEB6E6B35D7* L_11 = L_10->___tcs_1;
		NullCheck(L_11);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_12;
		L_12 = TaskCompletionSource_1_get_Task_m5FEF07332DD178987B44AD842559F18D9254224B_inline(L_11, TaskCompletionSource_1_get_Task_m5FEF07332DD178987B44AD842559F18D9254224B_RuntimeMethod_var);
		V_2 = L_12;
		goto IL_00a0;
	}

IL_0042:
	{
		U3CU3Ec__DisplayClass5_0_t6BC89DFF3EF637AC4998ABB6D062E6A629AB0D51* L_13 = V_0;
		NullCheck(L_13);
		FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* L_14 = L_13->___fu_0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = FutureBase_status_mC75FD35438B176F95462D3A5D7D9194629211902(L_14, NULL);
		V_3 = (bool)((((int32_t)L_15) == ((int32_t)2))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_007a;
		}
	}
	{
		U3CU3Ec__DisplayClass5_0_t6BC89DFF3EF637AC4998ABB6D062E6A629AB0D51* L_17 = V_0;
		NullCheck(L_17);
		TaskCompletionSource_1_t334979F66DE5C2F333F2975D91AA0EEB6E6B35D7* L_18 = L_17->___tcs_1;
		FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* L_19 = (FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED*)il2cpp_codegen_object_new(FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		FirebaseException__ctor_m18D67DA955D2B4EA2BC58BCE0E96AC0A177DD70F(L_19, 0, _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18, NULL);
		NullCheck(L_18);
		TaskCompletionSource_1_SetException_m2BD5F2CC6C343DF947BB026CB4B1FB72EBD24A93(L_18, L_19, TaskCompletionSource_1_SetException_m2BD5F2CC6C343DF947BB026CB4B1FB72EBD24A93_RuntimeMethod_var);
		U3CU3Ec__DisplayClass5_0_t6BC89DFF3EF637AC4998ABB6D062E6A629AB0D51* L_20 = V_0;
		NullCheck(L_20);
		TaskCompletionSource_1_t334979F66DE5C2F333F2975D91AA0EEB6E6B35D7* L_21 = L_20->___tcs_1;
		NullCheck(L_21);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_22;
		L_22 = TaskCompletionSource_1_get_Task_m5FEF07332DD178987B44AD842559F18D9254224B_inline(L_21, TaskCompletionSource_1_get_Task_m5FEF07332DD178987B44AD842559F18D9254224B_RuntimeMethod_var);
		V_2 = L_22;
		goto IL_00a0;
	}

IL_007a:
	{
		U3CU3Ec__DisplayClass5_0_t6BC89DFF3EF637AC4998ABB6D062E6A629AB0D51* L_23 = V_0;
		NullCheck(L_23);
		FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* L_24 = L_23->___fu_0;
		U3CU3Ec__DisplayClass5_0_t6BC89DFF3EF637AC4998ABB6D062E6A629AB0D51* L_25 = V_0;
		Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F* L_26 = (Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F*)il2cpp_codegen_object_new(Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Action__ctor_mED144299E578968B25C10C34315DFE3EF08B445E(L_26, L_25, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CGetTaskU3Eb__0_m3C63FB12C6FC4D1551D9D48B32F123DF7EAA4AE0_RuntimeMethod_var), NULL);
		NullCheck(L_24);
		FutureVoid_SetOnCompletionCallback_m917E3BBFE7A06872EEA6F4FC13F557E5F2B6652D(L_24, L_26, NULL);
		U3CU3Ec__DisplayClass5_0_t6BC89DFF3EF637AC4998ABB6D062E6A629AB0D51* L_27 = V_0;
		NullCheck(L_27);
		TaskCompletionSource_1_t334979F66DE5C2F333F2975D91AA0EEB6E6B35D7* L_28 = L_27->___tcs_1;
		NullCheck(L_28);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_29;
		L_29 = TaskCompletionSource_1_get_Task_m5FEF07332DD178987B44AD842559F18D9254224B_inline(L_28, TaskCompletionSource_1_get_Task_m5FEF07332DD178987B44AD842559F18D9254224B_RuntimeMethod_var);
		V_2 = L_29;
		goto IL_00a0;
	}

IL_00a0:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30 = V_2;
		return L_30;
	}
}
// System.Void Firebase.FutureVoid::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid_ThrowIfDisposed_m58FAFA498227E36B2075EDAF83F346CD70BD9739 (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_0 = (&__this->___swigCPtr_2);
		intptr_t L_1;
		L_1 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE952D19344D880EF06EC8AACBF9B79603FCE8F3A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FutureVoid_ThrowIfDisposed_m58FAFA498227E36B2075EDAF83F346CD70BD9739_RuntimeMethod_var)));
	}

IL_0026:
	{
		return;
	}
}
// System.Void Firebase.FutureVoid::SetOnCompletionCallback(Firebase.FutureVoid/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid_SetOnCompletionCallback_m917E3BBFE7A06872EEA6F4FC13F557E5F2B6652D (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* __this, Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F* ___0_userCompletionCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9ECDA1EAD89A6D781E5CE4E813451CFD7DF269E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m37FF7170A65FE1A27B5EADEF6AC8AC59F8AF7FD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureVoid_SWIG_CompletionDispatcher_mE9933C19D489F4E5B7B8F99C087A7A1C95681554_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		FutureVoid_ThrowIfDisposed_m58FAFA498227E36B2075EDAF83F346CD70BD9739(__this, NULL);
		SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C* L_0 = __this->___SWIG_CompletionCB_7;
		V_1 = (bool)((((RuntimeObject*)(SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C* L_2 = (SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C*)il2cpp_codegen_object_new(SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SWIG_CompletionDelegate__ctor_mE4580033D452974357EA9E700C2AB1D7FBABA5E5(L_2, NULL, (intptr_t)((void*)FutureVoid_SWIG_CompletionDispatcher_mE9933C19D489F4E5B7B8F99C087A7A1C95681554_RuntimeMethod_var), NULL);
		__this->___SWIG_CompletionCB_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SWIG_CompletionCB_7), (void*)L_2);
	}

IL_0029:
	{
		il2cpp_codegen_runtime_class_init_inline(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = ((FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var))->___CallbackLock_5;
		V_2 = L_3;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_3;
					if (!L_4)
					{
						goto IL_007d;
					}
				}
				{
					RuntimeObject* L_5 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
				}

IL_007d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_6 = V_2;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_6, (&V_3), NULL);
				il2cpp_codegen_runtime_class_init_inline(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
				Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A* L_7 = ((FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var))->___Callbacks_3;
				V_4 = (bool)((((RuntimeObject*)(Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_8 = V_4;
				if (!L_8)
				{
					goto IL_0055_1;
				}
			}
			{
				Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A* L_9 = (Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A*)il2cpp_codegen_object_new(Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				Dictionary_2__ctor_m9ECDA1EAD89A6D781E5CE4E813451CFD7DF269E4(L_9, Dictionary_2__ctor_m9ECDA1EAD89A6D781E5CE4E813451CFD7DF269E4_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
				((FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var))->___Callbacks_3 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&((FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var))->___Callbacks_3), (void*)L_9);
			}

IL_0055_1:
			{
				il2cpp_codegen_runtime_class_init_inline(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
				int32_t L_10 = ((FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var))->___CallbackIndex_4;
				int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
				((FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var))->___CallbackIndex_4 = L_11;
				V_0 = L_11;
				Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A* L_12 = ((FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var))->___Callbacks_3;
				int32_t L_13 = V_0;
				Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F* L_14 = ___0_userCompletionCallback;
				NullCheck(L_12);
				Dictionary_2_set_Item_m37FF7170A65FE1A27B5EADEF6AC8AC59F8AF7FD8(L_12, L_13, L_14, Dictionary_2_set_Item_m37FF7170A65FE1A27B5EADEF6AC8AC59F8AF7FD8_RuntimeMethod_var);
				goto IL_007e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007e:
	{
		SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C* L_15 = __this->___SWIG_CompletionCB_7;
		int32_t L_16 = V_0;
		intptr_t L_17;
		L_17 = FutureVoid_SWIG_OnCompletion_mD6E8C709E067EC3FCCC1DD9F8F7C664D7479B634(__this, L_15, L_16, NULL);
		FutureVoid_SetCompletionData_mB5B6BB51BB7E9B0D64631B560A2D6E947B369D45(__this, L_17, NULL);
		return;
	}
}
// System.Void Firebase.FutureVoid::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid_SetCompletionData_mB5B6BB51BB7E9B0D64631B560A2D6E947B369D45 (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* __this, intptr_t ___0_data, const RuntimeMethod* method) 
{
	{
		FutureVoid_ThrowIfDisposed_m58FAFA498227E36B2075EDAF83F346CD70BD9739(__this, NULL);
		intptr_t L_0 = __this->___callbackData_6;
		FutureVoid_SWIG_FreeCompletionData_m6570E091DBEF492143DA3BB5B21C5E500495AB87(__this, L_0, NULL);
		intptr_t L_1 = ___0_data;
		__this->___callbackData_6 = L_1;
		return;
	}
}
// System.Void Firebase.FutureVoid::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid_SWIG_CompletionDispatcher_mE9933C19D489F4E5B7B8F99C087A7A1C95681554 (int32_t ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mE92CC8C926DDAFEDB2A50CCEA0B6571DED3D57E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m6CD864883E697C6EA206A9653365B8F6B18A70EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	{
		V_0 = (Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F*)NULL;
		il2cpp_codegen_runtime_class_init_inline(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var))->___CallbackLock_5;
		V_1 = L_0;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_2;
					if (!L_1)
					{
						goto IL_004b;
					}
				}
				{
					RuntimeObject* L_2 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_004b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_2), NULL);
				il2cpp_codegen_runtime_class_init_inline(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
				Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A* L_4 = ((FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var))->___Callbacks_3;
				if (!L_4)
				{
					goto IL_002b_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
				Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A* L_5 = ((FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var))->___Callbacks_3;
				int32_t L_6 = ___0_key;
				NullCheck(L_5);
				bool L_7;
				L_7 = Dictionary_2_TryGetValue_m6CD864883E697C6EA206A9653365B8F6B18A70EC(L_5, L_6, (&V_0), Dictionary_2_TryGetValue_m6CD864883E697C6EA206A9653365B8F6B18A70EC_RuntimeMethod_var);
				G_B4_0 = ((int32_t)(L_7));
				goto IL_002c_1;
			}

IL_002b_1:
			{
				G_B4_0 = 0;
			}

IL_002c_1:
			{
				V_3 = (bool)G_B4_0;
				bool L_8 = V_3;
				if (!L_8)
				{
					goto IL_003e_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
				Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A* L_9 = ((FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var))->___Callbacks_3;
				int32_t L_10 = ___0_key;
				NullCheck(L_9);
				bool L_11;
				L_11 = Dictionary_2_Remove_mE92CC8C926DDAFEDB2A50CCEA0B6571DED3D57E3(L_9, L_10, Dictionary_2_Remove_mE92CC8C926DDAFEDB2A50CCEA0B6571DED3D57E3_RuntimeMethod_var);
			}

IL_003e_1:
			{
				goto IL_004c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F* L_12 = V_0;
		V_4 = (bool)((!(((RuntimeObject*)(Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F*)L_12) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_005d;
		}
	}
	{
		Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F* L_14 = V_0;
		NullCheck(L_14);
		Action_Invoke_mB0C4867EC8469233A3647955D2408E97D6107F91_inline(L_14, NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.IntPtr Firebase.FutureVoid::SWIG_OnCompletion(Firebase.FutureVoid/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FutureVoid_SWIG_OnCompletion_mD6E8C709E067EC3FCCC1DD9F8F7C664D7479B634 (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* __this, SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C* ___0_cs_callback, int32_t ___1_cs_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_2;
		SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C* L_1 = ___0_cs_callback;
		int32_t L_2 = ___1_cs_key;
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = AppUtilPINVOKE_FutureVoid_SWIG_OnCompletion_mFD32977A7A2E4A35F4DF9D05E4890FEF115BACB9(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_6;
		L_6 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FutureVoid_SWIG_OnCompletion_mD6E8C709E067EC3FCCC1DD9F8F7C664D7479B634_RuntimeMethod_var)));
	}

IL_001e:
	{
		intptr_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0022;
	}

IL_0022:
	{
		intptr_t L_8 = V_2;
		return L_8;
	}
}
// System.Void Firebase.FutureVoid::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid_SWIG_FreeCompletionData_m6570E091DBEF492143DA3BB5B21C5E500495AB87 (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* __this, intptr_t ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_2;
		intptr_t L_1 = ___0_data;
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_FutureVoid_SWIG_FreeCompletionData_m86022295E0D79AB64EF071771596414899834326(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FutureVoid_SWIG_FreeCompletionData_m6570E091DBEF492143DA3BB5B21C5E500495AB87_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// System.Void Firebase.FutureVoid::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid__cctor_mE3C6FE56F8AED90EE6D795624E8E4D84CB6F0944 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var))->___CallbackIndex_4 = 0;
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var))->___CallbackLock_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var))->___CallbackLock_5), (void*)L_0);
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
void Action_Invoke_mB0C4867EC8469233A3647955D2408E97D6107F91_Multicast(Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F* currentDelegate = reinterpret_cast<Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Action_Invoke_mB0C4867EC8469233A3647955D2408E97D6107F91_OpenInst(Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void Action_Invoke_mB0C4867EC8469233A3647955D2408E97D6107F91_OpenStatic(Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void Action_Invoke_mB0C4867EC8469233A3647955D2408E97D6107F91_OpenStaticInvoker(Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void Action_Invoke_mB0C4867EC8469233A3647955D2408E97D6107F91_ClosedStaticInvoker(Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F (Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Firebase.FutureVoid/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mED144299E578968B25C10C34315DFE3EF08B445E (Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Action_Invoke_mB0C4867EC8469233A3647955D2408E97D6107F91_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Action_Invoke_mB0C4867EC8469233A3647955D2408E97D6107F91_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Action_Invoke_mB0C4867EC8469233A3647955D2408E97D6107F91_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&Action_Invoke_mB0C4867EC8469233A3647955D2408E97D6107F91_Multicast;
}
// System.Void Firebase.FutureVoid/Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mB0C4867EC8469233A3647955D2408E97D6107F91 (Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SWIG_CompletionDelegate_Invoke_mB8239A488193E3DC4DB9EE3276065CBDBA72D73B_Multicast(SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C* currentDelegate = reinterpret_cast<SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_index, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SWIG_CompletionDelegate_Invoke_mB8239A488193E3DC4DB9EE3276065CBDBA72D73B_OpenInst(SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_index, method);
}
void SWIG_CompletionDelegate_Invoke_mB8239A488193E3DC4DB9EE3276065CBDBA72D73B_OpenStatic(SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_index, method);
}
void SWIG_CompletionDelegate_Invoke_mB8239A488193E3DC4DB9EE3276065CBDBA72D73B_OpenStaticInvoker(SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_index);
}
void SWIG_CompletionDelegate_Invoke_mB8239A488193E3DC4DB9EE3276065CBDBA72D73B_ClosedStaticInvoker(SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_index);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C (SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_index);

}
// System.Void Firebase.FutureVoid/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_mE4580033D452974357EA9E700C2AB1D7FBABA5E5 (SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&SWIG_CompletionDelegate_Invoke_mB8239A488193E3DC4DB9EE3276065CBDBA72D73B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SWIG_CompletionDelegate_Invoke_mB8239A488193E3DC4DB9EE3276065CBDBA72D73B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIG_CompletionDelegate_Invoke_mB8239A488193E3DC4DB9EE3276065CBDBA72D73B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&SWIG_CompletionDelegate_Invoke_mB8239A488193E3DC4DB9EE3276065CBDBA72D73B_Multicast;
}
// System.Void Firebase.FutureVoid/SWIG_CompletionDelegate::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_Invoke_mB8239A488193E3DC4DB9EE3276065CBDBA72D73B (SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_index, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.FutureVoid/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m89776A34BECBA50695D3E5F098200BF8227A9FE9 (U3CU3Ec__DisplayClass5_0_t6BC89DFF3EF637AC4998ABB6D062E6A629AB0D51* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.FutureVoid/<>c__DisplayClass5_0::<GetTask>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CGetTaskU3Eb__0_m3C63FB12C6FC4D1551D9D48B32F123DF7EAA4AE0 (U3CU3Ec__DisplayClass5_0_t6BC89DFF3EF637AC4998ABB6D062E6A629AB0D51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetCanceled_mAD782AAED9E467C7CD39801AA1B6365C9562C44A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_m2BD5F2CC6C343DF947BB026CB4B1FB72EBD24A93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mEAC57DB80E5D80F41A490DB1AE90B89A4B2CA2E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		{
			FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* L_0 = __this->___fu_0;
			NullCheck(L_0);
			int32_t L_1;
			L_1 = FutureBase_status_mC75FD35438B176F95462D3A5D7D9194629211902(L_0, NULL);
			V_0 = (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
			bool L_2 = V_0;
			if (!L_2)
			{
				goto IL_0024_1;
			}
		}
		{
			TaskCompletionSource_1_t334979F66DE5C2F333F2975D91AA0EEB6E6B35D7* L_3 = __this->___tcs_1;
			NullCheck(L_3);
			TaskCompletionSource_1_SetCanceled_mAD782AAED9E467C7CD39801AA1B6365C9562C44A(L_3, TaskCompletionSource_1_SetCanceled_mAD782AAED9E467C7CD39801AA1B6365C9562C44A_RuntimeMethod_var);
			goto IL_006a_1;
		}

IL_0024_1:
		{
			FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* L_4 = __this->___fu_0;
			NullCheck(L_4);
			int32_t L_5;
			L_5 = FutureBase_error_m47E3B5E0A43B4C19510A77B3658EE5D7D10B6030(L_4, NULL);
			V_1 = L_5;
			int32_t L_6 = V_1;
			V_2 = (bool)((!(((uint32_t)L_6) <= ((uint32_t)0)))? 1 : 0);
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_005a_1;
			}
		}
		{
			TaskCompletionSource_1_t334979F66DE5C2F333F2975D91AA0EEB6E6B35D7* L_8 = __this->___tcs_1;
			int32_t L_9 = V_1;
			FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* L_10 = __this->___fu_0;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = FutureBase_error_message_m5CC18319253B1ECC3C8AC675B213A08B1755D527(L_10, NULL);
			FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* L_12 = (FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED*)il2cpp_codegen_object_new(FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var);
			NullCheck(L_12);
			FirebaseException__ctor_m18D67DA955D2B4EA2BC58BCE0E96AC0A177DD70F(L_12, L_9, L_11, NULL);
			NullCheck(L_8);
			TaskCompletionSource_1_SetException_m2BD5F2CC6C343DF947BB026CB4B1FB72EBD24A93(L_8, L_12, TaskCompletionSource_1_SetException_m2BD5F2CC6C343DF947BB026CB4B1FB72EBD24A93_RuntimeMethod_var);
			goto IL_0069_1;
		}

IL_005a_1:
		{
			TaskCompletionSource_1_t334979F66DE5C2F333F2975D91AA0EEB6E6B35D7* L_13 = __this->___tcs_1;
			NullCheck(L_13);
			TaskCompletionSource_1_SetResult_mEAC57DB80E5D80F41A490DB1AE90B89A4B2CA2E7(L_13, 0, TaskCompletionSource_1_SetResult_mEAC57DB80E5D80F41A490DB1AE90B89A4B2CA2E7_RuntimeMethod_var);
		}

IL_0069_1:
		{
		}

IL_006a_1:
		{
			goto IL_0084;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006d;
		}
		throw e;
	}

CATCH_006d:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_14 = V_3;
		String_t* L_15;
		L_15 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral32E8916355B734142247F16D33AC51F0ABA2C28F)), L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var)));
		LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49(4, L_15, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0084;
	}// end catch (depth: 1)

IL_0084:
	{
		FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* L_16 = __this->___fu_0;
		NullCheck(L_16);
		FutureBase_Dispose_m32193D02DE4608C6C3EDF42F3D0495707DA4D15E(L_16, NULL);
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
// System.Void Firebase.FirebaseApp::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp__ctor_mC539AF748C2E16CD3B7820D6039B9A29DBDF908C (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
{
	{
		__this->___appPlatform_14 = (FirebaseAppPlatform_t5AD8517EA34467536BAC8C7C6EB4D4B6880312A2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___appPlatform_14), (void*)(FirebaseAppPlatform_t5AD8517EA34467536BAC8C7C6EB4D4B6880312A2*)NULL);
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
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FirebaseApp_getCPtr_m54B5DAC73BA43E79771E0181BEFD846BBE06C84F (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_obj, const RuntimeMethod* method) 
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
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = ___0_obj;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_1 = ___0_obj;
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
// System.Void Firebase.FirebaseApp::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_Finalize_mF8DA91BE30AF031A390E068301053AEF3D6B5A98 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, const RuntimeMethod* method) 
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
			FirebaseApp_Dispose_m7AA869727509B99D04399B9BA7F1FEEC0251974A(__this, (bool)0, NULL);
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
// System.Void Firebase.FirebaseApp::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_Dispose_mC1965A7AE8BAB834DB652BF0BACF377F3D45192B (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseApp_Dispose_m7AA869727509B99D04399B9BA7F1FEEC0251974A(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.FirebaseApp::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_Dispose_m7AA869727509B99D04399B9BA7F1FEEC0251974A (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		String_t* L_0 = __this->___name_3;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2;
		L_2 = FirebaseApp_get_NameInternal_m493D9AEC87709D1197A1997C7560AFEBB107FBCE(__this, NULL);
		__this->___name_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_3), (void*)L_2);
	}

IL_001c:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = __this->___AppDisposed_4;
		V_1 = (bool)((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = __this->___AppDisposed_4;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_6 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_5);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(L_5, __this, L_6, NULL);
		__this->___AppDisposed_4 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AppDisposed_4), (void*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)NULL);
	}

IL_0044:
	{
		FirebaseApp_RemoveReference_m3C28724EDB5D9F20A2A4924E517A8FF79C7E3425(__this, NULL);
		return;
	}
}
// System.Void Firebase.FirebaseApp::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp__cctor_m91B5E844644438D93858FE54C4DF15D53358F31B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m11A6F16438BDFA5BB4D619721B6F24400CDB4B17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8F62E1C352E79E91D4BA07FB3DAE1E55115004CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2), (void*)L_0);
		Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* L_1 = (Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A*)il2cpp_codegen_object_new(Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m8F62E1C352E79E91D4BA07FB3DAE1E55115004CB(L_1, Dictionary_2__ctor_m8F62E1C352E79E91D4BA07FB3DAE1E55115004CB_RuntimeMethod_var);
		((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___nameToProxy_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___nameToProxy_5), (void*)L_1);
		Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3* L_2 = (Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3*)il2cpp_codegen_object_new(Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m11A6F16438BDFA5BB4D619721B6F24400CDB4B17(L_2, Dictionary_2__ctor_m11A6F16438BDFA5BB4D619721B6F24400CDB4B17_RuntimeMethod_var);
		((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___cPtrToProxy_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___cPtrToProxy_6), (void*)L_2);
		((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___AppUtilCallbacksInitialized_7 = (bool)0;
		RuntimeObject* L_3 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_3, NULL);
		((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___AppUtilCallbacksLock_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___AppUtilCallbacksLock_8), (void*)L_3);
		((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___PreventOnAllAppsDestroyed_9 = (bool)0;
		((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___crashlyticsInitializationAttempted_10 = (bool)0;
		((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___userAgentRegistered_11 = (bool)0;
		((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___CheckDependenciesThread_12 = (-1);
		RuntimeObject* L_4 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_4, NULL);
		((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___CheckDependenciesThreadLock_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___CheckDependenciesThreadLock_13), (void*)L_4);
		il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		LogUtil_InitializeLogging_mC8B6DCC4B1E24F42B676EA58E1AD2EBCDF2967CE(NULL);
		return;
	}
}
// System.Void Firebase.FirebaseApp::TranslateDllNotFoundException(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_TranslateDllNotFoundException_m8A53BF93797E69E0A396E5D387C8BE2FAC5A887E (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_closureToExecute, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_closureToExecute;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		goto IL_002f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000c;
		}
		throw e;
	}

CATCH_000c:
	{// begin catch(System.Exception)
		{
			V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_1 = V_0;
			NullCheck(L_1);
			Exception_t* L_2;
			L_2 = VirtualFuncInvoker0< Exception_t* >::Invoke(7 /* System.Exception System.Exception::GetBaseException() */, L_1);
			V_1 = (bool)((!(((RuntimeObject*)(DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534*)((DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534*)IsInstClass((RuntimeObject*)L_2, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_002d;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var)));
			String_t* L_4;
			L_4 = ErrorMessages_get_DllNotFoundExceptionErrorMessage_m0B273BB2A0E048AACEA44918DBBBBACB38B579F3(NULL);
			InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* L_5 = (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E_il2cpp_TypeInfo_var)));
			NullCheck(L_5);
			InitializationException__ctor_mC48C74EE90B137CDEA82068C2E1695D81974C5BF(L_5, 1, L_4, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_TranslateDllNotFoundException_m8A53BF93797E69E0A396E5D387C8BE2FAC5A887E_RuntimeMethod_var)));
		}

IL_002d:
		{
			IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
	}// end catch (depth: 1)

IL_002f:
	{
		return;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* V_0 = NULL;
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* V_1 = NULL;
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* G_B3_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = FirebaseApp_get_DefaultName_mE170961E3E149AB409453866F8FBEDE07E9C3714(NULL);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_1;
		L_1 = FirebaseApp_GetInstance_m9BAC597B32771401771C8915446DA531E7B66EC5(L_0, NULL);
		V_0 = L_1;
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_2 = V_0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_3;
		L_3 = FirebaseApp_Create_mB737A2508FF5A06F35D01D4A8CD4AEF1F8944512(NULL);
		G_B3_0 = L_3;
		goto IL_0017;
	}

IL_0016:
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_4 = V_0;
		G_B3_0 = L_4;
	}

IL_0017:
	{
		V_1 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_5 = V_1;
		return L_5;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp::GetInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseApp_GetInstance_m9BAC597B32771401771C8915446DA531E7B66EC5 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m7A0B03D4435A96C5CB96AAFD5DDBEF49294C7C5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m6E5B2FEEC491D083B03A11DA6FA39A580A2369A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* V_0 = NULL;
	Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* V_5 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_ThrowIfCheckDependenciesRunning_mCC374EEFD25964DB6A38DA14EC987792DE119D9B(NULL);
		V_0 = (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)NULL;
		Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___nameToProxy_5;
		V_1 = L_0;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_2;
					if (!L_1)
					{
						goto IL_0053;
					}
				}
				{
					Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* L_2 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0053:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* L_3 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_2), NULL);
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* L_4 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___nameToProxy_5;
				String_t* L_5 = ___0_name;
				NullCheck(L_4);
				bool L_6;
				L_6 = Dictionary_2_TryGetValue_m6E5B2FEEC491D083B03A11DA6FA39A580A2369A1(L_4, L_5, (&V_0), Dictionary_2_TryGetValue_m6E5B2FEEC491D083B03A11DA6FA39A580A2369A1_RuntimeMethod_var);
				V_3 = L_6;
				bool L_7 = V_3;
				if (!L_7)
				{
					goto IL_0044_1;
				}
			}
			{
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_8 = V_0;
				V_4 = (bool)((((RuntimeObject*)(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_9 = V_4;
				if (!L_9)
				{
					goto IL_0043_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* L_10 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___nameToProxy_5;
				String_t* L_11 = ___0_name;
				NullCheck(L_10);
				bool L_12;
				L_12 = Dictionary_2_Remove_m7A0B03D4435A96C5CB96AAFD5DDBEF49294C7C5F(L_10, L_11, Dictionary_2_Remove_m7A0B03D4435A96C5CB96AAFD5DDBEF49294C7C5F_RuntimeMethod_var);
			}

IL_0043_1:
			{
			}

IL_0044_1:
			{
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_13 = V_0;
				V_5 = L_13;
				goto IL_0054;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0054:
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_14 = V_5;
		return L_14;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseApp_Create_mB737A2508FF5A06F35D01D4A8CD4AEF1F8944512 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateU3Eb__15_0_mF43BDAE5875C0C407791D7735DC43BB00EB29F32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* V_0 = NULL;
	CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73* G_B2_0 = NULL;
	CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var);
		CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73* L_0 = ((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1;
		CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var);
		U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C* L_2 = ((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73* L_3 = (CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73*)il2cpp_codegen_object_new(CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CreateDelegate__ctor_m966C39812E422F82DD3AACF101F012749B1F9E12(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CCreateU3Eb__15_0_mF43BDAE5875C0C407791D7735DC43BB00EB29F32_RuntimeMethod_var), NULL);
		CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73* L_4 = L_3;
		((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_0020:
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = FirebaseApp_get_DefaultName_mE170961E3E149AB409453866F8FBEDE07E9C3714(NULL);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_6;
		L_6 = FirebaseApp_GetInstance_m9BAC597B32771401771C8915446DA531E7B66EC5(L_5, NULL);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_7;
		L_7 = FirebaseApp_CreateAndTrack_m3EFC2B1BFE4FF3BE069B04DE63E93A257CD65B3E(G_B2_0, L_6, NULL);
		V_0 = L_7;
		goto IL_0032;
	}

IL_0032:
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_8 = V_0;
		return L_8;
	}
}
// System.String Firebase.FirebaseApp::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_m89C11F96726C8E4FD3CCAE04A5DC3129F7CD975E (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = __this->___name_3;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		FirebaseApp_ThrowIfNull_mEBB4A7F4A0E30B8F6969C68C340AF30D44491B20(__this, NULL);
		String_t* L_2;
		L_2 = FirebaseApp_get_NameInternal_m493D9AEC87709D1197A1997C7560AFEBB107FBCE(__this, NULL);
		__this->___name_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_3), (void*)L_2);
	}

IL_0023:
	{
		String_t* L_3 = __this->___name_3;
		V_1 = L_3;
		goto IL_002c;
	}

IL_002c:
	{
		String_t* L_4 = V_1;
		return L_4;
	}
}
// Firebase.LogLevel Firebase.FirebaseApp::get_LogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseApp_get_LogLevel_m64B54EED8CF1B5F8EA074612CF09E58026D23603 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = AppUtilPINVOKE_FirebaseApp_GetLogLevelInternal_mAF74BAD43730ACCFFB25EFBDCB0F40CA30CE1940(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.FirebaseApp::AddReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_AddReference_m562BA6DFE00568AC30B15C36D8BB848F14EDED95 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m646A0C479D12D665388558549E99ED1C949D5538_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m984B6FF03912DD47210B97F3876A8E68BD477586_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_ThrowIfCheckDependenciesRunning_mCC374EEFD25964DB6A38DA14EC987792DE119D9B(NULL);
		Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___nameToProxy_5;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004c:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0056;
					}
				}
				{
					Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0056:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			__this->___swigCMemOwn_1 = (bool)1;
			il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
			Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* L_4 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___nameToProxy_5;
			String_t* L_5;
			L_5 = FirebaseApp_get_Name_m89C11F96726C8E4FD3CCAE04A5DC3129F7CD975E(__this, NULL);
			NullCheck(L_4);
			Dictionary_2_set_Item_m646A0C479D12D665388558549E99ED1C949D5538(L_4, L_5, __this, Dictionary_2_set_Item_m646A0C479D12D665388558549E99ED1C949D5538_RuntimeMethod_var);
			Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3* L_6 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___cPtrToProxy_6;
			HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_7 = (&__this->___swigCPtr_0);
			intptr_t L_8;
			L_8 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_7, NULL);
			NullCheck(L_6);
			Dictionary_2_set_Item_m984B6FF03912DD47210B97F3876A8E68BD477586(L_6, L_8, __this, Dictionary_2_set_Item_m984B6FF03912DD47210B97F3876A8E68BD477586_RuntimeMethod_var);
			goto IL_0057;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0057:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::RemoveReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_RemoveReference_m3C28724EDB5D9F20A2A4924E517A8FF79C7E3425 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m152F1DE099A6441F30DB01049310A23447A99CC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m7A0B03D4435A96C5CB96AAFD5DDBEF49294C7C5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m320B502DBB8BB9D371AD03B9E0A23453D8C63E8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* V_0 = NULL;
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t G_B6_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_ThrowIfCheckDependenciesRunning_mCC374EEFD25964DB6A38DA14EC987792DE119D9B(NULL);
		Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___nameToProxy_5;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b9:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_00c3;
					}
				}
				{
					Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_00c3:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_4 = (&__this->___swigCPtr_0);
				intptr_t L_5;
				L_5 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_4, NULL);
				V_2 = L_5;
				intptr_t L_6 = V_2;
				intptr_t L_7 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_8;
				L_8 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_6, L_7, NULL);
				V_3 = L_8;
				bool L_9 = V_3;
				if (!L_9)
				{
					goto IL_009e_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				bool L_10 = __this->___swigCMemOwn_1;
				V_4 = L_10;
				bool L_11 = V_4;
				if (!L_11)
				{
					goto IL_009d_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* L_12 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___nameToProxy_5;
				NullCheck(L_12);
				int32_t L_13;
				L_13 = Dictionary_2_get_Count_m320B502DBB8BB9D371AD03B9E0A23453D8C63E8F(L_12, Dictionary_2_get_Count_m320B502DBB8BB9D371AD03B9E0A23453D8C63E8F_RuntimeMethod_var);
				V_5 = L_13;
				Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3* L_14 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___cPtrToProxy_6;
				intptr_t L_15 = V_2;
				NullCheck(L_14);
				bool L_16;
				L_16 = Dictionary_2_Remove_m152F1DE099A6441F30DB01049310A23447A99CC6(L_14, L_15, Dictionary_2_Remove_m152F1DE099A6441F30DB01049310A23447A99CC6_RuntimeMethod_var);
				Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* L_17 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___nameToProxy_5;
				String_t* L_18;
				L_18 = FirebaseApp_get_Name_m89C11F96726C8E4FD3CCAE04A5DC3129F7CD975E(__this, NULL);
				NullCheck(L_17);
				bool L_19;
				L_19 = Dictionary_2_Remove_m7A0B03D4435A96C5CB96AAFD5DDBEF49294C7C5F(L_17, L_18, Dictionary_2_Remove_m7A0B03D4435A96C5CB96AAFD5DDBEF49294C7C5F_RuntimeMethod_var);
				FirebaseApp_ReleaseReferenceInternal_mA281FCA13BCF136D9D9B4311C40925B99614D63D(__this, NULL);
				int32_t L_20 = V_5;
				if ((((int32_t)L_20) <= ((int32_t)0)))
				{
					goto IL_008d_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* L_21 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___nameToProxy_5;
				NullCheck(L_21);
				int32_t L_22;
				L_22 = Dictionary_2_get_Count_m320B502DBB8BB9D371AD03B9E0A23453D8C63E8F(L_21, Dictionary_2_get_Count_m320B502DBB8BB9D371AD03B9E0A23453D8C63E8F_RuntimeMethod_var);
				G_B6_0 = ((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
				goto IL_008e_1;
			}

IL_008d_1:
			{
				G_B6_0 = 0;
			}

IL_008e_1:
			{
				V_6 = (bool)G_B6_0;
				bool L_23 = V_6;
				if (!L_23)
				{
					goto IL_009c_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				FirebaseApp_OnAllAppsDestroyed_m19CF36FB1A2439786994BBB55F1E405B7B43CAAB(NULL);
			}

IL_009c_1:
			{
			}

IL_009d_1:
			{
			}

IL_009e_1:
			{
				__this->___swigCMemOwn_1 = (bool)0;
				intptr_t L_24 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_25;
				memset((&L_25), 0, sizeof(L_25));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_25), NULL, L_24, /*hidden argument*/NULL);
				__this->___swigCPtr_0 = L_25;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
				goto IL_00c4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c4:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ThrowIfNull_mEBB4A7F4A0E30B8F6969C68C340AF30D44491B20 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_0 = (&__this->___swigCPtr_0);
		intptr_t L_1;
		L_1 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_5 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF56258CA08196A0AA345480C655C78D0172F29E6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_ThrowIfNull_mEBB4A7F4A0E30B8F6969C68C340AF30D44491B20_RuntimeMethod_var)));
	}

IL_0026:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::InitializeAppUtilCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_InitializeAppUtilCallbacks_m69A50FD352AE820F31C0DBA793A462BC774F4B20 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_InitializeAppUtilCallbacks_m69A50FD352AE820F31C0DBA793A462BC774F4B20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04B9FAB0E66C2DAB7301E7D1C74019B4F500DAAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FBCAB8C3D9EDED5D0224DC45891EB0E0AAB4BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1103241B0617CC2365FF633B3B7D5125D1128C22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1611D456D2CEE02CE1487EE8445E48898D131F6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16687478A33D5A15482DF6D441B61A0189583C64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral175FF9BBE95367D4C96387F57879518EEC27BA25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3818B2A66126D8DEEF8DD9AFC89B116464489DA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39655E1CF62FCA36F81637138EABB8E0E88FF960);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D20C767EAE028E07642EC56369E049DCB56F6C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral469058482DD7BE31765E4E966F8C98EA4B3B6930);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47655613208A2442002F378BF374CC45952A31F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral515AE8FDB9C25ACAE2FBF81A8470F0F8B3FDD6FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral548196CBB5E5F5105E575F464FE92F73144DFB34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61DC9D5B9D0D0872BCFFE89C3B93B577646F49EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AAEF17DD886943DA28485F945C0BC92C838450F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EA8F2DF39C94049CBEAACE46B64E4034C3E90C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral890A68C9701B6B7B9E0ECC8C54874D634FB51E11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DE0CBA7BF0AAAFA4927500E94B54EAA544A2E0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral955802D1A6D5235C4CF60C6BA2074F90F06CECCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA37BC83F5B58D09130EA87C7BFA23EEF1ED5CE5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADA172ACC20A09E7D83BFE71E65356790E5B24CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF3E6E43968D1C156E887454B8F9BDB7723036D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2BB0CEDEC57E9981F22698838128030E062BF12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE7E620B6BAD964BAD6753F86F18F5350AD73DAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD555DED7CEC14AAFD2389F4CA5DB31942645053F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8E3A88F5BFAC46D4EA8953E6A2EA7D3C25746CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE248ED951626ABDD49B64B81CAEAF341755AF6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF21B662C3F976D9980F52B473208474F6C31CBE5);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118* V_7 = NULL;
	int32_t V_8 = 0;
	EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B13_0 = 0;
	int32_t G_B15_0 = 0;
	String_t* G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	String_t* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	String_t* G_B19_0 = NULL;
	String_t* G_B19_1 = NULL;
	int32_t G_B19_2 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___AppUtilCallbacksLock_8;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_021f:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0229;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0229:
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
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				bool L_4 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___AppUtilCallbacksInitialized_7;
				V_5 = L_4;
				bool L_5 = V_5;
				if (!L_5)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_022a;
			}

IL_0023_1:
			{
				EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118* L_6 = (EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118*)(EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118*)SZArrayNew(EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
				EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118* L_7 = L_6;
				EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* L_8 = (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)il2cpp_codegen_object_new(EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762_il2cpp_TypeInfo_var);
				NullCheck(L_8);
				EnableModuleParams__ctor_m448B394AF46BBC2CE9C3301F732850625F6B37EF(L_8, _stringLiteral04B9FAB0E66C2DAB7301E7D1C74019B4F500DAAF, _stringLiteral8DE0CBA7BF0AAAFA4927500E94B54EAA544A2E0C, (bool)0, NULL);
				NullCheck(L_7);
				ArrayElementTypeCheck (L_7, L_8);
				(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)L_8);
				EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118* L_9 = L_7;
				EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* L_10 = (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)il2cpp_codegen_object_new(EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762_il2cpp_TypeInfo_var);
				NullCheck(L_10);
				EnableModuleParams__ctor_m448B394AF46BBC2CE9C3301F732850625F6B37EF(L_10, _stringLiteralCE7E620B6BAD964BAD6753F86F18F5350AD73DAB, _stringLiteral175FF9BBE95367D4C96387F57879518EEC27BA25, (bool)0, NULL);
				NullCheck(L_9);
				ArrayElementTypeCheck (L_9, L_10);
				(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)L_10);
				EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118* L_11 = L_9;
				EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* L_12 = (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)il2cpp_codegen_object_new(EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762_il2cpp_TypeInfo_var);
				NullCheck(L_12);
				EnableModuleParams__ctor_m448B394AF46BBC2CE9C3301F732850625F6B37EF(L_12, _stringLiteralD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF, _stringLiteralD555DED7CEC14AAFD2389F4CA5DB31942645053F, (bool)0, NULL);
				NullCheck(L_11);
				ArrayElementTypeCheck (L_11, L_12);
				(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)L_12);
				EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118* L_13 = L_11;
				EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* L_14 = (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)il2cpp_codegen_object_new(EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762_il2cpp_TypeInfo_var);
				NullCheck(L_14);
				EnableModuleParams__ctor_m448B394AF46BBC2CE9C3301F732850625F6B37EF(L_14, _stringLiteralF21B662C3F976D9980F52B473208474F6C31CBE5, _stringLiteralA37BC83F5B58D09130EA87C7BFA23EEF1ED5CE5D, (bool)0, NULL);
				NullCheck(L_13);
				ArrayElementTypeCheck (L_13, L_14);
				(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)L_14);
				EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118* L_15 = L_13;
				EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* L_16 = (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)il2cpp_codegen_object_new(EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762_il2cpp_TypeInfo_var);
				NullCheck(L_16);
				EnableModuleParams__ctor_m448B394AF46BBC2CE9C3301F732850625F6B37EF(L_16, _stringLiteral39655E1CF62FCA36F81637138EABB8E0E88FF960, _stringLiteral3818B2A66126D8DEEF8DD9AFC89B116464489DA5, (bool)0, NULL);
				NullCheck(L_15);
				ArrayElementTypeCheck (L_15, L_16);
				(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)L_16);
				EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118* L_17 = L_15;
				EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* L_18 = (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)il2cpp_codegen_object_new(EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762_il2cpp_TypeInfo_var);
				NullCheck(L_18);
				EnableModuleParams__ctor_m448B394AF46BBC2CE9C3301F732850625F6B37EF(L_18, _stringLiteral1611D456D2CEE02CE1487EE8445E48898D131F6B, _stringLiteralD8E3A88F5BFAC46D4EA8953E6A2EA7D3C25746CC, (bool)0, NULL);
				NullCheck(L_17);
				ArrayElementTypeCheck (L_17, L_18);
				(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)L_18);
				EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118* L_19 = L_17;
				EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* L_20 = (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)il2cpp_codegen_object_new(EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762_il2cpp_TypeInfo_var);
				NullCheck(L_20);
				EnableModuleParams__ctor_m448B394AF46BBC2CE9C3301F732850625F6B37EF(L_20, _stringLiteralADA172ACC20A09E7D83BFE71E65356790E5B24CE, _stringLiteral3D20C767EAE028E07642EC56369E049DCB56F6C8, (bool)0, NULL);
				NullCheck(L_19);
				ArrayElementTypeCheck (L_19, L_20);
				(L_19)->SetAt(static_cast<il2cpp_array_size_t>(6), (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)L_20);
				EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118* L_21 = L_19;
				EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* L_22 = (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)il2cpp_codegen_object_new(EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762_il2cpp_TypeInfo_var);
				NullCheck(L_22);
				EnableModuleParams__ctor_m448B394AF46BBC2CE9C3301F732850625F6B37EF(L_22, _stringLiteral890A68C9701B6B7B9E0ECC8C54874D634FB51E11, _stringLiteral61DC9D5B9D0D0872BCFFE89C3B93B577646F49EC, (bool)0, NULL);
				NullCheck(L_21);
				ArrayElementTypeCheck (L_21, L_22);
				(L_21)->SetAt(static_cast<il2cpp_array_size_t>(7), (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)L_22);
				EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118* L_23 = L_21;
				EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* L_24 = (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)il2cpp_codegen_object_new(EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762_il2cpp_TypeInfo_var);
				NullCheck(L_24);
				EnableModuleParams__ctor_m448B394AF46BBC2CE9C3301F732850625F6B37EF(L_24, _stringLiteral0FBCAB8C3D9EDED5D0224DC45891EB0E0AAB4BB3, _stringLiteralC2BB0CEDEC57E9981F22698838128030E062BF12, (bool)0, NULL);
				NullCheck(L_23);
				ArrayElementTypeCheck (L_23, L_24);
				(L_23)->SetAt(static_cast<il2cpp_array_size_t>(8), (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)L_24);
				EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118* L_25 = L_23;
				EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* L_26 = (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)il2cpp_codegen_object_new(EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762_il2cpp_TypeInfo_var);
				NullCheck(L_26);
				EnableModuleParams__ctor_m448B394AF46BBC2CE9C3301F732850625F6B37EF(L_26, _stringLiteralAF3E6E43968D1C156E887454B8F9BDB7723036D3, _stringLiteral1103241B0617CC2365FF633B3B7D5125D1128C22, (bool)0, NULL);
				NullCheck(L_25);
				ArrayElementTypeCheck (L_25, L_26);
				(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)L_26);
				EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118* L_27 = L_25;
				EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* L_28 = (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)il2cpp_codegen_object_new(EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762_il2cpp_TypeInfo_var);
				NullCheck(L_28);
				EnableModuleParams__ctor_m448B394AF46BBC2CE9C3301F732850625F6B37EF(L_28, _stringLiteral47655613208A2442002F378BF374CC45952A31F8, _stringLiteral7AAEF17DD886943DA28485F945C0BC92C838450F, (bool)0, NULL);
				NullCheck(L_27);
				ArrayElementTypeCheck (L_27, L_28);
				(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)L_28);
				EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118* L_29 = L_27;
				EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* L_30 = (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)il2cpp_codegen_object_new(EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762_il2cpp_TypeInfo_var);
				NullCheck(L_30);
				EnableModuleParams__ctor_m448B394AF46BBC2CE9C3301F732850625F6B37EF(L_30, _stringLiteralEE248ED951626ABDD49B64B81CAEAF341755AF6C, _stringLiteral469058482DD7BE31765E4E966F8C98EA4B3B6930, (bool)0, NULL);
				NullCheck(L_29);
				ArrayElementTypeCheck (L_29, L_30);
				(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)L_30);
				EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118* L_31 = L_29;
				EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* L_32 = (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)il2cpp_codegen_object_new(EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762_il2cpp_TypeInfo_var);
				NullCheck(L_32);
				EnableModuleParams__ctor_m448B394AF46BBC2CE9C3301F732850625F6B37EF(L_32, _stringLiteral7EA8F2DF39C94049CBEAACE46B64E4034C3E90C1, _stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8, (bool)0, NULL);
				NullCheck(L_31);
				ArrayElementTypeCheck (L_31, L_32);
				(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)L_32);
				EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118* L_33 = L_31;
				EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* L_34 = (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)il2cpp_codegen_object_new(EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762_il2cpp_TypeInfo_var);
				NullCheck(L_34);
				EnableModuleParams__ctor_m448B394AF46BBC2CE9C3301F732850625F6B37EF(L_34, _stringLiteral16687478A33D5A15482DF6D441B61A0189583C64, _stringLiteral548196CBB5E5F5105E575F464FE92F73144DFB34, (bool)1, NULL);
				NullCheck(L_33);
				ArrayElementTypeCheck (L_33, L_34);
				(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762*)L_34);
				V_2 = L_33;
				bool L_35;
				L_35 = PlatformInformation_get_IsAndroid_mA671D9472B9FDCE9060CD79409611B524ACEB61B(NULL);
				V_3 = L_35;
				V_4 = (bool)0;
				bool L_36 = V_3;
				V_6 = (bool)((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
				bool L_37 = V_6;
				if (!L_37)
				{
					goto IL_0159_1;
				}
			}
			{
				AppUtil_SetEnabledAllAppCallbacks_m0C41A4271764464915ACA461AE8A309AEDAFA6AC((bool)0, NULL);
				V_4 = (bool)1;
			}

IL_0159_1:
			{
				EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118* L_38 = V_2;
				V_7 = L_38;
				V_8 = 0;
				goto IL_020b_1;
			}

IL_0165_1:
			{
				EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118* L_39 = V_7;
				int32_t L_40 = V_8;
				NullCheck(L_39);
				int32_t L_41 = L_40;
				EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
				V_9 = L_42;
				V_10 = (bool)0;
			}
			try
			{// begin try (depth: 2)
				EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* L_43 = V_9;
				NullCheck(L_43);
				String_t* L_44;
				L_44 = EnableModuleParams_get_CSharpClassName_m04AD392AA82FCE1E6636F812672C77F294AC16EC_inline(L_43, NULL);
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_45;
				L_45 = il2cpp_codegen_get_type(L_44, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, FirebaseApp_InitializeAppUtilCallbacks_m69A50FD352AE820F31C0DBA793A462BC774F4B20_RuntimeMethod_var);
				bool L_46;
				L_46 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, (Type_t*)NULL, NULL);
				V_10 = L_46;
				goto IL_018d_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0188_1;
				}
				throw e;
			}

CATCH_0188_1:
			{// begin catch(System.Exception)
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_018d_1;
			}// end catch (depth: 2)

IL_018d_1:
			{
				EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* L_47 = V_9;
				NullCheck(L_47);
				String_t* L_48;
				L_48 = EnableModuleParams_get_CppModuleName_mB91981F21F3F94D82CD64DD7BD810741CBB04E3A_inline(L_47, NULL);
				bool L_49;
				L_49 = AppUtil_GetEnabledAppCallbackByName_m979A86ABDBC2257B697ABDE5015AA76DE5D04F70(L_48, NULL);
				V_11 = L_49;
				bool L_50 = V_10;
				if (!L_50)
				{
					goto IL_01b2_1;
				}
			}
			{
				bool L_51 = V_4;
				bool L_52 = V_11;
				if (((int32_t)((int32_t)L_51|(int32_t)L_52)))
				{
					goto IL_01af_1;
				}
			}
			{
				EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* L_53 = V_9;
				NullCheck(L_53);
				bool L_54;
				L_54 = EnableModuleParams_get_AlwaysEnable_mC44F8EA7A9EDCD493C6B8E04E3B3CF00D09FDEA6_inline(L_53, NULL);
				G_B13_0 = ((int32_t)(L_54));
				goto IL_01b0_1;
			}

IL_01af_1:
			{
				G_B13_0 = 1;
			}

IL_01b0_1:
			{
				G_B15_0 = G_B13_0;
				goto IL_01b3_1;
			}

IL_01b2_1:
			{
				G_B15_0 = 0;
			}

IL_01b3_1:
			{
				V_12 = (bool)G_B15_0;
				bool L_55 = V_12;
				bool L_56 = V_11;
				V_13 = (bool)((((int32_t)((((int32_t)L_55) == ((int32_t)L_56))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_57 = V_13;
				if (!L_57)
				{
					goto IL_01f5_1;
				}
			}
			{
				bool L_58 = V_12;
				G_B17_0 = _stringLiteral955802D1A6D5235C4CF60C6BA2074F90F06CECCE;
				G_B17_1 = 1;
				if (L_58)
				{
					G_B18_0 = _stringLiteral955802D1A6D5235C4CF60C6BA2074F90F06CECCE;
					G_B18_1 = 1;
					goto IL_01d6_1;
				}
			}
			{
				G_B19_0 = _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309;
				G_B19_1 = G_B17_0;
				G_B19_2 = G_B17_1;
				goto IL_01db_1;
			}

IL_01d6_1:
			{
				G_B19_0 = _stringLiteral515AE8FDB9C25ACAE2FBF81A8470F0F8B3FDD6FC;
				G_B19_1 = G_B18_0;
				G_B19_2 = G_B18_1;
			}

IL_01db_1:
			{
				EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* L_59 = V_9;
				NullCheck(L_59);
				String_t* L_60;
				L_60 = EnableModuleParams_get_CppModuleName_mB91981F21F3F94D82CD64DD7BD810741CBB04E3A_inline(L_59, NULL);
				EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* L_61 = V_9;
				NullCheck(L_61);
				String_t* L_62;
				L_62 = EnableModuleParams_get_CSharpClassName_m04AD392AA82FCE1E6636F812672C77F294AC16EC_inline(L_61, NULL);
				String_t* L_63;
				L_63 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(G_B19_1, G_B19_0, L_60, L_62, NULL);
				il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
				LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49(G_B19_2, L_63, NULL);
			}

IL_01f5_1:
			{
				EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* L_64 = V_9;
				NullCheck(L_64);
				String_t* L_65;
				L_65 = EnableModuleParams_get_CppModuleName_mB91981F21F3F94D82CD64DD7BD810741CBB04E3A_inline(L_64, NULL);
				bool L_66 = V_12;
				AppUtil_SetEnabledAppCallbackByName_m59C6CB27D92D72FD0841031C207D86C2F684F366(L_65, L_66, NULL);
				int32_t L_67 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_67, 1));
			}

IL_020b_1:
			{
				int32_t L_68 = V_8;
				EnableModuleParamsU5BU5D_t062742181E7ED1E635670F069D3558B4B8F77118* L_69 = V_7;
				NullCheck(L_69);
				if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
				{
					goto IL_0165_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___AppUtilCallbacksInitialized_7 = (bool)1;
				goto IL_022a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_022a:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::OnAllAppsDestroyed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_OnAllAppsDestroyed_m19CF36FB1A2439786994BBB55F1E405B7B43CAAB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m320B502DBB8BB9D371AD03B9E0A23453D8C63E8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		bool L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___PreventOnAllAppsDestroyed_9;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* L_1 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___nameToProxy_5;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Dictionary_2_get_Count_m320B502DBB8BB9D371AD03B9E0A23453D8C63E8F(L_1, Dictionary_2_get_Count_m320B502DBB8BB9D371AD03B9E0A23453D8C63E8F_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		goto IL_0066;
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___AppUtilCallbacksLock_8;
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005b:
			{// begin finally (depth: 1)
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0065;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_0065:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_7 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				bool L_8 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___AppUtilCallbacksInitialized_7;
				V_3 = L_8;
				bool L_9 = V_3;
				if (!L_9)
				{
					goto IL_0058_1;
				}
			}
			{
				bool L_10;
				L_10 = PlatformInformation_get_IsAndroid_mA671D9472B9FDCE9060CD79409611B524ACEB61B(NULL);
				V_4 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
				bool L_11 = V_4;
				if (!L_11)
				{
					goto IL_0051_1;
				}
			}
			{
				AppUtil_SetEnabledAllAppCallbacks_m0C41A4271764464915ACA461AE8A309AEDAFA6AC((bool)0, NULL);
			}

IL_0051_1:
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___AppUtilCallbacksInitialized_7 = (bool)0;
			}

IL_0058_1:
			{
				goto IL_0066;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		return;
	}
}
// System.Boolean Firebase.FirebaseApp::InitializeCrashlyticsIfPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseApp_InitializeCrashlyticsIfPresent_m543A1327364F796F96120C0CD4D7805B412529B6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41AFC5CF6BD87FAE855E565E56413D254EFDD312);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3A98A8B1C98564A92ABAE5D3EB9AB9D7723903A);
		s_Il2CppMethodInitialized = true;
	}
	Assembly_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	MethodInfo_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		{
			Assembly_t* L_0;
			L_0 = Assembly_Load_mC42733BACCA273EEAA32A341CBF53722A44DCC90(_stringLiteral41AFC5CF6BD87FAE855E565E56413D254EFDD312, NULL);
			V_0 = L_0;
			Assembly_t* L_1 = V_0;
			NullCheck(L_1);
			Type_t* L_2;
			L_2 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(17 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_1, _stringLiteralA3A98A8B1C98564A92ABAE5D3EB9AB9D7723903A);
			V_1 = L_2;
			Type_t* L_3 = V_1;
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			bool L_4;
			L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_3, (Type_t*)NULL, NULL);
			V_3 = L_4;
			bool L_5 = V_3;
			if (!L_5)
			{
				goto IL_0031_1;
			}
		}
		{
			InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* L_6 = (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E_il2cpp_TypeInfo_var)));
			NullCheck(L_6);
			InitializationException__ctor_mC48C74EE90B137CDEA82068C2E1695D81974C5BF(L_6, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral238329B64A3729607F223FFEFA394456AE114908)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_InitializeCrashlyticsIfPresent_m543A1327364F796F96120C0CD4D7805B412529B6_RuntimeMethod_var)));
		}

IL_0031_1:
		{
			Type_t* L_7 = V_1;
			NullCheck(L_7);
			MethodInfo_t* L_8;
			L_8 = Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D(L_7, _stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54, ((int32_t)40), NULL);
			V_2 = L_8;
			MethodInfo_t* L_9 = V_2;
			bool L_10;
			L_10 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_9, (MethodInfo_t*)NULL, NULL);
			V_4 = L_10;
			bool L_11 = V_4;
			if (!L_11)
			{
				goto IL_0059_1;
			}
		}
		{
			InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* L_12 = (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E_il2cpp_TypeInfo_var)));
			NullCheck(L_12);
			InitializationException__ctor_mC48C74EE90B137CDEA82068C2E1695D81974C5BF(L_12, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral62550204912BC90809B03D0FE60F2B4874EB15F8)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_InitializeCrashlyticsIfPresent_m543A1327364F796F96120C0CD4D7805B412529B6_RuntimeMethod_var)));
		}

IL_0059_1:
		{
			MethodInfo_t* L_13 = V_2;
			NullCheck(L_13);
			RuntimeObject* L_14;
			L_14 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_13, NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
			goto IL_007d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0065;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006c;
		}
		throw e;
	}

CATCH_0065:
	{// begin catch(System.IO.FileNotFoundException)
		V_5 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0082;
	}// end catch (depth: 1)

CATCH_006c:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_15 = V_6;
		InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* L_16 = (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		InitializationException__ctor_m1384021A3E1B7B0E372257380559D926BD6200BF(L_16, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral324FB463A34E73070FCEDC655BCD2F40B2E47971)), L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_InitializeCrashlyticsIfPresent_m543A1327364F796F96120C0CD4D7805B412529B6_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_007d:
	{
		V_5 = (bool)1;
		goto IL_0082;
	}

IL_0082:
	{
		bool L_17 = V_5;
		return L_17;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp::CreateAndTrack(Firebase.FirebaseApp/CreateDelegate,Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseApp_CreateAndTrack_m3EFC2B1BFE4FF3BE069B04DE63E93A257CD65B3E (CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73* ___0_createDelegate, FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___1_existingProxy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD9203985461B343144479403BB91596E7FD479F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAE5FCABDB6F0D5495736534F2072751B25E840B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateAndTrackU3Eb__48_0_m353C5F1E7C6BDE8601757A37801E17C89CA49AC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62ADD91054A91B61299B0BA0A51937BA842068BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral875842D645C31A13810035132C84A4C226BFDDA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7EFBEA6AABC35E96367379C5A6B509BB4044717);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE83EFF84A2045FE5379CA94C53B51BA575BD5A6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* V_1 = NULL;
	Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* V_2 = NULL;
	bool V_3 = false;
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F V_4;
	memset((&V_4), 0, sizeof(V_4));
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* V_5 = NULL;
	bool V_6 = false;
	StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* V_7 = NULL;
	String_t* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* V_11 = NULL;
	String_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	Exception_t* V_17 = NULL;
	bool V_18 = false;
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* V_19 = NULL;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B26_0 = 0;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B35_0 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B34_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_ThrowIfCheckDependenciesRunning_mCC374EEFD25964DB6A38DA14EC987792DE119D9B(NULL);
		V_0 = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F_il2cpp_TypeInfo_var);
		FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F* L_0;
		L_0 = FirebaseAppUtils_get_Instance_m844818D4028B3E8866E21AD1CB6E559038CEEC41(NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_Create_mDC243F751CBDC835EDF2388C04C1A48FD9238FE9(L_0, NULL);
		Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* L_1 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___nameToProxy_5;
		V_2 = L_1;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_024b:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_3;
					if (!L_2)
					{
						goto IL_0255;
					}
				}
				{
					Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* L_3 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0255:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* L_4 = V_2;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_3), NULL);
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				bool L_5 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___userAgentRegistered_11;
				V_6 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
				bool L_6 = V_6;
				if (!L_6)
				{
					goto IL_009d_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___userAgentRegistered_11 = (bool)1;
				StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* L_7 = (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB*)il2cpp_codegen_object_new(StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				StringStringMap__ctor_m5295C0F5394545250F06A5F0A53C9ABB48D67794(L_7, NULL);
				V_7 = L_7;
				String_t* L_8;
				L_8 = PlatformInformation_get_RuntimeName_m3412CC566E5CE3DFA00A4C2DF5AAC46C548B7B4A(NULL);
				String_t* L_9;
				L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral875842D645C31A13810035132C84A4C226BFDDA6, L_8, NULL);
				V_8 = L_9;
				StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* L_10 = V_7;
				String_t* L_11 = V_8;
				String_t* L_12;
				L_12 = VersionInfo_get_SdkVersion_mC32BFBE632414898F8525BD5AED76B512BA0E266(NULL);
				NullCheck(L_10);
				StringStringMap_set_Item_m975DA3FC714B74CB4E7D4CAAE0482D7B669D186F(L_10, L_11, L_12, NULL);
				StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* L_13 = V_7;
				String_t* L_14 = V_8;
				String_t* L_15;
				L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_14, _stringLiteralDE83EFF84A2045FE5379CA94C53B51BA575BD5A6, NULL);
				String_t* L_16;
				L_16 = PlatformInformation_get_RuntimeVersion_mD8F3490DE409C7635E2876FE28631DC79240A45B(NULL);
				NullCheck(L_13);
				StringStringMap_set_Item_m975DA3FC714B74CB4E7D4CAAE0482D7B669D186F(L_13, L_15, L_16, NULL);
				StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* L_17 = V_7;
				String_t* L_18 = V_8;
				String_t* L_19;
				L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_18, _stringLiteral62ADD91054A91B61299B0BA0A51937BA842068BB, NULL);
				String_t* L_20;
				L_20 = VersionInfo_get_BuildSource_mFEB9E963780C505D73965545BFED5EB50EA7BAD5(NULL);
				NullCheck(L_17);
				StringStringMap_set_Item_m975DA3FC714B74CB4E7D4CAAE0482D7B669D186F(L_17, L_19, L_20, NULL);
				StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* L_21 = V_7;
				FirebaseApp_RegisterLibrariesInternal_m03B7487A8CAECC33FFFFFC110445811D0DDB35F2(L_21, NULL);
			}

IL_009d_1:
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				FirebaseApp_InitializeAppUtilCallbacks_m69A50FD352AE820F31C0DBA793A462BC774F4B20(NULL);
				intptr_t L_22 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&V_4), NULL, L_22, NULL);
			}
			try
			{// begin try (depth: 2)
				{
					String_t* L_23;
					L_23 = PlatformInformation_get_DefaultConfigLocation_mAC7DD97F2C49460091AA1709BF677FFFA1D4BC74(NULL);
					il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
					FirebaseApp_AppSetDefaultConfigPath_m9712BA055777DA0F98524BD85A6C97FBFC5C6192(L_23, NULL);
					CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73* L_24 = ___0_createDelegate;
					NullCheck(L_24);
					FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_25;
					L_25 = CreateDelegate_Invoke_m3C05F10053C0FD938376079571835049ADDD6186_inline(L_24, NULL);
					V_1 = L_25;
					il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
					bool L_26;
					L_26 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
					V_9 = L_26;
					bool L_27 = V_9;
					if (!L_27)
					{
						goto IL_00d5_2;
					}
				}
				{
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
					Exception_t* L_28;
					L_28 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_CreateAndTrack_m3EFC2B1BFE4FF3BE069B04DE63E93A257CD65B3E_RuntimeMethod_var)));
				}

IL_00d5_2:
				{
					FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_29 = V_1;
					V_10 = (bool)((((RuntimeObject*)(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)L_29) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
					bool L_30 = V_10;
					if (!L_30)
					{
						goto IL_00ec_2;
					}
				}
				{
					InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* L_31 = (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E_il2cpp_TypeInfo_var)));
					NullCheck(L_31);
					InitializationException__ctor_mC48C74EE90B137CDEA82068C2E1695D81974C5BF(L_31, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral380FCBD323D8B608651CCA1F4D65A0B1AA362A2A)), NULL);
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_CreateAndTrack_m3EFC2B1BFE4FF3BE069B04DE63E93A257CD65B3E_RuntimeMethod_var)));
				}

IL_00ec_2:
				{
					FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_32 = V_1;
					il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
					HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_33;
					L_33 = FirebaseApp_getCPtr_m54B5DAC73BA43E79771E0181BEFD846BBE06C84F(L_32, NULL);
					V_4 = L_33;
					goto IL_018e_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00fa_1;
				}
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0182_1;
				}
				throw e;
			}

CATCH_00fa_1:
			{// begin catch(System.ApplicationException)
				{
					V_11 = ((ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)IL2CPP_GET_ACTIVE_EXCEPTION(ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*));
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var)));
					FirebaseApp_OnAllAppsDestroyed_m19CF36FB1A2439786994BBB55F1E405B7B43CAAB(NULL);
					ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_34 = V_11;
					NullCheck(L_34);
					String_t* L_35;
					L_35 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_34);
					V_12 = L_35;
					V_13 = 1;
					String_t* L_36 = V_12;
					NullCheck(L_36);
					int32_t L_37;
					L_37 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_36, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D)), NULL);
					V_14 = L_37;
					int32_t L_38 = V_14;
					V_15 = (bool)((((int32_t)((((int32_t)L_38) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					bool L_39 = V_15;
					if (!L_39)
					{
						goto IL_014b_1;
					}
				}
				{
					String_t* L_40 = V_12;
					int32_t L_41 = V_14;
					NullCheck(L_40);
					String_t* L_42;
					L_42 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_40, 0, L_41, NULL);
					int32_t L_43;
					L_43 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_42, NULL);
					V_13 = L_43;
					String_t* L_44 = V_12;
					int32_t L_45 = V_14;
					NullCheck(L_44);
					String_t* L_46;
					L_46 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_44, ((int32_t)il2cpp_codegen_add(L_45, 1)), NULL);
					V_12 = L_46;
				}

IL_014b_1:
				{
					String_t* L_47 = V_12;
					NullCheck(L_47);
					int32_t L_48;
					L_48 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B7B4B5C42CA1C2ED60073710A5266DC268AB4EB)), NULL);
					V_16 = (bool)((((int32_t)((((int32_t)L_48) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					bool L_49 = V_16;
					if (!L_49)
					{
						goto IL_0178_1;
					}
				}
				{
					String_t* L_50 = V_12;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var)));
					String_t* L_51;
					L_51 = ErrorMessages_get_DependencyNotFoundErrorMessage_mA71EBFCD6E5CC0C61BD0E3624738175EADBCC0F7(NULL);
					String_t* L_52;
					L_52 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_50, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD)), L_51, NULL);
					V_12 = L_52;
				}

IL_0178_1:
				{
					int32_t L_53 = V_13;
					String_t* L_54 = V_12;
					InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* L_55 = (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E_il2cpp_TypeInfo_var)));
					NullCheck(L_55);
					InitializationException__ctor_mC48C74EE90B137CDEA82068C2E1695D81974C5BF(L_55, L_53, L_54, NULL);
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_55, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_CreateAndTrack_m3EFC2B1BFE4FF3BE069B04DE63E93A257CD65B3E_RuntimeMethod_var)));
				}
			}// end catch (depth: 2)

CATCH_0182_1:
			{// begin catch(System.Exception)
				V_17 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var)));
				FirebaseApp_OnAllAppsDestroyed_m19CF36FB1A2439786994BBB55F1E405B7B43CAAB(NULL);
				Exception_t* L_56 = V_17;
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_CreateAndTrack_m3EFC2B1BFE4FF3BE069B04DE63E93A257CD65B3E_RuntimeMethod_var)));
			}// end catch (depth: 2)

IL_018e_1:
			{
				intptr_t L_57;
				L_57 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline((&V_4), NULL);
				intptr_t L_58 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_59;
				L_59 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_57, L_58, NULL);
				V_18 = L_59;
				bool L_60 = V_18;
				if (!L_60)
				{
					goto IL_01ae_1;
				}
			}
			{
				V_19 = (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)NULL;
				goto IL_0289;
			}

IL_01ae_1:
			{
				V_5 = (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)NULL;
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3* L_61 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___cPtrToProxy_6;
				intptr_t L_62;
				L_62 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline((&V_4), NULL);
				NullCheck(L_61);
				bool L_63;
				L_63 = Dictionary_2_TryGetValue_mD9203985461B343144479403BB91596E7FD479F0(L_61, L_62, (&V_5), Dictionary_2_TryGetValue_mD9203985461B343144479403BB91596E7FD479F0_RuntimeMethod_var);
				V_20 = L_63;
				bool L_64 = V_20;
				if (!L_64)
				{
					goto IL_020c_1;
				}
			}
			{
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_65 = V_5;
				V_21 = (bool)((!(((RuntimeObject*)(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_66 = V_21;
				if (!L_66)
				{
					goto IL_020b_1;
				}
			}
			{
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_67 = ___1_existingProxy;
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_68 = V_5;
				V_22 = (bool)((((int32_t)((((RuntimeObject*)(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)L_67) == ((RuntimeObject*)(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)L_68))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_69 = V_22;
				if (!L_69)
				{
					goto IL_0205_1;
				}
			}
			{
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_70 = ___1_existingProxy;
				NullCheck(L_70);
				String_t* L_71;
				L_71 = FirebaseApp_get_Name_m89C11F96726C8E4FD3CCAE04A5DC3129F7CD975E(L_70, NULL);
				String_t* L_72;
				L_72 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralB7EFBEA6AABC35E96367379C5A6B509BB4044717, L_71, NULL);
				il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
				LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49(3, L_72, NULL);
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_73 = ___1_existingProxy;
				NullCheck(L_73);
				FirebaseApp_Dispose_mC1965A7AE8BAB834DB652BF0BACF377F3D45192B(L_73, NULL);
			}

IL_0205_1:
			{
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_74 = V_5;
				V_19 = L_74;
				goto IL_0289;
			}

IL_020b_1:
			{
			}

IL_020c_1:
			{
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_75 = V_1;
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				FirebaseApp_LogHeartbeatInternal_m849C31C3F73680D986D5672C464BEBCA899FBEFC(L_75, NULL);
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_76 = V_1;
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_77 = V_1;
				NullCheck(L_77);
				String_t* L_78;
				L_78 = FirebaseApp_get_NameInternal_m493D9AEC87709D1197A1997C7560AFEBB107FBCE(L_77, NULL);
				NullCheck(L_76);
				L_76->___name_3 = L_78;
				Il2CppCodeGenWriteBarrier((void**)(&L_76->___name_3), (void*)L_78);
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_79 = V_1;
				NullCheck(L_79);
				FirebaseApp_AddReference_m562BA6DFE00568AC30B15C36D8BB848F14EDED95(L_79, NULL);
				bool L_80 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___crashlyticsInitializationAttempted_10;
				if (L_80)
				{
					goto IL_0237_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				bool L_81;
				L_81 = FirebaseApp_IsCheckDependenciesRunning_m14D0D3293F91F52A79382CB3B8B2C93EBE3FDB59(NULL);
				G_B26_0 = ((((int32_t)L_81) == ((int32_t)0))? 1 : 0);
				goto IL_0238_1;
			}

IL_0237_1:
			{
				G_B26_0 = 0;
			}

IL_0238_1:
			{
				V_23 = (bool)G_B26_0;
				bool L_82 = V_23;
				if (!L_82)
				{
					goto IL_0248_1;
				}
			}
			{
				V_0 = (bool)1;
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___crashlyticsInitializationAttempted_10 = (bool)1;
			}

IL_0248_1:
			{
				goto IL_0256;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0256:
	{
		bool L_83 = V_0;
		V_24 = L_83;
		bool L_84 = V_24;
		if (!L_84)
		{
			goto IL_0284;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_85 = ((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9__48_0_2;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_86 = L_85;
		G_B34_0 = L_86;
		if (L_86)
		{
			G_B35_0 = L_86;
			goto IL_027d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var);
		U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C* L_87 = ((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_88 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_88);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_88, L_87, (intptr_t)((void*)U3CU3Ec_U3CCreateAndTrackU3Eb__48_0_m353C5F1E7C6BDE8601757A37801E17C89CA49AC2_RuntimeMethod_var), NULL);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_89 = L_88;
		((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9__48_0_2 = L_89;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9__48_0_2), (void*)L_89);
		G_B35_0 = L_89;
	}

IL_027d:
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAE5FCABDB6F0D5495736534F2072751B25E840B4(G_B35_0, FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAE5FCABDB6F0D5495736534F2072751B25E840B4_RuntimeMethod_var);
	}

IL_0284:
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_91 = V_1;
		V_19 = L_91;
		goto IL_0289;
	}

IL_0289:
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_92 = V_19;
		return L_92;
	}
}
// System.Void Firebase.FirebaseApp::SetCheckDependenciesThread(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_SetCheckDependenciesThread_mFE57ACFA06A8CBAAD19379B430621763999C3563 (int32_t ___0_threadId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___CheckDependenciesThreadLock_13;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0055:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_005f;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_005f:
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
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				int32_t L_4 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___CheckDependenciesThread_12;
				if ((((int32_t)L_4) == ((int32_t)(-1))))
				{
					goto IL_0037_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				int32_t L_5 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___CheckDependenciesThread_12;
				if ((((int32_t)L_5) == ((int32_t)((int32_t)-2))))
				{
					goto IL_0037_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				int32_t L_6 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___CheckDependenciesThread_12;
				Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_7;
				L_7 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
				NullCheck(L_7);
				int32_t L_8;
				L_8 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_7, NULL);
				G_B5_0 = ((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
				goto IL_0038_1;
			}

IL_0037_1:
			{
				G_B5_0 = 1;
			}

IL_0038_1:
			{
				V_2 = (bool)G_B5_0;
				bool L_9 = V_2;
				if (!L_9)
				{
					goto IL_0046_1;
				}
			}
			{
				int32_t L_10 = ___0_threadId;
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___CheckDependenciesThread_12 = L_10;
				goto IL_0052_1;
			}

IL_0046_1:
			{
				InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
				NullCheck(L_11);
				InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF713BCAEC5B32A45A72E5F3972B1092DCC4FFB3)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_SetCheckDependenciesThread_mFE57ACFA06A8CBAAD19379B430621763999C3563_RuntimeMethod_var)));
			}

IL_0052_1:
			{
				goto IL_0060;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0060:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::ThrowIfCheckDependenciesRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ThrowIfCheckDependenciesRunning_mCC374EEFD25964DB6A38DA14EC987792DE119D9B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___CheckDependenciesThreadLock_13;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_004f;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_004f:
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
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				int32_t L_4 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___CheckDependenciesThread_12;
				if ((((int32_t)L_4) == ((int32_t)(-1))))
				{
					goto IL_0031_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				int32_t L_5 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___CheckDependenciesThread_12;
				Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_6;
				L_6 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
				NullCheck(L_6);
				int32_t L_7;
				L_7 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_6, NULL);
				G_B4_0 = ((((int32_t)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				goto IL_0032_1;
			}

IL_0031_1:
			{
				G_B4_0 = 0;
			}

IL_0032_1:
			{
				V_2 = (bool)G_B4_0;
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_0042_1;
				}
			}
			{
				InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
				NullCheck(L_9);
				InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC79C1E7C1AB013FFB3AD9A42073405EF4995E70F)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_ThrowIfCheckDependenciesRunning_mCC374EEFD25964DB6A38DA14EC987792DE119D9B_RuntimeMethod_var)));
			}

IL_0042_1:
			{
				goto IL_0050;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		return;
	}
}
// System.Boolean Firebase.FirebaseApp::IsCheckDependenciesRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseApp_IsCheckDependenciesRunning_m14D0D3293F91F52A79382CB3B8B2C93EBE3FDB59 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___CheckDependenciesThreadLock_13;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002b;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
			int32_t L_4 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___CheckDependenciesThread_12;
			V_2 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_002c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002c:
	{
		bool L_5 = V_2;
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<Firebase.DependencyStatus> Firebase.FirebaseApp::CheckDependenciesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* FirebaseApp_CheckDependenciesAsync_m75E00BB4F43A6D11511A55F146E0D9DD94405BCD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tB6381823DCD9F89B9A71E30B5258FBBE2ED482AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_Run_TisDependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_m6C591DC2396836DA8270AA4EEAE2131BE3B34C4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCheckDependenciesAsyncU3Eb__56_0_m636488EA2B782D4C9144E642E528E6E85F8C2129_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* V_0 = NULL;
	Func_1_tB6381823DCD9F89B9A71E30B5258FBBE2ED482AE* G_B2_0 = NULL;
	Func_1_tB6381823DCD9F89B9A71E30B5258FBBE2ED482AE* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_SetCheckDependenciesThread_mFE57ACFA06A8CBAAD19379B430621763999C3563(((int32_t)-2), NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F_il2cpp_TypeInfo_var);
		FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F* L_0;
		L_0 = FirebaseAppUtils_get_Instance_m844818D4028B3E8866E21AD1CB6E559038CEEC41(NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_CreatePartialOnMainThread_mA40B80D6BC5D9D1DCEAB433495451ECC436027C5(L_0, NULL);
		FirebaseApp_InitializeAppUtilCallbacks_m69A50FD352AE820F31C0DBA793A462BC774F4B20(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var);
		Func_1_tB6381823DCD9F89B9A71E30B5258FBBE2ED482AE* L_1 = ((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9__56_0_3;
		Func_1_tB6381823DCD9F89B9A71E30B5258FBBE2ED482AE* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0039;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var);
		U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C* L_3 = ((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_tB6381823DCD9F89B9A71E30B5258FBBE2ED482AE* L_4 = (Func_1_tB6381823DCD9F89B9A71E30B5258FBBE2ED482AE*)il2cpp_codegen_object_new(Func_1_tB6381823DCD9F89B9A71E30B5258FBBE2ED482AE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_1__ctor_mFA265D430759E241E3F5F67F57FFD31EC0184C85(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CCheckDependenciesAsyncU3Eb__56_0_m636488EA2B782D4C9144E642E528E6E85F8C2129_RuntimeMethod_var), NULL);
		Func_1_tB6381823DCD9F89B9A71E30B5258FBBE2ED482AE* L_5 = L_4;
		((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9__56_0_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9__56_0_3), (void*)L_5);
		G_B2_0 = L_5;
	}

IL_0039:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* L_6;
		L_6 = Task_Run_TisDependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_m6C591DC2396836DA8270AA4EEAE2131BE3B34C4B(G_B2_0, Task_Run_TisDependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_m6C591DC2396836DA8270AA4EEAE2131BE3B34C4B_RuntimeMethod_var);
		V_0 = L_6;
		goto IL_0041;
	}

IL_0041:
	{
		Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* L_7 = V_0;
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<Firebase.DependencyStatus> Firebase.FirebaseApp::CheckAndFixDependenciesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* FirebaseApp_CheckAndFixDependenciesAsync_mB21D0BA4D3C2F6C975D72DB0F2CEFF46A4361557 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t5CB4EF138CF2C1A8C937FFA22680521119BE3305_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskExtensions_Unwrap_TisDependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_mA8A63E7E7E6B006A25BC9AFB3C60D14C48AE5849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_TisTask_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF_m1A7A10DF8B625077E1FC8B29E0D834614EAE0155_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCheckAndFixDependenciesAsyncU3Eb__57_0_m9404F3BF637CC9AE29CC521159638C07E55E9513_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* V_0 = NULL;
	Func_2_t5CB4EF138CF2C1A8C937FFA22680521119BE3305* G_B2_0 = NULL;
	Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* G_B2_1 = NULL;
	Func_2_t5CB4EF138CF2C1A8C937FFA22680521119BE3305* G_B1_0 = NULL;
	Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* G_B1_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* L_0;
		L_0 = FirebaseApp_CheckDependenciesAsync_m75E00BB4F43A6D11511A55F146E0D9DD94405BCD(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var);
		Func_2_t5CB4EF138CF2C1A8C937FFA22680521119BE3305* L_1 = ((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9__57_0_5;
		Func_2_t5CB4EF138CF2C1A8C937FFA22680521119BE3305* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var);
		U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C* L_3 = ((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t5CB4EF138CF2C1A8C937FFA22680521119BE3305* L_4 = (Func_2_t5CB4EF138CF2C1A8C937FFA22680521119BE3305*)il2cpp_codegen_object_new(Func_2_t5CB4EF138CF2C1A8C937FFA22680521119BE3305_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m3DDDBBF7BF33CC0C30A2E047E29DEDD13DDF3482(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CCheckAndFixDependenciesAsyncU3Eb__57_0_m9404F3BF637CC9AE29CC521159638C07E55E9513_RuntimeMethod_var), NULL);
		Func_2_t5CB4EF138CF2C1A8C937FFA22680521119BE3305* L_5 = L_4;
		((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9__57_0_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9__57_0_5), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		NullCheck(G_B2_1);
		Task_1_t3769315417372EBDBD431895C2D9EB5B42C48672* L_6;
		L_6 = Task_1_ContinueWith_TisTask_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF_m1A7A10DF8B625077E1FC8B29E0D834614EAE0155(G_B2_1, G_B2_0, Task_1_ContinueWith_TisTask_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF_m1A7A10DF8B625077E1FC8B29E0D834614EAE0155_RuntimeMethod_var);
		Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* L_7;
		L_7 = TaskExtensions_Unwrap_TisDependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_mA8A63E7E7E6B006A25BC9AFB3C60D14C48AE5849(L_6, TaskExtensions_Unwrap_TisDependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_mA8A63E7E7E6B006A25BC9AFB3C60D14C48AE5849_RuntimeMethod_var);
		V_0 = L_7;
		goto IL_0032;
	}

IL_0032:
	{
		Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* L_8 = V_0;
		return L_8;
	}
}
// Firebase.DependencyStatus Firebase.FirebaseApp::CheckDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseApp_CheckDependencies_mF21910BC5E3CEF3AD82DE4055B05FA2CFF07CBA1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass58_0_U3CCheckDependenciesU3Eb__0_m4CEFE0A719711F3C0563FD9C9FDDF2F652553AF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass58_0_tD42798DED94E0739CFCAF00A186CF7E16A97F8E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass58_0_tD42798DED94E0739CFCAF00A186CF7E16A97F8E8* V_0 = NULL;
	int32_t V_1 = 0;
	{
		U3CU3Ec__DisplayClass58_0_tD42798DED94E0739CFCAF00A186CF7E16A97F8E8* L_0 = (U3CU3Ec__DisplayClass58_0_tD42798DED94E0739CFCAF00A186CF7E16A97F8E8*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass58_0_tD42798DED94E0739CFCAF00A186CF7E16A97F8E8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass58_0__ctor_m7192D3B51ED821A760AF82992CBBFC8652897AA5(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass58_0_tD42798DED94E0739CFCAF00A186CF7E16A97F8E8* L_1 = V_0;
		NullCheck(L_1);
		L_1->___status_0 = 0;
		U3CU3Ec__DisplayClass58_0_tD42798DED94E0739CFCAF00A186CF7E16A97F8E8* L_2 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, L_2, (intptr_t)((void*)U3CU3Ec__DisplayClass58_0_U3CCheckDependenciesU3Eb__0_m4CEFE0A719711F3C0563FD9C9FDDF2F652553AF6_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_TranslateDllNotFoundException_m8A53BF93797E69E0A396E5D387C8BE2FAC5A887E(L_3, NULL);
		U3CU3Ec__DisplayClass58_0_tD42798DED94E0739CFCAF00A186CF7E16A97F8E8* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___status_0;
		V_1 = L_5;
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
// Firebase.DependencyStatus Firebase.FirebaseApp::CheckDependenciesInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseApp_CheckDependenciesInternal_m738CFE3533F41FC660E43B2EFCCD44BF6EF0AFE5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B3_0 = 0;
	int32_t G_B26_0 = 0;
	{
		bool L_0;
		L_0 = PlatformInformation_get_IsAndroid_mA671D9472B9FDCE9060CD79409611B524ACEB61B(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseApp_get_DefaultName_mE170961E3E149AB409453866F8FBEDE07E9C3714(NULL);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_2;
		L_2 = FirebaseApp_GetInstance_m9BAC597B32771401771C8915446DA531E7B66EC5(L_1, NULL);
		G_B3_0 = ((((RuntimeObject*)(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_00cd;
		}
	}
	{
		V_1 = 0;
		V_2 = (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)NULL;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_4 = V_2;
					V_7 = (bool)((!(((RuntimeObject*)(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_5 = V_7;
					if (!L_5)
					{
						goto IL_0066;
					}
				}
				{
					FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_6 = V_2;
					NullCheck(L_6);
					FirebaseApp_Dispose_mC1965A7AE8BAB834DB652BF0BACF377F3D45192B(L_6, NULL);
				}

IL_0066:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_7;
				L_7 = FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0(NULL);
				V_2 = L_7;
				V_4 = 0;
				goto IL_00d3;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0033_1;
				}
				throw e;
			}

CATCH_0033_1:
			{// begin catch(Firebase.InitializationException)
				{
					V_5 = ((InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E*));
					InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* L_8 = V_5;
					NullCheck(L_8);
					int32_t L_9;
					L_9 = InitializationException_get_InitResult_mC611CCB6BD3529EFD841FCF4BC099532973F75F2_inline(L_8, NULL);
					V_1 = L_9;
					int32_t L_10 = V_1;
					V_6 = (bool)((((int32_t)((((int32_t)L_10) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					bool L_11 = V_6;
					if (!L_11)
					{
						goto IL_004f_1;
					}
				}
				{
					InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* L_12 = V_5;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_CheckDependenciesInternal_m738CFE3533F41FC660E43B2EFCCD44BF6EF0AFE5_RuntimeMethod_var)));
				}

IL_004f_1:
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0052_1;
				}
			}// end catch (depth: 2)

IL_0052_1:
			{
				goto IL_0068;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0068:
	{
		int32_t L_13;
		L_13 = AppUtil_CheckAndroidDependencies_m0D39BD88D8B8246E40B4F874956BE9884C8E0C93(NULL);
		V_3 = L_13;
		int32_t L_14 = V_3;
		V_8 = L_14;
		int32_t L_15 = V_8;
		switch (L_15)
		{
			case 0:
			{
				goto IL_009a;
			}
			case 1:
			{
				goto IL_009f;
			}
			case 2:
			{
				goto IL_00a4;
			}
			case 3:
			{
				goto IL_00a9;
			}
			case 4:
			{
				goto IL_00ae;
			}
			case 5:
			{
				goto IL_00b3;
			}
			case 6:
			{
				goto IL_00b8;
			}
			case 7:
			{
				goto IL_00bd;
			}
		}
	}
	{
		goto IL_00c2;
	}

IL_009a:
	{
		V_4 = 0;
		goto IL_00d3;
	}

IL_009f:
	{
		V_4 = 1;
		goto IL_00d3;
	}

IL_00a4:
	{
		V_4 = 2;
		goto IL_00d3;
	}

IL_00a9:
	{
		V_4 = 3;
		goto IL_00d3;
	}

IL_00ae:
	{
		V_4 = 4;
		goto IL_00d3;
	}

IL_00b3:
	{
		V_4 = 5;
		goto IL_00d3;
	}

IL_00b8:
	{
		V_4 = 6;
		goto IL_00d3;
	}

IL_00bd:
	{
		V_4 = 7;
		goto IL_00d3;
	}

IL_00c2:
	{
		int32_t L_16 = V_1;
		if (!L_16)
		{
			goto IL_00c8;
		}
	}
	{
		G_B26_0 = 7;
		goto IL_00c9;
	}

IL_00c8:
	{
		G_B26_0 = 0;
	}

IL_00c9:
	{
		V_4 = G_B26_0;
		goto IL_00d3;
	}

IL_00cd:
	{
		V_4 = 0;
		goto IL_00d3;
	}

IL_00d3:
	{
		int32_t L_17 = V_4;
		return L_17;
	}
}
// System.Threading.Tasks.Task Firebase.FirebaseApp::FixDependenciesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseApp_FixDependenciesAsync_m3E5A198309832981F2E4C516D60078247E1607C3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass60_0_U3CFixDependenciesAsyncU3Eb__0_mA216F8EE30AAE8DB85F3BD26CFA937C99363D009_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass60_0_t2405D4DB7DF66A50C23215BD4C3358528D4028ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass60_0_t2405D4DB7DF66A50C23215BD4C3358528D4028ED* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass60_0_t2405D4DB7DF66A50C23215BD4C3358528D4028ED* L_0 = (U3CU3Ec__DisplayClass60_0_t2405D4DB7DF66A50C23215BD4C3358528D4028ED*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass60_0_t2405D4DB7DF66A50C23215BD4C3358528D4028ED_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass60_0__ctor_m14A111BEE6E3DE63EDF0086569D3D9C9D5D708B5(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass60_0_t2405D4DB7DF66A50C23215BD4C3358528D4028ED* L_1 = V_0;
		NullCheck(L_1);
		L_1->___task_0 = (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___task_0), (void*)(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL);
		U3CU3Ec__DisplayClass60_0_t2405D4DB7DF66A50C23215BD4C3358528D4028ED* L_2 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, L_2, (intptr_t)((void*)U3CU3Ec__DisplayClass60_0_U3CFixDependenciesAsyncU3Eb__0_mA216F8EE30AAE8DB85F3BD26CFA937C99363D009_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_TranslateDllNotFoundException_m8A53BF93797E69E0A396E5D387C8BE2FAC5A887E(L_3, NULL);
		U3CU3Ec__DisplayClass60_0_t2405D4DB7DF66A50C23215BD4C3358528D4028ED* L_4 = V_0;
		NullCheck(L_4);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5 = L_4->___task_0;
		V_1 = L_5;
		goto IL_0029;
	}

IL_0029:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6 = V_1;
		return L_6;
	}
}
// System.Void Firebase.FirebaseApp::ResetDefaultAppCPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ResetDefaultAppCPtr_m1D38FAF9DA97DFA0C3DB217134369DEA8DA86035 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* V_0 = NULL;
	bool V_1 = false;
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_ThrowIfCheckDependenciesRunning_mCC374EEFD25964DB6A38DA14EC987792DE119D9B(NULL);
		Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___nameToProxy_5;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0059:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0063;
					}
				}
				{
					Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0063:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			AppUtil_InitializePlayServicesInternal_m89751D7035A1D3816E68F8FDCB4B5B2F8D2F23D2(NULL);
			il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
			((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___PreventOnAllAppsDestroyed_9 = (bool)1;
			FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_4;
			L_4 = FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0(NULL);
			V_2 = L_4;
			FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_5 = V_2;
			NullCheck(L_5);
			FirebaseApp_RemoveReference_m3C28724EDB5D9F20A2A4924E517A8FF79C7E3425(L_5, NULL);
			FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_6 = V_2;
			FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_7 = V_2;
			il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
			intptr_t L_8;
			L_8 = AppUtilPINVOKE_FirebaseApp_CreateInternal__SWIG_0_m8C61ECBE5407D4A591827E10595AE28EFE8C6CE5(NULL);
			HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_9;
			memset((&L_9), 0, sizeof(L_9));
			HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_9), L_7, L_8, /*hidden argument*/NULL);
			NullCheck(L_6);
			L_6->___swigCPtr_0 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&(((&L_6->___swigCPtr_0))->____wrapper_0), (void*)NULL);
			FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_10 = V_2;
			NullCheck(L_10);
			FirebaseApp_AddReference_m562BA6DFE00568AC30B15C36D8BB848F14EDED95(L_10, NULL);
			((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___PreventOnAllAppsDestroyed_9 = (bool)0;
			AppUtil_TerminatePlayServicesInternal_mED5F11E95B315C4014E0680574592ED30EBFF772(NULL);
			goto IL_0064;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		return;
	}
}
// System.String Firebase.FirebaseApp::get_NameInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_NameInternal_m493D9AEC87709D1197A1997C7560AFEBB107FBCE (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AppUtilPINVOKE_FirebaseApp_NameInternal_get_mE4931CA287567E2C7F91442E07F30AE96AE91172(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_get_NameInternal_m493D9AEC87709D1197A1997C7560AFEBB107FBCE_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		String_t* L_6 = V_2;
		return L_6;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp::CreateInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseApp_CreateInternal_m63EB3F64189DA8E6C5B2E1C95B11D63EF7F7BC4B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* V_1 = NULL;
	bool V_2 = false;
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* V_3 = NULL;
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* G_B3_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = AppUtilPINVOKE_FirebaseApp_CreateInternal__SWIG_0_m8C61ECBE5407D4A591827E10595AE28EFE8C6CE5(NULL);
		V_0 = L_0;
		intptr_t L_1 = V_0;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		intptr_t L_4 = V_0;
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_5 = (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)il2cpp_codegen_object_new(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		FirebaseApp__ctor_mC539AF748C2E16CD3B7820D6039B9A29DBDF908C(L_5, L_4, (bool)0, NULL);
		G_B3_0 = L_5;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)(NULL));
	}

IL_001e:
	{
		V_1 = G_B3_0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_8;
		L_8 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_CreateInternal_m63EB3F64189DA8E6C5B2E1C95B11D63EF7F7BC4B_RuntimeMethod_var)));
	}

IL_002e:
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_9 = V_1;
		V_3 = L_9;
		goto IL_0032;
	}

IL_0032:
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_10 = V_3;
		return L_10;
	}
}
// System.Void Firebase.FirebaseApp::ReleaseReferenceInternal(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ReleaseReferenceInternal_mA281FCA13BCF136D9D9B4311C40925B99614D63D (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = ___0_app;
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = FirebaseApp_getCPtr_m54B5DAC73BA43E79771E0181BEFD846BBE06C84F(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_FirebaseApp_ReleaseReferenceInternal_m5A184BBB9E09539CDDB771120995526D0328439B(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_ReleaseReferenceInternal_mA281FCA13BCF136D9D9B4311C40925B99614D63D_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::RegisterLibrariesInternal(Firebase.StringStringMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_RegisterLibrariesInternal_m03B7487A8CAECC33FFFFFC110445811D0DDB35F2 (StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* ___0_libraries, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		StringStringMap_t8CB65B0BCA7BFAAF5D5D5962B581CDA66BAE24CB* L_0 = ___0_libraries;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = StringStringMap_getCPtr_m9E30BAD269827991D469F743D10098904502616D(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_FirebaseApp_RegisterLibrariesInternal_m6A299F866D396117D75C2243115E25F2B8A6F00E(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_RegisterLibrariesInternal_m03B7487A8CAECC33FFFFFC110445811D0DDB35F2_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::LogHeartbeatInternal(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_LogHeartbeatInternal_m849C31C3F73680D986D5672C464BEBCA899FBEFC (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = ___0_app;
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = FirebaseApp_getCPtr_m54B5DAC73BA43E79771E0181BEFD846BBE06C84F(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_FirebaseApp_LogHeartbeatInternal_m6BA2A1959A135C6D953FC965A4C09D80DA62C838(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_LogHeartbeatInternal_m849C31C3F73680D986D5672C464BEBCA899FBEFC_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::AppSetDefaultConfigPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_AppSetDefaultConfigPath_m9712BA055777DA0F98524BD85A6C97FBFC5C6192 (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_FirebaseApp_AppSetDefaultConfigPath_m461EBC1DCEA9353F3C927FAEEB1590BA130E69DB(L_0, NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_AppSetDefaultConfigPath_m9712BA055777DA0F98524BD85A6C97FBFC5C6192_RuntimeMethod_var)));
	}

IL_0017:
	{
		return;
	}
}
// System.String Firebase.FirebaseApp::get_DefaultName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_DefaultName_mE170961E3E149AB409453866F8FBEDE07E9C3714 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = AppUtilPINVOKE_FirebaseApp_DefaultName_get_m7561CF63339BB772F6A9690B9E07D9E21BA70D2A(NULL);
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_get_DefaultName_mE170961E3E149AB409453866F8FBEDE07E9C3714_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		String_t* L_5 = V_2;
		return L_5;
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
// System.String Firebase.FirebaseApp/EnableModuleParams::get_CppModuleName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CppModuleName_mB91981F21F3F94D82CD64DD7BD810741CBB04E3A (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCppModuleNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Firebase.FirebaseApp/EnableModuleParams::set_CppModuleName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableModuleParams_set_CppModuleName_mF1C3FE3BBE44DEDB23AF2879630075AEAC7106DF (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CCppModuleNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCppModuleNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Firebase.FirebaseApp/EnableModuleParams::get_CSharpClassName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CSharpClassName_m04AD392AA82FCE1E6636F812672C77F294AC16EC (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCSharpClassNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Firebase.FirebaseApp/EnableModuleParams::set_CSharpClassName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableModuleParams_set_CSharpClassName_m9152635BDD8F608352C12F3447962C10F7DF4F43 (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CCSharpClassNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCSharpClassNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Boolean Firebase.FirebaseApp/EnableModuleParams::get_AlwaysEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnableModuleParams_get_AlwaysEnable_mC44F8EA7A9EDCD493C6B8E04E3B3CF00D09FDEA6 (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CAlwaysEnableU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Firebase.FirebaseApp/EnableModuleParams::set_AlwaysEnable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableModuleParams_set_AlwaysEnable_m3F7638041BDA0CC3669AD7119C68ABD2B6F7C482 (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CAlwaysEnableU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void Firebase.FirebaseApp/EnableModuleParams::.ctor(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableModuleParams__ctor_m448B394AF46BBC2CE9C3301F732850625F6B37EF (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* __this, String_t* ___0_csharp, String_t* ___1_cpp, bool ___2_always, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_csharp;
		EnableModuleParams_set_CSharpClassName_m9152635BDD8F608352C12F3447962C10F7DF4F43_inline(__this, L_0, NULL);
		String_t* L_1 = ___1_cpp;
		EnableModuleParams_set_CppModuleName_mF1C3FE3BBE44DEDB23AF2879630075AEAC7106DF_inline(__this, L_1, NULL);
		bool L_2 = ___2_always;
		EnableModuleParams_set_AlwaysEnable_m3F7638041BDA0CC3669AD7119C68ABD2B6F7C482_inline(__this, L_2, NULL);
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
FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* CreateDelegate_Invoke_m3C05F10053C0FD938376079571835049ADDD6186_Multicast(CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73* currentDelegate = reinterpret_cast<CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73*>(delegatesToInvoke[i]);
		typedef FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* CreateDelegate_Invoke_m3C05F10053C0FD938376079571835049ADDD6186_OpenInst(CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73* __this, const RuntimeMethod* method)
{
	typedef FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* CreateDelegate_Invoke_m3C05F10053C0FD938376079571835049ADDD6186_OpenStatic(CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73* __this, const RuntimeMethod* method)
{
	typedef FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* CreateDelegate_Invoke_m3C05F10053C0FD938376079571835049ADDD6186_OpenStaticInvoker(CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* >::Invoke(__this->___method_ptr_0, method, NULL);
}
FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* CreateDelegate_Invoke_m3C05F10053C0FD938376079571835049ADDD6186_ClosedStaticInvoker(CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
// System.Void Firebase.FirebaseApp/CreateDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateDelegate__ctor_m966C39812E422F82DD3AACF101F012749B1F9E12 (CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateDelegate_Invoke_m3C05F10053C0FD938376079571835049ADDD6186_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CreateDelegate_Invoke_m3C05F10053C0FD938376079571835049ADDD6186_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateDelegate_Invoke_m3C05F10053C0FD938376079571835049ADDD6186_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&CreateDelegate_Invoke_m3C05F10053C0FD938376079571835049ADDD6186_Multicast;
}
// Firebase.FirebaseApp Firebase.FirebaseApp/CreateDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* CreateDelegate_Invoke_m3C05F10053C0FD938376079571835049ADDD6186 (CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73* __this, const RuntimeMethod* method) 
{
	typedef FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.FirebaseApp/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m829BBCDF9C61D6D694ABAB6DAC91B8EF322B6D0E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C* L_0 = (U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C*)il2cpp_codegen_object_new(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m463FBDE085153371662615419AFD8228F4704F75(L_0, NULL);
		((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Firebase.FirebaseApp/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m463FBDE085153371662615419AFD8228F4704F75 (U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp/<>c::<Create>b__15_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* U3CU3Ec_U3CCreateU3Eb__15_0_mF43BDAE5875C0C407791D7735DC43BB00EB29F32 (U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0;
		L_0 = FirebaseApp_CreateInternal_m63EB3F64189DA8E6C5B2E1C95B11D63EF7F7BC4B(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Firebase.FirebaseApp/<>c::<CreateAndTrack>b__48_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCreateAndTrackU3Eb__48_0_m353C5F1E7C6BDE8601757A37801E17C89CA49AC2 (U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = FirebaseApp_InitializeCrashlyticsIfPresent_m543A1327364F796F96120C0CD4D7805B412529B6(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// Firebase.DependencyStatus Firebase.FirebaseApp/<>c::<CheckDependenciesAsync>b__56_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CCheckDependenciesAsyncU3Eb__56_0_m636488EA2B782D4C9144E642E528E6E85F8C2129 (U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0;
		L_0 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_SetCheckDependenciesThread_mFE57ACFA06A8CBAAD19379B430621763999C3563(L_1, NULL);
		int32_t L_2;
		L_2 = FirebaseApp_CheckDependencies_mF21910BC5E3CEF3AD82DE4055B05FA2CFF07CBA1(NULL);
		V_0 = L_2;
		FirebaseApp_SetCheckDependenciesThread_mFE57ACFA06A8CBAAD19379B430621763999C3563((-1), NULL);
		int32_t L_3 = V_0;
		V_1 = L_3;
		goto IL_0022;
	}

IL_0022:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<Firebase.DependencyStatus> Firebase.FirebaseApp/<>c::<CheckAndFixDependenciesAsync>b__57_0(System.Threading.Tasks.Task`1<Firebase.DependencyStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* U3CU3Ec_U3CCheckAndFixDependenciesAsyncU3Eb__57_0_m9404F3BF637CC9AE29CC521159638C07E55E9513 (U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C* __this, Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* ___0_checkTask, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t9BE3E8B687E18A04BF29999D209D4EEF1B34F7BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskExtensions_Unwrap_TisDependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_mA8A63E7E7E6B006A25BC9AFB3C60D14C48AE5849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_ContinueWith_TisTask_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF_mBD511CA5A5F2ACD9B0DFAA5064DAF1419E505810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCheckAndFixDependenciesAsyncU3Eb__57_1_m910DECA8F467A4E6A55360C8962CB5C85EB2B8ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* V_2 = NULL;
	Func_2_t9BE3E8B687E18A04BF29999D209D4EEF1B34F7BF* G_B3_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B3_1 = NULL;
	Func_2_t9BE3E8B687E18A04BF29999D209D4EEF1B34F7BF* G_B2_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B2_1 = NULL;
	{
		Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* L_0 = ___0_checkTask;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA(L_0, Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = FirebaseApp_FixDependenciesAsync_m3E5A198309832981F2E4C516D60078247E1607C3(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var);
		Func_2_t9BE3E8B687E18A04BF29999D209D4EEF1B34F7BF* L_5 = ((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9__57_1_4;
		Func_2_t9BE3E8B687E18A04BF29999D209D4EEF1B34F7BF* L_6 = L_5;
		G_B2_0 = L_6;
		G_B2_1 = L_4;
		if (L_6)
		{
			G_B3_0 = L_6;
			G_B3_1 = L_4;
			goto IL_0035;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var);
		U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C* L_7 = ((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t9BE3E8B687E18A04BF29999D209D4EEF1B34F7BF* L_8 = (Func_2_t9BE3E8B687E18A04BF29999D209D4EEF1B34F7BF*)il2cpp_codegen_object_new(Func_2_t9BE3E8B687E18A04BF29999D209D4EEF1B34F7BF_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Func_2__ctor_m2ECCBB49DBEDDD0C1B5C38990F01A61338706778(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3CCheckAndFixDependenciesAsyncU3Eb__57_1_m910DECA8F467A4E6A55360C8962CB5C85EB2B8ED_RuntimeMethod_var), NULL);
		Func_2_t9BE3E8B687E18A04BF29999D209D4EEF1B34F7BF* L_9 = L_8;
		((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9__57_1_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9__57_1_4), (void*)L_9);
		G_B3_0 = L_9;
		G_B3_1 = G_B2_1;
	}

IL_0035:
	{
		NullCheck(G_B3_1);
		Task_1_t3769315417372EBDBD431895C2D9EB5B42C48672* L_10;
		L_10 = Task_ContinueWith_TisTask_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF_mBD511CA5A5F2ACD9B0DFAA5064DAF1419E505810(G_B3_1, G_B3_0, Task_ContinueWith_TisTask_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF_mBD511CA5A5F2ACD9B0DFAA5064DAF1419E505810_RuntimeMethod_var);
		Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* L_11;
		L_11 = TaskExtensions_Unwrap_TisDependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_mA8A63E7E7E6B006A25BC9AFB3C60D14C48AE5849(L_10, TaskExtensions_Unwrap_TisDependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_mA8A63E7E7E6B006A25BC9AFB3C60D14C48AE5849_RuntimeMethod_var);
		V_2 = L_11;
		goto IL_0047;
	}

IL_0042:
	{
		Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* L_12 = ___0_checkTask;
		V_2 = L_12;
		goto IL_0047;
	}

IL_0047:
	{
		Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* L_13 = V_2;
		return L_13;
	}
}
// System.Threading.Tasks.Task`1<Firebase.DependencyStatus> Firebase.FirebaseApp/<>c::<CheckAndFixDependenciesAsync>b__57_1(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* U3CU3Ec_U3CCheckAndFixDependenciesAsyncU3Eb__57_1_m910DECA8F467A4E6A55360C8962CB5C85EB2B8ED (U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* L_0;
		L_0 = FirebaseApp_CheckDependenciesAsync_m75E00BB4F43A6D11511A55F146E0D9DD94405BCD(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.FirebaseApp/<>c::<FixDependenciesAsync>b__60_1(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CFixDependenciesAsyncU3Eb__60_1_mE24B887D7A05989A5250E16C95370FEF0A6920EF (U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ___0_t;
		NullCheck(L_0);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_1;
		L_1 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_0, NULL);
		V_0 = (bool)((!(((RuntimeObject*)(AggregateException_t51B6205846DFB356B94452702201DD239D44422F*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = ___0_t;
		NullCheck(L_3);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_4;
		L_4 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CFixDependenciesAsyncU3Eb__60_1_mE24B887D7A05989A5250E16C95370FEF0A6920EF_RuntimeMethod_var)));
	}

IL_0015:
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_ResetDefaultAppCPtr_m1D38FAF9DA97DFA0C3DB217134369DEA8DA86035(NULL);
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
// System.Void Firebase.FirebaseApp/<>c__DisplayClass58_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0__ctor_m7192D3B51ED821A760AF82992CBBFC8652897AA5 (U3CU3Ec__DisplayClass58_0_tD42798DED94E0739CFCAF00A186CF7E16A97F8E8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.FirebaseApp/<>c__DisplayClass58_0::<CheckDependencies>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0_U3CCheckDependenciesU3Eb__0_m4CEFE0A719711F3C0563FD9C9FDDF2F652553AF6 (U3CU3Ec__DisplayClass58_0_tD42798DED94E0739CFCAF00A186CF7E16A97F8E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FirebaseApp_CheckDependenciesInternal_m738CFE3533F41FC660E43B2EFCCD44BF6EF0AFE5(NULL);
		__this->___status_0 = L_0;
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
// System.Void Firebase.FirebaseApp/<>c__DisplayClass60_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass60_0__ctor_m14A111BEE6E3DE63EDF0086569D3D9C9D5D708B5 (U3CU3Ec__DisplayClass60_0_t2405D4DB7DF66A50C23215BD4C3358528D4028ED* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.FirebaseApp/<>c__DisplayClass60_0::<FixDependenciesAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass60_0_U3CFixDependenciesAsyncU3Eb__0_mA216F8EE30AAE8DB85F3BD26CFA937C99363D009 (U3CU3Ec__DisplayClass60_0_t2405D4DB7DF66A50C23215BD4C3358528D4028ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFixDependenciesAsyncU3Eb__60_1_mE24B887D7A05989A5250E16C95370FEF0A6920EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* G_B2_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B2_1 = NULL;
	U3CU3Ec__DisplayClass60_0_t2405D4DB7DF66A50C23215BD4C3358528D4028ED* G_B2_2 = NULL;
	Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* G_B1_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B1_1 = NULL;
	U3CU3Ec__DisplayClass60_0_t2405D4DB7DF66A50C23215BD4C3358528D4028ED* G_B1_2 = NULL;
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0;
		L_0 = AppUtil_FixAndroidDependenciesAsync_m27A782E22791F6CE0E354216AA5A652683BDDAD7(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var);
		Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_1 = ((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9__60_1_6;
		Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var);
		U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C* L_3 = ((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_4 = (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A*)il2cpp_codegen_object_new(Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CFixDependenciesAsyncU3Eb__60_1_mE24B887D7A05989A5250E16C95370FEF0A6920EF_RuntimeMethod_var), NULL);
		Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_5 = L_4;
		((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9__60_1_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E60FA2425A16BB5C3A0357CAC8FCBA8C92D498C_il2cpp_TypeInfo_var))->___U3CU3E9__60_1_6), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0026:
	{
		NullCheck(G_B2_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = Task_ContinueWith_m4150CBD0F7AC870F40F5E8D84E265B47A642C06C(G_B2_1, G_B2_0, NULL);
		NullCheck(G_B2_2);
		G_B2_2->___task_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_2->___task_0), (void*)L_6);
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
// System.Void Firebase.AppUtilPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE__cctor_m8F7249FF9A16A52D144B2223D3CB9EA2195CE6DF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t52FE8935E712DEC744640398FC8B4806F5FF4534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150* L_0 = (SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150*)il2cpp_codegen_object_new(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SWIGExceptionHelper__ctor_m4DB6794D8CB5F1A9740C37B0C257B69982C013B9(L_0, NULL);
		((AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_StaticFields*)il2cpp_codegen_static_fields_for(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var))->___swigExceptionHelper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_StaticFields*)il2cpp_codegen_static_fields_for(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var))->___swigExceptionHelper_0), (void*)L_0);
		SWIGStringHelper_t52FE8935E712DEC744640398FC8B4806F5FF4534* L_1 = (SWIGStringHelper_t52FE8935E712DEC744640398FC8B4806F5FF4534*)il2cpp_codegen_object_new(SWIGStringHelper_t52FE8935E712DEC744640398FC8B4806F5FF4534_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SWIGStringHelper__ctor_mF5EBABDC102D937A919B6A6CCA3690E2244ECE85(L_1, NULL);
		((AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_StaticFields*)il2cpp_codegen_static_fields_for(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var))->___swigStringHelper_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_StaticFields*)il2cpp_codegen_static_fields_for(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var))->___swigStringHelper_1), (void*)L_1);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE::delete_FutureBase(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_delete_FutureBase_mBA1AC9D7BE7977A080996ED289972DF8449F7BC5 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_delete_FutureBase", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_delete_FutureBase)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.Int32 Firebase.AppUtilPINVOKE::FutureBase_status(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_FutureBase_status_m3056FA61BBB6B002A5BEE4F34F75DCD0858BC27C (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_FutureBase_status", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FutureBase_status)(____0_jarg1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Int32 Firebase.AppUtilPINVOKE::FutureBase_error(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_FutureBase_error_mDB0C901628E9EE247400F57E7E697743B69906E3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_FutureBase_error", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FutureBase_error)(____0_jarg1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.String Firebase.AppUtilPINVOKE::FutureBase_error_message(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_FutureBase_error_message_mDB4089A47D35BF6D3457750C5355B1908C4BE46B (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_FutureBase_error_message", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FutureBase_error_message)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.AppUtilPINVOKE::new_StringStringMap__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_new_StringStringMap__SWIG_0_m84D097C2772CA3A9AC5F931078FB79C3D3C1AF5E (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_new_StringStringMap__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_new_StringStringMap__SWIG_0)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.UInt32 Firebase.AppUtilPINVOKE::StringStringMap_size(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AppUtilPINVOKE_StringStringMap_size_mD8D9155E1FE3473C2D52EF30DB99A8054B8036C0 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_StringStringMap_size", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_StringStringMap_size)(____0_jarg1_marshaled);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.AppUtilPINVOKE::StringStringMap_Clear(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_StringStringMap_Clear_m8D2936F5AC4C42D9E10C8A296765929E80819E6A (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_StringStringMap_Clear", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_StringStringMap_Clear)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.String Firebase.AppUtilPINVOKE::StringStringMap_getitem(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_StringStringMap_getitem_m9D4E9FAA3CA338A73368072EEA97E99D4BA5FC35 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_StringStringMap_getitem", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_StringStringMap_getitem)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.AppUtilPINVOKE::StringStringMap_setitem(System.Runtime.InteropServices.HandleRef,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_StringStringMap_setitem_mF52AA2B0DD2B1C82C96641B73D967C5AA0AA3F04 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, String_t* ___2_jarg3, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_StringStringMap_setitem", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Marshaling of parameter '___2_jarg3' to native representation
	char* ____2_jarg3_marshaled = NULL;
	____2_jarg3_marshaled = il2cpp_codegen_marshal_string(___2_jarg3);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_StringStringMap_setitem)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_jarg3' native representation
	il2cpp_codegen_marshal_free(____2_jarg3_marshaled);
	____2_jarg3_marshaled = NULL;

}
// System.Boolean Firebase.AppUtilPINVOKE::StringStringMap_ContainsKey(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtilPINVOKE_StringStringMap_ContainsKey_mD1DB16B8E96A716AA7D6E9EF19565228BE89314A (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_StringStringMap_ContainsKey", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_StringStringMap_ContainsKey)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Void Firebase.AppUtilPINVOKE::StringStringMap_Add(System.Runtime.InteropServices.HandleRef,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_StringStringMap_Add_mB5BC4CE692924D407020A29EB1D91EA5FD4DACDA (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, String_t* ___2_jarg3, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_StringStringMap_Add", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Marshaling of parameter '___2_jarg3' to native representation
	char* ____2_jarg3_marshaled = NULL;
	____2_jarg3_marshaled = il2cpp_codegen_marshal_string(___2_jarg3);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_StringStringMap_Add)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_jarg3' native representation
	il2cpp_codegen_marshal_free(____2_jarg3_marshaled);
	____2_jarg3_marshaled = NULL;

}
// System.Boolean Firebase.AppUtilPINVOKE::StringStringMap_Remove(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtilPINVOKE_StringStringMap_Remove_mC01EAA294015A6D9D894D19B73DE6455110EBDA8 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_StringStringMap_Remove", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_StringStringMap_Remove)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.IntPtr Firebase.AppUtilPINVOKE::StringStringMap_create_iterator_begin(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_StringStringMap_create_iterator_begin_mBBC01E5599A704C943471C9CEFF97810AC4054A1 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_StringStringMap_create_iterator_begin", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_StringStringMap_create_iterator_begin)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.String Firebase.AppUtilPINVOKE::StringStringMap_get_next_key(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_StringStringMap_get_next_key_mDE2CD543826A393C6BEF7562D4A81B66872826DB (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_StringStringMap_get_next_key", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_StringStringMap_get_next_key)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.AppUtilPINVOKE::StringStringMap_destroy_iterator(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_StringStringMap_destroy_iterator_mD19027EE722AC2BD93E8F886D93AC6D0C3B56209 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_StringStringMap_destroy_iterator", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_StringStringMap_destroy_iterator)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

}
// System.Void Firebase.AppUtilPINVOKE::delete_StringStringMap(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_delete_StringStringMap_m9ACE5D4FA3CBE366F2925D4328DBE077A95E7196 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_delete_StringStringMap", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_delete_StringStringMap)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.AppUtilPINVOKE::FutureVoid_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.FutureVoid/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_FutureVoid_SWIG_OnCompletion_mFD32977A7A2E4A35F4DF9D05E4890FEF115BACB9 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C* ___1_jarg2, int32_t ___2_jarg3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_FutureVoid_SWIG_OnCompletion", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	Il2CppMethodPointer ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_jarg2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FutureVoid_SWIG_OnCompletion)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#endif

	return returnValue;
}
// System.Void Firebase.AppUtilPINVOKE::FutureVoid_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_FutureVoid_SWIG_FreeCompletionData_m86022295E0D79AB64EF071771596414899834326 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_FutureVoid_SWIG_FreeCompletionData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FutureVoid_SWIG_FreeCompletionData)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

}
// System.Void Firebase.AppUtilPINVOKE::delete_FutureVoid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_delete_FutureVoid_m9F8202898737C91464B6621C899505CE987A6393 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_delete_FutureVoid", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_delete_FutureVoid)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.String Firebase.AppUtilPINVOKE::FirebaseApp_NameInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_FirebaseApp_NameInternal_get_mE4931CA287567E2C7F91442E07F30AE96AE91172 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_FirebaseApp_NameInternal_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FirebaseApp_NameInternal_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.AppUtilPINVOKE::FirebaseApp_CreateInternal__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_FirebaseApp_CreateInternal__SWIG_0_m8C61ECBE5407D4A591827E10595AE28EFE8C6CE5 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_FirebaseApp_CreateInternal__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FirebaseApp_CreateInternal__SWIG_0)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Firebase.AppUtilPINVOKE::FirebaseApp_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_FirebaseApp_ReleaseReferenceInternal_m5A184BBB9E09539CDDB771120995526D0328439B (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_FirebaseApp_ReleaseReferenceInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FirebaseApp_ReleaseReferenceInternal)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.Int32 Firebase.AppUtilPINVOKE::FirebaseApp_GetLogLevelInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_FirebaseApp_GetLogLevelInternal_mAF74BAD43730ACCFFB25EFBDCB0F40CA30CE1940 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_FirebaseApp_GetLogLevelInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FirebaseApp_GetLogLevelInternal)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Firebase.AppUtilPINVOKE::FirebaseApp_RegisterLibrariesInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_FirebaseApp_RegisterLibrariesInternal_m6A299F866D396117D75C2243115E25F2B8A6F00E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_FirebaseApp_RegisterLibrariesInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FirebaseApp_RegisterLibrariesInternal)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.Void Firebase.AppUtilPINVOKE::FirebaseApp_LogHeartbeatInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_FirebaseApp_LogHeartbeatInternal_m6BA2A1959A135C6D953FC965A4C09D80DA62C838 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_FirebaseApp_LogHeartbeatInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FirebaseApp_LogHeartbeatInternal)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.Void Firebase.AppUtilPINVOKE::FirebaseApp_AppSetDefaultConfigPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_FirebaseApp_AppSetDefaultConfigPath_m461EBC1DCEA9353F3C927FAEEB1590BA130E69DB (String_t* ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_FirebaseApp_AppSetDefaultConfigPath", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	char* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = il2cpp_codegen_marshal_string(___0_jarg1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FirebaseApp_AppSetDefaultConfigPath)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_jarg1' native representation
	il2cpp_codegen_marshal_free(____0_jarg1_marshaled);
	____0_jarg1_marshaled = NULL;

}
// System.String Firebase.AppUtilPINVOKE::FirebaseApp_DefaultName_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_FirebaseApp_DefaultName_get_m7561CF63339BB772F6A9690B9E07D9E21BA70D2A (const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_FirebaseApp_DefaultName_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FirebaseApp_DefaultName_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.AppUtilPINVOKE::PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_PollCallbacks_mD2FF7C60A52AF22E9AC028564A06E0F3974B6D56 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_PollCallbacks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_PollCallbacks)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void Firebase.AppUtilPINVOKE::AppEnableLogCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_AppEnableLogCallback_m5BB69B725FD3DF1FE26C20DE516F14E02E82BDB3 (bool ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_AppEnableLogCallback", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_AppEnableLogCallback)(static_cast<int32_t>(___0_jarg1));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___0_jarg1));
	#endif

}
// System.Void Firebase.AppUtilPINVOKE::SetEnabledAllAppCallbacks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_SetEnabledAllAppCallbacks_m6A273BFF682F24C5D1F66273B0AA3AF975B29019 (bool ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_SetEnabledAllAppCallbacks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_SetEnabledAllAppCallbacks)(static_cast<int32_t>(___0_jarg1));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___0_jarg1));
	#endif

}
// System.Void Firebase.AppUtilPINVOKE::SetEnabledAppCallbackByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_SetEnabledAppCallbackByName_m4705ADB8109C59533C8D2117C87E6336EEB54A05 (String_t* ___0_jarg1, bool ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_SetEnabledAppCallbackByName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	char* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = il2cpp_codegen_marshal_string(___0_jarg1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_SetEnabledAppCallbackByName)(____0_jarg1_marshaled, static_cast<int32_t>(___1_jarg2));
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, static_cast<int32_t>(___1_jarg2));
	#endif

	// Marshaling cleanup of parameter '___0_jarg1' native representation
	il2cpp_codegen_marshal_free(____0_jarg1_marshaled);
	____0_jarg1_marshaled = NULL;

}
// System.Boolean Firebase.AppUtilPINVOKE::GetEnabledAppCallbackByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtilPINVOKE_GetEnabledAppCallbackByName_m97E56E8BCA68A8391B677BC814B1E3584FD985C5 (String_t* ___0_jarg1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_GetEnabledAppCallbackByName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	char* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = il2cpp_codegen_marshal_string(___0_jarg1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_GetEnabledAppCallbackByName)(____0_jarg1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_jarg1' native representation
	il2cpp_codegen_marshal_free(____0_jarg1_marshaled);
	____0_jarg1_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Void Firebase.AppUtilPINVOKE::SetLogFunction(Firebase.LogUtil/LogMessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_SetLogFunction_m76775D9FA055C83D4C65B6E6E7192E941A433EAE (LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4* ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_SetLogFunction", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	Il2CppMethodPointer ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_jarg1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_SetLogFunction)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.Int32 Firebase.AppUtilPINVOKE::CheckAndroidDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_CheckAndroidDependencies_m4FCC7A6957631074F898E119E993E423A6EB6C48 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_CheckAndroidDependencies", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_CheckAndroidDependencies)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr Firebase.AppUtilPINVOKE::FixAndroidDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_FixAndroidDependencies_m1C8B8699F37268F8755608458DEAE04014F9D7C0 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_FixAndroidDependencies", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FixAndroidDependencies)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Firebase.AppUtilPINVOKE::InitializePlayServicesInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_InitializePlayServicesInternal_m0027EC41EE00DCF8A530695B979F8AC1EBCEF814 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_InitializePlayServicesInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_InitializePlayServicesInternal)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void Firebase.AppUtilPINVOKE::TerminatePlayServicesInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_TerminatePlayServicesInternal_mABD31836A1A4B753A27CFD9472F2513746ED4499 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_TerminatePlayServicesInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_TerminatePlayServicesInternal)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.IntPtr Firebase.AppUtilPINVOKE::FutureVoid_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_FutureVoid_SWIGUpcast_m8D1EB93463FFA3A9F14A49FD1459CBE45E8957CC (intptr_t ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "Firebase_App_CSharp_FutureVoid_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FutureVoid_SWIGUpcast)(___0_jarg1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_jarg1);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m7FE3B7ADC198F4ED5A180BC5ECD18CC371444591(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_m7FE3B7ADC198F4ED5A180BC5ECD18CC371444591(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m5DA562871B81FA3E688FD12D78E82882F5ADC315(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m5DA562871B81FA3E688FD12D78E82882F5ADC315(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m7AE515E72B8E23D18919432B5B7BF0F06CCD18E7(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_m7AE515E72B8E23D18919432B5B7BF0F06CCD18E7(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mCD203C03B85ADB38206622594E5DEECA14C1CA7E(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mCD203C03B85ADB38206622594E5DEECA14C1CA7E(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m64057305E28A3122C79BFF5A8C441D72B04C6E5B(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m64057305E28A3122C79BFF5A8C441D72B04C6E5B(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m4CE89FA918E3D9CA7C6391147792F8226CF6BA07(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_m4CE89FA918E3D9CA7C6391147792F8226CF6BA07(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_mA50448F1AA4CA664C39B8AB78EF912F18E0DDF50(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_mA50448F1AA4CA664C39B8AB78EF912F18E0DDF50(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m0CE8D326228371436AB3BBCE9AA7464619030A35(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m0CE8D326228371436AB3BBCE9AA7464619030A35(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_mB4209DD263A50C83F1E9CE39A85ADDAE18F51759(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_mB4209DD263A50C83F1E9CE39A85ADDAE18F51759(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m366DEFCF657EFE4CBABD2ADCD7D09BD6144E25B0(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_m366DEFCF657EFE4CBABD2ADCD7D09BD6144E25B0(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_mE317DA81F256CF3BD75CAC264E25961D7A536191(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_mE317DA81F256CF3BD75CAC264E25961D7A536191(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m82CC529F5355DF173784D29CDB197BC3AAA353BC(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_m82CC529F5355DF173784D29CDB197BC3AAA353BC(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_m1A239C193A01B3E73BD763718FB528ED933847A0(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_m1A239C193A01B3E73BD763718FB528ED933847A0(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m1F079CDB1AC454648BEFF38716F88AFE6FA8F926(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m1F079CDB1AC454648BEFF38716F88AFE6FA8F926(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_AppUtil(Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AppUtil_m37C58735D4F8200BA3896F46FD46006F467A604D (ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___0_applicationDelegate, ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___1_arithmeticDelegate, ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___2_divideByZeroDelegate, ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___3_indexOutOfRangeDelegate, ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___4_invalidCastDelegate, ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___5_invalidOperationDelegate, ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___6_ioDelegate, ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___7_nullReferenceDelegate, ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___8_outOfMemoryDelegate, ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___9_overflowDelegate, ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* ___10_systemExceptionDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "SWIGRegisterExceptionCallbacks_AppUtil", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_AppUtil)(____0_applicationDelegate_marshaled, ____1_arithmeticDelegate_marshaled, ____2_divideByZeroDelegate_marshaled, ____3_indexOutOfRangeDelegate_marshaled, ____4_invalidCastDelegate_marshaled, ____5_invalidOperationDelegate_marshaled, ____6_ioDelegate_marshaled, ____7_nullReferenceDelegate_marshaled, ____8_outOfMemoryDelegate_marshaled, ____9_overflowDelegate_marshaled, ____10_systemExceptionDelegate_marshaled);
	#else
	il2cppPInvokeFunc(____0_applicationDelegate_marshaled, ____1_arithmeticDelegate_marshaled, ____2_divideByZeroDelegate_marshaled, ____3_indexOutOfRangeDelegate_marshaled, ____4_invalidCastDelegate_marshaled, ____5_invalidOperationDelegate_marshaled, ____6_ioDelegate_marshaled, ____7_nullReferenceDelegate_marshaled, ____8_outOfMemoryDelegate_marshaled, ____9_overflowDelegate_marshaled, ____10_systemExceptionDelegate_marshaled);
	#endif

}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_AppUtil(Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AppUtil_m20CAE98AF0AFEDCADBBEAA94148843C8C671F8D5 (ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* ___0_argumentDelegate, ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* ___1_argumentNullDelegate, ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* ___2_argumentOutOfRangeDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "SWIGRegisterExceptionArgumentCallbacks_AppUtil", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionArgumentCallbacks_AppUtil)(____0_argumentDelegate_marshaled, ____1_argumentNullDelegate_marshaled, ____2_argumentOutOfRangeDelegate_marshaled);
	#else
	il2cppPInvokeFunc(____0_argumentDelegate_marshaled, ____1_argumentNullDelegate_marshaled, ____2_argumentOutOfRangeDelegate_marshaled);
	#endif

}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m7FE3B7ADC198F4ED5A180BC5ECD18CC371444591 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_2 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7EB577A3129E190D2FBAF8CB9C9CAB7F87DA2642(L_2, NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m5DA562871B81FA3E688FD12D78E82882F5ADC315 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_2 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArithmeticException__ctor_m880D58CC9B6CD2F0E867298BA748343216D89A8B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7EB577A3129E190D2FBAF8CB9C9CAB7F87DA2642(L_2, NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m7AE515E72B8E23D18919432B5B7BF0F06CCD18E7 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_2 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DivideByZeroException__ctor_mE15900048AEEE9B66A4DD9F2ACAC4448D85D4F23(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7EB577A3129E190D2FBAF8CB9C9CAB7F87DA2642(L_2, NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mCD203C03B85ADB38206622594E5DEECA14C1CA7E (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_2 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IndexOutOfRangeException__ctor_m390691571A232F79022C84ED002FDEF8974255E1(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7EB577A3129E190D2FBAF8CB9C9CAB7F87DA2642(L_2, NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m64057305E28A3122C79BFF5A8C441D72B04C6E5B (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidCastException__ctor_m40BCFD6C1C79DE81191B829AF71BEB590E300396(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7EB577A3129E190D2FBAF8CB9C9CAB7F87DA2642(L_2, NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m4CE89FA918E3D9CA7C6391147792F8226CF6BA07 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7EB577A3129E190D2FBAF8CB9C9CAB7F87DA2642(L_2, NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mA50448F1AA4CA664C39B8AB78EF912F18E0DDF50 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_2 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7EB577A3129E190D2FBAF8CB9C9CAB7F87DA2642(L_2, NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m0CE8D326228371436AB3BBCE9AA7464619030A35 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NullReferenceException__ctor_mD00D7FE987C285C8DB23883700F44BC0025F55EF(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7EB577A3129E190D2FBAF8CB9C9CAB7F87DA2642(L_2, NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_mB4209DD263A50C83F1E9CE39A85ADDAE18F51759 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_2 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OutOfMemoryException__ctor_mC60E0CF8E50CA43F0518570ACC051F6BA8A1D1F2(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7EB577A3129E190D2FBAF8CB9C9CAB7F87DA2642(L_2, NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m366DEFCF657EFE4CBABD2ADCD7D09BD6144E25B0 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_2 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OverflowException__ctor_mB00A07CDB7E5230B8D2BB31696E63F3CB1C36EF9(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7EB577A3129E190D2FBAF8CB9C9CAB7F87DA2642(L_2, NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_mE317DA81F256CF3BD75CAC264E25961D7A536191 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* L_2 = (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295*)il2cpp_codegen_object_new(SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7EB577A3129E190D2FBAF8CB9C9CAB7F87DA2642(L_2, NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m82CC529F5355DF173784D29CDB197BC3AAA353BC (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		String_t* L_1 = ___1_paramName;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArgumentException__ctor_m790F28810569425B0503056EF1A9CDDF9AFBB3F0(L_3, L_0, L_1, L_2, NULL);
		SWIGPendingException_Set_m7EB577A3129E190D2FBAF8CB9C9CAB7F87DA2642(L_3, NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m1A239C193A01B3E73BD763718FB528ED933847A0 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		Exception_t* L_0;
		L_0 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
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
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m7EB577A3129E190D2FBAF8CB9C9CAB7F87DA2642(L_9, NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m1F079CDB1AC454648BEFF38716F88AFE6FA8F926 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		Exception_t* L_0;
		L_0 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
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
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m7EB577A3129E190D2FBAF8CB9C9CAB7F87DA2642(L_9, NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_m2E9064FCCB3E37EAE10ED204AF7A72C0F1F78F8B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingApplicationException_m7FE3B7ADC198F4ED5A180BC5ECD18CC371444591_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentException_m82CC529F5355DF173784D29CDB197BC3AAA353BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentNullException_m1A239C193A01B3E73BD763718FB528ED933847A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m1F079CDB1AC454648BEFF38716F88AFE6FA8F926_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArithmeticException_m5DA562871B81FA3E688FD12D78E82882F5ADC315_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingDivideByZeroException_m7AE515E72B8E23D18919432B5B7BF0F06CCD18E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIOException_mA50448F1AA4CA664C39B8AB78EF912F18E0DDF50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mCD203C03B85ADB38206622594E5DEECA14C1CA7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidCastException_m64057305E28A3122C79BFF5A8C441D72B04C6E5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidOperationException_m4CE89FA918E3D9CA7C6391147792F8226CF6BA07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingNullReferenceException_m0CE8D326228371436AB3BBCE9AA7464619030A35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOutOfMemoryException_mB4209DD263A50C83F1E9CE39A85ADDAE18F51759_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOverflowException_m366DEFCF657EFE4CBABD2ADCD7D09BD6144E25B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingSystemException_mE317DA81F256CF3BD75CAC264E25961D7A536191_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* L_0 = (ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2*)il2cpp_codegen_object_new(ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExceptionDelegate__ctor_m49AB94CEC8E6544CE0D7B1E2300735728EE336D8(L_0, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingApplicationException_m7FE3B7ADC198F4ED5A180BC5ECD18CC371444591_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___applicationDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___applicationDelegate_0), (void*)L_0);
		ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* L_1 = (ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2*)il2cpp_codegen_object_new(ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ExceptionDelegate__ctor_m49AB94CEC8E6544CE0D7B1E2300735728EE336D8(L_1, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArithmeticException_m5DA562871B81FA3E688FD12D78E82882F5ADC315_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___arithmeticDelegate_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___arithmeticDelegate_1), (void*)L_1);
		ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* L_2 = (ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2*)il2cpp_codegen_object_new(ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ExceptionDelegate__ctor_m49AB94CEC8E6544CE0D7B1E2300735728EE336D8(L_2, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingDivideByZeroException_m7AE515E72B8E23D18919432B5B7BF0F06CCD18E7_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2), (void*)L_2);
		ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* L_3 = (ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2*)il2cpp_codegen_object_new(ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ExceptionDelegate__ctor_m49AB94CEC8E6544CE0D7B1E2300735728EE336D8(L_3, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mCD203C03B85ADB38206622594E5DEECA14C1CA7E_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3), (void*)L_3);
		ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* L_4 = (ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2*)il2cpp_codegen_object_new(ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ExceptionDelegate__ctor_m49AB94CEC8E6544CE0D7B1E2300735728EE336D8(L_4, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidCastException_m64057305E28A3122C79BFF5A8C441D72B04C6E5B_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___invalidCastDelegate_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___invalidCastDelegate_4), (void*)L_4);
		ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* L_5 = (ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2*)il2cpp_codegen_object_new(ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ExceptionDelegate__ctor_m49AB94CEC8E6544CE0D7B1E2300735728EE336D8(L_5, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidOperationException_m4CE89FA918E3D9CA7C6391147792F8226CF6BA07_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5), (void*)L_5);
		ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* L_6 = (ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2*)il2cpp_codegen_object_new(ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ExceptionDelegate__ctor_m49AB94CEC8E6544CE0D7B1E2300735728EE336D8(L_6, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIOException_mA50448F1AA4CA664C39B8AB78EF912F18E0DDF50_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___ioDelegate_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___ioDelegate_6), (void*)L_6);
		ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* L_7 = (ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2*)il2cpp_codegen_object_new(ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ExceptionDelegate__ctor_m49AB94CEC8E6544CE0D7B1E2300735728EE336D8(L_7, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingNullReferenceException_m0CE8D326228371436AB3BBCE9AA7464619030A35_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7), (void*)L_7);
		ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* L_8 = (ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2*)il2cpp_codegen_object_new(ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ExceptionDelegate__ctor_m49AB94CEC8E6544CE0D7B1E2300735728EE336D8(L_8, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOutOfMemoryException_mB4209DD263A50C83F1E9CE39A85ADDAE18F51759_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8), (void*)L_8);
		ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* L_9 = (ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2*)il2cpp_codegen_object_new(ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ExceptionDelegate__ctor_m49AB94CEC8E6544CE0D7B1E2300735728EE336D8(L_9, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOverflowException_m366DEFCF657EFE4CBABD2ADCD7D09BD6144E25B0_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___overflowDelegate_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___overflowDelegate_9), (void*)L_9);
		ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* L_10 = (ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2*)il2cpp_codegen_object_new(ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ExceptionDelegate__ctor_m49AB94CEC8E6544CE0D7B1E2300735728EE336D8(L_10, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingSystemException_mE317DA81F256CF3BD75CAC264E25961D7A536191_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___systemDelegate_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___systemDelegate_10), (void*)L_10);
		ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* L_11 = (ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ExceptionArgumentDelegate__ctor_m45E4EFAE5F14FFEC5843A00ABEF4D0E1F0854629(L_11, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentException_m82CC529F5355DF173784D29CDB197BC3AAA353BC_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___argumentDelegate_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___argumentDelegate_11), (void*)L_11);
		ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* L_12 = (ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ExceptionArgumentDelegate__ctor_m45E4EFAE5F14FFEC5843A00ABEF4D0E1F0854629(L_12, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentNullException_m1A239C193A01B3E73BD763718FB528ED933847A0_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___argumentNullDelegate_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___argumentNullDelegate_12), (void*)L_12);
		ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* L_13 = (ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		ExceptionArgumentDelegate__ctor_m45E4EFAE5F14FFEC5843A00ABEF4D0E1F0854629(L_13, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m1F079CDB1AC454648BEFF38716F88AFE6FA8F926_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13), (void*)L_13);
		ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* L_14 = ((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___applicationDelegate_0;
		ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* L_15 = ((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___arithmeticDelegate_1;
		ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* L_16 = ((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2;
		ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* L_17 = ((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3;
		ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* L_18 = ((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___invalidCastDelegate_4;
		ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* L_19 = ((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5;
		ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* L_20 = ((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___ioDelegate_6;
		ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* L_21 = ((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7;
		ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* L_22 = ((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8;
		ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* L_23 = ((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___overflowDelegate_9;
		ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* L_24 = ((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___systemDelegate_10;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AppUtil_m37C58735D4F8200BA3896F46FD46006F467A604D(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, NULL);
		ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* L_25 = ((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___argumentDelegate_11;
		ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* L_26 = ((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___argumentNullDelegate_12;
		ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* L_27 = ((SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AppUtil_m20CAE98AF0AFEDCADBBEAA94148843C8C671F8D5(L_25, L_26, L_27, NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m4DB6794D8CB5F1A9740C37B0C257B69982C013B9 (SWIGExceptionHelper_tE9BA80B4C669BF5192DAA694FF28DE56BC7EC150* __this, const RuntimeMethod* method) 
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
void ExceptionDelegate_Invoke_mE04E9A1D96F5AE159E3D7878E87706B91A149B25_Multicast(ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* currentDelegate = reinterpret_cast<ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionDelegate_Invoke_mE04E9A1D96F5AE159E3D7878E87706B91A149B25_OpenInst(ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void ExceptionDelegate_Invoke_mE04E9A1D96F5AE159E3D7878E87706B91A149B25_OpenStatic(ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void ExceptionDelegate_Invoke_mE04E9A1D96F5AE159E3D7878E87706B91A149B25_OpenStaticInvoker(ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_message);
}
void ExceptionDelegate_Invoke_mE04E9A1D96F5AE159E3D7878E87706B91A149B25_ClosedStaticInvoker(ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2 (ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* __this, String_t* ___0_message, const RuntimeMethod* method)
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
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m49AB94CEC8E6544CE0D7B1E2300735728EE336D8 (ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_mE04E9A1D96F5AE159E3D7878E87706B91A149B25_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_mE04E9A1D96F5AE159E3D7878E87706B91A149B25_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_mE04E9A1D96F5AE159E3D7878E87706B91A149B25_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_mE04E9A1D96F5AE159E3D7878E87706B91A149B25_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionDelegate_Invoke_mE04E9A1D96F5AE159E3D7878E87706B91A149B25_Multicast;
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_mE04E9A1D96F5AE159E3D7878E87706B91A149B25 (ExceptionDelegate_tB04759C7781B4E0DC8CB51FC317A27CCA77850C2* __this, String_t* ___0_message, const RuntimeMethod* method) 
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
void ExceptionArgumentDelegate_Invoke_m46BEB8B17B239BFB498C54B89EB06352BD1948F8_Multicast(ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* currentDelegate = reinterpret_cast<ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, ___1_paramName, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionArgumentDelegate_Invoke_m46BEB8B17B239BFB498C54B89EB06352BD1948F8_OpenInst(ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, ___1_paramName, method);
}
void ExceptionArgumentDelegate_Invoke_m46BEB8B17B239BFB498C54B89EB06352BD1948F8_OpenStatic(ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, ___1_paramName, method);
}
void ExceptionArgumentDelegate_Invoke_m46BEB8B17B239BFB498C54B89EB06352BD1948F8_OpenStaticInvoker(ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_message, ___1_paramName);
}
void ExceptionArgumentDelegate_Invoke_m46BEB8B17B239BFB498C54B89EB06352BD1948F8_ClosedStaticInvoker(ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message, ___1_paramName);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2 (ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
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
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m45E4EFAE5F14FFEC5843A00ABEF4D0E1F0854629 (ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m46BEB8B17B239BFB498C54B89EB06352BD1948F8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m46BEB8B17B239BFB498C54B89EB06352BD1948F8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m46BEB8B17B239BFB498C54B89EB06352BD1948F8_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m46BEB8B17B239BFB498C54B89EB06352BD1948F8_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m46BEB8B17B239BFB498C54B89EB06352BD1948F8_Multicast;
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m46BEB8B17B239BFB498C54B89EB06352BD1948F8 (ExceptionArgumentDelegate_t6B395E61CE4DD6A6EE04842EA9A355E05C47A3A2* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
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
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
		V_1 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		Exception_t* L_2 = ((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))->___pendingException_0;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_001d:
	{
		bool L_4 = V_0;
		V_3 = L_4;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_5 = V_3;
		return L_5;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m7EB577A3129E190D2FBAF8CB9C9CAB7F87DA2642 (Exception_t* ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		Exception_t* L_0 = ((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))->___pendingException_0;
		V_0 = (bool)((!(((RuntimeObject*)(Exception_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_2 = ((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))))->___pendingException_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), NULL);
		Exception_t* L_5 = ___0_e;
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_6 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_6, L_4, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_Set_m7EB577A3129E190D2FBAF8CB9C9CAB7F87DA2642_RuntimeMethod_var)));
	}

IL_002d:
	{
		Exception_t* L_7 = ___0_e;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))->___pendingException_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))->___pendingException_0), (void*)L_7);
		RuntimeObject* L_8 = ((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))->___exceptionsLock_2;
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
			il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
			int32_t L_12 = ((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
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
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
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
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
		V_1 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		Exception_t* L_2 = ((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))->___pendingException_0;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0058;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		Exception_t* L_4 = ((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))->___pendingException_0;
		V_0 = L_4;
		((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))->___pendingException_0 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))->___pendingException_0), (void*)(Exception_t*)NULL);
		RuntimeObject* L_5 = ((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))->___exceptionsLock_2;
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
			il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
			int32_t L_9 = ((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
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
// System.Void Firebase.AppUtilPINVOKE/SWIGPendingException::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException__cctor_m171494E914FABB4580D25BA675FC206C6C83B6ED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))->___pendingException_0 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))->___pendingException_0), (void*)(Exception_t*)NULL);
		((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = 0;
		((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))->___exceptionsLock_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))->___exceptionsLock_2), (void*)NULL);
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))->___exceptionsLock_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var))->___exceptionsLock_2), (void*)L_0);
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_m929C4B0922610C0571E685F27F79757BF669C77F(char* ___0_cString)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_cString' to managed representation
	String_t* ____0_cString_unmarshaled = NULL;
	____0_cString_unmarshaled = il2cpp_codegen_marshal_string_result(___0_cString);

	// Managed method invocation
	String_t* returnValue;
	returnValue = SWIGStringHelper_CreateString_m929C4B0922610C0571E685F27F79757BF669C77F(____0_cString_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.AppUtilPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_AppUtil(Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_AppUtil_m6DC4FCA4611C8A5521BE0E65F5CCE26D000E4DD1 (SWIGStringDelegate_t8DE60A9CF4030497616BDFC28662C81B33456879* ___0_stringDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_0_0"), "SWIGRegisterStringCallback_AppUtil", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_stringDelegate' to native representation
	Il2CppMethodPointer ____0_stringDelegate_marshaled = NULL;
	____0_stringDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_stringDelegate));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_11_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_AppUtil)(____0_stringDelegate_marshaled);
	#else
	il2cppPInvokeFunc(____0_stringDelegate_marshaled);
	#endif

}
// System.String Firebase.AppUtilPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m929C4B0922610C0571E685F27F79757BF669C77F (String_t* ___0_cString, const RuntimeMethod* method) 
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
// System.Void Firebase.AppUtilPINVOKE/SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_mAEBC8A14986139AE4856DA02EC5F3748CACE1971 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringDelegate_t8DE60A9CF4030497616BDFC28662C81B33456879_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_CreateString_m929C4B0922610C0571E685F27F79757BF669C77F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t52FE8935E712DEC744640398FC8B4806F5FF4534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_t8DE60A9CF4030497616BDFC28662C81B33456879* L_0 = (SWIGStringDelegate_t8DE60A9CF4030497616BDFC28662C81B33456879*)il2cpp_codegen_object_new(SWIGStringDelegate_t8DE60A9CF4030497616BDFC28662C81B33456879_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SWIGStringDelegate__ctor_m4D5B167B33345B58192AD3B50D1F8901A18F4F4D(L_0, NULL, (intptr_t)((void*)SWIGStringHelper_CreateString_m929C4B0922610C0571E685F27F79757BF669C77F_RuntimeMethod_var), NULL);
		((SWIGStringHelper_t52FE8935E712DEC744640398FC8B4806F5FF4534_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t52FE8935E712DEC744640398FC8B4806F5FF4534_il2cpp_TypeInfo_var))->___stringDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGStringHelper_t52FE8935E712DEC744640398FC8B4806F5FF4534_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t52FE8935E712DEC744640398FC8B4806F5FF4534_il2cpp_TypeInfo_var))->___stringDelegate_0), (void*)L_0);
		SWIGStringDelegate_t8DE60A9CF4030497616BDFC28662C81B33456879* L_1 = ((SWIGStringHelper_t52FE8935E712DEC744640398FC8B4806F5FF4534_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t52FE8935E712DEC744640398FC8B4806F5FF4534_il2cpp_TypeInfo_var))->___stringDelegate_0;
		SWIGStringHelper_SWIGRegisterStringCallback_AppUtil_m6DC4FCA4611C8A5521BE0E65F5CCE26D000E4DD1(L_1, NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_mF5EBABDC102D937A919B6A6CCA3690E2244ECE85 (SWIGStringHelper_t52FE8935E712DEC744640398FC8B4806F5FF4534* __this, const RuntimeMethod* method) 
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
String_t* SWIGStringDelegate_Invoke_m9831BD87E0EBFECFF48B4CA3FFEB118280C2ABCB_Multicast(SWIGStringDelegate_t8DE60A9CF4030497616BDFC28662C81B33456879* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	String_t* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SWIGStringDelegate_t8DE60A9CF4030497616BDFC28662C81B33456879* currentDelegate = reinterpret_cast<SWIGStringDelegate_t8DE60A9CF4030497616BDFC28662C81B33456879*>(delegatesToInvoke[i]);
		typedef String_t* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
String_t* SWIGStringDelegate_Invoke_m9831BD87E0EBFECFF48B4CA3FFEB118280C2ABCB_OpenInst(SWIGStringDelegate_t8DE60A9CF4030497616BDFC28662C81B33456879* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
String_t* SWIGStringDelegate_Invoke_m9831BD87E0EBFECFF48B4CA3FFEB118280C2ABCB_OpenStatic(SWIGStringDelegate_t8DE60A9CF4030497616BDFC28662C81B33456879* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
String_t* SWIGStringDelegate_Invoke_m9831BD87E0EBFECFF48B4CA3FFEB118280C2ABCB_OpenStaticInvoker(SWIGStringDelegate_t8DE60A9CF4030497616BDFC28662C81B33456879* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_message);
}
String_t* SWIGStringDelegate_Invoke_m9831BD87E0EBFECFF48B4CA3FFEB118280C2ABCB_ClosedStaticInvoker(SWIGStringDelegate_t8DE60A9CF4030497616BDFC28662C81B33456879* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< String_t*, RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_t8DE60A9CF4030497616BDFC28662C81B33456879 (SWIGStringDelegate_t8DE60A9CF4030497616BDFC28662C81B33456879* __this, String_t* ___0_message, const RuntimeMethod* method)
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
// System.Void Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m4D5B167B33345B58192AD3B50D1F8901A18F4F4D (SWIGStringDelegate_t8DE60A9CF4030497616BDFC28662C81B33456879* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m9831BD87E0EBFECFF48B4CA3FFEB118280C2ABCB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m9831BD87E0EBFECFF48B4CA3FFEB118280C2ABCB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m9831BD87E0EBFECFF48B4CA3FFEB118280C2ABCB_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m9831BD87E0EBFECFF48B4CA3FFEB118280C2ABCB_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SWIGStringDelegate_Invoke_m9831BD87E0EBFECFF48B4CA3FFEB118280C2ABCB_Multicast;
}
// System.String Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m9831BD87E0EBFECFF48B4CA3FFEB118280C2ABCB (SWIGStringDelegate_t8DE60A9CF4030497616BDFC28662C81B33456879* __this, String_t* ___0_message, const RuntimeMethod* method) 
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
// System.Void Firebase.AppUtil::PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_PollCallbacks_mB25BC1FD5126974F80860A05910301AAF7589BFC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_PollCallbacks_mD2FF7C60A52AF22E9AC028564A06E0F3974B6D56(NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppUtil_PollCallbacks_mB25BC1FD5126974F80860A05910301AAF7589BFC_RuntimeMethod_var)));
	}

IL_0016:
	{
		return;
	}
}
// System.Void Firebase.AppUtil::AppEnableLogCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_AppEnableLogCallback_m9FE8159D116019E4E918F4B7CEC39687DD64B2EA (bool ___0_arg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___0_arg0;
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_AppEnableLogCallback_m5BB69B725FD3DF1FE26C20DE516F14E02E82BDB3(L_0, NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppUtil_AppEnableLogCallback_m9FE8159D116019E4E918F4B7CEC39687DD64B2EA_RuntimeMethod_var)));
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.AppUtil::SetEnabledAllAppCallbacks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetEnabledAllAppCallbacks_m0C41A4271764464915ACA461AE8A309AEDAFA6AC (bool ___0_arg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___0_arg0;
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_SetEnabledAllAppCallbacks_m6A273BFF682F24C5D1F66273B0AA3AF975B29019(L_0, NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppUtil_SetEnabledAllAppCallbacks_m0C41A4271764464915ACA461AE8A309AEDAFA6AC_RuntimeMethod_var)));
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.AppUtil::SetEnabledAppCallbackByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetEnabledAppCallbackByName_m59C6CB27D92D72FD0841031C207D86C2F684F366 (String_t* ___0_arg0, bool ___1_arg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___0_arg0;
		bool L_1 = ___1_arg1;
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_SetEnabledAppCallbackByName_m4705ADB8109C59533C8D2117C87E6336EEB54A05(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppUtil_SetEnabledAppCallbackByName_m59C6CB27D92D72FD0841031C207D86C2F684F366_RuntimeMethod_var)));
	}

IL_0018:
	{
		return;
	}
}
// System.Boolean Firebase.AppUtil::GetEnabledAppCallbackByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtil_GetEnabledAppCallbackByName_m979A86ABDBC2257B697ABDE5015AA76DE5D04F70 (String_t* ___0_arg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		String_t* L_0 = ___0_arg0;
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AppUtilPINVOKE_GetEnabledAppCallbackByName_m97E56E8BCA68A8391B677BC814B1E3584FD985C5(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppUtil_GetEnabledAppCallbackByName_m979A86ABDBC2257B697ABDE5015AA76DE5D04F70_RuntimeMethod_var)));
	}

IL_0017:
	{
		bool L_5 = V_0;
		V_2 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Void Firebase.AppUtil::SetLogFunction(Firebase.LogUtil/LogMessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetLogFunction_m1C535B70AA8069AC3CE81CB05882946F841DACCB (LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4* ___0_arg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		LogMessageDelegate_t77F3A15F25C59A148AD9DE72CAF1B4F5A7C7D3A4* L_0 = ___0_arg0;
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_SetLogFunction_m76775D9FA055C83D4C65B6E6E7192E941A433EAE(L_0, NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppUtil_SetLogFunction_m1C535B70AA8069AC3CE81CB05882946F841DACCB_RuntimeMethod_var)));
	}

IL_0017:
	{
		return;
	}
}
// Firebase.GooglePlayServicesAvailability Firebase.AppUtil::CheckAndroidDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtil_CheckAndroidDependencies_m0D39BD88D8B8246E40B4F874956BE9884C8E0C93 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = AppUtilPINVOKE_CheckAndroidDependencies_m4FCC7A6957631074F898E119E993E423A6EB6C48(NULL);
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppUtil_CheckAndroidDependencies_m0D39BD88D8B8246E40B4F874956BE9884C8E0C93_RuntimeMethod_var)));
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		V_2 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		int32_t L_5 = V_2;
		return L_5;
	}
}
// System.Threading.Tasks.Task Firebase.AppUtil::FixAndroidDependenciesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AppUtil_FixAndroidDependenciesAsync_m27A782E22791F6CE0E354216AA5A652683BDDAD7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = AppUtilPINVOKE_FixAndroidDependencies_m1C8B8699F37268F8755608458DEAE04014F9D7C0(NULL);
		FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* L_1 = (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480*)il2cpp_codegen_object_new(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FutureVoid__ctor_m6E0B9CCC4BD6777C7369CA92E236C003CCCBC043(L_1, L_0, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = FutureVoid_GetTask_m68B083F4868870F64B15374FE3D1343543C863DF(L_1, NULL);
		V_0 = L_2;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = V_0;
		V_1 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_1;
		return L_4;
	}
}
// System.Void Firebase.AppUtil::InitializePlayServicesInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_InitializePlayServicesInternal_m89751D7035A1D3816E68F8FDCB4B5B2F8D2F23D2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_InitializePlayServicesInternal_m0027EC41EE00DCF8A530695B979F8AC1EBCEF814(NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppUtil_InitializePlayServicesInternal_m89751D7035A1D3816E68F8FDCB4B5B2F8D2F23D2_RuntimeMethod_var)));
	}

IL_0016:
	{
		return;
	}
}
// System.Void Firebase.AppUtil::TerminatePlayServicesInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_TerminatePlayServicesInternal_mED5F11E95B315C4014E0680574592ED30EBFF772 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(AppUtilPINVOKE_tDEBC116AADA75CA813340950FE2CB06F092C8342_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_TerminatePlayServicesInternal_mABD31836A1A4B753A27CFD9472F2513746ED4499(NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppUtil_TerminatePlayServicesInternal_mED5F11E95B315C4014E0680574592ED30EBFF772_RuntimeMethod_var)));
	}

IL_0016:
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
// System.String Firebase.VersionInfo::get_SdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VersionInfo_get_SdkVersion_mC32BFBE632414898F8525BD5AED76B512BA0E266 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67A6CCCC9B988CA6C77F51058F6A4BE90887BA98);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		V_0 = _stringLiteral67A6CCCC9B988CA6C77F51058F6A4BE90887BA98;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.String Firebase.VersionInfo::get_BuildSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VersionInfo_get_BuildSource_mFEB9E963780C505D73965545BFED5EB50EA7BAD5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD03CEEC65910C548D635624A78A8CFA458103DED);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		V_0 = _stringLiteralD03CEEC65910C548D635624A78A8CFA458103DED;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_0 = V_0;
		return L_0;
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
// Firebase.Platform.FirebaseAppUtils Firebase.Platform.FirebaseAppUtils::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F* FirebaseAppUtils_get_Instance_m844818D4028B3E8866E21AD1CB6E559038CEEC41 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F_il2cpp_TypeInfo_var);
		FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F* L_0 = ((FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F_il2cpp_TypeInfo_var))->___instance_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F* L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtils::TranslateDllNotFoundException(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtils_TranslateDllNotFoundException_m8D9620D2F9B093C4DBF14AD9803923F0763955B8 (FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_action;
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_TranslateDllNotFoundException_m8A53BF93797E69E0A396E5D387C8BE2FAC5A887E(L_0, NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtils::PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtils_PollCallbacks_m94AC1FCAA3602F030E6AA26C1FD6CB03E0F7155C (FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F* __this, const RuntimeMethod* method) 
{
	{
		AppUtil_PollCallbacks_mB25BC1FD5126974F80860A05910301AAF7589BFC(NULL);
		return;
	}
}
// Firebase.Platform.PlatformLogLevel Firebase.Platform.FirebaseAppUtils::GetLogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseAppUtils_GetLogLevel_m420F7E6140E65C5494538339E1322E33F3661105 (FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FirebaseApp_get_LogLevel_m64B54EED8CF1B5F8EA074612CF09E58026D23603(NULL);
		V_0 = L_0;
		goto IL_0012;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000b;
		}
		throw e;
	}

CATCH_000b:
	{// begin catch(Firebase.InitializationException)
		V_0 = 1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0012;
	}// end catch (depth: 1)

IL_0012:
	{
		int32_t L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = LogUtil_ConvertLogLevel_mE58CCE065A1D6EBEDDDDA2CDE76AFEA71E474216(L_1, NULL);
		V_1 = L_2;
		goto IL_001b;
	}

IL_001b:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtils__ctor_m77E9C2ADF611B1553A685AC953C5508DFD636CD4 (FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtils__cctor_m5444BBFA10C503F9659FF92D02A028B94DBB2204 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F* L_0 = (FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F*)il2cpp_codegen_object_new(FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FirebaseAppUtils__ctor_m77E9C2ADF611B1553A685AC953C5508DFD636CD4(L_0, NULL);
		((FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F_il2cpp_TypeInfo_var))->___instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtils_t8C7D1E11C5267B682E4E6FDC504141D5E1ECB49F_il2cpp_TypeInfo_var))->___instance_0), (void*)L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseException_set_ErrorCode_m65B2880424E85063D56405A009DAA13E3B106465_inline (FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CErrorCodeU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InitializationException_set_InitResult_m94032AD57F63718F6F20625FDB98958766C9D764_inline (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CInitResultU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____handle_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_mB0C4867EC8469233A3647955D2408E97D6107F91_inline (Action_t64BE78B93B14480A890D4907745BF10FC9C31B2F* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CSharpClassName_m04AD392AA82FCE1E6636F812672C77F294AC16EC_inline (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCSharpClassNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CppModuleName_mB91981F21F3F94D82CD64DD7BD810741CBB04E3A_inline (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCppModuleNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EnableModuleParams_get_AlwaysEnable_mC44F8EA7A9EDCD493C6B8E04E3B3CF00D09FDEA6_inline (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CAlwaysEnableU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* CreateDelegate_Invoke_m3C05F10053C0FD938376079571835049ADDD6186_inline (CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73* __this, const RuntimeMethod* method) 
{
	typedef FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InitializationException_get_InitResult_mC611CCB6BD3529EFD841FCF4BC099532973F75F2_inline (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CInitResultU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnableModuleParams_set_CSharpClassName_m9152635BDD8F608352C12F3447962C10F7DF4F43_inline (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CCSharpClassNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCSharpClassNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnableModuleParams_set_CppModuleName_mF1C3FE3BBE44DEDB23AF2879630075AEAC7106DF_inline (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CCppModuleNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCppModuleNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnableModuleParams_set_AlwaysEnable_m3F7638041BDA0CC3669AD7119C68ABD2B6F7C482_inline (EnableModuleParams_tAD8FA5CE1594F23B58D1083B7439AD7FB24CD762* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CAlwaysEnableU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// TValue
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	// TKey
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) 
{
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_0 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this->____task_0;
		return L_0;
	}
}

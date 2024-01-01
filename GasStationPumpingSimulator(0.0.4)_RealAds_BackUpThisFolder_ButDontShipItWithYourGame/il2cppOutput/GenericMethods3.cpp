#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename T1>
struct VirtualActionInvoker1Invoker;
template <typename T1>
struct VirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3Invoker<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3Invoker;
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3Invoker<R, T1*, T2, T3*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2 p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[3] = { p1, &p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename R>
struct InterfaceFuncInvoker0Invoker
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
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
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { &p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5 p5)
	{
		void* params[5] = { p1, p2, p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
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
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
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
struct InvokerFuncInvoker2
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		R ret;
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
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
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2*, T3, T4, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4, T5* p5)
	{
		R ret;
		void* params[5] = { p1, p2, &p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2*, T3*, T4*, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, p2, p3, p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2*, T3, T4, T5, T6*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4, T5 p5, T6* p6)
	{
		R ret;
		void* params[6] = { p1, p2, &p3, &p4, &p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2*, T3*, T4*, T5*, T6>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6 p6)
	{
		R ret;
		void* params[6] = { p1, p2, p3, p4, p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7<R, T1*, T2*, T3*, T4, T5, T6, T7*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5 p5, T6 p6, T7* p7)
	{
		R ret;
		void* params[7] = { p1, p2, p3, &p4, &p5, &p6, p7 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7<R, T1*, T2*, T3*, T4*, T5*, T6*, T7>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7 p7)
	{
		R ret;
		void* params[7] = { p1, p2, p3, p4, p5, p6, &p7 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerFuncInvoker8;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerFuncInvoker8<R, T1*, T2, T3*, T4*, T5, T6, T7*, T8>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4, T5 p5, T6 p6, T7* p7, T8 p8)
	{
		R ret;
		void* params[8] = { p1, &p2, p3, p4, &p5, &p6, p7, &p8 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct ConstrainedActionInvoker1;
template <typename T1>
struct ConstrainedActionInvoker1<T1*>
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[0]);
	}
};
template <typename R, typename T1, typename T2>
struct ConstrainedFuncInvoker2;
template <typename R, typename T1, typename T2>
struct ConstrainedFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>
struct ABSTweenPlugin_3_tAD778405CFD8B0E13EF7423622294E3E3913479B;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1;
// UnityEngine.UIElements.UQueryState`1/ActionQueryMatcher<System.Object>
struct ActionQueryMatcher_tB76860A856401075A2CF71D45AC72A9C0F1BB99E;
// UnityEngine.UIElements.UQueryState`1/ActionQueryMatcher<UnityEngine.UIElements.VisualElement>
struct ActionQueryMatcher_tBA08813774EDD8920F40BFFC2F27B8329C7923DD;
// System.Action`1<UnityEngine.UIElements.BaseVisualElementPanel>
struct Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<UnityEngine.Camera>
struct Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA;
// System.Action`1<System.IAsyncResult>
struct Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780;
// System.Action`1<UnityEngine.UIElements.IPanel>
struct Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6;
// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
// System.Action`1<UnityEngine.Material>
struct Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA;
// System.Action`1<UnityEngine.UIElements.MeshGenerationContext>
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Action`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E;
// System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8;
// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry>
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>
struct DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338;
// DG.Tweening.Core.DOGetter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>
struct DOSetter_1_t9EFF8DD70A15F455A6FE698A22BD0FE9683AC28E;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358;
// DG.Tweening.Core.DOSetter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct DOSetter_1_t856F6D96CAAFD28A21A398D2B3838D27D7E9BD16;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>
struct Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector>
struct Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement>
struct Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF;
// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct Dictionary_2_t29D782BF5D0A26D11A04865B4306B86575506834;
// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values>
struct Dictionary_2_t8B8AC3704119A64857E8D359CB4782C5ECEA90E7;
// System.Collections.Generic.Dictionary`2<DG.Tweening.Tween,DG.Tweening.Core.TweenLink>
struct Dictionary_2_tFD00E28E4EE499B3B2F468CCB593BD9ACCE80357;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>>
struct Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0;
// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsBaseConverter>
struct Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9;
// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsDirectConverter>
struct Dictionary_2_tE2FB86855847810E74AE4F09A6480D6AE3251A51;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData>
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph>
struct Dictionary_2_tC61348D10610A6B3D7B65102D82AC3467D59EAA7;
// System.Collections.Generic.Dictionary`2<System.UInt32,TMPro.TMP_Character>
struct Dictionary_2_tCB5FEF8D6CEA1557D9B9BA25946AD6BF3E6C14D0;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StylePropertyAnimationSystem/ElementPropertyPair,System.Int32>
struct Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574;
// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A;
// System.Linq.Expressions.Expression`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4;
// System.Func`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB;
// System.Func`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9;
// System.Func`2<System.Single,System.Single>
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2;
// System.Func`2<System.Threading.Tasks.Task,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22;
// System.Func`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.String>
struct Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Func`3<UnityEngine.LogType,System.Object,System.Boolean>
struct Func_3_t6E57AF981293DC26E9631AA2A14D231440CC20A3;
// System.Func`3<System.String,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0;
// System.Func`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799;
// System.Func`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Single,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_4_t2D728D40D290F8C65346C870D314F893B5896872;
// System.Func`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9;
// UnityEngine.UIElements.UIR.Utility/GPUBuffer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct GPUBuffer_1_t59623B2A3B8EFD33FB05C973C4C4EAFCF89ED241;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.HashSet`1<System.UInt32>
struct HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A;
// System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87;
// Unity.Services.Core.Telemetry.Internal.ICachePersister`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ICachePersister_1_t06D4FAB7FB550A468EA2060097D1559096771D1B;
// System.Collections.Generic.IDictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>
struct IDictionary_2_tF2ECBB7A1A6D5DBB7D72E7B2F8E55A1159709C07;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>
struct IEnumerable_1_t49C2F44B68A54E1D7F267F9CC6AEAE8497D42901;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEqualityComparer`1<System.Linq.Expressions.ParameterExpression>
struct IEqualityComparer_1_t3950A1C72D0704C9A5D08F255CB6BE1525EDC4A9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.UIElements.StyleSheets.StylePropertyId>
struct IEqualityComparer_1_t341DBC625B94A179D2F2C3E3CF45C76E281F4612;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// UnityEngine.UIElements.IStyleValue`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IStyleValue_1_t0807BFB3B6427E5EA21E4D85C41469BE44C00920;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values>
struct KeyCollection_tAE1CD1CE327D07F072532A89E6854F2C33EB014A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Object>
struct KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4;
// System.Collections.Generic.LinkedList`1<UnityEngine.UIElements.UIR.UIRenderDevice/DeviceToFree>
struct LinkedList_1_t09F6FB09C766455615BBF59716D285304C49E0E7;
// UnityEngine.UIElements.UIR.LinkedPool`1<UnityEngine.UIElements.UIR.MeshHandle>
struct LinkedPool_1_tD8A175EE023C8220138E51E722F4A20ACE9CA851;
// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<System.Object,System.Object>
struct ListQueryMatcher_1_t4D10BEF648526B008BEB75C8576A7D1EBFD73A83;
// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<System.Object,UnityEngine.UIElements.VisualElement>
struct ListQueryMatcher_1_tC447E3396770813CE332360F6EECEEFB6B51FA69;
// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VisualElement>
struct ListQueryMatcher_1_t7F21A0BB6BC47F1797366366A8E33731906C2940;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>
struct List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.UIRenderDevice/AllocToFree>>
struct List_1_tB86898E2E533634C35EC58EC5DAE3353038A9210;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate>>
struct List_1_tA79C35FB5E50135962B53960CB758B9262700632;
// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable>
struct List_1_t0C6BF1E3B166E9D2A63FC3291C519D61B950BFDC;
// System.Collections.Generic.List`1<System.Attribute>
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph>
struct List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C;
// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>
struct List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B;
// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry>
struct List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC;
// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher>
struct List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelector>
struct List_1_tB8CE94A1885E4D10B34A91CC9D21169286DC0A63;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
// System.Collections.Generic.List`1<TMPro.TMP_Character>
struct List_1_tCE1ACAA0C2736A7797B2C134895298CAB10BEB5E;
// System.Collections.Generic.List`1<TMPro.TMP_FontAsset>
struct List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF;
// System.Collections.Generic.List`1<TMPro.TMP_Glyph>
struct List_1_tAB7976FADCF872E418770E60783056C23394843D;
// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD;
// System.Collections.Generic.List`1<DG.Tweening.TweenCallback>
struct List_1_t6EF58ECBFCFA6FA99AC1281CE3A14BB083B08524;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsConverter>
struct List_1_t2914BC22C8C5E8C02F2AB4FA0C6EBD117DA2A753;
// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>
struct List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StylePropertyAnimationSystem/Values>
struct List_1_t491E344573B9D6F61E36AF56132B7412453928C9;
// System.Collections.Generic.List`1<UnityEngine.UIElements.TemplateAsset/AttributeOverride>
struct List_1_t70EE7982F45810D4B024CF720D910E67974A3094;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct ObjectPool_1_t14AD861DB16C1D8128773A1568BD9925E67A9ADB;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.InheritedData>
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.LayoutData>
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.RareData>
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransformData>
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransitionData>
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.VisualData>
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
// System.Buffers.SpanAction`2<System.Char,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A;
// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26;
// System.Collections.Generic.Stack`1<DG.Tweening.Tween>
struct Stack_1_t5BFE231094D4C21C56F26E6EE0BC9A194AD9A5B6;
// System.Collections.Generic.Stack`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct TaskFactory_1_t3B055CB72CA2D1BEF08BD1C91FFB09DB3268521E;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>
struct TaskFactory_1_t4BEAD6CE2527DBE682C128CEAA0FF2A79483E96C;
// System.Threading.Tasks.TaskFactory`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TransitionEventsFrameState<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB;
// System.Tuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8;
// System.Tuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67;
// DG.Tweening.TweenCallback`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TweenCallback_1_tA6255E5281FE61C846B926E1FF9DF808830DB7B8;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>
struct TweenerCore_3_t0CD1AF1B188E9D008629D280210B5FA8C761E336;
// DG.Tweening.Core.TweenerCore`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB;
// UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values>
struct ValueCollection_t04D5F77EBC72D81BB7FE7199D6C9DC65DEB60064;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Object>
struct ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914;
// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Values_1_tD44BBEC769B1388DCA51C01019802B242F987014;
// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/EmptyData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>[]
struct EmptyDataU5BU5D_t4F13631B1440411479135A222DA84C0A8FC754FD;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.VisualScripting.FullSerializer.fsData>[]
struct EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values>[]
struct EntryU5BU5D_t524C33EA8D08013B8734724ABCA925485CF3B799;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Object>[]
struct EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>[]
struct HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4;
// System.Collections.Generic.HashSet`1/Slot<System.Linq.Expressions.ParameterExpression>[]
struct SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338;
// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/StyleData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>[]
struct StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TimingData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>[]
struct TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.UIElements.ComputedTransitionProperty[]
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.UIElements.StyleSheets.Dimension[]
struct DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.UIElements.IVisualTreeUpdater[]
struct IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.TextCore.Text.LineInfo[]
struct LineInfoU5BU5D_t37598F2175B291797270D1161DC29B6296FB169D;
// UnityEngine.TextCore.Text.LinkInfo[]
struct LinkInfoU5BU5D_tB7EB23E47AF29CCBEC884F9D0DB95BC97F62AE51;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// UnityEngine.TextCore.Text.MeshInfo[]
struct MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// UnityEngine.TextCore.Text.PageInfo[]
struct PageInfoU5BU5D_tFEA2CF88695491CFC2F2A2EF6BDCC56E52B0A6D4;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UIElements.RuleMatcher[]
struct RuleMatcherU5BU5D_t0135EA06151E72D04414F3EAF9420CB85EE2236C;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// UnityEngine.UIElements.StyleSheets.ScalableImage[]
struct ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIElements.StyleComplexSelector[]
struct StyleComplexSelectorU5BU5D_tF7B5239DE9BF477DECF97EFBA7CB1D71C45DB857;
// UnityEngine.UIElements.StyleSheets.StylePropertyId[]
struct StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359;
// UnityEngine.UIElements.StyleRule[]
struct StyleRuleU5BU5D_t7897A39D88CA043B2BFB5B28C53B41564EBA3AF3;
// UnityEngine.UIElements.StyleSelector[]
struct StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D;
// UnityEngine.UIElements.StyleSelectorPart[]
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_FontWeightPair[]
struct TMP_FontWeightPairU5BU5D_t0A3A5955F13FEB2F7329D81BA157110DB99F9F37;
// TMPro.TMP_LineInfo[]
struct TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E;
// TMPro.TMP_LinkInfo[]
struct TMP_LinkInfoU5BU5D_tE11BE54A5923BD2148E716289F44EA465E06536E;
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7;
// TMPro.TMP_PageInfo[]
struct TMP_PageInfoU5BU5D_tE3DAAA8E2E9147F97C424A9034F677A516E8DAF9;
// TMPro.TMP_WordInfo[]
struct TMP_WordInfoU5BU5D_tD1759E5A84DCCCD42B718D79E953E72A432BB4DC;
// UnityEngine.TextCore.Text.TextElementInfo[]
struct TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191;
// DG.Tweening.Tween[]
struct TweenU5BU5D_t6E5F58C51FA0DA64C990C1C7E02EE9B70220C2F7;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UIElements.VisualElement[]
struct VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF;
// UnityEngine.TextCore.Text.WordInfo[]
struct WordInfoU5BU5D_tAD74C9720883D7BB229A20FFAE9EFD2CF9963F7B;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// UnityEngine.UIElements.StylePropertyAnimationSystem/Values[]
struct ValuesU5BU5D_t5332999C48416329B2A447FCD8C71113DDB459EA;
// UnityEngine.UIElements.StyleSheet/ImportStruct[]
struct ImportStructU5BU5D_t42D231FD5BB4B620965D7BED87D56D531B4C7AE9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.UIElements.ContextualMenuManager
struct ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// DG.Tweening.Core.DOTweenComponent
struct DOTweenComponent_tEA6C5A1520B40681AE6FA1703529F60EBC3691DC;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UIElements.UIR.DrawParams
struct DrawParams_t523864F415D78BD8BB14E8B7BD349594D6187443;
// DG.Tweening.Core.Easing.EaseCurve
struct EaseCurve_t36BD7EAD5E58656A06E0D71596FF781803BE9C5F;
// DG.Tweening.EaseFunction
struct EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04;
// UnityEngine.UIElements.ElementUnderPointer
struct ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
// System.Exception
struct Exception_t;
// Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy
struct ExponentialBackOffRetryPolicy_t96CDC709DB5E2ED182D549B2DBABC6E157954DCF;
// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
// TMPro.FaceInfo_Legacy
struct FaceInfo_Legacy_t23B118EFD5AB7162515ABF18C0212DF155CCF7B8;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UIElements.HierarchyEvent
struct HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705;
// Unity.Services.Core.Scheduler.Internal.IActionScheduler
struct IActionScheduler_t0D753016E15BF53FB30C138509CFC34FA0D395F1;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.UIElements.ICursorManager
struct ICursorManager_t78B026DED2559C62810B21C54C5F882457073A8B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// Unity.Services.Core.Telemetry.Internal.IUnityWebRequestSender
struct IUnityWebRequestSender_t55426BC4098CF942DFAE2B7D417E252DC43668BE;
// UnityEngine.UIElements.IUxmlAttributes
struct IUxmlAttributes_t9B6679F04874117C59014DE49C35B1841F9A1DDE;
// UnityEngine.UIElements.IVisualTreeUpdater
struct IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t5B384C1DCF0750B44E124D640E4F041DB19B7FD1;
// UnityEngine.UIElements.InlineStyleAccess
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
// System.Linq.Expressions.Interpreter.InterpretedFrame
struct InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// TMPro.KerningTable
struct KerningTable_t040C3FE3B519B12AADE1C5B00628581551D5AB6B;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// System.Threading.Lock
struct Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.UIElements.UIR.MeshHandle
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662;
// UnityEngine.UIElements.UIR.Page
struct Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
// UnityEngine.UIElements.RepaintData
struct RepaintData_t90534752135661579EC254884F550545D001B5EA;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Linq.Expressions.StackGuard
struct StackGuard_t6F37D81861288F2039A29A88A6287419F220E849;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.UIElements.StyleComplexSelector
struct StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD;
// UnityEngine.UIElements.StylePropertyAnimationSystem
struct StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718;
// UnityEngine.UIElements.StyleRule
struct StyleRule_t69F0C0989004F85BBD9C72BC7A73F79BFE61651E;
// UnityEngine.UIElements.StyleSelector
struct StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362;
// UnityEngine.UIElements.StyleSheet
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
// UnityEngine.UIElements.StyleVariableContext
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_FontFeatureTable
struct TMP_FontFeatureTable_t726A09E64FDF682A8FFE294BB6CFE7747F6C40EA;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// Unity.Services.Core.Telemetry.Internal.TelemetrySender
struct TelemetrySender_t67AA5E279317D039D339BB675990F0BB795ADA3F;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UIElements.UIR.TextureSlotManager
struct TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C;
// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24;
// DG.Tweening.TweenParams
struct TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA;
// System.Type
struct Type_t;
// UnityEngine.UIElements.UIR.UIRenderDevice
struct UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UnityException
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067;
// UnityEngine.UIElements.UxmlAttributeDescription
struct UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2;
// UnityEngine.UIElements.UxmlTypeRestriction
struct UxmlTypeRestriction_t2C4CE1ED76502CDF80010880E058AF0582910A92;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
// UnityEngine.UIElements.VisualTreeAsset
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// System.Xml.Linq.XContainer
struct XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF;
// System.Xml.Linq.XDeclaration
struct XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990;
// System.Xml.Linq.XDocument
struct XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1;
// System.Xml.Linq.XObject
struct XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29;
// System.Xml.Schema.XmlListConverter
struct XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF;
// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E;
// UnityEngine.Yoga.YogaConfig
struct YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345;
// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA;
// Unity.VisualScripting.FullSerializer.fsBaseConverter
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04;
// Unity.VisualScripting.FullSerializer.fsConfig
struct fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726;
// Unity.VisualScripting.FullSerializer.fsContext
struct fsContext_t3B227C205D84208E2D8934429C07677542C97B5F;
// Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager
struct fsCyclicReferenceManager_tED0335497D4376E432D911F842D977B9D52B5EA0;
// Unity.VisualScripting.FullSerializer.fsData
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23;
// Unity.VisualScripting.FullSerializer.fsSerializer
struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC;
// Unity.VisualScripting.AttributeUtility/AttributeCache
struct AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F;
// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536;
// UnityEngine.UIElements.StylePropertyAnimationSystem/Values
struct Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesBackground
struct ValuesBackground_tFF4533C18E78BDA24210ECA0967C209A2FD2FB34;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesColor
struct ValuesColor_tDE4E373E9165A21D96B77B831D7663BE93073904;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesFloat
struct ValuesFloat_t79D7FFC3D96EA35AFBCE6E41A84C30186FFFF0C2;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesFont
struct ValuesFont_tD9B58EA95F0D99292A54C9C6C879318BBE3B02A4;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesFontDefinition
struct ValuesFontDefinition_t4D0C2DECA9435D3EB901FE70837AD878111678F7;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesInt
struct ValuesInt_t2D0093355274C731BB6DF9C8933EEEDA42276367;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesLength
struct ValuesLength_tCE4AE0723109EE10076DBD46F7A853F202AF5915;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesRotate
struct ValuesRotate_t90582D6825FCBEF3C2A68160CCEC275C51217C63;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesScale
struct ValuesScale_t21E6FC5B09789CB4974FC2ED15C3F83B863FCF8A;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesTextShadow
struct ValuesTextShadow_t50CB05DF0E7770164252616605C61B37DB4A966C;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesTransformOrigin
struct ValuesTransformOrigin_tB46EC0F073E360E1431CCD4E580BA675D716823F;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesTranslate
struct ValuesTranslate_tFB5B432755E0DAA7DD8C95E78FDCC78C4885940B;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// UnityEngine.UIElements.VisualElement/CustomStyleAccess
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
// UnityEngine.UIElements.VisualElement/TypeData
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;
// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449;
// Unity.VisualScripting.FullSerializer.fsSerializer/fsLazyCycleDefinitionWriter
struct fsLazyCycleDefinitionWriter_t8DA7FBB3131ECC4D5F09CC4D66DE74961DA5511A;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EaseCurve_t36BD7EAD5E58656A06E0D71596FF781803BE9C5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tACBF5A1656250800CE861707354491F0611F6624_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenerCore_3_t0CD1AF1B188E9D008629D280210B5FA8C761E336_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XNode_t185C922661054AAD14F49676DD6F3CB10D652A30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A452795E040C66D151B05EE8648BF3F8016F207;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral24CC8D396132365E532646F936DFC8579E2299B2;
IL2CPP_EXTERN_C String_t* _stringLiteral295C1C91484E27E03B860FDA8F1EE84730518E64;
IL2CPP_EXTERN_C String_t* _stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356;
IL2CPP_EXTERN_C String_t* _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C;
IL2CPP_EXTERN_C String_t* _stringLiteral537F955588893B499438876FBA6FFDB5522EB027;
IL2CPP_EXTERN_C String_t* _stringLiteral5977A16B28199C20C0F8770A4DADB9C5CC05247A;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE;
IL2CPP_EXTERN_C String_t* _stringLiteral7AD319493499620E43634FF644A0CEF1624086AD;
IL2CPP_EXTERN_C String_t* _stringLiteral7F55817E612497BA20DDBC0EA7111ED68FC1666E;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8B306A6309396858B4E770A343967C113B445C40;
IL2CPP_EXTERN_C String_t* _stringLiteral97B5A6868822BFCE4A13A9E1D6B6FE8D25C6E5C3;
IL2CPP_EXTERN_C String_t* _stringLiteralA75CF6F408A626E601212712FB539C300D88CDBE;
IL2CPP_EXTERN_C String_t* _stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B;
IL2CPP_EXTERN_C String_t* _stringLiteralB2EAC54936C480056DBBB5B97FD1CFD1C79B1990;
IL2CPP_EXTERN_C String_t* _stringLiteralB382FDA4B30D0397739E8EC9B987AB66568010F7;
IL2CPP_EXTERN_C String_t* _stringLiteralBA2F217B5B8E3E9CFB32D71843BB131F5263FF34;
IL2CPP_EXTERN_C String_t* _stringLiteralBE9FAAB12E6FC68BB89C81F3D0414F95EE54E1E2;
IL2CPP_EXTERN_C String_t* _stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F;
IL2CPP_EXTERN_C String_t* _stringLiteralC472776C9180B19630B6E4112538D935B62E3F35;
IL2CPP_EXTERN_C String_t* _stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775;
IL2CPP_EXTERN_C String_t* _stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC9365D4C1C592580176E99B94E4C370640A2640F;
IL2CPP_EXTERN_C String_t* _stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralE8EF55A3CCCC9D89E93D42E69A1EFA5B7D048B41;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mE2CB2DBE9CFA9FD3FF4707BB20A9B1FE52C76273_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EaseCurve_Evaluate_m036A88A768920A29FA6C7EA6E78646F679C9DFEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA2DB3B33B757C906EBF689F682FD659A191A242B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m71E6FD21D54996DACBC26526FABF5E57B9E4C3B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSliceUnsafeUtility_GetUnsafePtr_TisDrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4_m3F0318274FE0636367B91558C6673DEF834FB1A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSlice_1_get_Length_m2566843C81FEFDDF6407962D4E34F13C3133028D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StackGuard_RunOnEmptyStackCore_TisRuntimeObject_m3E82B5CE8F4D3419B7B2926F61607D2901037384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringUtils_ForgivingCaseSensitiveFind_TisIl2CppFullySharedGenericAny_mD725EDE7F863EEED09CA1D0D2908772E8A2B6839_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Create_TisIl2CppFullySharedGenericAny_m9AD9A2FD15EE0B25DC884BEF778D0D414364F9CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetException_m458D56254FBD7F874452154131D60AADD2131334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskExtensions_Unwrap_TisIl2CppFullySharedGenericAny_m4FB34270E579A71A15A0CCE1ACA21650A7D80AA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToApm_End_TisIl2CppFullySharedGenericAny_m91FFD6A6ED859B8F22E6E190E8D8C9E7E161442D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_ContinueWith_TisIl2CppFullySharedGenericAny_m1799A1B94805E52E52A11BFF9FDD873DE7C499C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisIl2CppFullySharedGenericAny_m2223C6E6E1675E311C66C5695E2F0728BED068E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisIl2CppFullySharedGenericAny_m8430FE61464A9242E9DFD47EA2551C8B3F5CD64F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromException_TisIl2CppFullySharedGenericAny_m5424F2AE940D86E928CD58A721AA25BDAF2A7229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_Run_TisIl2CppFullySharedGenericAny_mF39F8DFD4DC180998B23C404C0030D0856730D6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisIl2CppFullySharedGenericStruct_mDC6FE57DC7D62BAC05E6231541767FA81448490E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadPool_QueueUserWorkItem_TisIl2CppFullySharedGenericAny_m1BF539C01328BDA70BEABD795BFABD5F18D7F8CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIRenderDevice_DrawRanges_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m71F34C7DEDCF897C928FC2BED61084149C5AF648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryBuilder_1__ctor_m841C38F69A30425CCEA1F93525C97AD0B9648486_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryExtensions_Query_TisRuntimeObject_m54F26487B79AE0ECC38A0B9D6615D7FD6B1F56C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxmlAttributeDescription_GetValueFromBag_TisIl2CppFullySharedGenericAny_mAD4F4838D245291B33A0A6819595AAE917FA073A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppFullySharedGenericAny_mD6B660A63955117687D6131FC1DB255161D1A2BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsContext_Get_TisIl2CppFullySharedGenericAny_m291C6F4855EE2BB88FED4FA436058E2BDABA90A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsData_Cast_TisIl2CppFullySharedGenericAny_m59964E85C8553DF957981BF63F5C2EC6703B8888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D;
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;
struct TweenU5BU5D_t6E5F58C51FA0DA64C990C1C7E02EE9B70220C2F7;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.StackGuard/<>c__3`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CU3Ec__3_2_tBB29CF1C815215807833CEA7087B12B63B7551BC  : public RuntimeObject
{
};

// Newtonsoft.Json.Utilities.StringUtils/<>c__DisplayClass14_0`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CU3Ec__DisplayClass14_0_1_t76EA529FB0FC3BD68537D185424BE9FB75526E96  : public RuntimeObject
{
	// System.Func`2<TSource,System.String> Newtonsoft.Json.Utilities.StringUtils/<>c__DisplayClass14_0`1::valueSelector
	Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C* ___valueSelector_0;
	// System.String Newtonsoft.Json.Utilities.StringUtils/<>c__DisplayClass14_0`1::testValue
	String_t* ___testValue_1;
};

// System.Threading.ThreadPool/<>c__DisplayClass17_0`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9  : public RuntimeObject
{
	// System.Action`1<TState> System.Threading.ThreadPool/<>c__DisplayClass17_0`1::callBack
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___callBack_0;
};

// Unity.Services.Core.Telemetry.Internal.TelemetrySender/<>c__DisplayClass7_0`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CU3Ec__DisplayClass7_0_1_tB2C1B257260A104677401C497C4FE096A4073BE2  : public RuntimeObject
{
	// Unity.Services.Core.Telemetry.Internal.TelemetrySender Unity.Services.Core.Telemetry.Internal.TelemetrySender/<>c__DisplayClass7_0`1::<>4__this
	TelemetrySender_t67AA5E279317D039D339BB675990F0BB795ADA3F* ___U3CU3E4__this_0;
	// System.Byte[] Unity.Services.Core.Telemetry.Internal.TelemetrySender/<>c__DisplayClass7_0`1::serializedPayload
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___serializedPayload_1;
	// System.Int32 Unity.Services.Core.Telemetry.Internal.TelemetrySender/<>c__DisplayClass7_0`1::sendCount
	int32_t ___sendCount_2;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> Unity.Services.Core.Telemetry.Internal.TelemetrySender/<>c__DisplayClass7_0`1::completionSource
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___completionSource_3;
};

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1  : public RuntimeObject
{
};

// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D* ____entries_1;
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
	KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values>
struct Dictionary_2_t8B8AC3704119A64857E8D359CB4782C5ECEA90E7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t524C33EA8D08013B8734724ABCA925485CF3B799* ____entries_1;
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
	KeyCollection_tAE1CD1CE327D07F072532A89E6854F2C33EB014A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t04D5F77EBC72D81BB7FE7199D6C9DC65DEB60064* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92* ____entries_1;
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
	KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// Unity.Services.Core.Telemetry.Internal.DisabledCachePersister`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct DisabledCachePersister_1_t57E55E76736D9DBF6866DA2B52B63BAB3FA239E6  : public RuntimeObject
{
};

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};

// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// UnityEngine.UIElements.UQuery/IsOfType`1<System.Object>
struct IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher>
struct List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RuleMatcherU5BU5D_t0135EA06151E72D04414F3EAF9420CB85EE2236C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.StylePropertyAnimationSystem/Values>
struct List_1_t491E344573B9D6F61E36AF56132B7412453928C9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ValuesU5BU5D_t5332999C48416329B2A447FCD8C71113DDB459EA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ____task_0;
};

// System.Tuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8 : public RuntimeObject {};

// System.Tuple`3<System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Tuple_3_tF0821A7BEADD05320E476CF9AB276DF6ECE58A83 : public RuntimeObject {};

// System.Tuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB : public RuntimeObject {};

// UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482 : public RuntimeObject {};

// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89  : public RuntimeObject
{
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart_3;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// UnityEngine.UIElements.CallbackEventHandler
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry_0;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// DG.Tweening.Core.Debugger
struct Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0  : public RuntimeObject
{
};

// DG.Tweening.Core.Easing.EaseCurve
struct EaseCurve_t36BD7EAD5E58656A06E0D71596FF781803BE9C5F  : public RuntimeObject
{
	// UnityEngine.AnimationCurve DG.Tweening.Core.Easing.EaseCurve::_animCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____animCurve_0;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
};

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590  : public RuntimeObject
{
};

// Unity.Services.Core.Telemetry.Internal.FileCachePersister
struct FileCachePersister_tD394A50E26C1D87D1DCB622E10B5E36FCEC8FA30  : public RuntimeObject
{
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

// System.Linq.Expressions.StackGuard
struct StackGuard_t6F37D81861288F2039A29A88A6287419F220E849  : public RuntimeObject
{
	// System.Int32 System.Linq.Expressions.StackGuard::_executionStackCount
	int32_t ____executionStackCount_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Newtonsoft.Json.Utilities.StringUtils
struct StringUtils_t75109D93154FD28B31CEBBBC5849300A7F7C3842  : public RuntimeObject
{
};

// UnityEngine.UIElements.StyleComplexSelector
struct StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD  : public RuntimeObject
{
	// System.Int32 UnityEngine.UIElements.StyleComplexSelector::m_Specificity
	int32_t ___m_Specificity_0;
	// UnityEngine.UIElements.StyleRule UnityEngine.UIElements.StyleComplexSelector::<rule>k__BackingField
	StyleRule_t69F0C0989004F85BBD9C72BC7A73F79BFE61651E* ___U3CruleU3Ek__BackingField_1;
	// UnityEngine.UIElements.StyleSelector[] UnityEngine.UIElements.StyleComplexSelector::m_Selectors
	StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* ___m_Selectors_2;
	// System.Int32 UnityEngine.UIElements.StyleComplexSelector::ruleIndex
	int32_t ___ruleIndex_3;
	// UnityEngine.UIElements.StyleComplexSelector UnityEngine.UIElements.StyleComplexSelector::nextInTable
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___nextInTable_4;
	// System.Int32 UnityEngine.UIElements.StyleComplexSelector::orderInStyleSheet
	int32_t ___orderInStyleSheet_5;
};

// UnityEngine.UIElements.StylePropertyAnimationSystem
struct StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718  : public RuntimeObject
{
	// System.Int64 UnityEngine.UIElements.StylePropertyAnimationSystem::m_CurrentTimeMs
	int64_t ___m_CurrentTimeMs_0;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesFloat UnityEngine.UIElements.StylePropertyAnimationSystem::m_Floats
	ValuesFloat_t79D7FFC3D96EA35AFBCE6E41A84C30186FFFF0C2* ___m_Floats_1;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesInt UnityEngine.UIElements.StylePropertyAnimationSystem::m_Ints
	ValuesInt_t2D0093355274C731BB6DF9C8933EEEDA42276367* ___m_Ints_2;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesLength UnityEngine.UIElements.StylePropertyAnimationSystem::m_Lengths
	ValuesLength_tCE4AE0723109EE10076DBD46F7A853F202AF5915* ___m_Lengths_3;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesColor UnityEngine.UIElements.StylePropertyAnimationSystem::m_Colors
	ValuesColor_tDE4E373E9165A21D96B77B831D7663BE93073904* ___m_Colors_4;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesBackground UnityEngine.UIElements.StylePropertyAnimationSystem::m_Backgrounds
	ValuesBackground_tFF4533C18E78BDA24210ECA0967C209A2FD2FB34* ___m_Backgrounds_5;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesFontDefinition UnityEngine.UIElements.StylePropertyAnimationSystem::m_FontDefinitions
	ValuesFontDefinition_t4D0C2DECA9435D3EB901FE70837AD878111678F7* ___m_FontDefinitions_6;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesFont UnityEngine.UIElements.StylePropertyAnimationSystem::m_Fonts
	ValuesFont_tD9B58EA95F0D99292A54C9C6C879318BBE3B02A4* ___m_Fonts_7;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesTextShadow UnityEngine.UIElements.StylePropertyAnimationSystem::m_TextShadows
	ValuesTextShadow_t50CB05DF0E7770164252616605C61B37DB4A966C* ___m_TextShadows_8;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesScale UnityEngine.UIElements.StylePropertyAnimationSystem::m_Scale
	ValuesScale_t21E6FC5B09789CB4974FC2ED15C3F83B863FCF8A* ___m_Scale_9;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesRotate UnityEngine.UIElements.StylePropertyAnimationSystem::m_Rotate
	ValuesRotate_t90582D6825FCBEF3C2A68160CCEC275C51217C63* ___m_Rotate_10;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesTranslate UnityEngine.UIElements.StylePropertyAnimationSystem::m_Translate
	ValuesTranslate_tFB5B432755E0DAA7DD8C95E78FDCC78C4885940B* ___m_Translate_11;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesTransformOrigin UnityEngine.UIElements.StylePropertyAnimationSystem::m_TransformOrigin
	ValuesTransformOrigin_tB46EC0F073E360E1431CCD4E580BA675D716823F* ___m_TransformOrigin_12;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StylePropertyAnimationSystem/Values> UnityEngine.UIElements.StylePropertyAnimationSystem::m_AllValues
	List_1_t491E344573B9D6F61E36AF56132B7412453928C9* ___m_AllValues_13;
	// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values> UnityEngine.UIElements.StylePropertyAnimationSystem::m_PropertyToValues
	Dictionary_2_t8B8AC3704119A64857E8D359CB4782C5ECEA90E7* ___m_PropertyToValues_14;
};

// UnityEngine.UIElements.StyleSelector
struct StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362  : public RuntimeObject
{
	// UnityEngine.UIElements.StyleSelectorPart[] UnityEngine.UIElements.StyleSelector::m_Parts
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___m_Parts_0;
	// UnityEngine.UIElements.StyleSelectorRelationship UnityEngine.UIElements.StyleSelector::m_PreviousRelationship
	int32_t ___m_PreviousRelationship_1;
	// System.Int32 UnityEngine.UIElements.StyleSelector::pseudoStateMask
	int32_t ___pseudoStateMask_2;
	// System.Int32 UnityEngine.UIElements.StyleSelector::negatedPseudoStateMask
	int32_t ___negatedPseudoStateMask_3;
};

// UnityEngine.UIElements.StyleValueExtensions
struct StyleValueExtensions_t726B74FF15FD6E36DAD4BF0C34078437975FF358  : public RuntimeObject
{
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

// System.Threading.Tasks.TaskExtensions
struct TaskExtensions_t42E5DF414FEA6C24A159498E2923737D73E950EB  : public RuntimeObject
{
};

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_2;
};

// System.Threading.Tasks.TaskToApm
struct TaskToApm_t85E4852EFE616610E8B037ECB1926B91DEA7D458  : public RuntimeObject
{
};

// Unity.Services.Core.Telemetry.Internal.TelemetrySender
struct TelemetrySender_t67AA5E279317D039D339BB675990F0BB795ADA3F  : public RuntimeObject
{
	// System.String Unity.Services.Core.Telemetry.Internal.TelemetrySender::<TargetUrl>k__BackingField
	String_t* ___U3CTargetUrlU3Ek__BackingField_0;
	// Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy Unity.Services.Core.Telemetry.Internal.TelemetrySender::m_RetryPolicy
	ExponentialBackOffRetryPolicy_t96CDC709DB5E2ED182D549B2DBABC6E157954DCF* ___m_RetryPolicy_1;
	// Unity.Services.Core.Scheduler.Internal.IActionScheduler Unity.Services.Core.Telemetry.Internal.TelemetrySender::m_Scheduler
	RuntimeObject* ___m_Scheduler_2;
	// Unity.Services.Core.Telemetry.Internal.IUnityWebRequestSender Unity.Services.Core.Telemetry.Internal.TelemetrySender::m_RequestSender
	RuntimeObject* ___m_RequestSender_3;
};

// Unity.Services.Core.Telemetry.Internal.TelemetryUtils
struct TelemetryUtils_tF7DD11C944BA422A98D15E8B5ABB04B50BCA745F  : public RuntimeObject
{
};

// System.Threading.ThreadPool
struct ThreadPool_t1EE413B12D8BD9F25602041645272351A26711FC  : public RuntimeObject
{
};

// System.ThrowHelper
struct ThrowHelper_tDAFF1075E5B21B120EF09F3F2EAD51037DAB6F73  : public RuntimeObject
{
};

// System.Tuple
struct Tuple_tB9DB3180F4853E781BFDDC3093798F56B27AB03F  : public RuntimeObject
{
};

// DG.Tweening.TweenExtensions
struct TweenExtensions_t4C76E091AE2AF0DE956B5C2106E5F8BC882D6BC7  : public RuntimeObject
{
};

// DG.Tweening.Core.TweenManager
struct TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1  : public RuntimeObject
{
};

// DG.Tweening.TweenParams
struct TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA  : public RuntimeObject
{
	// System.Object DG.Tweening.TweenParams::id
	RuntimeObject* ___id_1;
	// System.Object DG.Tweening.TweenParams::target
	RuntimeObject* ___target_2;
	// DG.Tweening.UpdateType DG.Tweening.TweenParams::updateType
	int32_t ___updateType_3;
	// System.Boolean DG.Tweening.TweenParams::isIndependentUpdate
	bool ___isIndependentUpdate_4;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onStart
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart_5;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onPlay
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay_6;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onRewind
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind_7;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onUpdate
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate_8;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onStepComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete_9;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete_10;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onKill
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill_11;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.TweenParams::onWaypointChange
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange_12;
	// System.Boolean DG.Tweening.TweenParams::isRecyclable
	bool ___isRecyclable_13;
	// System.Boolean DG.Tweening.TweenParams::isSpeedBased
	bool ___isSpeedBased_14;
	// System.Boolean DG.Tweening.TweenParams::autoKill
	bool ___autoKill_15;
	// System.Int32 DG.Tweening.TweenParams::loops
	int32_t ___loops_16;
	// DG.Tweening.LoopType DG.Tweening.TweenParams::loopType
	int32_t ___loopType_17;
	// System.Single DG.Tweening.TweenParams::delay
	float ___delay_18;
	// System.Boolean DG.Tweening.TweenParams::isRelative
	bool ___isRelative_19;
	// DG.Tweening.Ease DG.Tweening.TweenParams::easeType
	int32_t ___easeType_20;
	// DG.Tweening.EaseFunction DG.Tweening.TweenParams::customEase
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase_21;
	// System.Single DG.Tweening.TweenParams::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_22;
	// System.Single DG.Tweening.TweenParams::easePeriod
	float ___easePeriod_23;
};

// DG.Tweening.TweenSettingsExtensions
struct TweenSettingsExtensions_t633F1D7D5B2C6D63B9331B5E0B63A14326F4F426  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.Unsafe
struct Unsafe_t013486CBD5A88F5F394651AB34F2AC5AE97E71E4  : public RuntimeObject
{
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct UnsafeUtility_tC3E6B7D52A973A81739E8BD97D6E757BA8371D46  : public RuntimeObject
{
};

// UnityEngine.UIElements.UxmlAttributeDescription
struct UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2  : public RuntimeObject
{
	// System.String UnityEngine.UIElements.UxmlAttributeDescription::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.String[] UnityEngine.UIElements.UxmlAttributeDescription::m_ObsoleteNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ObsoleteNames_1;
	// System.String UnityEngine.UIElements.UxmlAttributeDescription::<type>k__BackingField
	String_t* ___U3CtypeU3Ek__BackingField_2;
	// System.String UnityEngine.UIElements.UxmlAttributeDescription::<typeNamespace>k__BackingField
	String_t* ___U3CtypeNamespaceU3Ek__BackingField_3;
	// UnityEngine.UIElements.UxmlAttributeDescription/Use UnityEngine.UIElements.UxmlAttributeDescription::<use>k__BackingField
	int32_t ___U3CuseU3Ek__BackingField_4;
	// UnityEngine.UIElements.UxmlTypeRestriction UnityEngine.UIElements.UxmlAttributeDescription::<restriction>k__BackingField
	UxmlTypeRestriction_t2C4CE1ED76502CDF80010880E058AF0582910A92* ___U3CrestrictionU3Ek__BackingField_5;
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

// System.Numerics.Vector
struct Vector_t246EF05F1CA5F494FB8B48AB2724DFCD2C2C5A9A  : public RuntimeObject
{
};

// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9  : public RuntimeObject
{
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualTreeUpdater::m_Panel
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel_0;
	// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray UnityEngine.UIElements.VisualTreeUpdater::m_UpdaterArray
	UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* ___m_UpdaterArray_1;
};

// System.Threading.Volatile
struct Volatile_tC26FEDFD254742AD25E4B908FA81293FBBF4ECB0  : public RuntimeObject
{
};

// System.Xml.Linq.XObject
struct XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29  : public RuntimeObject
{
	// System.Xml.Linq.XContainer System.Xml.Linq.XObject::parent
	XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* ___parent_0;
	// System.Object System.Xml.Linq.XObject::annotations
	RuntimeObject* ___annotations_1;
};

// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E  : public RuntimeObject
{
};

// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};

// Unity.VisualScripting.FullSerializer.fsBaseConverter
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04  : public RuntimeObject
{
	// Unity.VisualScripting.FullSerializer.fsSerializer Unity.VisualScripting.FullSerializer.fsBaseConverter::Serializer
	fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* ___Serializer_0;
};

// Unity.VisualScripting.FullSerializer.fsContext
struct fsContext_t3B227C205D84208E2D8934429C07677542C97B5F  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> Unity.VisualScripting.FullSerializer.fsContext::_contextObjects
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ____contextObjects_0;
};

// Unity.VisualScripting.FullSerializer.fsData
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23  : public RuntimeObject
{
	// System.Object Unity.VisualScripting.FullSerializer.fsData::_value
	RuntimeObject* ____value_0;
};

// Unity.VisualScripting.FullSerializer.Internal.fsOption
struct fsOption_t4278BEF99FB996B0A86CFD73812F3B6AE3D94E9C  : public RuntimeObject
{
};

// Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection
struct fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3  : public RuntimeObject
{
};

// Unity.VisualScripting.FullSerializer.fsSerializer
struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsConverter> Unity.VisualScripting.FullSerializer.fsSerializer::_availableConverters
	List_1_t2914BC22C8C5E8C02F2AB4FA0C6EBD117DA2A753* ____availableConverters_0;
	// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsDirectConverter> Unity.VisualScripting.FullSerializer.fsSerializer::_availableDirectConverters
	Dictionary_2_tE2FB86855847810E74AE4F09A6480D6AE3251A51* ____availableDirectConverters_1;
	// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor> Unity.VisualScripting.FullSerializer.fsSerializer::_processors
	List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371* ____processors_2;
	// Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager Unity.VisualScripting.FullSerializer.fsSerializer::_references
	fsCyclicReferenceManager_tED0335497D4376E432D911F842D977B9D52B5EA0* ____references_3;
	// Unity.VisualScripting.FullSerializer.fsSerializer/fsLazyCycleDefinitionWriter Unity.VisualScripting.FullSerializer.fsSerializer::_lazyReferenceWriter
	fsLazyCycleDefinitionWriter_t8DA7FBB3131ECC4D5F09CC4D66DE74961DA5511A* ____lazyReferenceWriter_4;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Type> Unity.VisualScripting.FullSerializer.fsSerializer::_abstractTypeRemap
	Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* ____abstractTypeRemap_5;
	// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsBaseConverter> Unity.VisualScripting.FullSerializer.fsSerializer::_cachedConverterTypeInstances
	Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9* ____cachedConverterTypeInstances_6;
	// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsBaseConverter> Unity.VisualScripting.FullSerializer.fsSerializer::_cachedConverters
	Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9* ____cachedConverters_7;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>> Unity.VisualScripting.FullSerializer.fsSerializer::_cachedProcessors
	Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04* ____cachedProcessors_8;
	// Unity.VisualScripting.FullSerializer.fsContext Unity.VisualScripting.FullSerializer.fsSerializer::Context
	fsContext_t3B227C205D84208E2D8934429C07677542C97B5F* ___Context_9;
	// Unity.VisualScripting.FullSerializer.fsConfig Unity.VisualScripting.FullSerializer.fsSerializer::Config
	fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* ___Config_10;
};

// Unity.VisualScripting.AttributeUtility/AttributeCache
struct AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Attribute> Unity.VisualScripting.AttributeUtility/AttributeCache::<inheritedAttributes>k__BackingField
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___U3CinheritedAttributesU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<System.Attribute> Unity.VisualScripting.AttributeUtility/AttributeCache::<definedAttributes>k__BackingField
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___U3CdefinedAttributesU3Ek__BackingField_1;
};

// UnityEngine.UIElements.StylePropertyAnimationSystem/Values
struct Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24  : public RuntimeObject
{
};

// System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult
struct TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB  : public RuntimeObject
{
	// System.Threading.Tasks.Task System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::Task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___Task_0;
	// System.Object System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::_state
	RuntimeObject* ____state_1;
	// System.Boolean System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::_completedSynchronously
	bool ____completedSynchronously_2;
};

// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449  : public RuntimeObject
{
	// UnityEngine.UIElements.IVisualTreeUpdater[] UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::m_VisualTreeUpdaters
	IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8* ___m_VisualTreeUpdaters_0;
};

// UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2<UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/EmptyData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915 
{
	// UnityEngine.UIElements.VisualElement[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::elements
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___elements_0;
	// UnityEngine.UIElements.StyleSheets.StylePropertyId[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::properties
	StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* ___properties_1;
	// TTimingData[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::timing
	EmptyDataU5BU5D_t4F13631B1440411479135A222DA84C0A8FC754FD* ___timing_2;
	// TStyleData[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::style
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___style_3;
	// System.Int32 UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::count
	int32_t ___count_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StylePropertyAnimationSystem/ElementPropertyPair,System.Int32> UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::indices
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___indices_5;
};

// UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2<UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TimingData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/StyleData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450 
{
	// UnityEngine.UIElements.VisualElement[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::elements
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___elements_0;
	// UnityEngine.UIElements.StyleSheets.StylePropertyId[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::properties
	StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* ___properties_1;
	// TTimingData[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::timing
	TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034* ___timing_2;
	// TStyleData[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::style
	StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A* ___style_3;
	// System.Int32 UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::count
	int32_t ___count_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StylePropertyAnimationSystem/ElementPropertyPair,System.Int32> UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::indices
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___indices_5;
};

// Unity.Services.Core.Telemetry.Internal.FileCachePersister`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct FileCachePersister_1_t513326F754B2C0BD75F9318EB4A863B00E144DCF  : public FileCachePersister_tD394A50E26C1D87D1DCB622E10B5E36FCEC8FA30
{
	// System.String Unity.Services.Core.Telemetry.Internal.FileCachePersister`1::<FilePath>k__BackingField
	String_t* ___U3CFilePathU3Ek__BackingField_0;
	// System.Boolean Unity.Services.Core.Telemetry.Internal.FileCachePersister`1::<CanPersist>k__BackingField
	bool ___U3CCanPersistU3Ek__BackingField_1;
	// System.String Unity.Services.Core.Telemetry.Internal.FileCachePersister`1::k_MultipleInstanceDiagnosticsName
	String_t* ___k_MultipleInstanceDiagnosticsName_2;
	// System.String Unity.Services.Core.Telemetry.Internal.FileCachePersister`1::k_CacheFileException
	String_t* ___k_CacheFileException_3;
	// System.String Unity.Services.Core.Telemetry.Internal.FileCachePersister`1::k_MultipleInstanceError
	String_t* ___k_MultipleInstanceError_4;
};

// Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeSlice`1<UnityEngine.UIElements.UIR.DrawBufferRange>
struct NativeSlice_1_t2E5DBD9A5F77A5044A4160098A0B2A45D3EE8974 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// Unity.Collections.NativeSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData>
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData>
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData>
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData>
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData>
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData>
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref_0;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};

// UnityEngine.UIElements.UQueryBuilder`1<System.Object>
struct UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2 
{
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelector> UnityEngine.UIElements.UQueryBuilder`1::m_StyleSelectors
	List_1_tB8CE94A1885E4D10B34A91CC9D21169286DC0A63* ___m_StyleSelectors_0;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart> UnityEngine.UIElements.UQueryBuilder`1::m_Parts
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___m_Parts_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UQueryBuilder`1::m_Element
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Element_2;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher> UnityEngine.UIElements.UQueryBuilder`1::m_Matchers
	List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* ___m_Matchers_3;
	// UnityEngine.UIElements.StyleSelectorRelationship UnityEngine.UIElements.UQueryBuilder`1::m_Relationship
	int32_t ___m_Relationship_4;
	// System.Int32 UnityEngine.UIElements.UQueryBuilder`1::pseudoStatesMask
	int32_t ___pseudoStatesMask_5;
	// System.Int32 UnityEngine.UIElements.UQueryBuilder`1::negatedPseudoStatesMask
	int32_t ___negatedPseudoStatesMask_6;
};

// UnityEngine.UIElements.UQueryBuilder`1<UnityEngine.UIElements.VisualElement>
struct UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139 
{
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelector> UnityEngine.UIElements.UQueryBuilder`1::m_StyleSelectors
	List_1_tB8CE94A1885E4D10B34A91CC9D21169286DC0A63* ___m_StyleSelectors_0;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart> UnityEngine.UIElements.UQueryBuilder`1::m_Parts
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___m_Parts_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UQueryBuilder`1::m_Element
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Element_2;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher> UnityEngine.UIElements.UQueryBuilder`1::m_Matchers
	List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* ___m_Matchers_3;
	// UnityEngine.UIElements.StyleSelectorRelationship UnityEngine.UIElements.UQueryBuilder`1::m_Relationship
	int32_t ___m_Relationship_4;
	// System.Int32 UnityEngine.UIElements.UQueryBuilder`1::pseudoStatesMask
	int32_t ___pseudoStatesMask_5;
	// System.Int32 UnityEngine.UIElements.UQueryBuilder`1::negatedPseudoStatesMask
	int32_t ___negatedPseudoStatesMask_6;
};

// UnityEngine.UIElements.UQueryState`1<System.Object>
struct UQueryState_1_tDA47936DEF27643350186CA4E1DED7053A3D02B2 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UQueryState`1::m_Element
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Element_1;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher> UnityEngine.UIElements.UQueryState`1::m_Matchers
	List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* ___m_Matchers_2;
};

// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement>
struct UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UQueryState`1::m_Element
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Element_1;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher> UnityEngine.UIElements.UQueryState`1::m_Matchers
	List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* ___m_Matchers_2;
};

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88;

// UnityEngine.UIElements.UIR.BMPAlloc
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	// System.Int32 UnityEngine.UIElements.UIR.BMPAlloc::page
	int32_t ___page_1;
	// System.UInt16 UnityEngine.UIElements.UIR.BMPAlloc::pageLine
	uint16_t ___pageLine_2;
	// System.Byte UnityEngine.UIElements.UIR.BMPAlloc::bitIndex
	uint8_t ___bitIndex_3;
	// UnityEngine.UIElements.UIR.OwnedState UnityEngine.UIElements.UIR.BMPAlloc::ownedState
	uint8_t ___ownedState_4;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// UnityEngine.UIElements.CreationContext
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.CreationContext::<target>k__BackingField
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField_1;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.CreationContext::<visualTreeAsset>k__BackingField
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.CreationContext::<slotInsertionPoints>k__BackingField
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.TemplateAsset/AttributeOverride> UnityEngine.UIElements.CreationContext::<attributeOverrides>k__BackingField
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.CreationContext
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField_1;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField_2;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField_3;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.UIElements.CreationContext
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField_1;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField_2;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField_3;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField_4;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.TextCore.FaceInfo
struct FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756 
{
	// System.Int32 UnityEngine.TextCore.FaceInfo::m_FaceIndex
	int32_t ___m_FaceIndex_0;
	// System.String UnityEngine.TextCore.FaceInfo::m_FamilyName
	String_t* ___m_FamilyName_1;
	// System.String UnityEngine.TextCore.FaceInfo::m_StyleName
	String_t* ___m_StyleName_2;
	// System.Int32 UnityEngine.TextCore.FaceInfo::m_PointSize
	int32_t ___m_PointSize_3;
	// System.Single UnityEngine.TextCore.FaceInfo::m_Scale
	float ___m_Scale_4;
	// System.Int32 UnityEngine.TextCore.FaceInfo::m_UnitsPerEM
	int32_t ___m_UnitsPerEM_5;
	// System.Single UnityEngine.TextCore.FaceInfo::m_LineHeight
	float ___m_LineHeight_6;
	// System.Single UnityEngine.TextCore.FaceInfo::m_AscentLine
	float ___m_AscentLine_7;
	// System.Single UnityEngine.TextCore.FaceInfo::m_CapLine
	float ___m_CapLine_8;
	// System.Single UnityEngine.TextCore.FaceInfo::m_MeanLine
	float ___m_MeanLine_9;
	// System.Single UnityEngine.TextCore.FaceInfo::m_Baseline
	float ___m_Baseline_10;
	// System.Single UnityEngine.TextCore.FaceInfo::m_DescentLine
	float ___m_DescentLine_11;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SuperscriptOffset
	float ___m_SuperscriptOffset_12;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SuperscriptSize
	float ___m_SuperscriptSize_13;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SubscriptOffset
	float ___m_SubscriptOffset_14;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SubscriptSize
	float ___m_SubscriptSize_15;
	// System.Single UnityEngine.TextCore.FaceInfo::m_UnderlineOffset
	float ___m_UnderlineOffset_16;
	// System.Single UnityEngine.TextCore.FaceInfo::m_UnderlineThickness
	float ___m_UnderlineThickness_17;
	// System.Single UnityEngine.TextCore.FaceInfo::m_StrikethroughOffset
	float ___m_StrikethroughOffset_18;
	// System.Single UnityEngine.TextCore.FaceInfo::m_StrikethroughThickness
	float ___m_StrikethroughThickness_19;
	// System.Single UnityEngine.TextCore.FaceInfo::m_TabWidth
	float ___m_TabWidth_20;
};
// Native definition for P/Invoke marshalling of UnityEngine.TextCore.FaceInfo
struct FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshaled_pinvoke
{
	int32_t ___m_FaceIndex_0;
	char* ___m_FamilyName_1;
	char* ___m_StyleName_2;
	int32_t ___m_PointSize_3;
	float ___m_Scale_4;
	int32_t ___m_UnitsPerEM_5;
	float ___m_LineHeight_6;
	float ___m_AscentLine_7;
	float ___m_CapLine_8;
	float ___m_MeanLine_9;
	float ___m_Baseline_10;
	float ___m_DescentLine_11;
	float ___m_SuperscriptOffset_12;
	float ___m_SuperscriptSize_13;
	float ___m_SubscriptOffset_14;
	float ___m_SubscriptSize_15;
	float ___m_UnderlineOffset_16;
	float ___m_UnderlineThickness_17;
	float ___m_StrikethroughOffset_18;
	float ___m_StrikethroughThickness_19;
	float ___m_TabWidth_20;
};
// Native definition for COM marshalling of UnityEngine.TextCore.FaceInfo
struct FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshaled_com
{
	int32_t ___m_FaceIndex_0;
	Il2CppChar* ___m_FamilyName_1;
	Il2CppChar* ___m_StyleName_2;
	int32_t ___m_PointSize_3;
	float ___m_Scale_4;
	int32_t ___m_UnitsPerEM_5;
	float ___m_LineHeight_6;
	float ___m_AscentLine_7;
	float ___m_CapLine_8;
	float ___m_MeanLine_9;
	float ___m_Baseline_10;
	float ___m_DescentLine_11;
	float ___m_SuperscriptOffset_12;
	float ___m_SuperscriptSize_13;
	float ___m_SubscriptOffset_14;
	float ___m_SubscriptSize_15;
	float ___m_UnderlineOffset_16;
	float ___m_UnderlineThickness_17;
	float ___m_StrikethroughOffset_18;
	float ___m_StrikethroughThickness_19;
	float ___m_TabWidth_20;
};

// UnityEngine.UIElements.Focusable
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.Focusable::<tabIndex>k__BackingField
	int32_t ___U3CtabIndexU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Focusable::m_DelegatesFocus
	bool ___m_DelegatesFocus_3;
	// System.Boolean UnityEngine.UIElements.Focusable::m_ExcludeFromFocusRing
	bool ___m_ExcludeFromFocusRing_4;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_5;
};

// TMPro.FontAssetCreationSettings
struct FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF 
{
	// System.String TMPro.FontAssetCreationSettings::sourceFontFileName
	String_t* ___sourceFontFileName_0;
	// System.String TMPro.FontAssetCreationSettings::sourceFontFileGUID
	String_t* ___sourceFontFileGUID_1;
	// System.Int32 TMPro.FontAssetCreationSettings::pointSizeSamplingMode
	int32_t ___pointSizeSamplingMode_2;
	// System.Int32 TMPro.FontAssetCreationSettings::pointSize
	int32_t ___pointSize_3;
	// System.Int32 TMPro.FontAssetCreationSettings::padding
	int32_t ___padding_4;
	// System.Int32 TMPro.FontAssetCreationSettings::packingMode
	int32_t ___packingMode_5;
	// System.Int32 TMPro.FontAssetCreationSettings::atlasWidth
	int32_t ___atlasWidth_6;
	// System.Int32 TMPro.FontAssetCreationSettings::atlasHeight
	int32_t ___atlasHeight_7;
	// System.Int32 TMPro.FontAssetCreationSettings::characterSetSelectionMode
	int32_t ___characterSetSelectionMode_8;
	// System.String TMPro.FontAssetCreationSettings::characterSequence
	String_t* ___characterSequence_9;
	// System.String TMPro.FontAssetCreationSettings::referencedFontAssetGUID
	String_t* ___referencedFontAssetGUID_10;
	// System.String TMPro.FontAssetCreationSettings::referencedTextAssetGUID
	String_t* ___referencedTextAssetGUID_11;
	// System.Int32 TMPro.FontAssetCreationSettings::fontStyle
	int32_t ___fontStyle_12;
	// System.Single TMPro.FontAssetCreationSettings::fontStyleModifier
	float ___fontStyleModifier_13;
	// System.Int32 TMPro.FontAssetCreationSettings::renderMode
	int32_t ___renderMode_14;
	// System.Boolean TMPro.FontAssetCreationSettings::includeFontFeatures
	bool ___includeFontFeatures_15;
};
// Native definition for P/Invoke marshalling of TMPro.FontAssetCreationSettings
struct FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF_marshaled_pinvoke
{
	char* ___sourceFontFileName_0;
	char* ___sourceFontFileGUID_1;
	int32_t ___pointSizeSamplingMode_2;
	int32_t ___pointSize_3;
	int32_t ___padding_4;
	int32_t ___packingMode_5;
	int32_t ___atlasWidth_6;
	int32_t ___atlasHeight_7;
	int32_t ___characterSetSelectionMode_8;
	char* ___characterSequence_9;
	char* ___referencedFontAssetGUID_10;
	char* ___referencedTextAssetGUID_11;
	int32_t ___fontStyle_12;
	float ___fontStyleModifier_13;
	int32_t ___renderMode_14;
	int32_t ___includeFontFeatures_15;
};
// Native definition for COM marshalling of TMPro.FontAssetCreationSettings
struct FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF_marshaled_com
{
	Il2CppChar* ___sourceFontFileName_0;
	Il2CppChar* ___sourceFontFileGUID_1;
	int32_t ___pointSizeSamplingMode_2;
	int32_t ___pointSize_3;
	int32_t ___padding_4;
	int32_t ___packingMode_5;
	int32_t ___atlasWidth_6;
	int32_t ___atlasHeight_7;
	int32_t ___characterSetSelectionMode_8;
	Il2CppChar* ___characterSequence_9;
	Il2CppChar* ___referencedFontAssetGUID_10;
	Il2CppChar* ___referencedTextAssetGUID_11;
	int32_t ___fontStyle_12;
	float ___fontStyleModifier_13;
	int32_t ___renderMode_14;
	int32_t ___includeFontFeatures_15;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body_3;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
};

// UnityEngine.PropertyName
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Numerics.Register
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte System.Numerics.Register::byte_0
			uint8_t ___byte_0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_1_OffsetPadding[1];
			// System.Byte System.Numerics.Register::byte_1
			uint8_t ___byte_1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_2_OffsetPadding[2];
			// System.Byte System.Numerics.Register::byte_2
			uint8_t ___byte_2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_3_OffsetPadding[3];
			// System.Byte System.Numerics.Register::byte_3
			uint8_t ___byte_3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_4_OffsetPadding[4];
			// System.Byte System.Numerics.Register::byte_4
			uint8_t ___byte_4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_5_OffsetPadding[5];
			// System.Byte System.Numerics.Register::byte_5
			uint8_t ___byte_5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_6_OffsetPadding[6];
			// System.Byte System.Numerics.Register::byte_6
			uint8_t ___byte_6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_7_OffsetPadding[7];
			// System.Byte System.Numerics.Register::byte_7
			uint8_t ___byte_7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_8_OffsetPadding[8];
			// System.Byte System.Numerics.Register::byte_8
			uint8_t ___byte_8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_9_OffsetPadding[9];
			// System.Byte System.Numerics.Register::byte_9
			uint8_t ___byte_9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_10_OffsetPadding[10];
			// System.Byte System.Numerics.Register::byte_10
			uint8_t ___byte_10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_11_OffsetPadding[11];
			// System.Byte System.Numerics.Register::byte_11
			uint8_t ___byte_11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_12_OffsetPadding[12];
			// System.Byte System.Numerics.Register::byte_12
			uint8_t ___byte_12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_13_OffsetPadding[13];
			// System.Byte System.Numerics.Register::byte_13
			uint8_t ___byte_13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_14_OffsetPadding[14];
			// System.Byte System.Numerics.Register::byte_14
			uint8_t ___byte_14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_15_OffsetPadding[15];
			// System.Byte System.Numerics.Register::byte_15
			uint8_t ___byte_15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte System.Numerics.Register::sbyte_0
			int8_t ___sbyte_0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_17_OffsetPadding[1];
			// System.SByte System.Numerics.Register::sbyte_1
			int8_t ___sbyte_1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_18_OffsetPadding[2];
			// System.SByte System.Numerics.Register::sbyte_2
			int8_t ___sbyte_2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_19_OffsetPadding[3];
			// System.SByte System.Numerics.Register::sbyte_3
			int8_t ___sbyte_3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_20_OffsetPadding[4];
			// System.SByte System.Numerics.Register::sbyte_4
			int8_t ___sbyte_4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_21_OffsetPadding[5];
			// System.SByte System.Numerics.Register::sbyte_5
			int8_t ___sbyte_5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_22_OffsetPadding[6];
			// System.SByte System.Numerics.Register::sbyte_6
			int8_t ___sbyte_6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_23_OffsetPadding[7];
			// System.SByte System.Numerics.Register::sbyte_7
			int8_t ___sbyte_7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_24_OffsetPadding[8];
			// System.SByte System.Numerics.Register::sbyte_8
			int8_t ___sbyte_8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_25_OffsetPadding[9];
			// System.SByte System.Numerics.Register::sbyte_9
			int8_t ___sbyte_9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_26_OffsetPadding[10];
			// System.SByte System.Numerics.Register::sbyte_10
			int8_t ___sbyte_10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_27_OffsetPadding[11];
			// System.SByte System.Numerics.Register::sbyte_11
			int8_t ___sbyte_11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_28_OffsetPadding[12];
			// System.SByte System.Numerics.Register::sbyte_12
			int8_t ___sbyte_12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_29_OffsetPadding[13];
			// System.SByte System.Numerics.Register::sbyte_13
			int8_t ___sbyte_13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_30_OffsetPadding[14];
			// System.SByte System.Numerics.Register::sbyte_14
			int8_t ___sbyte_14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_31_OffsetPadding[15];
			// System.SByte System.Numerics.Register::sbyte_15
			int8_t ___sbyte_15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 System.Numerics.Register::uint16_0
			uint16_t ___uint16_0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_33_OffsetPadding[2];
			// System.UInt16 System.Numerics.Register::uint16_1
			uint16_t ___uint16_1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_34_OffsetPadding[4];
			// System.UInt16 System.Numerics.Register::uint16_2
			uint16_t ___uint16_2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_35_OffsetPadding[6];
			// System.UInt16 System.Numerics.Register::uint16_3
			uint16_t ___uint16_3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_36_OffsetPadding[8];
			// System.UInt16 System.Numerics.Register::uint16_4
			uint16_t ___uint16_4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_37_OffsetPadding[10];
			// System.UInt16 System.Numerics.Register::uint16_5
			uint16_t ___uint16_5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_38_OffsetPadding[12];
			// System.UInt16 System.Numerics.Register::uint16_6
			uint16_t ___uint16_6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_39_OffsetPadding[14];
			// System.UInt16 System.Numerics.Register::uint16_7
			uint16_t ___uint16_7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 System.Numerics.Register::int16_0
			int16_t ___int16_0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_41_OffsetPadding[2];
			// System.Int16 System.Numerics.Register::int16_1
			int16_t ___int16_1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_42_OffsetPadding[4];
			// System.Int16 System.Numerics.Register::int16_2
			int16_t ___int16_2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_43_OffsetPadding[6];
			// System.Int16 System.Numerics.Register::int16_3
			int16_t ___int16_3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_44_OffsetPadding[8];
			// System.Int16 System.Numerics.Register::int16_4
			int16_t ___int16_4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_45_OffsetPadding[10];
			// System.Int16 System.Numerics.Register::int16_5
			int16_t ___int16_5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_46_OffsetPadding[12];
			// System.Int16 System.Numerics.Register::int16_6
			int16_t ___int16_6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_47_OffsetPadding[14];
			// System.Int16 System.Numerics.Register::int16_7
			int16_t ___int16_7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 System.Numerics.Register::uint32_0
			uint32_t ___uint32_0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_49_OffsetPadding[4];
			// System.UInt32 System.Numerics.Register::uint32_1
			uint32_t ___uint32_1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_50_OffsetPadding[8];
			// System.UInt32 System.Numerics.Register::uint32_2
			uint32_t ___uint32_2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_51_OffsetPadding[12];
			// System.UInt32 System.Numerics.Register::uint32_3
			uint32_t ___uint32_3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Numerics.Register::int32_0
			int32_t ___int32_0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_53_OffsetPadding[4];
			// System.Int32 System.Numerics.Register::int32_1
			int32_t ___int32_1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_54_OffsetPadding[8];
			// System.Int32 System.Numerics.Register::int32_2
			int32_t ___int32_2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_55_OffsetPadding[12];
			// System.Int32 System.Numerics.Register::int32_3
			int32_t ___int32_3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 System.Numerics.Register::uint64_0
			uint64_t ___uint64_0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_57_OffsetPadding[8];
			// System.UInt64 System.Numerics.Register::uint64_1
			uint64_t ___uint64_1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 System.Numerics.Register::int64_0
			int64_t ___int64_0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_59_OffsetPadding[8];
			// System.Int64 System.Numerics.Register::int64_1
			int64_t ___int64_1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single System.Numerics.Register::single_0
			float ___single_0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_61_OffsetPadding[4];
			// System.Single System.Numerics.Register::single_1
			float ___single_1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_61_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_62_OffsetPadding[8];
			// System.Single System.Numerics.Register::single_2
			float ___single_2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_62_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_63_OffsetPadding[12];
			// System.Single System.Numerics.Register::single_3
			float ___single_3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_63_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double System.Numerics.Register::double_0
			double ___double_0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_65_OffsetPadding[8];
			// System.Double System.Numerics.Register::double_1
			double ___double_1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_65_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_65_forAlignmentOnly;
		};
	};
};

// UnityEngine.UIElements.RuleMatcher
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E 
{
	// UnityEngine.UIElements.StyleSheet UnityEngine.UIElements.RuleMatcher::sheet
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	// UnityEngine.UIElements.StyleComplexSelector UnityEngine.UIElements.RuleMatcher::complexSelector
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.RuleMatcher
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.RuleMatcher
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_1;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// DG.Tweening.Core.SafeModeReport
struct SafeModeReport_t36C3527D96D574F81DB1748D1E856C7A539A25B9 
{
	// System.Int32 DG.Tweening.Core.SafeModeReport::<totMissingTargetOrFieldErrors>k__BackingField
	int32_t ___U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0;
	// System.Int32 DG.Tweening.Core.SafeModeReport::<totCallbackErrors>k__BackingField
	int32_t ___U3CtotCallbackErrorsU3Ek__BackingField_1;
	// System.Int32 DG.Tweening.Core.SafeModeReport::<totStartupErrors>k__BackingField
	int32_t ___U3CtotStartupErrorsU3Ek__BackingField_2;
	// System.Int32 DG.Tweening.Core.SafeModeReport::<totUnsetErrors>k__BackingField
	int32_t ___U3CtotUnsetErrorsU3Ek__BackingField_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 
{
	// System.String UnityEngine.UIElements.StyleSelectorPart::m_Value
	String_t* ___m_Value_0;
	// UnityEngine.UIElements.StyleSelectorType UnityEngine.UIElements.StyleSelectorPart::m_Type
	int32_t ___m_Type_1;
	// System.Object UnityEngine.UIElements.StyleSelectorPart::tempData
	RuntimeObject* ___tempData_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_pinvoke
{
	char* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_com
{
	Il2CppChar* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};

// UnityEngine.UIElements.StyleValueHandle
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D 
{
	// UnityEngine.UIElements.StyleValueType UnityEngine.UIElements.StyleValueHandle::m_ValueType
	int32_t ___m_ValueType_0;
	// System.Int32 UnityEngine.UIElements.StyleValueHandle::valueIndex
	int32_t ___valueIndex_1;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C  : public ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89
{
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject* ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject* ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t* ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t* ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t* ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// DG.Tweening.Plugins.Options.Vector3ArrayOptions
struct Vector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644 
{
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.Vector3ArrayOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.Vector3ArrayOptions::snapping
	bool ___snapping_1;
	// System.Single[] DG.Tweening.Plugins.Options.Vector3ArrayOptions::durations
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___durations_2;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.Vector3ArrayOptions
struct Vector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
	Il2CppSafeArray/*NONE*/* ___durations_2;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.Vector3ArrayOptions
struct Vector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
	Il2CppSafeArray/*NONE*/* ___durations_2;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// System.Threading.Tasks.VoidTaskResult
struct VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC 
{
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC__padding[1];
	};
};

// System.Xml.Linq.XNode
struct XNode_t185C922661054AAD14F49676DD6F3CB10D652A30  : public XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29
{
	// System.Xml.Linq.XNode System.Xml.Linq.XNode::next
	XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* ___next_2;
};

// System.Xml.Schema.XmlBaseConverter
struct XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D  : public XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E
{
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlBaseConverter::schemaType
	XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF* ___schemaType_0;
	// System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlBaseConverter::typeCode
	int32_t ___typeCode_1;
	// System.Type System.Xml.Schema.XmlBaseConverter::clrTypeDefault
	Type_t* ___clrTypeDefault_2;
};

// Unity.VisualScripting.FullSerializer.fsConverter
struct fsConverter_tFCDE4B68CAA0B3317FAC29FAAF380AF759141918  : public fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04
{
};

// Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 
{
	// System.Boolean Unity.VisualScripting.FullSerializer.fsResult::_success
	bool ____success_1;
	// System.Collections.Generic.List`1<System.String> Unity.VisualScripting.FullSerializer.fsResult::_messages
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};
// Native definition for P/Invoke marshalling of Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_pinvoke
{
	int32_t ____success_1;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};
// Native definition for COM marshalling of Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_com
{
	int32_t ____success_1;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_definedParameters
	Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69* ____definedParameters_0;
	// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_hoistedParameters
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ____hoistedParameters_1;
};

// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_variables
	Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD* ____variables_0;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_frame
	InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D* ____frame_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_shadowedVars
	Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* ____shadowedVars_2;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics
struct DrawStatistics_t4AF06C67CEC7B97509EBAD48E3EE908301598E6F 
{
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::currentFrameIndex
	int32_t ___currentFrameIndex_0;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::totalIndices
	uint32_t ___totalIndices_1;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::commandCount
	uint32_t ___commandCount_2;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::drawCommandCount
	uint32_t ___drawCommandCount_3;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::materialSetCount
	uint32_t ___materialSetCount_4;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::drawRangeCount
	uint32_t ___drawRangeCount_5;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::drawRangeCallCount
	uint32_t ___drawRangeCallCount_6;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::immediateDraws
	uint32_t ___immediateDraws_7;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::stencilRefChanges
	uint32_t ___stencilRefChanges_8;
};

// UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::m_Owner
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};

// System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99 
{
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Volatile/VolatileObject::Value
	RuntimeObject* ___Value_0;
};
// Native definition for P/Invoke marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_pinvoke
{
	RuntimeObject* ___Value_0;
};
// Native definition for COM marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_com
{
	RuntimeObject* ___Value_0;
};

// System.ByReference`1<System.Char>
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.Threading.Tasks.ContinuationResultTaskFromTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ContinuationResultTaskFromTask_1_t1976F69FEC571EFB163944A4437C69446E2BECB3 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};

// System.Linq.Expressions.Expression`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};

// UnityEngine.UIElements.UIR.Utility/GPUBuffer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct GPUBuffer_1_t59623B2A3B8EFD33FB05C973C4C4EAFCF89ED241  : public RuntimeObject
{
	// System.IntPtr UnityEngine.UIElements.UIR.Utility/GPUBuffer`1::buffer
	intptr_t ___buffer_0;
	// System.Int32 UnityEngine.UIElements.UIR.Utility/GPUBuffer`1::elemCount
	int32_t ___elemCount_1;
	// System.Int32 UnityEngine.UIElements.UIR.Utility/GPUBuffer`1::elemStride
	int32_t ___elemStride_2;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC ___m_result_22;
};

// System.Threading.Tasks.UnwrapPromise`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnwrapPromise_1_t056E9AD8CFB7AFD55E9D63549F5F68C2827ABDB1 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};

// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Values_1_tD44BBEC769B1388DCA51C01019802B242F987014  : public Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24
{
	// System.Int64 UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1::m_CurrentTimeMs
	int64_t ___m_CurrentTimeMs_0;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TransitionEventsFrameState<T> UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1::m_CurrentFrameEventsState
	TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* ___m_CurrentFrameEventsState_1;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TransitionEventsFrameState<T> UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1::m_NextFrameEventsState
	TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* ___m_NextFrameEventsState_2;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2<UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TimingData<T>,UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/StyleData<T>> UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1::running
	AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450 ___running_3;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2<UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/EmptyData<T>,T> UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1::completed
	AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915 ___completed_4;
};

// System.Numerics.Vector`1<System.UInt64>
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};

// System.Numerics.Vector`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData> UnityEngine.UIElements.ComputedStyle::inheritedData
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData> UnityEngine.UIElements.ComputedStyle::layoutData
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData> UnityEngine.UIElements.ComputedStyle::rareData
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData> UnityEngine.UIElements.ComputedStyle::transformData
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData> UnityEngine.UIElements.ComputedStyle::transitionData
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData> UnityEngine.UIElements.ComputedStyle::visualData
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.ComputedStyle::yogaNode
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue> UnityEngine.UIElements.ComputedStyle::customProperties
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	// System.Int64 UnityEngine.UIElements.ComputedStyle::matchingRulesHash
	int64_t ___matchingRulesHash_8;
	// System.Single UnityEngine.UIElements.ComputedStyle::dpiScaling
	float ___dpiScaling_9;
	// UnityEngine.UIElements.ComputedTransitionProperty[] UnityEngine.UIElements.ComputedStyle::computedTransitions
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions_10;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions_10;
};

// DG.Tweening.DOTween
struct DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13  : public RuntimeObject
{
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 
{
	// System.Boolean UnityEngine.UIElements.PanelClearSettings::clearDepthStencil
	bool ___clearDepthStencil_0;
	// System.Boolean UnityEngine.UIElements.PanelClearSettings::clearColor
	bool ___clearColor_1;
	// UnityEngine.Color UnityEngine.UIElements.PanelClearSettings::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_pinvoke
{
	int32_t ___clearDepthStencil_0;
	int32_t ___clearColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_com
{
	int32_t ___clearDepthStencil_0;
	int32_t ___clearColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718 
{
	// DG.Tweening.RotateMode DG.Tweening.Plugins.Options.QuaternionOptions::rotateMode
	int32_t ___rotateMode_0;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.QuaternionOptions::axisConstraint
	int32_t ___axisConstraint_1;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::up
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_2;
	// System.Boolean DG.Tweening.Plugins.Options.QuaternionOptions::dynamicLookAt
	bool ___dynamicLookAt_3;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::dynamicLookAtWorldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition_4;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_marshaled_pinvoke
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_2;
	int32_t ___dynamicLookAt_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition_4;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_marshaled_com
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_2;
	int32_t ___dynamicLookAt_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition_4;
};

// UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prev
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::next
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::groupTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::boneTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::hierarchyDepth
	int32_t ___hierarchyDepth_6;
	// UnityEngine.UIElements.UIR.RenderDataDirtyTypes UnityEngine.UIElements.UIR.RenderChainVEData::dirtiedValues
	int32_t ___dirtiedValues_7;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChainVEData::dirtyID
	uint32_t ___dirtyID_8;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isInChain
	bool ___isInChain_13;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isHierarchyHidden
	bool ___isHierarchyHidden_14;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::localFlipsWinding
	bool ___localFlipsWinding_15;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::localTransformScaleZero
	bool ___localTransformScaleZero_16;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::worldFlipsWinding
	bool ___worldFlipsWinding_17;
	// UnityEngine.UIElements.UIR.Implementation.ClipMethod UnityEngine.UIElements.UIR.RenderChainVEData::clipMethod
	int32_t ___clipMethod_18;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenStencilRef
	int32_t ___childrenStencilRef_19;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenMaskDepth
	int32_t ___childrenMaskDepth_20;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::disableNudging
	bool ___disableNudging_21;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::usesLegacyText
	bool ___usesLegacyText_22;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::data
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_23;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::closingData
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_24;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.RenderChainVEData::verticesSpace
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_25;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVStart
	int32_t ___displacementUVStart_26;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVEnd
	int32_t ___displacementUVEnd_27;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::transformID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_28;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::clipRectID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_29;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::opacityID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_30;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::textCoreSettingsID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_31;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_32;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderLeftColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_33;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderTopColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_34;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderRightColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_35;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderBottomColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_36;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::tintColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_37;
	// System.Single UnityEngine.UIElements.UIR.RenderChainVEData::compositeOpacity
	float ___compositeOpacity_38;
	// UnityEngine.Color UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_39;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_40;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_41;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textEntries
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_42;
	// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textures
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_43;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___localTransformScaleZero_16;
	int32_t ___worldFlipsWinding_17;
	int32_t ___clipMethod_18;
	int32_t ___childrenStencilRef_19;
	int32_t ___childrenMaskDepth_20;
	int32_t ___disableNudging_21;
	int32_t ___usesLegacyText_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_23;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_24;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_25;
	int32_t ___displacementUVStart_26;
	int32_t ___displacementUVEnd_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_36;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_37;
	float ___compositeOpacity_38;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_40;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_41;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_42;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_43;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___localTransformScaleZero_16;
	int32_t ___worldFlipsWinding_17;
	int32_t ___clipMethod_18;
	int32_t ___childrenStencilRef_19;
	int32_t ___childrenMaskDepth_20;
	int32_t ___disableNudging_21;
	int32_t ___usesLegacyText_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_23;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_24;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_25;
	int32_t ___displacementUVStart_26;
	int32_t ___displacementUVEnd_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_36;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_37;
	float ___compositeOpacity_38;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_40;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_41;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_42;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_43;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Sequence::sequencedTweens
	List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* ___sequencedTweens_55;
	// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable> DG.Tweening.Sequence::_sequencedObjs
	List_1_t0C6BF1E3B166E9D2A63FC3291C519D61B950BFDC* ____sequencedObjs_56;
	// System.Single DG.Tweening.Sequence::lastTweenInsertTime
	float ___lastTweenInsertTime_57;
};

// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D  : public RuntimeObject
{
	// TMPro.TMP_Text TMPro.TMP_TextInfo::textComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent_2;
	// System.Int32 TMPro.TMP_TextInfo::characterCount
	int32_t ___characterCount_3;
	// System.Int32 TMPro.TMP_TextInfo::spriteCount
	int32_t ___spriteCount_4;
	// System.Int32 TMPro.TMP_TextInfo::spaceCount
	int32_t ___spaceCount_5;
	// System.Int32 TMPro.TMP_TextInfo::wordCount
	int32_t ___wordCount_6;
	// System.Int32 TMPro.TMP_TextInfo::linkCount
	int32_t ___linkCount_7;
	// System.Int32 TMPro.TMP_TextInfo::lineCount
	int32_t ___lineCount_8;
	// System.Int32 TMPro.TMP_TextInfo::pageCount
	int32_t ___pageCount_9;
	// System.Int32 TMPro.TMP_TextInfo::materialCount
	int32_t ___materialCount_10;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_TextInfo::characterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___characterInfo_11;
	// TMPro.TMP_WordInfo[] TMPro.TMP_TextInfo::wordInfo
	TMP_WordInfoU5BU5D_tD1759E5A84DCCCD42B718D79E953E72A432BB4DC* ___wordInfo_12;
	// TMPro.TMP_LinkInfo[] TMPro.TMP_TextInfo::linkInfo
	TMP_LinkInfoU5BU5D_tE11BE54A5923BD2148E716289F44EA465E06536E* ___linkInfo_13;
	// TMPro.TMP_LineInfo[] TMPro.TMP_TextInfo::lineInfo
	TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E* ___lineInfo_14;
	// TMPro.TMP_PageInfo[] TMPro.TMP_TextInfo::pageInfo
	TMP_PageInfoU5BU5D_tE3DAAA8E2E9147F97C424A9034F677A516E8DAF9* ___pageInfo_15;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::meshInfo
	TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___meshInfo_16;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::m_CachedMeshInfo
	TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___m_CachedMeshInfo_17;
};

// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0  : public RuntimeObject
{
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory::m_defaultCancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::m_defaultScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;
};

// UnityEngine.TextCore.Text.TextGeneratorUtilities
struct TextGeneratorUtilities_tAD0F329B1A5C7CC27CF63086C11FE092B43FED53  : public RuntimeObject
{
};

// UnityEngine.TextCore.Text.TextInfo
struct TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09  : public RuntimeObject
{
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::characterCount
	int32_t ___characterCount_2;
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::spriteCount
	int32_t ___spriteCount_3;
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::spaceCount
	int32_t ___spaceCount_4;
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::wordCount
	int32_t ___wordCount_5;
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::linkCount
	int32_t ___linkCount_6;
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::lineCount
	int32_t ___lineCount_7;
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::pageCount
	int32_t ___pageCount_8;
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::materialCount
	int32_t ___materialCount_9;
	// UnityEngine.TextCore.Text.TextElementInfo[] UnityEngine.TextCore.Text.TextInfo::textElementInfo
	TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E* ___textElementInfo_10;
	// UnityEngine.TextCore.Text.WordInfo[] UnityEngine.TextCore.Text.TextInfo::wordInfo
	WordInfoU5BU5D_tAD74C9720883D7BB229A20FFAE9EFD2CF9963F7B* ___wordInfo_11;
	// UnityEngine.TextCore.Text.LinkInfo[] UnityEngine.TextCore.Text.TextInfo::linkInfo
	LinkInfoU5BU5D_tB7EB23E47AF29CCBEC884F9D0DB95BC97F62AE51* ___linkInfo_12;
	// UnityEngine.TextCore.Text.LineInfo[] UnityEngine.TextCore.Text.TextInfo::lineInfo
	LineInfoU5BU5D_t37598F2175B291797270D1161DC29B6296FB169D* ___lineInfo_13;
	// UnityEngine.TextCore.Text.PageInfo[] UnityEngine.TextCore.Text.TextInfo::pageInfo
	PageInfoU5BU5D_tFEA2CF88695491CFC2F2A2EF6BDCC56E52B0A6D4* ___pageInfo_14;
	// UnityEngine.TextCore.Text.MeshInfo[] UnityEngine.TextCore.Text.TextInfo::meshInfo
	MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6* ___meshInfo_15;
	// System.Boolean UnityEngine.TextCore.Text.TextInfo::isDirty
	bool ___isDirty_16;
};

// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;
};

// UnityEngine.UIElements.UQueryExtensions
struct UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426  : public RuntimeObject
{
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.Xml.Linq.XContainer
struct XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF  : public XNode_t185C922661054AAD14F49676DD6F3CB10D652A30
{
	// System.Object System.Xml.Linq.XContainer::content
	RuntimeObject* ___content_3;
};

// System.Xml.Schema.XmlListConverter
struct XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA  : public XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D
{
	// System.Xml.Schema.XmlValueConverter System.Xml.Schema.XmlListConverter::atomicConverter
	XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* ___atomicConverter_32;
};

// Unity.VisualScripting.FullSerializer.fsEnumConverter
struct fsEnumConverter_t2798C7B46A5AA11FCA5E04EFCEDEC140C9A35996  : public fsConverter_tFCDE4B68CAA0B3317FAC29FAAF380AF759141918
{
};

// System.Span`1<System.Char>
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Span`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t9EFF8DD70A15F455A6FE698A22BD0FE9683AC28E* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_64;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_65;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>
struct TweenerCore_3_t0CD1AF1B188E9D008629D280210B5FA8C761E336  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	Vector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tAD778405CFD8B0E13EF7423622294E3E3913479B* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_64;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_65;
};

// DG.Tweening.Core.TweenerCore`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140 {};

// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303  : public RuntimeObject
{
	// System.Action`1<UnityEngine.UIElements.BaseVisualElementPanel> UnityEngine.UIElements.BaseVisualElementPanel::panelDisposed
	Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53* ___panelDisposed_0;
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_Scale
	float ___m_Scale_1;
	// UnityEngine.Yoga.YogaConfig UnityEngine.UIElements.BaseVisualElementPanel::yogaConfig
	YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___yogaConfig_2;
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_PixelsPerPoint
	float ___m_PixelsPerPoint_3;
	// UnityEngine.UIElements.PanelClearSettings UnityEngine.UIElements.BaseVisualElementPanel::<clearSettings>k__BackingField
	PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 ___U3CclearSettingsU3Ek__BackingField_4;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<duringLayoutPhase>k__BackingField
	bool ___U3CduringLayoutPhaseU3Ek__BackingField_5;
	// UnityEngine.UIElements.RepaintData UnityEngine.UIElements.BaseVisualElementPanel::<repaintData>k__BackingField
	RepaintData_t90534752135661579EC254884F550545D001B5EA* ___U3CrepaintDataU3Ek__BackingField_6;
	// UnityEngine.UIElements.ICursorManager UnityEngine.UIElements.BaseVisualElementPanel::<cursorManager>k__BackingField
	RuntimeObject* ___U3CcursorManagerU3Ek__BackingField_7;
	// UnityEngine.UIElements.ContextualMenuManager UnityEngine.UIElements.BaseVisualElementPanel::<contextualMenuManager>k__BackingField
	ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B* ___U3CcontextualMenuManagerU3Ek__BackingField_8;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_9;
	// UnityEngine.UIElements.ElementUnderPointer UnityEngine.UIElements.BaseVisualElementPanel::m_TopElementUnderPointers
	ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904* ___m_TopElementUnderPointers_10;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::standardShaderChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardShaderChanged_11;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::standardWorldSpaceShaderChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardWorldSpaceShaderChanged_12;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::atlasChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___atlasChanged_13;
	// System.Action`1<UnityEngine.Material> UnityEngine.UIElements.BaseVisualElementPanel::updateMaterial
	Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA* ___updateMaterial_14;
	// UnityEngine.UIElements.HierarchyEvent UnityEngine.UIElements.BaseVisualElementPanel::hierarchyChanged
	HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705* ___hierarchyChanged_15;
	// System.Action`1<UnityEngine.UIElements.IPanel> UnityEngine.UIElements.BaseVisualElementPanel::beforeUpdate
	Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6* ___beforeUpdate_16;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.UIElements.UIR.UIRenderDevice
struct UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302  : public RuntimeObject
{
	// System.Boolean UnityEngine.UIElements.UIR.UIRenderDevice::m_MockDevice
	bool ___m_MockDevice_0;
	// System.IntPtr UnityEngine.UIElements.UIR.UIRenderDevice::m_DefaultStencilState
	intptr_t ___m_DefaultStencilState_1;
	// System.IntPtr UnityEngine.UIElements.UIR.UIRenderDevice::m_VertexDecl
	intptr_t ___m_VertexDecl_2;
	// UnityEngine.UIElements.UIR.Page UnityEngine.UIElements.UIR.UIRenderDevice::m_FirstPage
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___m_FirstPage_3;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice::m_NextPageVertexCount
	uint32_t ___m_NextPageVertexCount_4;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice::m_LargeMeshVertexCount
	uint32_t ___m_LargeMeshVertexCount_5;
	// System.Single UnityEngine.UIElements.UIR.UIRenderDevice::m_IndexToVertexCountRatio
	float ___m_IndexToVertexCountRatio_6;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.UIRenderDevice/AllocToFree>> UnityEngine.UIElements.UIR.UIRenderDevice::m_DeferredFrees
	List_1_tB86898E2E533634C35EC58EC5DAE3353038A9210* ___m_DeferredFrees_7;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate>> UnityEngine.UIElements.UIR.UIRenderDevice::m_Updates
	List_1_tA79C35FB5E50135962B53960CB758B9262700632* ___m_Updates_8;
	// System.UInt32[] UnityEngine.UIElements.UIR.UIRenderDevice::m_Fences
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Fences_9;
	// UnityEngine.MaterialPropertyBlock UnityEngine.UIElements.UIR.UIRenderDevice::m_StandardMatProps
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___m_StandardMatProps_10;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice::m_FrameIndex
	uint32_t ___m_FrameIndex_11;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice::m_NextUpdateID
	uint32_t ___m_NextUpdateID_12;
	// UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics UnityEngine.UIElements.UIR.UIRenderDevice::m_DrawStats
	DrawStatistics_t4AF06C67CEC7B97509EBAD48E3EE908301598E6F ___m_DrawStats_13;
	// UnityEngine.UIElements.UIR.LinkedPool`1<UnityEngine.UIElements.UIR.MeshHandle> UnityEngine.UIElements.UIR.UIRenderDevice::m_MeshHandles
	LinkedPool_1_tD8A175EE023C8220138E51E722F4A20ACE9CA851* ___m_MeshHandles_14;
	// UnityEngine.UIElements.UIR.DrawParams UnityEngine.UIElements.UIR.UIRenderDevice::m_DrawParams
	DrawParams_t523864F415D78BD8BB14E8B7BD349594D6187443* ___m_DrawParams_15;
	// UnityEngine.UIElements.UIR.TextureSlotManager UnityEngine.UIElements.UIR.UIRenderDevice::m_TextureSlotManager
	TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D* ___m_TextureSlotManager_16;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice::<maxVerticesPerPage>k__BackingField
	uint32_t ___U3CmaxVerticesPerPageU3Ek__BackingField_35;
	// System.Boolean UnityEngine.UIElements.UIR.UIRenderDevice::<breakBatches>k__BackingField
	bool ___U3CbreakBatchesU3Ek__BackingField_36;
	// System.Boolean UnityEngine.UIElements.UIR.UIRenderDevice::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_39;
};

// UnityEngine.UnityException
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067  : public Exception_t
{
};

// UnityEngine.UIElements.UIR.Utility
struct Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD  : public RuntimeObject
{
};

// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.runningAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField_7;
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.completedAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField_8;
	// System.String UnityEngine.UIElements.VisualElement::m_Name
	String_t* ___m_Name_13;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::m_ClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList_14;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>> UnityEngine.UIElements.VisualElement::m_PropertyBag
	List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260* ___m_PropertyBag_15;
	// UnityEngine.UIElements.VisualElementFlags UnityEngine.UIElements.VisualElement::m_Flags
	int32_t ___m_Flags_16;
	// System.String UnityEngine.UIElements.VisualElement::m_ViewDataKey
	String_t* ___m_ViewDataKey_17;
	// UnityEngine.UIElements.RenderHints UnityEngine.UIElements.VisualElement::m_RenderHints
	int32_t ___m_RenderHints_18;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastLayout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout_19;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastPseudoPadding
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding_20;
	// UnityEngine.UIElements.UIR.RenderChainVEData UnityEngine.UIElements.VisualElement::renderChainData
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData_21;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout_22;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox_23;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox_24;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache_25;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache_26;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClip
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip_27;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClipMinusGroup
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup_28;
	// System.Boolean UnityEngine.UIElements.VisualElement::m_WorldClipIsInfinite
	bool ___m_WorldClipIsInfinite_29;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::triggerPseudoMask
	int32_t ___triggerPseudoMask_31;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::dependencyPseudoMask
	int32_t ___dependencyPseudoMask_32;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_33;
	// System.Int32 UnityEngine.UIElements.VisualElement::<containedPointerIds>k__BackingField
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField_34;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_35;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___U3CyogaNodeU3Ek__BackingField_36;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_Style
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style_37;
	// UnityEngine.UIElements.StyleVariableContext UnityEngine.UIElements.VisualElement::variableContext
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext_38;
	// System.Int32 UnityEngine.UIElements.VisualElement::inheritedStylesHash
	int32_t ___inheritedStylesHash_39;
	// System.UInt32 UnityEngine.UIElements.VisualElement::controlid
	uint32_t ___controlid_40;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_41;
	// System.Boolean UnityEngine.UIElements.VisualElement::<enabledSelf>k__BackingField
	bool ___U3CenabledSelfU3Ek__BackingField_42;
	// System.Action`1<UnityEngine.UIElements.MeshGenerationContext> UnityEngine.UIElements.VisualElement::<generateVisualContent>k__BackingField
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField_43;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualElement::k_GenerateVisualContentMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker_44;
	// UnityEngine.UIElements.VisualElement/RenderTargetMode UnityEngine.UIElements.VisualElement::m_SubRenderTargetMode
	int32_t ___m_SubRenderTargetMode_45;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::m_defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial_47;
	// UnityEngine.UIElements.VisualElement/TypeData UnityEngine.UIElements.VisualElement::m_TypeData
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData_49;
	// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField_51;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isRootVisualContainer>k__BackingField
	bool ___U3CisRootVisualContainerU3Ek__BackingField_52;
	// System.Boolean UnityEngine.UIElements.VisualElement::<cacheAsBitmap>k__BackingField
	bool ___U3CcacheAsBitmapU3Ek__BackingField_53;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent_54;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_LogicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent_55;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children_57;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField_58;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.VisualElement::m_VisualTreeAssetSource
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource_59;
	// UnityEngine.UIElements.InlineStyleAccess UnityEngine.UIElements.VisualElement::inlineStyleAccess
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess_61;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.VisualElement::styleSheetList
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList_62;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElement::m_RunningAnimations
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations_64;
};

// System.Xml.Linq.XDocument
struct XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1  : public XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF
{
	// System.Xml.Linq.XDeclaration System.Xml.Linq.XDocument::_declaration
	XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* ____declaration_4;
};

// System.Action`1<System.IAsyncResult>
struct Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E  : public MulticastDelegate_t
{
};

// System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8  : public MulticastDelegate_t
{
};

// DG.Tweening.Core.DOGetter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14  : public MulticastDelegate_t
{
};

// DG.Tweening.Core.DOSetter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct DOSetter_1_t856F6D96CAAFD28A21A398D2B3838D27D7E9BD16  : public MulticastDelegate_t
{
};

// System.Func`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB  : public MulticastDelegate_t
{
};

// System.Func`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431  : public MulticastDelegate_t
{
};

// System.Func`2<System.IAsyncResult,System.Threading.Tasks.VoidTaskResult>
struct Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9  : public MulticastDelegate_t
{
};

// System.Func`2<System.Single,System.Single>
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2  : public MulticastDelegate_t
{
};

// System.Func`2<System.Threading.Tasks.Task,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.String>
struct Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C  : public MulticastDelegate_t
{
};

// System.Func`3<System.String,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0  : public MulticastDelegate_t
{
};

// System.Func`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799  : public MulticastDelegate_t
{
};

// System.Func`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9  : public MulticastDelegate_t
{
};

// System.Buffers.SpanAction`2<System.Char,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A  : public MulticastDelegate_t
{
};

// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67  : public MulticastDelegate_t
{
};

// DG.Tweening.TweenCallback`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TweenCallback_1_tA6255E5281FE61C846B926E1FF9DF808830DB7B8  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// DG.Tweening.EaseFunction
struct EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04  : public MulticastDelegate_t
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

// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken_18;
};

// UnityEngine.UIElements.StyleSheet
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.UIElements.StyleSheet::m_ImportedWithErrors
	bool ___m_ImportedWithErrors_4;
	// System.Boolean UnityEngine.UIElements.StyleSheet::m_ImportedWithWarnings
	bool ___m_ImportedWithWarnings_5;
	// UnityEngine.UIElements.StyleRule[] UnityEngine.UIElements.StyleSheet::m_Rules
	StyleRuleU5BU5D_t7897A39D88CA043B2BFB5B28C53B41564EBA3AF3* ___m_Rules_6;
	// UnityEngine.UIElements.StyleComplexSelector[] UnityEngine.UIElements.StyleSheet::m_ComplexSelectors
	StyleComplexSelectorU5BU5D_tF7B5239DE9BF477DECF97EFBA7CB1D71C45DB857* ___m_ComplexSelectors_7;
	// System.Single[] UnityEngine.UIElements.StyleSheet::floats
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___floats_8;
	// UnityEngine.UIElements.StyleSheets.Dimension[] UnityEngine.UIElements.StyleSheet::dimensions
	DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B* ___dimensions_9;
	// UnityEngine.Color[] UnityEngine.UIElements.StyleSheet::colors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colors_10;
	// System.String[] UnityEngine.UIElements.StyleSheet::strings
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___strings_11;
	// UnityEngine.Object[] UnityEngine.UIElements.StyleSheet::assets
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___assets_12;
	// UnityEngine.UIElements.StyleSheet/ImportStruct[] UnityEngine.UIElements.StyleSheet::imports
	ImportStructU5BU5D_t42D231FD5BB4B620965D7BED87D56D531B4C7AE9* ___imports_13;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.StyleSheet::m_FlattenedImportedStyleSheets
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___m_FlattenedImportedStyleSheets_14;
	// System.Int32 UnityEngine.UIElements.StyleSheet::m_ContentHash
	int32_t ___m_ContentHash_15;
	// UnityEngine.UIElements.StyleSheets.ScalableImage[] UnityEngine.UIElements.StyleSheet::scalableImages
	ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52* ___scalableImages_16;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector> UnityEngine.UIElements.StyleSheet::orderedNameSelectors
	Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F* ___orderedNameSelectors_17;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector> UnityEngine.UIElements.StyleSheet::orderedTypeSelectors
	Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F* ___orderedTypeSelectors_18;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector> UnityEngine.UIElements.StyleSheet::orderedClassSelectors
	Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F* ___orderedClassSelectors_19;
	// System.Boolean UnityEngine.UIElements.StyleSheet::m_IsDefaultStyleSheet
	bool ___m_IsDefaultStyleSheet_20;
};

// TMPro.TMP_Asset
struct TMP_Asset_t135A047D4F5CBBA9CD356B762B55AB164122B969  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 TMPro.TMP_Asset::m_InstanceID
	int32_t ___m_InstanceID_4;
	// System.Int32 TMPro.TMP_Asset::hashCode
	int32_t ___hashCode_5;
	// UnityEngine.Material TMPro.TMP_Asset::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_6;
	// System.Int32 TMPro.TMP_Asset::materialHashCode
	int32_t ___materialHashCode_7;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24  : public MulticastDelegate_t
{
};

// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160  : public TMP_Asset_t135A047D4F5CBBA9CD356B762B55AB164122B969
{
	// System.String TMPro.TMP_FontAsset::m_Version
	String_t* ___m_Version_8;
	// System.String TMPro.TMP_FontAsset::m_SourceFontFileGUID
	String_t* ___m_SourceFontFileGUID_9;
	// UnityEngine.Font TMPro.TMP_FontAsset::m_SourceFontFile
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_SourceFontFile_10;
	// TMPro.AtlasPopulationMode TMPro.TMP_FontAsset::m_AtlasPopulationMode
	int32_t ___m_AtlasPopulationMode_11;
	// UnityEngine.TextCore.FaceInfo TMPro.TMP_FontAsset::m_FaceInfo
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756 ___m_FaceInfo_12;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphTable
	List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C* ___m_GlyphTable_13;
	// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphLookupDictionary
	Dictionary_2_tC61348D10610A6B3D7B65102D82AC3467D59EAA7* ___m_GlyphLookupDictionary_14;
	// System.Collections.Generic.List`1<TMPro.TMP_Character> TMPro.TMP_FontAsset::m_CharacterTable
	List_1_tCE1ACAA0C2736A7797B2C134895298CAB10BEB5E* ___m_CharacterTable_15;
	// System.Collections.Generic.Dictionary`2<System.UInt32,TMPro.TMP_Character> TMPro.TMP_FontAsset::m_CharacterLookupDictionary
	Dictionary_2_tCB5FEF8D6CEA1557D9B9BA25946AD6BF3E6C14D0* ___m_CharacterLookupDictionary_16;
	// UnityEngine.Texture2D TMPro.TMP_FontAsset::m_AtlasTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_AtlasTexture_17;
	// UnityEngine.Texture2D[] TMPro.TMP_FontAsset::m_AtlasTextures
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___m_AtlasTextures_18;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasTextureIndex
	int32_t ___m_AtlasTextureIndex_19;
	// System.Boolean TMPro.TMP_FontAsset::m_IsMultiAtlasTexturesEnabled
	bool ___m_IsMultiAtlasTexturesEnabled_20;
	// System.Boolean TMPro.TMP_FontAsset::m_ClearDynamicDataOnBuild
	bool ___m_ClearDynamicDataOnBuild_21;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> TMPro.TMP_FontAsset::m_UsedGlyphRects
	List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* ___m_UsedGlyphRects_22;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> TMPro.TMP_FontAsset::m_FreeGlyphRects
	List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* ___m_FreeGlyphRects_23;
	// TMPro.FaceInfo_Legacy TMPro.TMP_FontAsset::m_fontInfo
	FaceInfo_Legacy_t23B118EFD5AB7162515ABF18C0212DF155CCF7B8* ___m_fontInfo_24;
	// UnityEngine.Texture2D TMPro.TMP_FontAsset::atlas
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___atlas_25;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasWidth
	int32_t ___m_AtlasWidth_26;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasHeight
	int32_t ___m_AtlasHeight_27;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasPadding
	int32_t ___m_AtlasPadding_28;
	// UnityEngine.TextCore.LowLevel.GlyphRenderMode TMPro.TMP_FontAsset::m_AtlasRenderMode
	int32_t ___m_AtlasRenderMode_29;
	// System.Collections.Generic.List`1<TMPro.TMP_Glyph> TMPro.TMP_FontAsset::m_glyphInfoList
	List_1_tAB7976FADCF872E418770E60783056C23394843D* ___m_glyphInfoList_30;
	// TMPro.KerningTable TMPro.TMP_FontAsset::m_KerningTable
	KerningTable_t040C3FE3B519B12AADE1C5B00628581551D5AB6B* ___m_KerningTable_31;
	// TMPro.TMP_FontFeatureTable TMPro.TMP_FontAsset::m_FontFeatureTable
	TMP_FontFeatureTable_t726A09E64FDF682A8FFE294BB6CFE7747F6C40EA* ___m_FontFeatureTable_32;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::fallbackFontAssets
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___fallbackFontAssets_33;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::m_FallbackFontAssetTable
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___m_FallbackFontAssetTable_34;
	// TMPro.FontAssetCreationSettings TMPro.TMP_FontAsset::m_CreationSettings
	FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF ___m_CreationSettings_35;
	// TMPro.TMP_FontWeightPair[] TMPro.TMP_FontAsset::m_FontWeightTable
	TMP_FontWeightPairU5BU5D_t0A3A5955F13FEB2F7329D81BA157110DB99F9F37* ___m_FontWeightTable_36;
	// TMPro.TMP_FontWeightPair[] TMPro.TMP_FontAsset::fontWeights
	TMP_FontWeightPairU5BU5D_t0A3A5955F13FEB2F7329D81BA157110DB99F9F37* ___fontWeights_37;
	// System.Single TMPro.TMP_FontAsset::normalStyle
	float ___normalStyle_38;
	// System.Single TMPro.TMP_FontAsset::normalSpacingOffset
	float ___normalSpacingOffset_39;
	// System.Single TMPro.TMP_FontAsset::boldStyle
	float ___boldStyle_40;
	// System.Single TMPro.TMP_FontAsset::boldSpacing
	float ___boldSpacing_41;
	// System.Byte TMPro.TMP_FontAsset::italicStyle
	uint8_t ___italicStyle_42;
	// System.Byte TMPro.TMP_FontAsset::tabSize
	uint8_t ___tabSize_43;
	// System.Boolean TMPro.TMP_FontAsset::IsFontAssetLookupTablesDirty
	bool ___IsFontAssetLookupTablesDirty_44;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::FallbackSearchQueryLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___FallbackSearchQueryLookup_53;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphsToRender
	List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C* ___m_GlyphsToRender_59;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphsRendered
	List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C* ___m_GlyphsRendered_60;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphIndexList
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_GlyphIndexList_61;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphIndexListNewlyAdded
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_GlyphIndexListNewlyAdded_62;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphsToAdd
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_GlyphsToAdd_63;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphsToAddLookup
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___m_GlyphsToAddLookup_64;
	// System.Collections.Generic.List`1<TMPro.TMP_Character> TMPro.TMP_FontAsset::m_CharactersToAdd
	List_1_tCE1ACAA0C2736A7797B2C134895298CAB10BEB5E* ___m_CharactersToAdd_65;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::m_CharactersToAddLookup
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___m_CharactersToAddLookup_66;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::s_MissingCharacterList
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___s_MissingCharacterList_67;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::m_MissingUnicodesFromFontFile
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___m_MissingUnicodesFromFontFile_68;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// System.Linq.Expressions.StackGuard/<>c__3`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CU3Ec__3_2_tBB29CF1C815215807833CEA7087B12B63B7551BC_StaticFields
{
	// System.Linq.Expressions.StackGuard/<>c__3`2<T1,T2> System.Linq.Expressions.StackGuard/<>c__3`2::<>9
	U3CU3Ec__3_2_tBB29CF1C815215807833CEA7087B12B63B7551BC* ___U3CU3E9_0;
	// System.Func`2<System.Object,System.Object> System.Linq.Expressions.StackGuard/<>c__3`2::<>9__3_0
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___U3CU3E9__3_0_1;
};

// System.Linq.Expressions.StackGuard/<>c__3`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Newtonsoft.Json.Utilities.StringUtils/<>c__DisplayClass14_0`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Newtonsoft.Json.Utilities.StringUtils/<>c__DisplayClass14_0`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Threading.ThreadPool/<>c__DisplayClass17_0`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Threading.ThreadPool/<>c__DisplayClass17_0`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Unity.Services.Core.Telemetry.Internal.TelemetrySender/<>c__DisplayClass7_0`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Unity.Services.Core.Telemetry.Internal.TelemetrySender/<>c__DisplayClass7_0`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>

// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>

// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values>

// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values>

// System.Collections.Generic.Dictionary`2<System.Type,System.Object>

// System.Collections.Generic.Dictionary`2<System.Type,System.Object>

// Unity.Services.Core.Telemetry.Internal.DisabledCachePersister`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Unity.Services.Core.Telemetry.Internal.DisabledCachePersister`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields
{
	// T[] System.EmptyArray`1::Value
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___Value_0;
};

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>

// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>

// UnityEngine.UIElements.UQuery/IsOfType`1<System.Object>
struct IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4_StaticFields
{
	// UnityEngine.UIElements.UQuery/IsOfType`1<T> UnityEngine.UIElements.UQuery/IsOfType`1::s_Instance
	IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4* ___s_Instance_0;
};

// UnityEngine.UIElements.UQuery/IsOfType`1<System.Object>

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>

// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher>
struct List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RuleMatcherU5BU5D_t0135EA06151E72D04414F3EAF9420CB85EE2236C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1<UnityEngine.UIElements.StylePropertyAnimationSystem/Values>
struct List_1_t491E344573B9D6F61E36AF56132B7412453928C9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ValuesU5BU5D_t5332999C48416329B2A447FCD8C71113DDB459EA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.StylePropertyAnimationSystem/Values>

// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>

// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>

// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Tuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Tuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Tuple`3<System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Tuple`3<System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Tuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Tuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482_StaticFields
{
	// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.Experimental.ValueAnimation`1<T>> UnityEngine.UIElements.Experimental.ValueAnimation`1::sObjectPool
	ObjectPool_1_t14AD861DB16C1D8128773A1568BD9925E67A9ADB* ___sObjectPool_7;
};

// UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// DG.Tweening.Core.ABSSequentiable

// DG.Tweening.Core.ABSSequentiable

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// System.Attribute

// System.Attribute

// UnityEngine.UIElements.CallbackEventHandler

// UnityEngine.UIElements.CallbackEventHandler

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// DG.Tweening.Core.Debugger
struct Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_StaticFields
{
	// System.Int32 DG.Tweening.Core.Debugger::_logPriority
	int32_t ____logPriority_0;
};

// DG.Tweening.Core.Debugger

// DG.Tweening.Core.Easing.EaseCurve

// DG.Tweening.Core.Easing.EaseCurve

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_61;
};

// System.Text.Encoding

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable_2;
};

// System.Linq.Expressions.Expression

// System.Linq.Expressions.ExpressionVisitor

// System.Linq.Expressions.ExpressionVisitor

// Unity.Services.Core.Telemetry.Internal.FileCachePersister

// Unity.Services.Core.Telemetry.Internal.FileCachePersister

// System.MarshalByRefObject

// System.MarshalByRefObject

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.Linq.Expressions.StackGuard

// System.Linq.Expressions.StackGuard

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// Newtonsoft.Json.Utilities.StringUtils

// Newtonsoft.Json.Utilities.StringUtils

// UnityEngine.UIElements.StyleComplexSelector
struct StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData> UnityEngine.UIElements.StyleComplexSelector::s_PseudoStates
	Dictionary_2_t29D782BF5D0A26D11A04865B4306B86575506834* ___s_PseudoStates_6;
};

// UnityEngine.UIElements.StyleComplexSelector

// UnityEngine.UIElements.StylePropertyAnimationSystem

// UnityEngine.UIElements.StylePropertyAnimationSystem

// UnityEngine.UIElements.StyleSelector

// UnityEngine.UIElements.StyleSelector

// UnityEngine.UIElements.StyleValueExtensions

// UnityEngine.UIElements.StyleValueExtensions

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

// System.Threading.Tasks.TaskExtensions

// System.Threading.Tasks.TaskExtensions

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields
{
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___s_defaultTaskScheduler_0;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_1;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A* ____unobservedTaskException_3;
	// System.Threading.Lock System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7* ____unobservedTaskExceptionLockObject_4;
};

// System.Threading.Tasks.TaskScheduler

// System.Threading.Tasks.TaskToApm

// System.Threading.Tasks.TaskToApm

// Unity.Services.Core.Telemetry.Internal.TelemetrySender

// Unity.Services.Core.Telemetry.Internal.TelemetrySender

// Unity.Services.Core.Telemetry.Internal.TelemetryUtils

// Unity.Services.Core.Telemetry.Internal.TelemetryUtils

// System.Threading.ThreadPool

// System.Threading.ThreadPool

// System.ThrowHelper

// System.ThrowHelper

// System.Tuple

// System.Tuple

// DG.Tweening.TweenExtensions

// DG.Tweening.TweenExtensions

// DG.Tweening.Core.TweenManager
struct TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields
{
	// System.Boolean DG.Tweening.Core.TweenManager::isUnityEditor
	bool ___isUnityEditor_0;
	// System.Int32 DG.Tweening.Core.TweenManager::maxActive
	int32_t ___maxActive_1;
	// System.Int32 DG.Tweening.Core.TweenManager::maxTweeners
	int32_t ___maxTweeners_2;
	// System.Int32 DG.Tweening.Core.TweenManager::maxSequences
	int32_t ___maxSequences_3;
	// System.Boolean DG.Tweening.Core.TweenManager::hasActiveTweens
	bool ___hasActiveTweens_4;
	// System.Boolean DG.Tweening.Core.TweenManager::hasActiveDefaultTweens
	bool ___hasActiveDefaultTweens_5;
	// System.Boolean DG.Tweening.Core.TweenManager::hasActiveLateTweens
	bool ___hasActiveLateTweens_6;
	// System.Boolean DG.Tweening.Core.TweenManager::hasActiveFixedTweens
	bool ___hasActiveFixedTweens_7;
	// System.Boolean DG.Tweening.Core.TweenManager::hasActiveManualTweens
	bool ___hasActiveManualTweens_8;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveTweens
	int32_t ___totActiveTweens_9;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveDefaultTweens
	int32_t ___totActiveDefaultTweens_10;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveLateTweens
	int32_t ___totActiveLateTweens_11;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveFixedTweens
	int32_t ___totActiveFixedTweens_12;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveManualTweens
	int32_t ___totActiveManualTweens_13;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveTweeners
	int32_t ___totActiveTweeners_14;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveSequences
	int32_t ___totActiveSequences_15;
	// System.Int32 DG.Tweening.Core.TweenManager::totPooledTweeners
	int32_t ___totPooledTweeners_16;
	// System.Int32 DG.Tweening.Core.TweenManager::totPooledSequences
	int32_t ___totPooledSequences_17;
	// System.Int32 DG.Tweening.Core.TweenManager::totTweeners
	int32_t ___totTweeners_18;
	// System.Int32 DG.Tweening.Core.TweenManager::totSequences
	int32_t ___totSequences_19;
	// System.Boolean DG.Tweening.Core.TweenManager::isUpdateLoop
	bool ___isUpdateLoop_20;
	// DG.Tweening.Tween[] DG.Tweening.Core.TweenManager::_activeTweens
	TweenU5BU5D_t6E5F58C51FA0DA64C990C1C7E02EE9B70220C2F7* ____activeTweens_21;
	// DG.Tweening.Tween[] DG.Tweening.Core.TweenManager::_pooledTweeners
	TweenU5BU5D_t6E5F58C51FA0DA64C990C1C7E02EE9B70220C2F7* ____pooledTweeners_22;
	// System.Collections.Generic.Stack`1<DG.Tweening.Tween> DG.Tweening.Core.TweenManager::_PooledSequences
	Stack_1_t5BFE231094D4C21C56F26E6EE0BC9A194AD9A5B6* ____PooledSequences_23;
	// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Core.TweenManager::_KillList
	List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* ____KillList_24;
	// System.Collections.Generic.Dictionary`2<DG.Tweening.Tween,DG.Tweening.Core.TweenLink> DG.Tweening.Core.TweenManager::_TweenLinks
	Dictionary_2_tFD00E28E4EE499B3B2F468CCB593BD9ACCE80357* ____TweenLinks_25;
	// System.Int32 DG.Tweening.Core.TweenManager::_totTweenLinks
	int32_t ____totTweenLinks_26;
	// System.Int32 DG.Tweening.Core.TweenManager::_maxActiveLookupId
	int32_t ____maxActiveLookupId_27;
	// System.Boolean DG.Tweening.Core.TweenManager::_requiresActiveReorganization
	bool ____requiresActiveReorganization_28;
	// System.Int32 DG.Tweening.Core.TweenManager::_reorganizeFromId
	int32_t ____reorganizeFromId_29;
	// System.Int32 DG.Tweening.Core.TweenManager::_minPooledTweenerId
	int32_t ____minPooledTweenerId_30;
	// System.Int32 DG.Tweening.Core.TweenManager::_maxPooledTweenerId
	int32_t ____maxPooledTweenerId_31;
	// System.Boolean DG.Tweening.Core.TweenManager::_despawnAllCalledFromUpdateLoopCallback
	bool ____despawnAllCalledFromUpdateLoopCallback_32;
};

// DG.Tweening.Core.TweenManager

// DG.Tweening.TweenParams
struct TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA_StaticFields
{
	// DG.Tweening.TweenParams DG.Tweening.TweenParams::Params
	TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* ___Params_0;
};

// DG.Tweening.TweenParams

// DG.Tweening.TweenSettingsExtensions

// DG.Tweening.TweenSettingsExtensions

// System.Runtime.CompilerServices.Unsafe

// System.Runtime.CompilerServices.Unsafe

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility

// UnityEngine.UIElements.UxmlAttributeDescription

// UnityEngine.UIElements.UxmlAttributeDescription

// System.ValueType

// System.ValueType

// System.Numerics.Vector

// System.Numerics.Vector

// UnityEngine.UIElements.VisualTreeUpdater

// UnityEngine.UIElements.VisualTreeUpdater

// System.Threading.Volatile

// System.Threading.Volatile

// System.Xml.Linq.XObject

// System.Xml.Linq.XObject

// System.Xml.Schema.XmlValueConverter

// System.Xml.Schema.XmlValueConverter

// UnityEngine._AndroidJNIHelper

// UnityEngine._AndroidJNIHelper

// Unity.VisualScripting.FullSerializer.fsBaseConverter

// Unity.VisualScripting.FullSerializer.fsBaseConverter

// Unity.VisualScripting.FullSerializer.fsContext

// Unity.VisualScripting.FullSerializer.fsContext

// Unity.VisualScripting.FullSerializer.fsData
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_StaticFields
{
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::True
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___True_1;
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::False
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___False_2;
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::Null
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___Null_3;
};

// Unity.VisualScripting.FullSerializer.fsData

// Unity.VisualScripting.FullSerializer.Internal.fsOption

// Unity.VisualScripting.FullSerializer.Internal.fsOption

// Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection
struct fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields
{
	// System.Type[] Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_0;
	// System.Collections.Generic.IDictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute> Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::_cachedAttributeQueries
	RuntimeObject* ____cachedAttributeQueries_1;
	// System.Reflection.BindingFlags Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::DeclaredFlags
	int32_t ___DeclaredFlags_2;
};

// Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection

// Unity.VisualScripting.FullSerializer.fsSerializer
struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC_StaticFields
{
	// System.Collections.Generic.HashSet`1<System.String> Unity.VisualScripting.FullSerializer.fsSerializer::_reservedKeywords
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____reservedKeywords_11;
	// System.String Unity.VisualScripting.FullSerializer.fsSerializer::Key_ObjectReference
	String_t* ___Key_ObjectReference_12;
	// System.String Unity.VisualScripting.FullSerializer.fsSerializer::Key_ObjectDefinition
	String_t* ___Key_ObjectDefinition_13;
	// System.String Unity.VisualScripting.FullSerializer.fsSerializer::Key_InstanceType
	String_t* ___Key_InstanceType_14;
	// System.String Unity.VisualScripting.FullSerializer.fsSerializer::Key_Version
	String_t* ___Key_Version_15;
	// System.String Unity.VisualScripting.FullSerializer.fsSerializer::Key_Content
	String_t* ___Key_Content_16;
};

// Unity.VisualScripting.FullSerializer.fsSerializer

// Unity.VisualScripting.AttributeUtility/AttributeCache

// Unity.VisualScripting.AttributeUtility/AttributeCache

// UnityEngine.UIElements.StylePropertyAnimationSystem/Values

// UnityEngine.UIElements.StylePropertyAnimationSystem/Values

// System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult

// System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult

// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray

// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray

// UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2<UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/EmptyData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2<UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/EmptyData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2<UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TimingData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/StyleData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2<UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TimingData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/StyleData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// Unity.Services.Core.Telemetry.Internal.FileCachePersister`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Unity.Services.Core.Telemetry.Internal.FileCachePersister`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// Unity.Collections.NativeSlice`1<UnityEngine.UIElements.UIR.DrawBufferRange>

// Unity.Collections.NativeSlice`1<UnityEngine.UIElements.UIR.DrawBufferRange>

// Unity.Collections.NativeSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// Unity.Collections.NativeSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Boolean>

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData>

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData>

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData>

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData>

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData>

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData>

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData>

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData>

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData>

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData>

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData>

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t3B055CB72CA2D1BEF08BD1C91FFB09DB3268521E* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Object>

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.UIElements.UQueryBuilder`1<System.Object>

// UnityEngine.UIElements.UQueryBuilder`1<System.Object>

// UnityEngine.UIElements.UQueryBuilder`1<UnityEngine.UIElements.VisualElement>

// UnityEngine.UIElements.UQueryBuilder`1<UnityEngine.UIElements.VisualElement>

// UnityEngine.UIElements.UQueryState`1<System.Object>
struct UQueryState_1_tDA47936DEF27643350186CA4E1DED7053A3D02B2_StaticFields
{
	// UnityEngine.UIElements.UQueryState`1/ActionQueryMatcher<T> UnityEngine.UIElements.UQueryState`1::s_Action
	ActionQueryMatcher_tB76860A856401075A2CF71D45AC72A9C0F1BB99E* ___s_Action_0;
	// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<T,T> UnityEngine.UIElements.UQueryState`1::s_List
	ListQueryMatcher_1_t4D10BEF648526B008BEB75C8576A7D1EBFD73A83* ___s_List_3;
	// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<T,UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryState`1::s_EnumerationList
	ListQueryMatcher_1_tC447E3396770813CE332360F6EECEEFB6B51FA69* ___s_EnumerationList_4;
};

// UnityEngine.UIElements.UQueryState`1<System.Object>

// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement>
struct UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA_StaticFields
{
	// UnityEngine.UIElements.UQueryState`1/ActionQueryMatcher<T> UnityEngine.UIElements.UQueryState`1::s_Action
	ActionQueryMatcher_tBA08813774EDD8920F40BFFC2F27B8329C7923DD* ___s_Action_0;
	// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<T,T> UnityEngine.UIElements.UQueryState`1::s_List
	ListQueryMatcher_1_t7F21A0BB6BC47F1797366366A8E33731906C2940* ___s_List_3;
	// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<T,UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryState`1::s_EnumerationList
	ListQueryMatcher_1_t7F21A0BB6BC47F1797366366A8E33731906C2940* ___s_EnumerationList_4;
};

// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement>

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.UIElements.UIR.BMPAlloc
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30_StaticFields
{
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.BMPAlloc::Invalid
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___Invalid_0;
};

// UnityEngine.UIElements.UIR.BMPAlloc

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// UnityEngine.UIElements.CreationContext
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_StaticFields
{
	// UnityEngine.UIElements.CreationContext UnityEngine.UIElements.CreationContext::Default
	CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___Default_0;
};

// UnityEngine.UIElements.CreationContext

// System.Double

// System.Double

// UnityEngine.TextCore.FaceInfo

// UnityEngine.TextCore.FaceInfo

// UnityEngine.UIElements.Focusable

// UnityEngine.UIElements.Focusable

// TMPro.FontAssetCreationSettings

// TMPro.FontAssetCreationSettings

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Linq.Expressions.LambdaExpression

// System.Linq.Expressions.LambdaExpression

// TMPro.MaterialReference

// TMPro.MaterialReference

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// System.Linq.Expressions.ParameterExpression

// System.Linq.Expressions.ParameterExpression

// UnityEngine.PropertyName

// UnityEngine.PropertyName

// UnityEngine.Rect

// UnityEngine.Rect

// System.Numerics.Register

// System.Numerics.Register

// UnityEngine.UIElements.RuleMatcher

// UnityEngine.UIElements.RuleMatcher

// System.SByte

// System.SByte

// DG.Tweening.Core.SafeModeReport

// DG.Tweening.Core.SafeModeReport

// System.Single

// System.Single

// UnityEngine.UIElements.StyleSelectorPart

// UnityEngine.UIElements.StyleSelectorPart

// UnityEngine.UIElements.StyleValueHandle

// UnityEngine.UIElements.StyleValueHandle

// TMPro.TMP_FontStyleStack

// TMPro.TMP_FontStyleStack

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// TMPro.TMP_Offset

// DG.Tweening.Tween

// DG.Tweening.Tween

// System.UInt64

// System.UInt64

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// DG.Tweening.Plugins.Options.Vector3ArrayOptions

// DG.Tweening.Plugins.Options.Vector3ArrayOptions

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// System.Threading.Tasks.VoidTaskResult

// System.Threading.Tasks.VoidTaskResult

// System.Xml.Linq.XNode

// System.Xml.Linq.XNode

// System.Xml.Schema.XmlBaseConverter
struct XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields
{
	// System.Type System.Xml.Schema.XmlBaseConverter::ICollectionType
	Type_t* ___ICollectionType_3;
	// System.Type System.Xml.Schema.XmlBaseConverter::IEnumerableType
	Type_t* ___IEnumerableType_4;
	// System.Type System.Xml.Schema.XmlBaseConverter::IListType
	Type_t* ___IListType_5;
	// System.Type System.Xml.Schema.XmlBaseConverter::ObjectArrayType
	Type_t* ___ObjectArrayType_6;
	// System.Type System.Xml.Schema.XmlBaseConverter::StringArrayType
	Type_t* ___StringArrayType_7;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlAtomicValueArrayType
	Type_t* ___XmlAtomicValueArrayType_8;
	// System.Type System.Xml.Schema.XmlBaseConverter::DecimalType
	Type_t* ___DecimalType_9;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int32Type
	Type_t* ___Int32Type_10;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int64Type
	Type_t* ___Int64Type_11;
	// System.Type System.Xml.Schema.XmlBaseConverter::StringType
	Type_t* ___StringType_12;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlAtomicValueType
	Type_t* ___XmlAtomicValueType_13;
	// System.Type System.Xml.Schema.XmlBaseConverter::ObjectType
	Type_t* ___ObjectType_14;
	// System.Type System.Xml.Schema.XmlBaseConverter::ByteType
	Type_t* ___ByteType_15;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int16Type
	Type_t* ___Int16Type_16;
	// System.Type System.Xml.Schema.XmlBaseConverter::SByteType
	Type_t* ___SByteType_17;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt16Type
	Type_t* ___UInt16Type_18;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt32Type
	Type_t* ___UInt32Type_19;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt64Type
	Type_t* ___UInt64Type_20;
	// System.Type System.Xml.Schema.XmlBaseConverter::XPathItemType
	Type_t* ___XPathItemType_21;
	// System.Type System.Xml.Schema.XmlBaseConverter::DoubleType
	Type_t* ___DoubleType_22;
	// System.Type System.Xml.Schema.XmlBaseConverter::SingleType
	Type_t* ___SingleType_23;
	// System.Type System.Xml.Schema.XmlBaseConverter::DateTimeType
	Type_t* ___DateTimeType_24;
	// System.Type System.Xml.Schema.XmlBaseConverter::DateTimeOffsetType
	Type_t* ___DateTimeOffsetType_25;
	// System.Type System.Xml.Schema.XmlBaseConverter::BooleanType
	Type_t* ___BooleanType_26;
	// System.Type System.Xml.Schema.XmlBaseConverter::ByteArrayType
	Type_t* ___ByteArrayType_27;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlQualifiedNameType
	Type_t* ___XmlQualifiedNameType_28;
	// System.Type System.Xml.Schema.XmlBaseConverter::UriType
	Type_t* ___UriType_29;
	// System.Type System.Xml.Schema.XmlBaseConverter::TimeSpanType
	Type_t* ___TimeSpanType_30;
	// System.Type System.Xml.Schema.XmlBaseConverter::XPathNavigatorType
	Type_t* ___XPathNavigatorType_31;
};

// System.Xml.Schema.XmlBaseConverter

// Unity.VisualScripting.FullSerializer.fsConverter

// Unity.VisualScripting.FullSerializer.fsConverter

// Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields
{
	// System.String[] Unity.VisualScripting.FullSerializer.fsResult::EmptyStringArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyStringArray_0;
	// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsResult::Success
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___Success_3;
};

// Unity.VisualScripting.FullSerializer.fsResult

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor

// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter

// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_Text/TextBackingContainer

// UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics

// UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics

// UnityEngine.UIElements.VisualElement/Hierarchy

// UnityEngine.UIElements.VisualElement/Hierarchy

// System.Threading.Volatile/VolatileObject

// System.Threading.Volatile/VolatileObject

// System.ByReference`1<System.Char>

// System.ByReference`1<System.Char>

// System.ByReference`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.ByReference`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Threading.Tasks.ContinuationResultTaskFromTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Threading.Tasks.ContinuationResultTaskFromTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Linq.Expressions.Expression`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Linq.Expressions.Expression`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.UIElements.UIR.Utility/GPUBuffer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// UnityEngine.UIElements.UIR.Utility/GPUBuffer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t4BEAD6CE2527DBE682C128CEAA0FF2A79483E96C* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>

// System.Threading.Tasks.UnwrapPromise`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Threading.Tasks.UnwrapPromise`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Numerics.Vector`1<System.UInt64>
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes_4;
};

// System.Numerics.Vector`1<System.UInt64>

// System.Numerics.Vector`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_allOnes_4;
};

// System.Numerics.Vector`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// UnityEngine.UIElements.ComputedStyle

// UnityEngine.UIElements.ComputedStyle

// DG.Tweening.DOTween
struct DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields
{
	// System.String DG.Tweening.DOTween::Version
	String_t* ___Version_0;
	// System.Boolean DG.Tweening.DOTween::useSafeMode
	bool ___useSafeMode_1;
	// DG.Tweening.Core.Enums.SafeModeLogBehaviour DG.Tweening.DOTween::safeModeLogBehaviour
	int32_t ___safeModeLogBehaviour_2;
	// DG.Tweening.Core.Enums.NestedTweenFailureBehaviour DG.Tweening.DOTween::nestedTweenFailureBehaviour
	int32_t ___nestedTweenFailureBehaviour_3;
	// System.Boolean DG.Tweening.DOTween::showUnityEditorReport
	bool ___showUnityEditorReport_4;
	// System.Single DG.Tweening.DOTween::timeScale
	float ___timeScale_5;
	// System.Boolean DG.Tweening.DOTween::useSmoothDeltaTime
	bool ___useSmoothDeltaTime_6;
	// System.Single DG.Tweening.DOTween::maxSmoothUnscaledTime
	float ___maxSmoothUnscaledTime_7;
	// DG.Tweening.Core.Enums.RewindCallbackMode DG.Tweening.DOTween::rewindCallbackMode
	int32_t ___rewindCallbackMode_8;
	// DG.Tweening.LogBehaviour DG.Tweening.DOTween::_logBehaviour
	int32_t ____logBehaviour_9;
	// System.Func`3<UnityEngine.LogType,System.Object,System.Boolean> DG.Tweening.DOTween::onWillLog
	Func_3_t6E57AF981293DC26E9631AA2A14D231440CC20A3* ___onWillLog_10;
	// System.Boolean DG.Tweening.DOTween::drawGizmos
	bool ___drawGizmos_11;
	// System.Boolean DG.Tweening.DOTween::debugMode
	bool ___debugMode_12;
	// System.Boolean DG.Tweening.DOTween::_fooDebugStoreTargetId
	bool ____fooDebugStoreTargetId_13;
	// DG.Tweening.UpdateType DG.Tweening.DOTween::defaultUpdateType
	int32_t ___defaultUpdateType_14;
	// System.Boolean DG.Tweening.DOTween::defaultTimeScaleIndependent
	bool ___defaultTimeScaleIndependent_15;
	// DG.Tweening.AutoPlay DG.Tweening.DOTween::defaultAutoPlay
	int32_t ___defaultAutoPlay_16;
	// System.Boolean DG.Tweening.DOTween::defaultAutoKill
	bool ___defaultAutoKill_17;
	// DG.Tweening.LoopType DG.Tweening.DOTween::defaultLoopType
	int32_t ___defaultLoopType_18;
	// System.Boolean DG.Tweening.DOTween::defaultRecyclable
	bool ___defaultRecyclable_19;
	// DG.Tweening.Ease DG.Tweening.DOTween::defaultEaseType
	int32_t ___defaultEaseType_20;
	// System.Single DG.Tweening.DOTween::defaultEaseOvershootOrAmplitude
	float ___defaultEaseOvershootOrAmplitude_21;
	// System.Single DG.Tweening.DOTween::defaultEasePeriod
	float ___defaultEasePeriod_22;
	// DG.Tweening.Core.DOTweenComponent DG.Tweening.DOTween::instance
	DOTweenComponent_tEA6C5A1520B40681AE6FA1703529F60EBC3691DC* ___instance_23;
	// System.Boolean DG.Tweening.DOTween::_foo_isQuitting
	bool ____foo_isQuitting_24;
	// System.Int32 DG.Tweening.DOTween::maxActiveTweenersReached
	int32_t ___maxActiveTweenersReached_25;
	// System.Int32 DG.Tweening.DOTween::maxActiveSequencesReached
	int32_t ___maxActiveSequencesReached_26;
	// DG.Tweening.Core.SafeModeReport DG.Tweening.DOTween::safeModeReport
	SafeModeReport_t36C3527D96D574F81DB1748D1E856C7A539A25B9 ___safeModeReport_27;
	// System.Collections.Generic.List`1<DG.Tweening.TweenCallback> DG.Tweening.DOTween::GizmosDelegates
	List_1_t6EF58ECBFCFA6FA99AC1281CE3A14BB083B08524* ___GizmosDelegates_28;
	// System.Boolean DG.Tweening.DOTween::initialized
	bool ___initialized_29;
	// System.Int32 DG.Tweening.DOTween::_isQuittingFrame
	int32_t ____isQuittingFrame_30;
};

// DG.Tweening.DOTween

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.Extents

// TMPro.HighlightState

// TMPro.HighlightState

// UnityEngine.MaterialPropertyBlock

// UnityEngine.MaterialPropertyBlock

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.UIElements.PanelClearSettings

// UnityEngine.UIElements.PanelClearSettings

// Unity.Profiling.ProfilerMarker

// Unity.Profiling.ProfilerMarker

// DG.Tweening.Plugins.Options.QuaternionOptions

// DG.Tweening.Plugins.Options.QuaternionOptions

// UnityEngine.UIElements.UIR.RenderChainVEData

// UnityEngine.UIElements.UIR.RenderChainVEData

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// DG.Tweening.Sequence

// DG.Tweening.Sequence

// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D_StaticFields
{
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorPositive
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_InfinityVectorPositive_0;
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorNegative
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_InfinityVectorNegative_1;
};

// TMPro.TMP_TextInfo

// System.Threading.Tasks.TaskFactory

// System.Threading.Tasks.TaskFactory

// UnityEngine.TextCore.Text.TextGeneratorUtilities
struct TextGeneratorUtilities_tAD0F329B1A5C7CC27CF63086C11FE092B43FED53_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.TextCore.Text.TextGeneratorUtilities::largePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___largePositiveVector2_0;
	// UnityEngine.Vector2 UnityEngine.TextCore.Text.TextGeneratorUtilities::largeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___largeNegativeVector2_1;
};

// UnityEngine.TextCore.Text.TextGeneratorUtilities

// UnityEngine.TextCore.Text.TextInfo
struct TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.TextCore.Text.TextInfo::s_InfinityVectorPositive
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___s_InfinityVectorPositive_0;
	// UnityEngine.Vector2 UnityEngine.TextCore.Text.TextInfo::s_InfinityVectorNegative
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___s_InfinityVectorNegative_1;
};

// UnityEngine.TextCore.Text.TextInfo

// DG.Tweening.Tweener

// DG.Tweening.Tweener

// UnityEngine.UIElements.UQueryExtensions
struct UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_StaticFields
{
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementEmptyQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementEmptyQuery_0;
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementNameQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementNameQuery_1;
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementClassQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementClassQuery_2;
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementNameAndClassQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementNameAndClassQuery_3;
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementTypeQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementTypeQuery_4;
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementTypeAndNameQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementTypeAndNameQuery_5;
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementTypeAndClassQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementTypeAndClassQuery_6;
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementTypeAndNameAndClassQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementTypeAndNameAndClassQuery_7;
};

// UnityEngine.UIElements.UQueryExtensions

// TMPro.VertexGradient

// TMPro.VertexGradient

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};

// System.Threading.WaitHandle

// System.Xml.Linq.XContainer

// System.Xml.Linq.XContainer

// System.Xml.Schema.XmlListConverter

// System.Xml.Schema.XmlListConverter

// Unity.VisualScripting.FullSerializer.fsEnumConverter

// Unity.VisualScripting.FullSerializer.fsEnumConverter

// System.Span`1<System.Char>

// System.Span`1<System.Char>

// System.Span`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Span`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>

// DG.Tweening.Core.TweenerCore`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// DG.Tweening.Core.TweenerCore`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// UnityEngine.UIElements.BaseVisualElementPanel

// UnityEngine.UIElements.BaseVisualElementPanel

// UnityEngine.Component

// UnityEngine.Component

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.SystemException

// System.SystemException

// TMPro.TMP_LineInfo

// TMPro.TMP_LineInfo

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

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

// UnityEngine.UIElements.UIR.UIRenderDevice
struct UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302_StaticFields
{
	// System.Collections.Generic.LinkedList`1<UnityEngine.UIElements.UIR.UIRenderDevice/DeviceToFree> UnityEngine.UIElements.UIR.UIRenderDevice::m_DeviceFreeQueue
	LinkedList_1_t09F6FB09C766455615BBF59716D285304C49E0E7* ___m_DeviceFreeQueue_17;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::m_ActiveDeviceCount
	int32_t ___m_ActiveDeviceCount_18;
	// System.Boolean UnityEngine.UIElements.UIR.UIRenderDevice::m_SubscribedToNotifications
	bool ___m_SubscribedToNotifications_19;
	// System.Boolean UnityEngine.UIElements.UIR.UIRenderDevice::m_SynchronousFree
	bool ___m_SynchronousFree_20;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_FontTexPropID
	int32_t ___s_FontTexPropID_21;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_FontTexSDFScaleID
	int32_t ___s_FontTexSDFScaleID_22;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_GradientSettingsTexID
	int32_t ___s_GradientSettingsTexID_23;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_ShaderInfoTexID
	int32_t ___s_ShaderInfoTexID_24;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_TransformsPropID
	int32_t ___s_TransformsPropID_25;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_ClipRectsPropID
	int32_t ___s_ClipRectsPropID_26;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_ClipSpaceParamsID
	int32_t ___s_ClipSpaceParamsID_27;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.UIRenderDevice::s_MarkerAllocate
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerAllocate_28;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.UIRenderDevice::s_MarkerFree
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerFree_29;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.UIRenderDevice::s_MarkerAdvanceFrame
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerAdvanceFrame_30;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.UIRenderDevice::s_MarkerFence
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerFence_31;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.UIRenderDevice::s_MarkerBeforeDraw
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerBeforeDraw_32;
	// System.Nullable`1<System.Boolean> UnityEngine.UIElements.UIR.UIRenderDevice::s_VertexTexturingIsAvailable
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___s_VertexTexturingIsAvailable_33;
	// System.Nullable`1<System.Boolean> UnityEngine.UIElements.UIR.UIRenderDevice::s_ShaderModelIs35
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___s_ShaderModelIs35_34;
	// UnityEngine.Texture2D UnityEngine.UIElements.UIR.UIRenderDevice::s_DefaultShaderInfoTexFloat
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_DefaultShaderInfoTexFloat_37;
	// UnityEngine.Texture2D UnityEngine.UIElements.UIR.UIRenderDevice::s_DefaultShaderInfoTexARGB8
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_DefaultShaderInfoTexARGB8_38;
};

// UnityEngine.UIElements.UIR.UIRenderDevice

// UnityEngine.UnityException

// UnityEngine.UnityException

// UnityEngine.UIElements.UIR.Utility
struct Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields
{
	// System.Action`1<System.Boolean> UnityEngine.UIElements.UIR.Utility::GraphicsResourcesRecreate
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___GraphicsResourcesRecreate_0;
	// System.Action UnityEngine.UIElements.UIR.Utility::EngineUpdate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___EngineUpdate_1;
	// System.Action UnityEngine.UIElements.UIR.Utility::FlushPendingResources
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___FlushPendingResources_2;
	// System.Action`1<UnityEngine.Camera> UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderers
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* ___RegisterIntermediateRenderers_3;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeAdd
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeAdd_4;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeExecute
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeExecute_5;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeCleanup
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeCleanup_6;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.Utility::s_MarkerRaiseEngineUpdate
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerRaiseEngineUpdate_7;
};

// UnityEngine.UIElements.UIR.Utility

// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::tooltipPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey_6;
	// System.UInt32 UnityEngine.UIElements.VisualElement::s_NextId
	uint32_t ___s_NextId_9;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList_10;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey_11;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_12;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_InfiniteRect_30;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::s_runtimeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_runtimeMaterial_46;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData> UnityEngine.UIElements.VisualElement::s_TypeData
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData_48;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList_56;
	// UnityEngine.UIElements.VisualElement/CustomStyleAccess UnityEngine.UIElements.VisualElement::s_CustomStyleAccess
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess_60;
	// System.Text.RegularExpressions.Regex UnityEngine.UIElements.VisualElement::s_InternalStyleSheetPath
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath_63;
};

// UnityEngine.UIElements.VisualElement

// System.Xml.Linq.XDocument

// System.Xml.Linq.XDocument

// System.Action`1<System.IAsyncResult>

// System.Action`1<System.IAsyncResult>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// DG.Tweening.Core.DOGetter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// DG.Tweening.Core.DOGetter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// DG.Tweening.Core.DOSetter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// DG.Tweening.Core.DOSetter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.Func`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.Func`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`2<System.IAsyncResult,System.Threading.Tasks.VoidTaskResult>

// System.Func`2<System.IAsyncResult,System.Threading.Tasks.VoidTaskResult>

// System.Func`2<System.Object,System.Object>

// System.Func`2<System.Object,System.Object>

// System.Func`2<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`2<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`2<System.Single,System.Single>

// System.Func`2<System.Single,System.Single>

// System.Func`2<System.Threading.Tasks.Task,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`2<System.Threading.Tasks.Task,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.String>

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.String>

// System.Func`3<System.String,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`3<System.String,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.AsyncCallback,System.Object,System.IAsyncResult>

// System.Func`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.AsyncCallback,System.Object,System.IAsyncResult>

// System.Func`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.AsyncCallback,System.Object,System.IAsyncResult>

// System.Func`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.AsyncCallback,System.Object,System.IAsyncResult>

// System.Buffers.SpanAction`2<System.Char,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Buffers.SpanAction`2<System.Char,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// DG.Tweening.TweenCallback`1<System.Int32>

// DG.Tweening.TweenCallback`1<System.Int32>

// DG.Tweening.TweenCallback`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// DG.Tweening.TweenCallback`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.ArgumentException

// System.ArgumentException

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// DG.Tweening.EaseFunction

// DG.Tweening.EaseFunction

// System.InvalidCastException

// System.InvalidCastException

// System.InvalidOperationException

// System.InvalidOperationException

// System.OperationCanceledException

// System.OperationCanceledException

// UnityEngine.UIElements.StyleSheet
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428_StaticFields
{
	// System.String UnityEngine.UIElements.StyleSheet::kCustomPropertyMarker
	String_t* ___kCustomPropertyMarker_21;
};

// UnityEngine.UIElements.StyleSheet

// TMPro.TMP_Asset

// TMPro.TMP_Asset

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// DG.Tweening.TweenCallback

// DG.Tweening.TweenCallback

// System.Threading.WaitCallback

// System.Threading.WaitCallback

// TMPro.WordWrapState

// TMPro.WordWrapState

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_ReadFontAssetDefinitionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ReadFontAssetDefinitionMarker_45;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_AddSynthesizedCharactersMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_AddSynthesizedCharactersMarker_46;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_TryAddCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_TryAddCharacterMarker_47;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_TryAddCharactersMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_TryAddCharactersMarker_48;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_UpdateGlyphAdjustmentRecordsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_UpdateGlyphAdjustmentRecordsMarker_49;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_ClearFontAssetDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ClearFontAssetDataMarker_50;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_UpdateFontAssetDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_UpdateFontAssetDataMarker_51;
	// System.String TMPro.TMP_FontAsset::s_DefaultMaterialSuffix
	String_t* ___s_DefaultMaterialSuffix_52;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::k_SearchedFontAssetLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___k_SearchedFontAssetLookup_54;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::k_FontAssets_FontFeaturesUpdateQueue
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___k_FontAssets_FontFeaturesUpdateQueue_55;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::k_FontAssets_FontFeaturesUpdateQueueLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___k_FontAssets_FontFeaturesUpdateQueueLookup_56;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::k_FontAssets_AtlasTexturesUpdateQueue
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___k_FontAssets_AtlasTexturesUpdateQueue_57;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::k_FontAssets_AtlasTexturesUpdateQueueLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___k_FontAssets_AtlasTexturesUpdateQueueLookup_58;
	// System.UInt32[] TMPro.TMP_FontAsset::k_GlyphIndexArray
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___k_GlyphIndexArray_69;
};

// TMPro.TMP_FontAsset

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// DG.Tweening.Tween[]
struct TweenU5BU5D_t6E5F58C51FA0DA64C990C1C7E02EE9B70220C2F7  : public RuntimeArray
{
	ALIGN_FIELD (8) Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* m_Items[1];

	inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UIElements.StyleSelector[]
struct StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* m_Items[1];

	inline StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UIElements.StyleSelectorPart[]
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 m_Items[1];

	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tempData_2), (void*)NULL);
		#endif
	}
	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tempData_2), (void*)NULL);
		#endif
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001  : public RuntimeArray
{
	ALIGN_FIELD (8) AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* m_Items[1];

	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// R System.Linq.Expressions.StackGuard::RunOnEmptyStackCore<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`2<System.Object,R>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackGuard_RunOnEmptyStackCore_TisIl2CppFullySharedGenericAny_m99455F2A5D798D61FF08E150B8841AC821D862D4_gshared (StackGuard_t6F37D81861288F2039A29A88A6287419F220E849* __this, Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9* ___0_action, RuntimeObject* ___1_state, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Span`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mD6DB19F66035FC77675F1ED9FE696A65CF9C0F23_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetException_m013D2C6E801E5EA838414D149B4A5FE9834DE0EB_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility::GetUnsafePtr<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.NativeSlice`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.NativeSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.UQueryState`1<T> UnityEngine.UIElements.UQueryState`1<System.Object>::RebuildOn(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UQueryState_1_tDA47936DEF27643350186CA4E1DED7053A3D02B2 UQueryState_1_RebuildOn_mF29E43348045B1219A757EBBF43C892C32EEA5DC_gshared (UQueryState_1_tDA47936DEF27643350186CA4E1DED7053A3D02B2* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_element, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.UIElements.UQueryState`1<System.Object>::First()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UQueryState_1_First_m19FF1885E9D1D57D0EBA715820CA3C02C2C9C363_gshared (UQueryState_1_tDA47936DEF27643350186CA4E1DED7053A3D02B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UQueryBuilder`1<System.Object>::.ctor(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UQueryBuilder_1__ctor_m9C0EC0A8947CAE0CD99B7FC847861454BE629EF6_gshared (UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_visualElement, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
// T[] System.Array::Empty<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m73E14DB94D21272EEE1E28E4D74704B0095D8064_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m072EF82431D7D7E164213D822010141A4C00050D_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Pop_m8E5FF1B4CFD9ADF4D8A7C4CFF4713C83E163A34A_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;

// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398 (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___0_object, ___1_method, method);
}
// R System.Linq.Expressions.StackGuard::RunOnEmptyStackCore<System.Object>(System.Func`2<System.Object,R>,System.Object)
inline RuntimeObject* StackGuard_RunOnEmptyStackCore_TisRuntimeObject_m3E82B5CE8F4D3419B7B2926F61607D2901037384 (StackGuard_t6F37D81861288F2039A29A88A6287419F220E849* __this, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___0_action, RuntimeObject* ___1_state, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (StackGuard_t6F37D81861288F2039A29A88A6287419F220E849*, Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9*, RuntimeObject*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))StackGuard_RunOnEmptyStackCore_TisIl2CppFullySharedGenericAny_m99455F2A5D798D61FF08E150B8841AC821D862D4_gshared)((StackGuard_t6F37D81861288F2039A29A88A6287419F220E849*)__this, (Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9*)___0_action, ___1_state, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::get_Factory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline (const RuntimeMethod* method) ;
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53 (const RuntimeMethod* method) ;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::get_Default()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline (const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.String System.String::FastAllocateString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104 (int32_t ___0_length, const RuntimeMethod* method) ;
// System.Char& System.String::GetRawStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(T&,System.Int32)
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline)((Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)__this, (Il2CppFullySharedGenericAny*)___0_ptr, ___1_length, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mE2CB2DBE9CFA9FD3FF4707BB20A9B1FE52C76273 (Dictionary_2_t8B8AC3704119A64857E8D359CB4782C5ECEA90E7* __this, int32_t ___0_key, Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Int64 UnityEngine.UIElements.StylePropertyAnimationSystem::CurrentTimeMs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StylePropertyAnimationSystem_CurrentTimeMs_m3B079B6B759368132A67B8F2E6052A270A7A49B6 (StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIElements.StylePropertyAnimationSystem/Values>::Contains(T)
inline bool List_1_Contains_m71E6FD21D54996DACBC26526FABF5E57B9E4C3B4 (List_1_t491E344573B9D6F61E36AF56132B7412453928C9* __this, Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.StylePropertyAnimationSystem/Values>::Add(T)
inline void List_1_Add_mA2DB3B33B757C906EBF689F682FD659A191A242B_inline (List_1_t491E344573B9D6F61E36AF56132B7412453928C9* __this, Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// UnityEngine.UIElements.StyleValueType UnityEngine.UIElements.StyleValueHandle::get_valueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9 (StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::NextPowerOfTwo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023 (const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.Task::CreationOptionsFromContinuationOptions(System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskCreationOptions&,System.Threading.Tasks.InternalTaskOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_CreationOptionsFromContinuationOptions_mE9F785FA8B0E96211D327A83E154C2DF1DDDCEFF (int32_t ___0_continuationOptions, int32_t* ___1_creationOptions, int32_t* ___2_internalOptions, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.Task::ContinueWithCore(System.Threading.Tasks.Task,System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken,System.Threading.Tasks.TaskContinuationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_ContinueWithCore_m257B705F98BF64DC7C346F06711A4B32F366D8D8 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_continuationTask, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___1_scheduler, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_options, const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationToken System.OperationCanceledException::get_CancellationToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::TrySetCanceled(System.Threading.CancellationToken,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_tokenToRecord, RuntimeObject* ___1_cancellationException, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::TrySetException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, RuntimeObject* ___0_exceptionObject, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCompletedSuccessfully()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompletedSuccessfully_m8A0797317734CF69DA5DB2CC2E87AA8F5D43154C (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationToken::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken__ctor_m5DAD339D4A9DEF9962B7EF1E30564BADC78E9BD6 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, bool ___0_canceled, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::InternalCurrentIfAttached(System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_InternalCurrentIfAttached_mBF043F869DEB200F3129DB7CE48C64BA0A85B58C (int32_t ___0_creationOptions, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
inline void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60 (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mD6DB19F66035FC77675F1ED9FE696A65CF9C0F23_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
inline bool TaskCompletionSource_1_TrySetException_m458D56254FBD7F874452154131D60AADD2131334 (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, Exception_t*, const RuntimeMethod*))TaskCompletionSource_1_TrySetException_m013D2C6E801E5EA838414D149B4A5FE9834DE0EB_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, ___0_exception, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
inline Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method)
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* il2cppRetVal = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
	return (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)il2cppRetVal;
}
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// UnityEngine.UnityException UnityEngine.Texture::CreateNonReadableException(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* Texture_CreateNonReadableException_m29786CD930E89C281564A9B341FD4088FBC8C94F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_t, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.Texture2D::GetRawImageDataSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Texture2D_GetRawImageDataSize_mBD92C0F2A09A023841785BBB642C2B7696EE7CBE (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// UnityEngine.UnityException UnityEngine.Texture::CreateNativeArrayLengthOverflowException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* Texture_CreateNativeArrayLengthOverflowException_m508BE4928B3768ED618EF1FA10E022F6FF12F870 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Texture2D::GetWritableImageData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Texture2D_GetWritableImageData_m8E26026A332040F8713E5A2A13C5545797159A5E (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_frame, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItemHelper(System.Threading.WaitCallback,System.Object,System.Threading.StackCrawlMark&,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItemHelper_m5B98C28FB6C9379B8DDD302ABC3D1D1FC1779EDD (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___0_callBack, RuntimeObject* ___1_state, int32_t* ___2_stackMark, bool ___3_compressStack, bool ___4_forceGlobal, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.Core.Debugger::ShouldLogSafeModeCapturedError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debugger_ShouldLogSafeModeCapturedError_m5EE800D2A5FD98C95C119D9AF68035095A123C47 (const RuntimeMethod* method) ;
// System.Reflection.MethodBase System.Exception::get_TargetSite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodBase_t* Exception_get_TargetSite_m0CE79BBF864CCEA96B72ED52EC66753CFBE5ED6A (Exception_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.Debugger::LogSafeModeCapturedError(System.Object,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogSafeModeCapturedError_m0EE4B4F14B9243B4A9BD757853CAB77B5A888ED6 (RuntimeObject* ___0_message, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___1_t, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.SafeModeReport::Add(DG.Tweening.Core.SafeModeReport/SafeModeReportType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeModeReport_Add_mC993434DFE20DDF1E44389DACD34085F31E6ED20 (SafeModeReport_t36C3527D96D574F81DB1748D1E856C7A539A25B9* __this, int32_t ___0_type, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.Core.Debugger::get_logPriority()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline (const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.Debugger::LogNullTween(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogNullTween_m9C6A433A68F2C3DFCDFF127434135F8BBC116740 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.Tween::get_active()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.Debugger::LogInvalidTween(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogInvalidTween_mEC44C60EC29E4EE401EFE473B01A209D79F3A83F (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.Debugger::LogNestedTween(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogNestedTween_m409C30CE26DFF284388E93FDD37738CF2116F128 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.Core.TweenManager::Pause(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenManager_Pause_mF53E744566930DFD9A6642B63E872D12F23B4269 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.Core.TweenManager::Play(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenManager_Play_m16548C8C4203A88870C6E54E44F03CDA11763DA2 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.TweenManager::AddActiveTween(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenManager_AddActiveTween_mDE4BACC61DA83AB6BD50B1AA57CB16F40272CD05 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.TweenManager::IncreaseCapacities(DG.Tweening.Core.TweenManager/CapacityIncreaseMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenManager_IncreaseCapacities_m5316415F2F95212320B0745CAF123B139A8CDA62 (int32_t ___0_increaseMode, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.Debugger::LogWarning(System.Object,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogWarning_mB528DCD3175EB2D670A62A6507A656F8DE76D06E (RuntimeObject* ___0_message, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___1_t, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Tween::set_isRelative(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.TweenManager::SetUpdateType(DG.Tweening.Tween,DG.Tweening.UpdateType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenManager_SetUpdateType_m4C1E97DD675C70ABA66E53D283EDABB6337E44B4 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, int32_t ___1_updateType, bool ___2_isIndependentUpdate, const RuntimeMethod* method) ;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::PrependInterval(DG.Tweening.Sequence,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* TweenSettingsExtensions_PrependInterval_mCC5525CBFA2E20938D4D095DF5F78720C23228E0 (Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___0_s, float ___1_interval, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.Easing.EaseCurve::.ctor(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseCurve__ctor_m29BD0E232922C8CE2E4AC877F79EF6096C34EDFB (EaseCurve_t36BD7EAD5E58656A06E0D71596FF781803BE9C5F* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_animCurve, const RuntimeMethod* method) ;
// System.Void DG.Tweening.EaseFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseFunction__ctor_mD630BE102357BB21BD878DF5E98F90BFE785A0F8 (EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.Core.Easing.EaseManager::IsFlashEase(DG.Tweening.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EaseManager_IsFlashEase_mB7D47A96B8C663F7FA56AD8D10B9586C76204FF6 (int32_t ___0_ease, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.DOTween::get_debugStoreTargetId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DOTween_get_debugStoreTargetId_m96F1367AD4955D84B2284A01EDD146DCE64B3A75 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.Plugins.Core.SpecialPluginsUtils::SetLookAt(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpecialPluginsUtils_SetLookAt_m032BE1B008809A24C0B4BD53A9689F7DD70F7FCF (TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* ___0_t, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.Plugins.Core.SpecialPluginsUtils::SetPunch(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpecialPluginsUtils_SetPunch_m65C9920310ABC6FC6C483A6CEC088F3A360EE3CA (TweenerCore_3_t0CD1AF1B188E9D008629D280210B5FA8C761E336* ___0_t, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.Plugins.Core.SpecialPluginsUtils::SetShake(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpecialPluginsUtils_SetShake_m6F23CBF51E66BEAB3791161223E67374E976FF20 (TweenerCore_3_t0CD1AF1B188E9D008629D280210B5FA8C761E336* ___0_t, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.Plugins.Core.SpecialPluginsUtils::SetCameraShakePosition(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpecialPluginsUtils_SetCameraShakePosition_m49B0FC03FA80CF51647589CCCB44BA1487B037A3 (TweenerCore_3_t0CD1AF1B188E9D008629D280210B5FA8C761E336* ___0_t, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.TweenManager::Despawn(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenManager_Despawn_mF56A8F1D2B480230F68F0149F6122D0BBAA129FC (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, bool ___1_modifyActiveLists, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.Tween::DoGoto(DG.Tweening.Tween,System.Single,System.Int32,DG.Tweening.Core.Enums.UpdateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tween_DoGoto_m1A61731CB2E2D27D1E08ADD844E575A5DAD8939C (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, float ___1_toPosition, int32_t ___2_toCompletedLoops, int32_t ___3_updateMode, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.Tween::get_isRelative()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.Debugger::LogError(System.Object,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogError_mBAD7F720F13F12B84A27F564F83F00B66EEE6B9E (RuntimeObject* ___0_message, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___1_t, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility::GetUnsafePtr<UnityEngine.UIElements.UIR.DrawBufferRange>(Unity.Collections.NativeSlice`1<T>)
inline void* NativeSliceUnsafeUtility_GetUnsafePtr_TisDrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4_m3F0318274FE0636367B91558C6673DEF834FB1A5 (NativeSlice_1_t2E5DBD9A5F77A5044A4160098A0B2A45D3EE8974 ___0_nativeSlice, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, const RuntimeMethod*))NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_gshared)(il2cpp_codegen_cast_struct<NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, NativeSlice_1_t2E5DBD9A5F77A5044A4160098A0B2A45D3EE8974>(&___0_nativeSlice), method);
}
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.NativeSlice`1<UnityEngine.UIElements.UIR.DrawBufferRange>::get_Length()
inline int32_t NativeSlice_1_get_Length_m2566843C81FEFDDF6407962D4E34F13C3133028D (NativeSlice_1_t2E5DBD9A5F77A5044A4160098A0B2A45D3EE8974* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, const RuntimeMethod*))NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_gshared)((NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*)__this, method);
}
// System.Void UnityEngine.UIElements.UIR.Utility::DrawRanges(System.IntPtr,System.IntPtr*,System.Int32,System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_DrawRanges_m6F5AE31B6A857DB71F66A2662C6EBE1B218B6FF4 (intptr_t ___0_ib, intptr_t* ___1_vertexStreams, int32_t ___2_streamCount, intptr_t ___3_ranges, int32_t ___4_rangeCount, intptr_t ___5_vertexDecl, const RuntimeMethod* method) ;
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UQueryExtensions::Q(UnityEngine.UIElements.VisualElement,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* UQueryExtensions_Q_m95306617BF08AC2853EABB5299786D2095BE631E (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_e, String_t* ___1_name, String_t* ___2_className, const RuntimeMethod* method) ;
// UnityEngine.UIElements.UQueryState`1<T> UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement>::RebuildOn(UnityEngine.UIElements.VisualElement)
inline UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004 (UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_element, const RuntimeMethod* method)
{
	return ((  UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA (*) (UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, const RuntimeMethod*))UQueryState_1_RebuildOn_mF29E43348045B1219A757EBBF43C892C32EEA5DC_gshared)(__this, ___0_element, method);
}
// T System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher>::get_Item(System.Int32)
inline RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68 (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.UIElements.StyleSelector[] UnityEngine.UIElements.StyleComplexSelector::get_selectors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02 (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleSelectorPart[] UnityEngine.UIElements.StyleSelector::get_parts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF (StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleSelectorPart UnityEngine.UIElements.StyleSelectorPart::CreatePredicate(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 StyleSelectorPart_CreatePredicate_m9B21A0E45BE2A1EBCA075E7C3EA04216EFB99026 (RuntimeObject* ___0_predicate, const RuntimeMethod* method) ;
// T UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement>::First()
inline VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94 (UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA* __this, const RuntimeMethod* method)
{
	return ((  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* (*) (UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA*, const RuntimeMethod*))UQueryState_1_First_m19FF1885E9D1D57D0EBA715820CA3C02C2C9C363_gshared)(__this, method);
}
// UnityEngine.UIElements.StyleSelectorPart UnityEngine.UIElements.StyleSelectorPart::CreateClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 StyleSelectorPart_CreateClass_m5B7F89D3BE469D181E0887E94F4031B92554656E (String_t* ___0_className, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleSelectorPart UnityEngine.UIElements.StyleSelectorPart::CreateId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 StyleSelectorPart_CreateId_m8C5422E6675A02D0A623D8BB2A1F6704299F0357 (String_t* ___0_Id, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UQueryBuilder`1<UnityEngine.UIElements.VisualElement>::.ctor(UnityEngine.UIElements.VisualElement)
inline void UQueryBuilder_1__ctor_m841C38F69A30425CCEA1F93525C97AD0B9648486 (UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_visualElement, const RuntimeMethod* method)
{
	((  void (*) (UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, const RuntimeMethod*))UQueryBuilder_1__ctor_m9C0EC0A8947CAE0CD99B7FC847861454BE629EF6_gshared)(__this, ___0_visualElement, method);
}
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Utility::SetVectorArray(UnityEngine.MaterialPropertyBlock,System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetVectorArray_m36650D854AAE55F689FF622D36CC2AC0B9FD7FB1 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___0_props, int32_t ___1_name, intptr_t ___2_vector4s, int32_t ___3_count, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.UxmlAttributeDescription::TryGetValueFromBagAsString(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, String_t** ___2_value, const RuntimeMethod* method) ;
// UnityEngine.UIElements.IVisualTreeUpdater UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::get_Item(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___0_phase, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::set_Item(UnityEngine.UIElements.VisualTreeUpdatePhase,UnityEngine.UIElements.IVisualTreeUpdater)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11 (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___0_phase, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25 (Type_t* ___0_t, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.AndroidJNISafe::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Boolean[] UnityEngine.AndroidJNISafe::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.AndroidJNISafe::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.SByte[] UnityEngine.AndroidJNISafe::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int16[] UnityEngine.AndroidJNISafe::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int64[] UnityEngine.AndroidJNISafe::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Single[] UnityEngine.AndroidJNISafe::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Double[] UnityEngine.AndroidJNISafe::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Char[] UnityEngine.AndroidJNISafe::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE (intptr_t ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNISafe::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849 (intptr_t ___0_str, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094 (intptr_t ___0_localref, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_jobject, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01 (intptr_t ___0_javaClass, String_t* ___1_fieldName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8 (intptr_t ___0_javaClass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* __this, String_t* ___0_key, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsResult::Fail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsResult_Fail_m3315594F29830C02FD560F7401D311F99DA241CD (String_t* ___0_warning, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsSerializer::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Type,System.Type,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TryDeserialize_m675340784F47BA9FF50C193F53A3BAAA1D18D2B9 (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, Type_t* ___1_storageType, Type_t* ___2_overrideConverterType, RuntimeObject** ___3_result, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsSerializer::TrySerialize(System.Type,System.Type,System.Object,Unity.VisualScripting.FullSerializer.fsData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TrySerialize_m2E029A68D43C8F4783B5912AB8004658E41AB84B (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, Type_t* ___0_storageType, Type_t* ___1_overrideConverterType, RuntimeObject* ___2_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___3_data, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.fsResult::get_Succeeded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8 (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* __this, String_t* ___0_key, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Object>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128 (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, Type_t* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96 (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, Type_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T)
inline void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516 (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared)((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)__this, ___0_value, method);
}
// System.Attribute Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* fsPortableReflection_GetAttribute_m54325D68CE95535644F25CD39FAA3D4858745EB8 (MemberInfo_t* ___0_element, Type_t* ___1_attributeType, bool ___2_shouldCache, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsSerializer::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Type,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TryDeserialize_mBBA19D9240A719A58C3DA23F2D8D4C538C5C81F2 (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, Type_t* ___1_storageType, RuntimeObject** ___2_result, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsSerializer::TrySerialize(System.Type,System.Object,Unity.VisualScripting.FullSerializer.fsData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TrySerialize_mADDE6667080A2E2C69A54662C47111A08A7EC006 (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, Type_t* ___0_storageType, RuntimeObject* ___1_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___2_data, const RuntimeMethod* method) ;
// System.Attribute Unity.VisualScripting.AttributeUtility/AttributeCache::GetAttribute(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* AttributeCache_GetAttribute_m1B367E0EC1D06BB18254A3C357B7547316F26AA9 (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, Type_t* ___0_attributeType, bool ___1_inherit, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.AttributeUtility/AttributeCache::HasAttribute(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttributeCache_HasAttribute_m6DE0BA7A52D8EB2284ED28B641AF6F41C53C8AA7 (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, Type_t* ___0_attributeType, bool ___1_inherit, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Linq.Expressions.ParameterExpression>()
inline ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline (const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline)(method);
	return (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Int32)
inline void List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline void List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PushParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) ;
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PopParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::.ctor()
inline void HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared)((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline bool HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69 (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))HashSet_1_Add_m73E14DB94D21272EEE1E28E4D74704B0095D8064_gshared)((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Push(T)
inline void Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Stack_1_Push_m072EF82431D7D7E164213D822010141A4C00050D_gshared)((Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Pop()
inline HashSet_1_t068F5201D923072F46716204841D21328FE6218D* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5 (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, const RuntimeMethod* method)
{
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* il2cppRetVal;
	((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Stack_1_Pop_m8E5FF1B4CFD9ADF4D8A7C4CFF4713C83E163A34A_gshared)((Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Linq.Expressions.StackGuard::RunOnEmptyStack<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Action`2<T1,T2>,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackGuard_RunOnEmptyStack_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m42C4C26F7654B2912AA14A7D05145D7E2CB1A73E_gshared (StackGuard_t6F37D81861288F2039A29A88A6287419F220E849* __this, Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8* ___0_action, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_arg1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_arg2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tACBF5A1656250800CE861707354491F0611F6624_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackGuard_RunOnEmptyStackCore_TisRuntimeObject_m3E82B5CE8F4D3419B7B2926F61607D2901037384_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T1)
	const uint32_t SizeOf_T1_t65BC5F8F22425E1C4760A099E9E6CB773176C2FA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// sizeof(T2)
	const uint32_t SizeOf_T2_tF6F2164F425859FD9679DE7DBFA2D0CEC0098E08 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	// T1
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_t65BC5F8F22425E1C4760A099E9E6CB773176C2FA);
	// T2
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T2_tF6F2164F425859FD9679DE7DBFA2D0CEC0098E08);
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* G_B2_0 = NULL;
	StackGuard_t6F37D81861288F2039A29A88A6287419F220E849* G_B2_1 = NULL;
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* G_B1_0 = NULL;
	StackGuard_t6F37D81861288F2039A29A88A6287419F220E849* G_B1_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_0 = ((U3CU3Ec__3_2_tBB29CF1C815215807833CEA7087B12B63B7551BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__3_0_1;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__3_2_tBB29CF1C815215807833CEA7087B12B63B7551BC* L_2 = ((U3CU3Ec__3_2_tBB29CF1C815215807833CEA7087B12B63B7551BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_3 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)il2cpp_codegen_object_new(Func_2_tACBF5A1656250800CE861707354491F0611F6624_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_4 = L_3;
		((U3CU3Ec__3_2_tBB29CF1C815215807833CEA7087B12B63B7551BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__3_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__3_2_tBB29CF1C815215807833CEA7087B12B63B7551BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__3_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8* L_5 = ___0_action;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_t65BC5F8F22425E1C4760A099E9E6CB773176C2FA);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_tF6F2164F425859FD9679DE7DBFA2D0CEC0098E08);
		Tuple_3_tF0821A7BEADD05320E476CF9AB276DF6ECE58A83* L_8;
		L_8 = InvokerFuncInvoker3< Tuple_3_tF0821A7BEADD05320E476CF9AB276DF6ECE58A83*, Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? L_7: *(void**)L_7));
		NullCheck(G_B2_1);
		RuntimeObject* L_9;
		L_9 = StackGuard_RunOnEmptyStackCore_TisRuntimeObject_m3E82B5CE8F4D3419B7B2926F61607D2901037384(G_B2_1, G_B2_0, (RuntimeObject*)L_8, StackGuard_RunOnEmptyStackCore_TisRuntimeObject_m3E82B5CE8F4D3419B7B2926F61607D2901037384_RuntimeMethod_var);
		return;
	}
}
// R System.Linq.Expressions.StackGuard::RunOnEmptyStackCore<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`2<System.Object,R>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackGuard_RunOnEmptyStackCore_TisIl2CppFullySharedGenericAny_m99455F2A5D798D61FF08E150B8841AC821D862D4_gshared (StackGuard_t6F37D81861288F2039A29A88A6287419F220E849* __this, Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9* ___0_action, RuntimeObject* ___1_state, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(R)
	const uint32_t SizeOf_R_t863D1D9F2510110A7A0BF37CA72556F892ACBB4A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 7));
	// R
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_R_t863D1D9F2510110A7A0BF37CA72556F892ACBB4A);
	const Il2CppFullySharedGenericAny L_15 = L_14;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_0 = NULL;
	TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_R_t863D1D9F2510110A7A0BF37CA72556F892ACBB4A);
	memset(V_2, 0, SizeOf_R_t863D1D9F2510110A7A0BF37CA72556F892ACBB4A);
	{
		int32_t L_0 = (int32_t)__this->____executionStackCount_0;
		__this->____executionStackCount_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004c:
			{// begin finally (depth: 1)
				int32_t L_1 = (int32_t)__this->____executionStackCount_0;
				__this->____executionStackCount_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
				TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_2;
				L_2 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
				Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9* L_3 = ___0_action;
				RuntimeObject* L_4 = ___1_state;
				il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5;
				L_5 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
				il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
				TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_6;
				L_6 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
				NullCheck(L_2);
				Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_7;
				L_7 = InvokerFuncInvoker5< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_2, L_3, L_4, L_5, (int32_t)8, L_6);
				V_0 = L_7;
				Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_8 = V_0;
				NullCheck(L_8);
				TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 L_9;
				L_9 = InvokerFuncInvoker0< TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_8);
				V_1 = L_9;
				bool L_10;
				L_10 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), (&V_1));
				if (L_10)
				{
					goto IL_0042_1;
				}
			}
			{
				Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_11 = V_0;
				NullCheck((RuntimeObject*)L_11);
				WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* L_12;
				L_12 = InterfaceFuncInvoker0< WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* >::Invoke(1 /* System.Threading.WaitHandle System.IAsyncResult::get_AsyncWaitHandle() */, IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
				NullCheck(L_12);
				bool L_13;
				L_13 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_12);
			}

IL_0042_1:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), (&V_1), (Il2CppFullySharedGenericAny*)L_14);
				il2cpp_codegen_memcpy(V_2, L_14, SizeOf_R_t863D1D9F2510110A7A0BF37CA72556F892ACBB4A);
				goto IL_005b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		il2cpp_codegen_memcpy(L_15, V_2, SizeOf_R_t863D1D9F2510110A7A0BF37CA72556F892ACBB4A);
		il2cpp_codegen_memcpy(il2cppRetVal, L_15, SizeOf_R_t863D1D9F2510110A7A0BF37CA72556F892ACBB4A);
		return;
	}
}
// System.String System.String::Create<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Int32,TState,System.Buffers.SpanAction`2<System.Char,TState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisIl2CppFullySharedGenericAny_m9AD9A2FD15EE0B25DC884BEF778D0D414364F9CA_gshared (int32_t ___0_length, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_state, SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* ___2_action, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TState)
	const uint32_t SizeOf_TState_tF86514A7FB385D80584CE625C93D41AE0EAEF433 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// TState
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TState_tF86514A7FB385D80584CE625C93D41AE0EAEF433);
	String_t* V_0 = NULL;
	{
		SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* L_0 = ___2_action;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisIl2CppFullySharedGenericAny_m9AD9A2FD15EE0B25DC884BEF778D0D414364F9CA_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___0_length;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___0_length;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisIl2CppFullySharedGenericAny_m9AD9A2FD15EE0B25DC884BEF778D0D414364F9CA_RuntimeMethod_var)));
	}

IL_0026:
	{
		int32_t L_6 = ___0_length;
		String_t* L_7;
		L_7 = String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* L_8 = ___2_action;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___0_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, /*hidden argument*/Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_state : &___1_state), SizeOf_TState_tF86514A7FB385D80584CE625C93D41AE0EAEF433);
		NullCheck(L_8);
		InvokerActionInvoker2< Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_8, L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_13: *(void**)L_13));
		String_t* L_14 = V_0;
		return L_14;
	}
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendSpanFormattable<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisIl2CppFullySharedGenericAny_mF50A5C2F631F6F4450B612A08A50CA5E6DC58AEC_gshared (StringBuilder_t* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_2;
		L_2 = ConstrainedFuncInvoker2< String_t*, String_t*, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 1), L_1, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_value : &___0_value), (String_t*)NULL, (RuntimeObject*)L_0);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_2, NULL);
		return L_3;
	}
}
// TSource Newtonsoft.Json.Utilities.StringUtils::ForgivingCaseSensitiveFind<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringUtils_ForgivingCaseSensitiveFind_TisIl2CppFullySharedGenericAny_mD725EDE7F863EEED09CA1D0D2908772E8A2B6839_gshared (RuntimeObject* ___0_source, Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C* ___1_valueSelector, String_t* ___2_testValue, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_t283C5FE5CDAB9497181BC268B30AA11D84A2DF53 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 10));
	// TSource
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_TSource_t283C5FE5CDAB9497181BC268B30AA11D84A2DF53);
	const Il2CppFullySharedGenericAny L_22 = L_17;
	U3CU3Ec__DisplayClass14_0_1_t76EA529FB0FC3BD68537D185424BE9FB75526E96* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_1_t76EA529FB0FC3BD68537D185424BE9FB75526E96* L_0 = (U3CU3Ec__DisplayClass14_0_1_t76EA529FB0FC3BD68537D185424BE9FB75526E96*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_1_t76EA529FB0FC3BD68537D185424BE9FB75526E96* L_1 = V_0;
		Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C* L_2 = ___1_valueSelector;
		NullCheck(L_1);
		L_1->___valueSelector_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___valueSelector_0), (void*)L_2);
		U3CU3Ec__DisplayClass14_0_1_t76EA529FB0FC3BD68537D185424BE9FB75526E96* L_3 = V_0;
		String_t* L_4 = ___2_testValue;
		NullCheck(L_3);
		L_3->___testValue_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___testValue_1), (void*)L_4);
		RuntimeObject* L_5 = ___0_source;
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringUtils_ForgivingCaseSensitiveFind_TisIl2CppFullySharedGenericAny_mD725EDE7F863EEED09CA1D0D2908772E8A2B6839_RuntimeMethod_var)));
	}

IL_0022:
	{
		U3CU3Ec__DisplayClass14_0_1_t76EA529FB0FC3BD68537D185424BE9FB75526E96* L_7 = V_0;
		NullCheck(L_7);
		Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C* L_8 = (Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C*)L_7->___valueSelector_0;
		if (L_8)
		{
			goto IL_0035;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB2EAC54936C480056DBBB5B97FD1CFD1C79B1990)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringUtils_ForgivingCaseSensitiveFind_TisIl2CppFullySharedGenericAny_mD725EDE7F863EEED09CA1D0D2908772E8A2B6839_RuntimeMethod_var)));
	}

IL_0035:
	{
		RuntimeObject* L_10 = ___0_source;
		U3CU3Ec__DisplayClass14_0_1_t76EA529FB0FC3BD68537D185424BE9FB75526E96* L_11 = V_0;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_12 = (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		NullCheck(L_12);
		InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_12, (RuntimeObject*)L_11, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 4)));
		RuntimeObject* L_13;
		L_13 = InvokerFuncInvoker2< RuntimeObject*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), NULL, L_10, L_12);
		V_1 = L_13;
		RuntimeObject* L_14 = V_1;
		int32_t L_15;
		L_15 = InvokerFuncInvoker1< int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)), il2cpp_rgctx_method(method->rgctx_data, 8), NULL, L_14);
		if ((((int32_t)L_15) > ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_16 = V_1;
		InvokerActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)), il2cpp_rgctx_method(method->rgctx_data, 9), NULL, L_16, (Il2CppFullySharedGenericAny*)L_17);
		il2cpp_codegen_memcpy(il2cppRetVal, L_17, SizeOf_TSource_t283C5FE5CDAB9497181BC268B30AA11D84A2DF53);
		return;
	}

IL_0058:
	{
		RuntimeObject* L_18 = ___0_source;
		U3CU3Ec__DisplayClass14_0_1_t76EA529FB0FC3BD68537D185424BE9FB75526E96* L_19 = V_0;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_20 = (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		NullCheck(L_20);
		InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 11)));
		RuntimeObject* L_21;
		L_21 = InvokerFuncInvoker2< RuntimeObject*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), NULL, L_18, L_20);
		InvokerActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)), il2cpp_rgctx_method(method->rgctx_data, 9), NULL, L_21, (Il2CppFullySharedGenericAny*)L_22);
		il2cpp_codegen_memcpy(il2cppRetVal, L_22, SizeOf_TSource_t283C5FE5CDAB9497181BC268B30AA11D84A2DF53);
		return;
	}
}
// T UnityEngine.UIElements.StylePropertyAnimationSystem::GetOrCreate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylePropertyAnimationSystem_GetOrCreate_TisIl2CppFullySharedGenericAny_m6AF28A93C46556C2DD21CCE29F1DD629E9A9890F_gshared (StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_values, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	const Il2CppFullySharedGenericAny L_5 = L_1;
	const Il2CppFullySharedGenericAny L_8 = L_1;
	const Il2CppFullySharedGenericAny L_9 = L_1;
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	const Il2CppFullySharedGenericAny L_6 = L_2;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	memset(V_0, 0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	memset(V_1, 0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	memset(V_2, 0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	memset(G_B3_0, 0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_values;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 1), L_2);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_4 = ___0_values;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(L_6, L_5, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		il2cpp_codegen_memcpy(V_1, L_6, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_4, L_6, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_4, (void*)L_6);
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		il2cpp_codegen_memcpy(G_B3_0, L_7, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		goto IL_0021;
	}

IL_0020:
	{
		il2cpp_codegen_memcpy(L_8, V_0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		il2cpp_codegen_memcpy(G_B3_0, L_8, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	}

IL_0021:
	{
		il2cpp_codegen_memcpy(V_2, G_B3_0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		goto IL_0024;
	}

IL_0024:
	{
		il2cpp_codegen_memcpy(L_9, V_2, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.StylePropertyAnimationSystem::StartTransition<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.StyleSheets.StylePropertyId,T,T,System.Int32,System.Int32,System.Func`2<System.Single,System.Single>,UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StylePropertyAnimationSystem_StartTransition_TisIl2CppFullySharedGenericAny_mE706D3C8BDC81F443721E91FB0FC9F22123F88A7_gshared (StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_owner, int32_t ___1_prop, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_startValue, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___3_endValue, int32_t ___4_durationMs, int32_t ___5_delayMs, Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___6_easingCurve, Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* ___7_values, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mE2CB2DBE9CFA9FD3FF4707BB20A9B1FE52C76273_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tADE7374A11CEF160DEB0F474A59D11D11DA19992 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tADE7374A11CEF160DEB0F474A59D11D11DA19992);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_tADE7374A11CEF160DEB0F474A59D11D11DA19992);
	bool V_0 = false;
	bool V_1 = false;
	{
		Dictionary_2_t8B8AC3704119A64857E8D359CB4782C5ECEA90E7* L_0 = (Dictionary_2_t8B8AC3704119A64857E8D359CB4782C5ECEA90E7*)__this->___m_PropertyToValues_14;
		int32_t L_1 = ___1_prop;
		Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* L_2 = ___7_values;
		NullCheck(L_0);
		Dictionary_2_set_Item_mE2CB2DBE9CFA9FD3FF4707BB20A9B1FE52C76273(L_0, L_1, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)L_2, Dictionary_2_set_Item_mE2CB2DBE9CFA9FD3FF4707BB20A9B1FE52C76273_RuntimeMethod_var);
		Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* L_3 = ___7_values;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4 = ___0_owner;
		int32_t L_5 = ___1_prop;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_startValue : &___2_startValue), SizeOf_T_tADE7374A11CEF160DEB0F474A59D11D11DA19992);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___3_endValue : &___3_endValue), SizeOf_T_tADE7374A11CEF160DEB0F474A59D11D11DA19992);
		int32_t L_8 = ___4_durationMs;
		int32_t L_9 = ___5_delayMs;
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_10 = ___6_easingCurve;
		int64_t L_11;
		L_11 = StylePropertyAnimationSystem_CurrentTimeMs_m3B079B6B759368132A67B8F2E6052A270A7A49B6(__this, NULL);
		NullCheck(L_3);
		bool L_12;
		L_12 = InvokerFuncInvoker8< bool, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, int32_t, int32_t, Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2*, int64_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_3, L_4, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_7: *(void**)L_7), L_8, L_9, L_10, L_11);
		V_0 = L_12;
		Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* L_13 = ___7_values;
		InvokerActionInvoker1< Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), __this, L_13);
		bool L_14 = V_0;
		V_1 = L_14;
		goto IL_0036;
	}

IL_0036:
	{
		bool L_15 = V_1;
		return L_15;
	}
}
// System.Void UnityEngine.UIElements.StylePropertyAnimationSystem::UpdateTracking<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylePropertyAnimationSystem_UpdateTracking_TisIl2CppFullySharedGenericAny_m5B0E6C7002E704D5BFBBD5A22E5E70BE5528639A_gshared (StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718* __this, Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* ___0_values, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA2DB3B33B757C906EBF689F682FD659A191A242B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m71E6FD21D54996DACBC26526FABF5E57B9E4C3B4_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* L_0 = ___0_values;
		NullCheck(L_0);
		bool L_1;
		L_1 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		List_1_t491E344573B9D6F61E36AF56132B7412453928C9* L_2 = (List_1_t491E344573B9D6F61E36AF56132B7412453928C9*)__this->___m_AllValues_13;
		Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* L_3 = ___0_values;
		NullCheck(L_2);
		bool L_4;
		L_4 = List_1_Contains_m71E6FD21D54996DACBC26526FABF5E57B9E4C3B4(L_2, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)L_3, List_1_Contains_m71E6FD21D54996DACBC26526FABF5E57B9E4C3B4_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t491E344573B9D6F61E36AF56132B7412453928C9* L_6 = (List_1_t491E344573B9D6F61E36AF56132B7412453928C9*)__this->___m_AllValues_13;
		Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* L_7 = ___0_values;
		NullCheck(L_6);
		List_1_Add_mA2DB3B33B757C906EBF689F682FD659A191A242B_inline(L_6, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)L_7, List_1_Add_mA2DB3B33B757C906EBF689F682FD659A191A242B_RuntimeMethod_var);
	}

IL_002e:
	{
		return;
	}
}
// T UnityEngine.UIElements.StyleSheet::CheckAccess<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],UnityEngine.UIElements.StyleValueType,UnityEngine.UIElements.StyleValueHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleSheet_CheckAccess_TisIl2CppFullySharedGenericAny_mBA423371D04B57AD1720BC6580B109722EF7085F_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_list, int32_t ___1_type, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___2_handle, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A452795E040C66D151B05EE8648BF3F8016F207);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC472776C9180B19630B6E4112538D935B62E3F35);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
	const Il2CppFullySharedGenericAny L_24 = L_23;
	const Il2CppFullySharedGenericAny L_25 = L_23;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
	memset(V_0, 0, SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
	bool V_1 = false;
	bool V_2 = false;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
	memset(V_3, 0, SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
	int32_t G_B6_0 = 0;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
		int32_t L_0;
		L_0 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9((&___2_handle), NULL);
		int32_t L_1 = ___1_type;
		V_1 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = ___1_type;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		int32_t L_9;
		L_9 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9((&___2_handle), NULL);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_11);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral0A452795E040C66D151B05EE8648BF3F8016F207, L_8, NULL);
		goto IL_0086;
	}

IL_0047:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_list;
		if (!L_12)
		{
			goto IL_0063;
		}
	}
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_13 = ___2_handle;
		int32_t L_14 = (int32_t)L_13.___valueIndex_1;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_15 = ___2_handle;
		int32_t L_16 = (int32_t)L_15.___valueIndex_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___0_list;
		NullCheck(L_17);
		G_B6_0 = ((((int32_t)((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0064;
	}

IL_0063:
	{
		G_B6_0 = 1;
	}

IL_0064:
	{
		V_2 = (bool)G_B6_0;
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_0077;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)_stringLiteralC472776C9180B19630B6E4112538D935B62E3F35, NULL);
		goto IL_0086;
	}

IL_0077:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = ___0_list;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_20 = ___2_handle;
		int32_t L_21 = (int32_t)L_20.___valueIndex_1;
		NullCheck(L_19);
		int32_t L_22 = L_21;
		il2cpp_codegen_memcpy(L_23, (L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)), SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
		il2cpp_codegen_memcpy(V_0, L_23, SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
	}

IL_0086:
	{
		il2cpp_codegen_memcpy(L_24, V_0, SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
		il2cpp_codegen_memcpy(V_3, L_24, SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
		goto IL_008a;
	}

IL_008a:
	{
		il2cpp_codegen_memcpy(L_25, V_3, SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
		il2cpp_codegen_memcpy(il2cppRetVal, L_25, SizeOf_T_t2C934440768BF35325D6EF54A08220052380811B);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheet::TryCheckAccess<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],UnityEngine.UIElements.StyleValueType,UnityEngine.UIElements.StyleValueHandle,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleSheet_TryCheckAccess_TisIl2CppFullySharedGenericAny_m5DD0A68A50BC2755CD75F8326B5D0B171EF37887_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_list, int32_t ___1_type, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___2_handle, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A452795E040C66D151B05EE8648BF3F8016F207);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t820A41803813CA66AC749F0AB944116F7E1DE5CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t820A41803813CA66AC749F0AB944116F7E1DE5CE);
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
		V_0 = (bool)0;
		Il2CppFullySharedGenericAny* L_0 = ___3_value;
		il2cpp_codegen_initobj(L_0, SizeOf_T_t820A41803813CA66AC749F0AB944116F7E1DE5CE);
		int32_t L_1;
		L_1 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9((&___2_handle), NULL);
		int32_t L_2 = ___1_type;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_002a;
		}
	}
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_3 = ___2_handle;
		int32_t L_4 = (int32_t)L_3.___valueIndex_1;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_5 = ___2_handle;
		int32_t L_6 = (int32_t)L_5.___valueIndex_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = ___0_list;
		NullCheck(L_7);
		G_B4_0 = ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 0;
	}

IL_002b:
	{
		V_1 = (bool)G_B4_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_9 = ___3_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_list;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_11 = ___2_handle;
		int32_t L_12 = (int32_t)L_11.___valueIndex_1;
		NullCheck(L_10);
		int32_t L_13 = L_12;
		il2cpp_codegen_memcpy(L_14, (L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), SizeOf_T_t820A41803813CA66AC749F0AB944116F7E1DE5CE);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_9, L_14, SizeOf_T_t820A41803813CA66AC749F0AB944116F7E1DE5CE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_9, (void*)L_14);
		V_0 = (bool)1;
		goto IL_0072;
	}

IL_0047:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		int32_t L_17 = ___1_type;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_16;
		int32_t L_21;
		L_21 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9((&___2_handle), NULL);
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_23);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral0A452795E040C66D151B05EE8648BF3F8016F207, L_20, NULL);
	}

IL_0072:
	{
		bool L_24 = V_0;
		V_2 = L_24;
		goto IL_0076;
	}

IL_0076:
	{
		bool L_25 = V_2;
		return L_25;
	}
}
// System.Void UnityEngine.UIElements.StyleValueExtensions::CopyFrom<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.List`1<T>,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValueExtensions_CopyFrom_TisIl2CppFullySharedGenericAny_m525481C9A72EF25A9A936C5407EBE9E90DACFF77_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		NullCheck(L_0);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = ___0_list;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___1_other;
		NullCheck(L_1);
		InvokerActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (RuntimeObject*)L_2);
		return;
	}
}
// System.String UnityEngine.UIElements.StyleValueExtensions::DebugString<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.IStyleValue`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StyleValueExtensions_DebugString_TisIl2CppFullySharedGenericAny_m32C5B0480E481BAF30480D44F79AC4F15A39FEF6_gshared (RuntimeObject* ___0_styleValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_rgctx_method_init(method);
	}
	// T
	// sizeof(T)
	const uint32_t SizeOf_T_tEA77DD9B0DBAE7651252AA93B6A0D8C50D6493F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tEA77DD9B0DBAE7651252AA93B6A0D8C50D6493F9);
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_styleValue;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0Invoker< int32_t >::Invoke(1 /* UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.IStyleValue`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_keyword() */, il2cpp_rgctx_data(method->rgctx_data, 0), L_0);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_2 = ___0_styleValue;
		NullCheck(L_2);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T UnityEngine.UIElements.IStyleValue`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_value() */, il2cpp_rgctx_data(method->rgctx_data, 0), L_2, (Il2CppFullySharedGenericAny*)L_3);
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_4, NULL);
		G_B3_0 = L_5;
		goto IL_0035;
	}

IL_0020:
	{
		RuntimeObject* L_6 = ___0_styleValue;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0Invoker< int32_t >::Invoke(1 /* UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.IStyleValue`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_keyword() */, il2cpp_rgctx_data(method->rgctx_data, 0), L_6);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_9, NULL);
		G_B3_0 = L_10;
	}

IL_0035:
	{
		V_0 = G_B3_0;
		goto IL_0038;
	}

IL_0038:
	{
		String_t* L_11 = V_0;
		return L_11;
	}
}
// System.Void TMPro.TMP_FontAsset::CopyListDataToArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.List`1<T>,T[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_FontAsset_CopyListDataToArray_TisIl2CppFullySharedGenericAny_m5A9451649F10F9D5FF203E99B8D942B5E989482E_gshared (TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_srcList, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___1_dstArray, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t9D971C63AFD846E94332C10528EC85114CD902BF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 6));
	// T
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t9D971C63AFD846E94332C10528EC85114CD902BF);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int size = srcList.Count;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_srcList;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		V_0 = L_1;
		// if (dstArray == null)
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_2 = ___1_dstArray;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = *((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)L_2);
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		// dstArray = new T[size];
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_4 = ___1_dstArray;
		int32_t L_5 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 3), (uint32_t)L_5);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		goto IL_001c;
	}

IL_0015:
	{
		// Array.Resize(ref dstArray, size);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_7 = ___1_dstArray;
		int32_t L_8 = V_0;
		InvokerActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_7, L_8);
	}

IL_001c:
	{
		// for (int i = 0; i < size; i++)
		V_1 = 0;
		goto IL_0033;
	}

IL_0020:
	{
		// dstArray[i] = srcList[i];
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_9 = ___1_dstArray;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = *((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)L_9);
		int32_t L_11 = V_1;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_12 = ___0_srcList;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_12, L_13, (Il2CppFullySharedGenericAny*)L_14);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_14, SizeOf_T_t9D971C63AFD846E94332C10528EC85114CD902BF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_14);
		// for (int i = 0; i < size; i++)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0033:
	{
		// for (int i = 0; i < size; i++)
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TMPro.TMP_Text::ResizeInternalArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_ResizeInternalArray_TisIl2CppFullySharedGenericAny_m6A65A1F7128F22BC9628E624F781BB1E45848003_gshared (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		// int size = Mathf.NextPowerOfTwo(array.Length + 1);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)L_0);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)), NULL);
		V_0 = L_2;
		// System.Array.Resize(ref array, size);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_3 = ___0_array;
		int32_t L_4 = V_0;
		InvokerActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3, L_4);
		// }
		return;
	}
}
// System.Void TMPro.TMP_Text::ResizeInternalArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_ResizeInternalArray_TisIl2CppFullySharedGenericAny_m631D1339B49720E1EFABDE1057357706C7DB08FD_gshared (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		// size = Mathf.NextPowerOfTwo(size + 1);
		int32_t L_0 = ___1_size;
		int32_t L_1;
		L_1 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485(((int32_t)il2cpp_codegen_add(L_0, 1)), NULL);
		___1_size = L_1;
		// System.Array.Resize(ref array, size);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_2 = ___0_array;
		int32_t L_3 = ___1_size;
		InvokerActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_2, L_3);
		// }
		return;
	}
}
// System.Void TMPro.TMP_TextInfo::Resize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextInfo_Resize_TisIl2CppFullySharedGenericAny_m6A029F02497D3D378AB2DCC88EA094CD3AEA97CF_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// int newSize = size > 1024 ? size + 256 : Mathf.NextPowerOfTwo(size);
		int32_t L_0 = ___1_size;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___1_size;
		int32_t L_2;
		L_2 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_0010:
	{
		int32_t L_3 = ___1_size;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)256)));
	}

IL_0017:
	{
		V_0 = G_B3_0;
		// Array.Resize(ref array, newSize);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_4 = ___0_array;
		int32_t L_5 = V_0;
		InvokerActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_4, L_5);
		// }
		return;
	}
}
// System.Void TMPro.TMP_TextInfo::Resize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[]&,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextInfo_Resize_TisIl2CppFullySharedGenericAny_mC23865F57EDE30A40BA9F34E67B5829FAEEB9598_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_size, bool ___2_isBlockAllocated, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t G_B4_0 = 0;
	{
		// if (isBlockAllocated) size = size > 1024 ? size + 256 : Mathf.NextPowerOfTwo(size);
		bool L_0 = ___2_isBlockAllocated;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// if (isBlockAllocated) size = size > 1024 ? size + 256 : Mathf.NextPowerOfTwo(size);
		int32_t L_1 = ___1_size;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___1_size;
		int32_t L_3;
		L_3 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485(L_2, NULL);
		G_B4_0 = L_3;
		goto IL_001a;
	}

IL_0013:
	{
		int32_t L_4 = ___1_size;
		G_B4_0 = ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)256)));
	}

IL_001a:
	{
		___1_size = G_B4_0;
	}

IL_001c:
	{
		// if (size == array.Length) return;
		int32_t L_5 = ___1_size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_6 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = *((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)L_6);
		NullCheck(L_7);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		// if (size == array.Length) return;
		return;
	}

IL_0024:
	{
		// Array.Resize(ref array, size);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_8 = ___0_array;
		int32_t L_9 = ___1_size;
		InvokerActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_8, L_9);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::ContinueWith<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`2<System.Threading.Tasks.Task,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_ContinueWith_TisIl2CppFullySharedGenericAny_mE349C374FBD67F9F87A74035D3EB3F3CC41D95CE_gshared (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22* ___0_continuationFunction, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22* L_0 = ___0_continuationFunction;
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_1;
		L_1 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = V_0;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3;
		L_3 = InvokerFuncInvoker4< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22*, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, L_1, L_2, (int32_t)0);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::ContinueWith<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`2<System.Threading.Tasks.Task,TResult>,System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken,System.Threading.Tasks.TaskContinuationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_ContinueWith_TisIl2CppFullySharedGenericAny_m1799A1B94805E52E52A11BFF9FDD873DE7C499C3_gshared (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22* ___0_continuationFunction, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___1_scheduler, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_continuationOptions, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_2 = NULL;
	{
		Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22* L_0 = ___0_continuationFunction;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral295C1C91484E27E03B860FDA8F1EE84730518E64)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_ContinueWith_TisIl2CppFullySharedGenericAny_m1799A1B94805E52E52A11BFF9FDD873DE7C499C3_RuntimeMethod_var)));
	}

IL_000e:
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_2 = ___1_scheduler;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA75CF6F408A626E601212712FB539C300D88CDBE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_ContinueWith_TisIl2CppFullySharedGenericAny_m1799A1B94805E52E52A11BFF9FDD873DE7C499C3_RuntimeMethod_var)));
	}

IL_001c:
	{
		int32_t L_4 = ___3_continuationOptions;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_CreationOptionsFromContinuationOptions_mE9F785FA8B0E96211D327A83E154C2DF1DDDCEFF(L_4, (&V_0), (&V_1), NULL);
		Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22* L_5 = ___0_continuationFunction;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		ContinuationResultTaskFromTask_1_t1976F69FEC571EFB163944A4437C69446E2BECB3* L_8 = (ContinuationResultTaskFromTask_1_t1976F69FEC571EFB163944A4437C69446E2BECB3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		NullCheck(L_8);
		InvokerActionInvoker5< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Delegate_t*, RuntimeObject*, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_8, __this, (Delegate_t*)L_5, NULL, L_6, L_7);
		V_2 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)L_8;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_9 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_10 = ___1_scheduler;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = ___2_cancellationToken;
		int32_t L_12 = ___3_continuationOptions;
		Task_ContinueWithCore_m257B705F98BF64DC7C346F06711A4B32F366D8D8(__this, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_9, L_10, L_11, L_12, NULL);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_13 = V_2;
		return L_13;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::CreateUnwrapPromise<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Threading.Tasks.Task,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_CreateUnwrapPromise_TisIl2CppFullySharedGenericAny_m69EC8DE3C25D8C18666A9EFA61810407107EDC30_gshared (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_outerTask, bool ___1_lookForOce, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ___0_outerTask;
		bool L_1 = ___1_lookForOce;
		UnwrapPromise_1_t056E9AD8CFB7AFD55E9D63549F5F68C2827ABDB1* L_2 = (UnwrapPromise_1_t056E9AD8CFB7AFD55E9D63549F5F68C2827ABDB1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_2);
		InvokerActionInvoker2< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_2, L_0, L_1);
		return (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)L_2;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCanceled<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromCanceled_TisIl2CppFullySharedGenericAny_m6FA2A9DC4ECF7A21441B961F86A94873F5C015C9_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = ___0_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_1;
		L_1 = InvokerFuncInvoker1< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0);
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromCancellation_TisIl2CppFullySharedGenericAny_m8430FE61464A9242E9DFD47EA2551C8B3F5CD64F_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// TResult
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
	memset(V_0, 0, SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
	{
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___0_cancellationToken), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisIl2CppFullySharedGenericAny_m8430FE61464A9242E9DFD47EA2551C8B3F5CD64F_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___0_cancellationToken;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_4 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		NullCheck(L_4);
		InvokerActionInvoker4< bool, Il2CppFullySharedGenericAny, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_4, (bool)1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_2: *(void**)L_2), (int32_t)0, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.OperationCanceledException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromCancellation_TisIl2CppFullySharedGenericAny_m2223C6E6E1675E311C66C5695E2F0728BED068E5_gshared (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisIl2CppFullySharedGenericAny_m2223C6E6E1675E311C66C5695E2F0728BED068E5_RuntimeMethod_var)));
	}

IL_000e:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_2);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_2);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3 = L_2;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_4 = ___0_exception;
		NullCheck(L_4);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5;
		L_5 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_4, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3);
		bool L_7;
		L_7 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, L_5, (RuntimeObject*)L_6, NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromException<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromException_TisIl2CppFullySharedGenericAny_m5424F2AE940D86E928CD58A721AA25BDAF2A7229_gshared (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromException_TisIl2CppFullySharedGenericAny_m5424F2AE940D86E928CD58A721AA25BDAF2A7229_RuntimeMethod_var)));
	}

IL_000e:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_2);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_2);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3 = L_2;
		Exception_t* L_4 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3);
		bool L_5;
		L_5 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, (RuntimeObject*)L_4, NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromResult_TisIl2CppFullySharedGenericAny_m829FFC9F5B1DFAC382A3E6ABDED634066EADFB21_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t0BA7C9EB0581C5FFDCC03982969E83426BAAB98E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// TResult
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t0BA7C9EB0581C5FFDCC03982969E83426BAAB98E);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_result : &___0_result), SizeOf_TResult_t0BA7C9EB0581C5FFDCC03982969E83426BAAB98E);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_1 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		NullCheck(L_1);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_0: *(void**)L_0));
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_Run_TisIl2CppFullySharedGenericAny_m9B8B1B2F2FE04689FD7BADCD0E57F38E4B5FBF69_gshared (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___0_function, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_0 = ___0_function;
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_2;
		L_2 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3;
		L_3 = InvokerFuncInvoker6< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL, L_0, L_1, (int32_t)8, (int32_t)0, L_2);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`1<System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_Run_TisIl2CppFullySharedGenericAny_m25FB5A392FEACC714E85A5165A97701C1343B1C0_gshared (Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB* ___0_function, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB* L_0 = ___0_function;
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2;
		L_2 = InvokerFuncInvoker2< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1);
		return L_2;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`1<System.Threading.Tasks.Task`1<TResult>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_Run_TisIl2CppFullySharedGenericAny_mF39F8DFD4DC180998B23C404C0030D0856730D6C_gshared (Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB* ___0_function, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB* L_0 = ___0_function;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7AD319493499620E43634FF644A0CEF1624086AD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_Run_TisIl2CppFullySharedGenericAny_mF39F8DFD4DC180998B23C404C0030D0856730D6C_RuntimeMethod_var)));
	}

IL_000e:
	{
		bool L_2;
		L_2 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___1_cancellationToken), NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___1_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_4;
		L_4 = InvokerFuncInvoker1< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3);
		return L_4;
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_5;
		L_5 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB* L_6 = ___0_function;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = ___1_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_8;
		L_8 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		NullCheck(L_5);
		Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266* L_9;
		L_9 = InvokerFuncInvoker4< Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266*, Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_5, L_6, L_7, (int32_t)8, L_8);
		UnwrapPromise_1_t056E9AD8CFB7AFD55E9D63549F5F68C2827ABDB1* L_10 = (UnwrapPromise_1_t056E9AD8CFB7AFD55E9D63549F5F68C2827ABDB1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		NullCheck(L_10);
		InvokerActionInvoker2< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_10, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_9, (bool)1);
		return (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)L_10;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskExtensions::Unwrap<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskExtensions_Unwrap_TisIl2CppFullySharedGenericAny_m4FB34270E579A71A15A0CCE1ACA21650A7D80AA7_gshared (Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266* ___0_task, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* G_B6_0 = NULL;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* G_B4_0 = NULL;
	{
		Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266* L_0 = ___0_task;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8EF55A3CCCC9D89E93D42E69A1EFA5B7D048B41)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskExtensions_Unwrap_TisIl2CppFullySharedGenericAny_m4FB34270E579A71A15A0CCE1ACA21650A7D80AA7_RuntimeMethod_var)));
	}

IL_000e:
	{
		Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266* L_2 = ___0_task;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_2);
		bool L_3;
		L_3 = Task_get_IsCompletedSuccessfully_m8A0797317734CF69DA5DB2CC2E87AA8F5D43154C((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_2, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266* L_4 = ___0_task;
		NullCheck(L_4);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_5;
		L_5 = InvokerFuncInvoker0< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_4);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_6 = L_5;
		G_B4_0 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)L_6);
		if (L_6)
		{
			G_B6_0 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)L_6);
			goto IL_0033;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7;
		memset((&L_7), 0, sizeof(L_7));
		CancellationToken__ctor_m5DAD339D4A9DEF9962B7EF1E30564BADC78E9BD6((&L_7), (bool)1, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_8;
		L_8 = InvokerFuncInvoker1< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_7);
		return L_8;
	}

IL_002c:
	{
		Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266* L_9 = ___0_task;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_10;
		L_10 = InvokerFuncInvoker2< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_9, (bool)0);
		G_B6_0 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)L_10);
	}

IL_0033:
	{
		return G_B6_0;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::FromAsync<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`4<TArg1,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Action`1<System.IAsyncResult>,TArg1,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisIl2CppFullySharedGenericAny_m04115576E6CC428982884D8F87DD3724A14DBF1A_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_arg1, RuntimeObject* ___3_state, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TArg1)
	const uint32_t SizeOf_TArg1_tB1C103A032CE9BD6E8BC9AC113B2D739B054F785 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// TArg1
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TArg1_tB1C103A032CE9BD6E8BC9AC113B2D739B054F785);
	{
		Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799* L_0 = ___0_beginMethod;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___1_endMethod;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_arg1 : &___2_arg1), SizeOf_TArg1_tB1C103A032CE9BD6E8BC9AC113B2D739B054F785);
		RuntimeObject* L_3 = ___3_state;
		int32_t L_4 = (int32_t)__this->___m_defaultCreationOptions_2;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = InvokerFuncInvoker5< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, Il2CppFullySharedGenericAny, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), __this, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_2: *(void**)L_2), L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::FromAsync<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`4<TArg1,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Action`1<System.IAsyncResult>,TArg1,System.Object,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisIl2CppFullySharedGenericAny_m4F65D83940E1B36D36E32537F53DDBD4EF7CDCD7_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_arg1, RuntimeObject* ___3_state, int32_t ___4_creationOptions, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TArg1)
	const uint32_t SizeOf_TArg1_tC08EB94AF45F8297A70909AB081D4BE051B78B49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// TArg1
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TArg1_tC08EB94AF45F8297A70909AB081D4BE051B78B49);
	{
		Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799* L_0 = ___0_beginMethod;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___1_endMethod;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_arg1 : &___2_arg1), SizeOf_TArg1_tC08EB94AF45F8297A70909AB081D4BE051B78B49);
		RuntimeObject* L_3 = ___3_state;
		int32_t L_4 = ___4_creationOptions;
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_5;
		L_5 = InvokerFuncInvoker6< Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*, Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799*, Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, Il2CppFullySharedGenericAny, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, (Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*)NULL, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_2: *(void**)L_2), L_3, L_4);
		return (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::FromAsync<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`5<TArg1,TArg2,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Action`1<System.IAsyncResult>,TArg1,TArg2,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mDA4D7F2612BE37F888FDEBC6BCC9ABB0DCF93ED7_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_arg1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___3_arg2, RuntimeObject* ___4_state, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TArg1)
	const uint32_t SizeOf_TArg1_t21F6284D80A35C30C6EBF467D434A5A961962037 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// sizeof(TArg2)
	const uint32_t SizeOf_TArg2_t9DF84619D7F5C64775E8171C1DF9905463073DCB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// TArg1
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TArg1_t21F6284D80A35C30C6EBF467D434A5A961962037);
	// TArg2
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TArg2_t9DF84619D7F5C64775E8171C1DF9905463073DCB);
	{
		Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9* L_0 = ___0_beginMethod;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___1_endMethod;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_arg1 : &___2_arg1), SizeOf_TArg1_t21F6284D80A35C30C6EBF467D434A5A961962037);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___3_arg2 : &___3_arg2), SizeOf_TArg2_t9DF84619D7F5C64775E8171C1DF9905463073DCB);
		RuntimeObject* L_4 = ___4_state;
		int32_t L_5 = (int32_t)__this->___m_defaultCreationOptions_2;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = InvokerFuncInvoker6< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), __this, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_2: *(void**)L_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_3: *(void**)L_3), L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::FromAsync<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`5<TArg1,TArg2,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Action`1<System.IAsyncResult>,TArg1,TArg2,System.Object,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m78E42B6911823B51D9AE1A90E071856A3A910D53_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_arg1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___3_arg2, RuntimeObject* ___4_state, int32_t ___5_creationOptions, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TArg1)
	const uint32_t SizeOf_TArg1_tFF1C5C3E8019C353F9626B4B859583B486C1737B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// sizeof(TArg2)
	const uint32_t SizeOf_TArg2_tBC544DB55DFEFC252830381AE8BEA9A908906E9C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// TArg1
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TArg1_tFF1C5C3E8019C353F9626B4B859583B486C1737B);
	// TArg2
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TArg2_tBC544DB55DFEFC252830381AE8BEA9A908906E9C);
	{
		Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9* L_0 = ___0_beginMethod;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___1_endMethod;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_arg1 : &___2_arg1), SizeOf_TArg1_tFF1C5C3E8019C353F9626B4B859583B486C1737B);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___3_arg2 : &___3_arg2), SizeOf_TArg2_tBC544DB55DFEFC252830381AE8BEA9A908906E9C);
		RuntimeObject* L_4 = ___4_state;
		int32_t L_5 = ___5_creationOptions;
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_6;
		L_6 = InvokerFuncInvoker7< Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*, Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9*, Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, (Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*)NULL, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_2: *(void**)L_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_3: *(void**)L_3), L_4, L_5);
		return (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_6;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory::StartNew<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`1<TResult>,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskFactory_StartNew_TisIl2CppFullySharedGenericAny_m093A8AAFB7FEC0A2D65CEAEBE25DE0EB91469C36_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___0_function, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, int32_t ___2_creationOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___3_scheduler, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		int32_t L_0 = ___2_creationOptions;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_InternalCurrentIfAttached_mBF043F869DEB200F3129DB7CE48C64BA0A85B58C(L_0, NULL);
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_2 = ___0_function;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___1_cancellationToken;
		int32_t L_4 = ___2_creationOptions;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = ___3_scheduler;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_6;
		L_6 = InvokerFuncInvoker6< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_1, L_2, L_3, L_4, (int32_t)0, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory::StartNew<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`2<System.Object,TResult>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskFactory_StartNew_TisIl2CppFullySharedGenericAny_m76EE5D98B340430C4C47231CDF77B89D3AC194D6_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9* ___0_function, RuntimeObject* ___1_state, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_creationOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___4_scheduler, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		int32_t L_0 = ___3_creationOptions;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_InternalCurrentIfAttached_mBF043F869DEB200F3129DB7CE48C64BA0A85B58C(L_0, NULL);
		Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9* L_2 = ___0_function;
		RuntimeObject* L_3 = ___1_state;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___2_cancellationToken;
		int32_t L_5 = ___3_creationOptions;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_6 = ___4_scheduler;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_7;
		L_7 = InvokerFuncInvoker7< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_1, L_2, L_3, L_4, L_5, (int32_t)0, L_6);
		return L_7;
	}
}
// TResult System.Threading.Tasks.TaskToApm::End<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToApm_End_TisIl2CppFullySharedGenericAny_m91FFD6A6ED859B8F22E6E190E8D8C9E7E161442D_gshared (RuntimeObject* ___0_asyncResult, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t2939BA84C0BF6524637D8E56EF62BF3F981A5950 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// TResult
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TResult_t2939BA84C0BF6524637D8E56EF62BF3F981A5950);
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_0 = NULL;
	TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* V_1 = NULL;
	TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_asyncResult;
		V_1 = ((TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB*)IsInstSealed((RuntimeObject*)L_0, TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var));
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_2 = V_1;
		NullCheck(L_2);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_2->___Task_0;
		V_0 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_001f;
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___0_asyncResult;
		V_0 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}

IL_001f:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_5 = V_0;
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskToApm_End_TisIl2CppFullySharedGenericAny_m91FFD6A6ED859B8F22E6E190E8D8C9E7E161442D_RuntimeMethod_var)));
	}

IL_0028:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_7 = V_0;
		NullCheck(L_7);
		TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 L_8;
		L_8 = InvokerFuncInvoker0< TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_7);
		V_2 = L_8;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (&V_2), (Il2CppFullySharedGenericAny*)L_9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_TResult_t2939BA84C0BF6524637D8E56EF62BF3F981A5950);
		return;
	}
}
// System.Threading.Tasks.Task Unity.Services.Core.Telemetry.Internal.TelemetrySender::SendAsync<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TelemetrySender_SendAsync_TisIl2CppFullySharedGenericAny_m15C9271EC69BDC07C9366D058B8ABBA432BDD65C_gshared (TelemetrySender_t67AA5E279317D039D339BB675990F0BB795ADA3F* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_payload, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TPayload)
	const uint32_t SizeOf_TPayload_tCA15859A5F34329DB813577E9FF44EA9531A3C80 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// TPayload
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TPayload_tCA15859A5F34329DB813577E9FF44EA9531A3C80);
	U3CU3Ec__DisplayClass7_0_1_tB2C1B257260A104677401C497C4FE096A4073BE2* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		U3CU3Ec__DisplayClass7_0_1_tB2C1B257260A104677401C497C4FE096A4073BE2* L_0 = (U3CU3Ec__DisplayClass7_0_1_tB2C1B257260A104677401C497C4FE096A4073BE2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_1_tB2C1B257260A104677401C497C4FE096A4073BE2* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// var completionSource = new TaskCompletionSource<object>();
		U3CU3Ec__DisplayClass7_0_1_tB2C1B257260A104677401C497C4FE096A4073BE2* L_2 = V_0;
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_3 = (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*)il2cpp_codegen_object_new(TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60(L_3, TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->___completionSource_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___completionSource_3), (void*)L_3);
		// var sendCount = 0;
		U3CU3Ec__DisplayClass7_0_1_tB2C1B257260A104677401C497C4FE096A4073BE2* L_4 = V_0;
		NullCheck(L_4);
		L_4->___sendCount_2 = 0;
	}
	try
	{// begin try (depth: 1)
		// serializedPayload = SerializePayload(payload);
		U3CU3Ec__DisplayClass7_0_1_tB2C1B257260A104677401C497C4FE096A4073BE2* L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___0_payload : &___0_payload), SizeOf_TPayload_tCA15859A5F34329DB813577E9FF44EA9531A3C80);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = InvokerFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_6: *(void**)L_6));
		NullCheck(L_5);
		L_5->___serializedPayload_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___serializedPayload_1), (void*)L_7);
		// SendWebRequest();
		U3CU3Ec__DisplayClass7_0_1_tB2C1B257260A104677401C497C4FE096A4073BE2* L_8 = V_0;
		NullCheck(L_8);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_8);
		// }
		goto IL_0043;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0033;
		}
		throw e;
	}

CATCH_0033:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// completionSource.TrySetException(e);
		U3CU3Ec__DisplayClass7_0_1_tB2C1B257260A104677401C497C4FE096A4073BE2* L_9 = V_0;
		NullCheck(L_9);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_10 = (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*)L_9->___completionSource_3;
		Exception_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = TaskCompletionSource_1_TrySetException_m458D56254FBD7F874452154131D60AADD2131334(L_10, L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskCompletionSource_1_TrySetException_m458D56254FBD7F874452154131D60AADD2131334_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0043;
	}// end catch (depth: 1)

IL_0043:
	{
		// return completionSource.Task;
		U3CU3Ec__DisplayClass7_0_1_tB2C1B257260A104677401C497C4FE096A4073BE2* L_13 = V_0;
		NullCheck(L_13);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_14 = (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*)L_13->___completionSource_3;
		NullCheck(L_14);
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_15;
		L_15 = TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_inline(L_14, TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		return (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_15;
	}
}
// System.Byte[] Unity.Services.Core.Telemetry.Internal.TelemetrySender::SerializePayload<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TelemetrySender_SerializePayload_TisIl2CppFullySharedGenericAny_m6E23D3A5F3400BAC73D20D9ABAF276D4FBE6AAF2_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_payload, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TPayload)
	const uint32_t SizeOf_TPayload_t9992FD8BCAEF60180331BBB24C8DFC14C9BA7B3D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// TPayload
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TPayload_t9992FD8BCAEF60180331BBB24C8DFC14C9BA7B3D);
	String_t* V_0 = NULL;
	{
		// var jsonPayload = JsonConvert.SerializeObject(payload);
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_payload : &___0_payload), SizeOf_TPayload_t9992FD8BCAEF60180331BBB24C8DFC14C9BA7B3D);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), L_0);
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7(L_1, NULL);
		V_0 = L_2;
		// var serializedPayload = Encoding.UTF8.GetBytes(jsonPayload);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_4 = V_0;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, L_4);
		// return serializedPayload;
		return L_5;
	}
}
// Unity.Services.Core.Telemetry.Internal.ICachePersister`1<TPayload> Unity.Services.Core.Telemetry.Internal.TelemetryUtils::CreateCachePersister<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,UnityEngine.RuntimePlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TelemetryUtils_CreateCachePersister_TisIl2CppFullySharedGenericAny_m447D877CF53FE71D3E7DD6F2C6F2C8A88337F288_gshared (String_t* ___0_fileName, int32_t ___1_platform, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		// if (platform == RuntimePlatform.Switch)
		int32_t L_0 = ___1_platform;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_000b;
		}
	}
	{
		// return new DisabledCachePersister<TPayload>();
		DisabledCachePersister_1_t57E55E76736D9DBF6866DA2B52B63BAB3FA239E6* L_1 = (DisabledCachePersister_1_t57E55E76736D9DBF6866DA2B52B63BAB3FA239E6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_1);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_1);
		return (RuntimeObject*)L_1;
	}

IL_000b:
	{
		// return new FileCachePersister<TPayload>(fileName);
		String_t* L_2 = ___0_fileName;
		FileCachePersister_1_t513326F754B2C0BD75F9318EB4A863B00E144DCF* L_3 = (FileCachePersister_1_t513326F754B2C0BD75F9318EB4A863B00E144DCF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		NullCheck(L_3);
		InvokerActionInvoker1< String_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_3, L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Void UnityEngine.TextCore.Text.TextGeneratorUtilities::ResizeInternalArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextGeneratorUtilities_ResizeInternalArray_TisIl2CppFullySharedGenericAny_m6DA80337B38B359E2C0ED89B0491833F56AAC546_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)L_0);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)), NULL);
		V_0 = L_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_3 = ___0_array;
		int32_t L_4 = V_0;
		InvokerActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3, L_4);
		return;
	}
}
// System.Void UnityEngine.TextCore.Text.TextInfo::Resize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInfo_Resize_TisIl2CppFullySharedGenericAny_m2C45260716FF60199EEDC9435E8545C1A8AC5E27_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_size;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___1_size;
		int32_t L_2;
		L_2 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_0018;
	}

IL_0011:
	{
		int32_t L_3 = ___1_size;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)256)));
	}

IL_0018:
	{
		V_0 = G_B3_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_4 = ___0_array;
		int32_t L_5 = V_0;
		InvokerActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_4, L_5);
		return;
	}
}
// System.Void UnityEngine.TextCore.Text.TextInfo::Resize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[]&,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInfo_Resize_TisIl2CppFullySharedGenericAny_m7096ECDB11995E143D4B39166A45E07091C6D15B_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_size, bool ___2_isBlockAllocated, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		bool L_0 = ___2_isBlockAllocated;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = ___1_size;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___1_size;
		int32_t L_4;
		L_4 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485(L_3, NULL);
		G_B4_0 = L_4;
		goto IL_001d;
	}

IL_0016:
	{
		int32_t L_5 = ___1_size;
		G_B4_0 = ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)256)));
	}

IL_001d:
	{
		___1_size = G_B4_0;
	}

IL_001f:
	{
		int32_t L_6 = ___1_size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_7 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = *((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)L_7);
		NullCheck(L_8);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0034;
	}

IL_002c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_10 = ___0_array;
		int32_t L_11 = ___1_size;
		InvokerActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_10, L_11);
	}

IL_0034:
	{
		return;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 Texture2D_GetRawTextureData_TisIl2CppFullySharedGenericStruct_mDC6FE57DC7D62BAC05E6231541767FA81448490E_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this);
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.Texture::get_isReadable() */, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this);
		V_3 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this);
		UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* L_2;
		L_2 = Texture_CreateNonReadableException_m29786CD930E89C281564A9B341FD4088FBC8C94F((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Texture2D_GetRawTextureData_TisIl2CppFullySharedGenericStruct_mDC6FE57DC7D62BAC05E6231541767FA81448490E_RuntimeMethod_var)));
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		V_0 = L_3;
		uint64_t L_4;
		L_4 = Texture2D_GetRawImageDataSize_mBD92C0F2A09A023841785BBB642C2B7696EE7CBE(__this, NULL);
		int32_t L_5 = V_0;
		V_1 = (uint64_t)((int64_t)((uint64_t)(int64_t)L_4/(uint64_t)(int64_t)((int64_t)L_5)));
		uint64_t L_6 = V_1;
		V_4 = (bool)((!(((uint64_t)L_6) <= ((uint64_t)((int64_t)((int32_t)2147483647LL)))))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this);
		UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* L_8;
		L_8 = Texture_CreateNativeArrayLengthOverflowException_m508BE4928B3768ED618EF1FA10E022F6FF12F870((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Texture2D_GetRawTextureData_TisIl2CppFullySharedGenericStruct_mDC6FE57DC7D62BAC05E6231541767FA81448490E_RuntimeMethod_var)));
	}

IL_003c:
	{
		intptr_t L_9;
		L_9 = Texture2D_GetWritableImageData_m8E26026A332040F8713E5A2A13C5545797159A5E(__this, 0, NULL);
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_12;
		L_12 = InvokerFuncInvoker3< NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, void*, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_10, ((int32_t)L_11), (int32_t)1);
		V_2 = L_12;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_13 = V_2;
		V_5 = L_13;
		goto IL_0056;
	}

IL_0056:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_14 = V_5;
		return L_14;
	}
}
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Action`1<TState>,TState,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_TisIl2CppFullySharedGenericAny_m1BF539C01328BDA70BEABD795BFABD5F18D7F8CE_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___0_callBack, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_state, bool ___2_preferLocal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TState)
	const uint32_t SizeOf_TState_t88AAF175D8D6D417B45F12A19B368FBBE4EABC7F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// TState
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TState_t88AAF175D8D6D417B45F12A19B368FBBE4EABC7F);
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* G_B2_0 = NULL;
	U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* G_B1_0 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* L_0 = (U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* L_1 = L_0;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_2 = ___0_callBack;
		NullCheck(L_1);
		L_1->___callBack_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callBack_0), (void*)L_2);
		U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* L_3 = L_1;
		NullCheck(L_3);
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_4 = (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)L_3->___callBack_0;
		G_B1_0 = L_3;
		if (L_4)
		{
			G_B2_0 = L_3;
			goto IL_001f;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB382FDA4B30D0397739E8EC9B987AB66568010F7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisIl2CppFullySharedGenericAny_m1BF539C01328BDA70BEABD795BFABD5F18D7F8CE_RuntimeMethod_var)));
	}

IL_001f:
	{
		V_0 = (int32_t)1;
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_6 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_6, (RuntimeObject*)G_B2_0, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? ___1_state : &___1_state), SizeOf_TState_t88AAF175D8D6D417B45F12A19B368FBBE4EABC7F);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->rgctx_data, 4), L_7);
		bool L_9 = ___2_preferLocal;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItemHelper_m5B98C28FB6C9379B8DDD302ABC3D1D1FC1779EDD(L_6, L_8, (&V_0), (bool)1, (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0), NULL);
		return L_10;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppFullySharedGenericAny_mD1546AD31023759C065B096A4FE412E69838164A_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
	memset(V_0, 0, SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_1);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_3 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_3, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Tuple`2<T1,T2> System.Tuple::Create<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* Tuple_Create_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mDA77107B30389EA4092249AFF47FFBFFE45BB038_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_item2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T1)
	const uint32_t SizeOf_T1_t465A831C1422E7901BD8C9BF81DDBD106225CB8E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// sizeof(T2)
	const uint32_t SizeOf_T2_t6244E4F2C95F4397B9687AD82F4B8C331D01927D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T1
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t465A831C1422E7901BD8C9BF81DDBD106225CB8E);
	// T2
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t6244E4F2C95F4397B9687AD82F4B8C331D01927D);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_t465A831C1422E7901BD8C9BF81DDBD106225CB8E);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_item2 : &___1_item2), SizeOf_T2_t6244E4F2C95F4397B9687AD82F4B8C331D01927D);
		Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* L_2 = (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		NullCheck(L_2);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
// System.Tuple`3<T1,T2,T3> System.Tuple::Create<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* Tuple_Create_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mF23536EC283D2934606FB2245E28DFB4E9638BF9_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_item2, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_item3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T1)
	const uint32_t SizeOf_T1_t776085CF94B8744D4D9FD308E39A8142DC0C8334 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// sizeof(T2)
	const uint32_t SizeOf_T2_t45438045FCA6F1CA09F27AD3D628AEB2C340AA76 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// sizeof(T3)
	const uint32_t SizeOf_T3_t9BD166B938DD605E5E0DC3F4C050FD2B5FBFD72C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T1
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t776085CF94B8744D4D9FD308E39A8142DC0C8334);
	// T2
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t45438045FCA6F1CA09F27AD3D628AEB2C340AA76);
	// T3
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T3_t9BD166B938DD605E5E0DC3F4C050FD2B5FBFD72C);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_t776085CF94B8744D4D9FD308E39A8142DC0C8334);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_item2 : &___1_item2), SizeOf_T2_t45438045FCA6F1CA09F27AD3D628AEB2C340AA76);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___2_item3 : &___2_item3), SizeOf_T3_t9BD166B938DD605E5E0DC3F4C050FD2B5FBFD72C);
		Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* L_3 = (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_3);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_2: *(void**)L_2));
		return L_3;
	}
}
// System.Boolean DG.Tweening.Tween::OnTweenCallback<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(DG.Tweening.TweenCallback`1<T>,DG.Tweening.Tween,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tween_OnTweenCallback_TisIl2CppFullySharedGenericAny_m3C0E3C80347483398F25D787757FEACBCA45B8E1_gshared (TweenCallback_1_tA6255E5281FE61C846B926E1FF9DF808830DB7B8* ___0_callback, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___1_t, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_param, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t24C02A1324216D668707B836DEE441F5AF258081 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t24C02A1324216D668707B836DEE441F5AF258081);
	const Il2CppFullySharedGenericAny L_11 = L_2;
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_0 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___useSafeMode_1;
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	try
	{// begin try (depth: 1)
		TweenCallback_1_tA6255E5281FE61C846B926E1FF9DF808830DB7B8* L_1 = ___0_callback;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_param : &___2_param), SizeOf_T_t24C02A1324216D668707B836DEE441F5AF258081);
		NullCheck(L_1);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_2: *(void**)L_2));
		goto IL_004a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{// begin catch(System.Exception)
		{
			V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			bool L_3;
			L_3 = Debugger_ShouldLogSafeModeCapturedError_m5EE800D2A5FD98C95C119D9AF68035095A123C47(NULL);
			if (!L_3)
			{
				goto IL_0034;
			}
		}
		{
			Exception_t* L_4 = V_0;
			NullCheck(L_4);
			MethodBase_t* L_5;
			L_5 = Exception_get_TargetSite_m0CE79BBF864CCEA96B72ED52EC66753CFBE5ED6A(L_4, NULL);
			Exception_t* L_6 = V_0;
			NullCheck(L_6);
			String_t* L_7;
			L_7 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_6);
			String_t* L_8;
			L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8B306A6309396858B4E770A343967C113B445C40)), (RuntimeObject*)L_5, (RuntimeObject*)L_7, NULL);
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_9 = ___1_t;
			Debugger_LogSafeModeCapturedError_m0EE4B4F14B9243B4A9BD757853CAB77B5A888ED6((RuntimeObject*)L_8, L_9, NULL);
		}

IL_0034:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mC993434DFE20DDF1E44389DACD34085F31E6ED20((&((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))))->___safeModeReport_27), (int32_t)2, NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_004c;
		}
	}// end catch (depth: 1)

IL_0043:
	{
		TweenCallback_1_tA6255E5281FE61C846B926E1FF9DF808830DB7B8* L_10 = ___0_callback;
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_param : &___2_param), SizeOf_T_t24C02A1324216D668707B836DEE441F5AF258081);
		NullCheck(L_10);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_11: *(void**)L_11));
	}

IL_004a:
	{
		return (bool)1;
	}

IL_004c:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
// T DG.Tweening.TweenExtensions::Pause<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenExtensions_Pause_TisRuntimeObject_m36D60DCEDF6720E9E82F204E1AE3B95E9E53C364_gshared (RuntimeObject* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeObject* L_0 = ___0_t;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1;
		L_1 = Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline(NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_2 = ___0_t;
		Debugger_LogNullTween_m9C6A433A68F2C3DFCDFF127434135F8BBC116740((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_2, NULL);
	}

IL_001b:
	{
		RuntimeObject* L_3 = ___0_t;
		return L_3;
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4);
		bool L_5;
		L_5 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4, NULL);
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_6;
		L_6 = Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline(NULL);
		if ((((int32_t)L_6) <= ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_7 = ___0_t;
		Debugger_LogInvalidTween_mEC44C60EC29E4EE401EFE473B01A209D79F3A83F((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_7, NULL);
	}

IL_003d:
	{
		RuntimeObject* L_8 = ___0_t;
		return L_8;
	}

IL_003f:
	{
		RuntimeObject* L_9 = ___0_t;
		NullCheck(L_9);
		bool L_10 = (bool)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_9)->___isSequenced_40;
		if (!L_10)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_11;
		L_11 = Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline(NULL);
		if ((((int32_t)L_11) <= ((int32_t)1)))
		{
			goto IL_005f;
		}
	}
	{
		RuntimeObject* L_12 = ___0_t;
		Debugger_LogNestedTween_m409C30CE26DFF284388E93FDD37738CF2116F128((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_12, NULL);
	}

IL_005f:
	{
		RuntimeObject* L_13 = ___0_t;
		return L_13;
	}

IL_0061:
	{
		RuntimeObject* L_14 = ___0_t;
		il2cpp_codegen_runtime_class_init_inline(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = TweenManager_Pause_mF53E744566930DFD9A6642B63E872D12F23B4269((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_14, NULL);
		RuntimeObject* L_16 = ___0_t;
		return L_16;
	}
}
// T DG.Tweening.TweenExtensions::Play<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenExtensions_Play_TisRuntimeObject_m255A424EE8F1D490359AB0C9CC5D8393F5C2B1B7_gshared (RuntimeObject* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeObject* L_0 = ___0_t;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1;
		L_1 = Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline(NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_2 = ___0_t;
		Debugger_LogNullTween_m9C6A433A68F2C3DFCDFF127434135F8BBC116740((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_2, NULL);
	}

IL_001b:
	{
		RuntimeObject* L_3 = ___0_t;
		return L_3;
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4);
		bool L_5;
		L_5 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4, NULL);
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_6;
		L_6 = Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline(NULL);
		if ((((int32_t)L_6) <= ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_7 = ___0_t;
		Debugger_LogInvalidTween_mEC44C60EC29E4EE401EFE473B01A209D79F3A83F((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_7, NULL);
	}

IL_003d:
	{
		RuntimeObject* L_8 = ___0_t;
		return L_8;
	}

IL_003f:
	{
		RuntimeObject* L_9 = ___0_t;
		NullCheck(L_9);
		bool L_10 = (bool)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_9)->___isSequenced_40;
		if (!L_10)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_11;
		L_11 = Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline(NULL);
		if ((((int32_t)L_11) <= ((int32_t)1)))
		{
			goto IL_005f;
		}
	}
	{
		RuntimeObject* L_12 = ___0_t;
		Debugger_LogNestedTween_m409C30CE26DFF284388E93FDD37738CF2116F128((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_12, NULL);
	}

IL_005f:
	{
		RuntimeObject* L_13 = ___0_t;
		return L_13;
	}

IL_0061:
	{
		RuntimeObject* L_14 = ___0_t;
		il2cpp_codegen_runtime_class_init_inline(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = TweenManager_Play_m16548C8C4203A88870C6E54E44F03CDA11763DA2((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_14, NULL);
		RuntimeObject* L_16 = ___0_t;
		return L_16;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenManager::GetTweener<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* TweenManager_GetTweener_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericStruct_m35C6A5A60A30D2F5045DCA319D5AEC1432BF47CB_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5977A16B28199C20C0F8770A4DADB9C5CC05247A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97B5A6868822BFCE4A13A9E1D6B6FE8D25C6E5C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE9FAAB12E6FC68BB89C81F3D0414F95EE54E1E2);
		il2cpp_rgctx_method_init(method);
	}
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	int32_t V_3 = 0;
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B11_0 = NULL;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B7_0 = NULL;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B9_0 = NULL;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B8_0 = NULL;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B10_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		int32_t L_0 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->___totPooledTweeners_16;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_010c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		V_0 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		V_2 = L_6;
		il2cpp_codegen_runtime_class_init_inline(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		int32_t L_7 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->____maxPooledTweenerId_31;
		V_3 = L_7;
		goto IL_00be;
	}

IL_0037:
	{
		il2cpp_codegen_runtime_class_init_inline(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		TweenU5BU5D_t6E5F58C51FA0DA64C990C1C7E02EE9B70220C2F7* L_8 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->____pooledTweeners_22;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_12 = V_4;
		if (!L_12)
		{
			goto IL_00ba;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_13 = V_4;
		NullCheck(L_13);
		Type_t* L_14 = (Type_t*)L_13->___typeofT1_36;
		Type_t* L_15 = V_0;
		if ((!(((RuntimeObject*)(Type_t*)L_14) == ((RuntimeObject*)(Type_t*)L_15))))
		{
			goto IL_00ba;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_16 = V_4;
		NullCheck(L_16);
		Type_t* L_17 = (Type_t*)L_16->___typeofT2_37;
		Type_t* L_18 = V_1;
		if ((!(((RuntimeObject*)(Type_t*)L_17) == ((RuntimeObject*)(Type_t*)L_18))))
		{
			goto IL_00ba;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_19 = V_4;
		NullCheck(L_19);
		Type_t* L_20 = (Type_t*)L_19->___typeofTPlugOptions_38;
		Type_t* L_21 = V_2;
		if ((!(((RuntimeObject*)(Type_t*)L_20) == ((RuntimeObject*)(Type_t*)L_21))))
		{
			goto IL_00ba;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_22 = V_4;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_23 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)CastclassClass((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 3)));
		il2cpp_codegen_runtime_class_init_inline(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		TweenManager_AddActiveTween_mDE4BACC61DA83AB6BD50B1AA57CB16F40272CD05((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_23, NULL);
		TweenU5BU5D_t6E5F58C51FA0DA64C990C1C7E02EE9B70220C2F7* L_24 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->____pooledTweeners_22;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, NULL);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL);
		int32_t L_26 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->____maxPooledTweenerId_31;
		int32_t L_27 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->____minPooledTweenerId_30;
		G_B7_0 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)L_23);
		if ((((int32_t)L_26) == ((int32_t)L_27)))
		{
			G_B11_0 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)L_23);
			goto IL_00ad;
		}
	}
	{
		int32_t L_28 = V_3;
		il2cpp_codegen_runtime_class_init_inline(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		int32_t L_29 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->____maxPooledTweenerId_31;
		G_B8_0 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)G_B7_0);
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			G_B9_0 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)G_B7_0);
			goto IL_0099;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		int32_t L_30 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->____maxPooledTweenerId_31;
		((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->____maxPooledTweenerId_31 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
		G_B11_0 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)G_B8_0);
		goto IL_00ad;
	}

IL_0099:
	{
		int32_t L_31 = V_3;
		il2cpp_codegen_runtime_class_init_inline(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		int32_t L_32 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->____minPooledTweenerId_30;
		G_B10_0 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)G_B9_0);
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			G_B11_0 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)G_B9_0);
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		int32_t L_33 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->____minPooledTweenerId_30;
		((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->____minPooledTweenerId_30 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		G_B11_0 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)G_B10_0);
	}

IL_00ad:
	{
		il2cpp_codegen_runtime_class_init_inline(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		int32_t L_34 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->___totPooledTweeners_16;
		((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->___totPooledTweeners_16 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		return G_B11_0;
	}

IL_00ba:
	{
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
	}

IL_00be:
	{
		int32_t L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		int32_t L_37 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->____minPooledTweenerId_30;
		if ((((int32_t)L_36) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_37, 1)))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		int32_t L_38 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->___totTweeners_18;
		int32_t L_39 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->___maxTweeners_2;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_018b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		TweenU5BU5D_t6E5F58C51FA0DA64C990C1C7E02EE9B70220C2F7* L_40 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->____pooledTweeners_22;
		int32_t L_41 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->____maxPooledTweenerId_31;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, NULL);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL);
		int32_t L_42 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->____maxPooledTweenerId_31;
		((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->____maxPooledTweenerId_31 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		int32_t L_43 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->___totPooledTweeners_16;
		((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->___totPooledTweeners_16 = ((int32_t)il2cpp_codegen_subtract(L_43, 1));
		int32_t L_44 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->___totTweeners_18;
		((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->___totTweeners_18 = ((int32_t)il2cpp_codegen_subtract(L_44, 1));
		goto IL_018b;
	}

IL_010c:
	{
		il2cpp_codegen_runtime_class_init_inline(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		int32_t L_45 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->___totTweeners_18;
		int32_t L_46 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->___maxTweeners_2;
		if ((((int32_t)L_45) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_46, 1)))))
		{
			goto IL_018b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		int32_t L_47 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->___maxTweeners_2;
		V_5 = L_47;
		int32_t L_48 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->___maxSequences_3;
		V_6 = L_48;
		TweenManager_IncreaseCapacities_m5316415F2F95212320B0745CAF123B139A8CDA62((int32_t)1, NULL);
		int32_t L_49;
		L_49 = Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline(NULL);
		if ((((int32_t)L_49) < ((int32_t)1)))
		{
			goto IL_018b;
		}
	}
	{
		String_t* L_50;
		L_50 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_5), NULL);
		String_t* L_51;
		L_51 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_6), NULL);
		String_t* L_52;
		L_52 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_50, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_51, NULL);
		NullCheck(_stringLiteralBE9FAAB12E6FC68BB89C81F3D0414F95EE54E1E2);
		String_t* L_53;
		L_53 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(_stringLiteralBE9FAAB12E6FC68BB89C81F3D0414F95EE54E1E2, _stringLiteral97B5A6868822BFCE4A13A9E1D6B6FE8D25C6E5C3, L_52, NULL);
		il2cpp_codegen_runtime_class_init_inline(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		String_t* L_54;
		L_54 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->___maxTweeners_2), NULL);
		String_t* L_55;
		L_55 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->___maxSequences_3), NULL);
		String_t* L_56;
		L_56 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_54, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_55, NULL);
		NullCheck(L_53);
		String_t* L_57;
		L_57 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_53, _stringLiteral5977A16B28199C20C0F8770A4DADB9C5CC05247A, L_56, NULL);
		Debugger_LogWarning_mB528DCD3175EB2D670A62A6507A656F8DE76D06E((RuntimeObject*)L_57, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL, NULL);
	}

IL_018b:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_58 = (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_58);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_58);
		il2cpp_codegen_runtime_class_init_inline(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		int32_t L_59 = ((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->___totTweeners_18;
		((TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var))->___totTweeners_18 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_60 = L_58;
		TweenManager_AddActiveTween_mDE4BACC61DA83AB6BD50B1AA57CB16F40272CD05((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_60, NULL);
		return L_60;
	}
}
// T DG.Tweening.TweenSettingsExtensions::From<System.Object>(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_From_TisRuntimeObject_m581919CB70693A14993B037509BAA8E8EC1EC530_gshared (RuntimeObject* ___0_t, bool ___1_isRelative, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_t;
		bool L_1 = ___1_isRelative;
		RuntimeObject* L_2;
		L_2 = InvokerFuncInvoker3< RuntimeObject*, RuntimeObject*, bool, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, (bool)1, L_1);
		return L_2;
	}
}
// T DG.Tweening.TweenSettingsExtensions::From<System.Object>(T,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_From_TisRuntimeObject_m9037EA21027D299F55BEC00A9DE4AFD4EF6475E2_gshared (RuntimeObject* ___0_t, bool ___1_setImmediately, bool ___2_isRelative, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	RuntimeObject* G_B9_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_t;
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1, NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_3 = ___0_t;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_3)->___creationLocked_44;
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_5 = ___0_t;
		NullCheck(L_5);
		bool L_6 = (bool)((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)L_5)->___isFromAllowed_56;
		if (L_6)
		{
			goto IL_0031;
		}
	}

IL_002f:
	{
		RuntimeObject* L_7 = ___0_t;
		return L_7;
	}

IL_0031:
	{
		RuntimeObject* L_8 = ___0_t;
		NullCheck(L_8);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_8)->___isFrom_21 = (bool)1;
		bool L_9 = ___1_setImmediately;
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		RuntimeObject* L_10 = ___0_t;
		bool L_11 = ___2_isRelative;
		G_B7_0 = ((RuntimeObject*)(L_10));
		if (!L_11)
		{
			G_B8_0 = ((RuntimeObject*)(L_10));
			goto IL_0059;
		}
	}
	{
		RuntimeObject* L_12 = ___0_t;
		NullCheck(L_12);
		bool L_13 = (bool)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_12)->___isBlendable_22;
		G_B9_0 = ((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_005a;
	}

IL_0059:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_005a:
	{
		NullCheck((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B9_1);
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_14;
		L_14 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(10 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B9_1, (bool)G_B9_0);
		goto IL_006e;
	}

IL_0062:
	{
		RuntimeObject* L_15 = ___0_t;
		bool L_16 = ___2_isRelative;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_15);
		Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_15, L_16, NULL);
	}

IL_006e:
	{
		RuntimeObject* L_17 = ___0_t;
		return L_17;
	}
}
// T DG.Tweening.TweenSettingsExtensions::OnComplete<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnComplete_TisRuntimeObject_mC014D07E92193DA79B257C4508B6DF208FE502A6_gshared (RuntimeObject* ___0_t, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___1_action, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_t;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1, NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_t;
		return L_3;
	}

IL_0017:
	{
		RuntimeObject* L_4 = ___0_t;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_5 = ___1_action;
		NullCheck(L_4);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___onComplete_18 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___onComplete_18), (void*)L_5);
		RuntimeObject* L_6 = ___0_t;
		return L_6;
	}
}
// T DG.Tweening.TweenSettingsExtensions::OnKill<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnKill_TisRuntimeObject_m168DA4CCA1333ECE0D8191965AFF93CEB822BA14_gshared (RuntimeObject* ___0_t, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___1_action, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_t;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1, NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_t;
		return L_3;
	}

IL_0017:
	{
		RuntimeObject* L_4 = ___0_t;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_5 = ___1_action;
		NullCheck(L_4);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___onKill_19 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___onKill_19), (void*)L_5);
		RuntimeObject* L_6 = ___0_t;
		return L_6;
	}
}
// T DG.Tweening.TweenSettingsExtensions::OnPlay<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnPlay_TisRuntimeObject_m3DC6406E5D6E8C865EB9FDFCF625C08A9A0870B7_gshared (RuntimeObject* ___0_t, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___1_action, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_t;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1, NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_t;
		return L_3;
	}

IL_0017:
	{
		RuntimeObject* L_4 = ___0_t;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_5 = ___1_action;
		NullCheck(L_4);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___onPlay_13 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___onPlay_13), (void*)L_5);
		RuntimeObject* L_6 = ___0_t;
		return L_6;
	}
}
// T DG.Tweening.TweenSettingsExtensions::OnRewind<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnRewind_TisRuntimeObject_m90AD5AA2C24716496A9C55F426ED348E7FA3120C_gshared (RuntimeObject* ___0_t, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___1_action, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_t;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1, NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_t;
		return L_3;
	}

IL_0017:
	{
		RuntimeObject* L_4 = ___0_t;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_5 = ___1_action;
		NullCheck(L_4);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___onRewind_15 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___onRewind_15), (void*)L_5);
		RuntimeObject* L_6 = ___0_t;
		return L_6;
	}
}
// T DG.Tweening.TweenSettingsExtensions::OnStart<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnStart_TisRuntimeObject_m52FC13AB79CA3D572C72BA5BBCE169E95B255CE5_gshared (RuntimeObject* ___0_t, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___1_action, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_t;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1, NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_t;
		return L_3;
	}

IL_0017:
	{
		RuntimeObject* L_4 = ___0_t;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_5 = ___1_action;
		NullCheck(L_4);
		((ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89*)L_4)->___onStart_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89*)L_4)->___onStart_3), (void*)L_5);
		RuntimeObject* L_6 = ___0_t;
		return L_6;
	}
}
// T DG.Tweening.TweenSettingsExtensions::OnStepComplete<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnStepComplete_TisRuntimeObject_mECE3A33094D444884FDA86525A4C76348E06008A_gshared (RuntimeObject* ___0_t, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___1_action, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_t;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1, NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_t;
		return L_3;
	}

IL_0017:
	{
		RuntimeObject* L_4 = ___0_t;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_5 = ___1_action;
		NullCheck(L_4);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___onStepComplete_17 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___onStepComplete_17), (void*)L_5);
		RuntimeObject* L_6 = ___0_t;
		return L_6;
	}
}
// T DG.Tweening.TweenSettingsExtensions::OnUpdate<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnUpdate_TisRuntimeObject_m15415E2F0A79910AE2BEE06E8C7B0696B9E6ECE8_gshared (RuntimeObject* ___0_t, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___1_action, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_t;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1, NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_t;
		return L_3;
	}

IL_0017:
	{
		RuntimeObject* L_4 = ___0_t;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_5 = ___1_action;
		NullCheck(L_4);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___onUpdate_16 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___onUpdate_16), (void*)L_5);
		RuntimeObject* L_6 = ___0_t;
		return L_6;
	}
}
// T DG.Tweening.TweenSettingsExtensions::SetAs<System.Object>(T,DG.Tweening.TweenParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetAs_TisRuntimeObject_mC2C421FCDDBB1D567904F1437916E9A23E2FAB1D_gshared (RuntimeObject* ___0_t, TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* ___1_tweenParams, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeObject* L_0 = ___0_t;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_1 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1, NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_3 = ___0_t;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_3)->___creationLocked_44;
		if (!L_4)
		{
			goto IL_0024;
		}
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___0_t;
		return L_5;
	}

IL_0024:
	{
		RuntimeObject* L_6 = ___0_t;
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_7 = ___1_tweenParams;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)L_7->___updateType_3;
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_9 = ___1_tweenParams;
		NullCheck(L_9);
		bool L_10 = (bool)L_9->___isIndependentUpdate_4;
		il2cpp_codegen_runtime_class_init_inline(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		TweenManager_SetUpdateType_m4C1E97DD675C70ABA66E53D283EDABB6337E44B4((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_6, L_8, L_10, NULL);
		RuntimeObject* L_11 = ___0_t;
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_12 = ___1_tweenParams;
		NullCheck(L_12);
		RuntimeObject* L_13 = (RuntimeObject*)L_12->___id_1;
		NullCheck(L_11);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_11)->___id_7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_11)->___id_7), (void*)L_13);
		RuntimeObject* L_14 = ___0_t;
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_15 = ___1_tweenParams;
		NullCheck(L_15);
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_16 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)L_15->___onStart_5;
		NullCheck(L_14);
		((ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89*)L_14)->___onStart_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89*)L_14)->___onStart_3), (void*)L_16);
		RuntimeObject* L_17 = ___0_t;
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_18 = ___1_tweenParams;
		NullCheck(L_18);
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_19 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)L_18->___onPlay_6;
		NullCheck(L_17);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_17)->___onPlay_13 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_17)->___onPlay_13), (void*)L_19);
		RuntimeObject* L_20 = ___0_t;
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_21 = ___1_tweenParams;
		NullCheck(L_21);
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_22 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)L_21->___onRewind_7;
		NullCheck(L_20);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_20)->___onRewind_15 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_20)->___onRewind_15), (void*)L_22);
		RuntimeObject* L_23 = ___0_t;
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_24 = ___1_tweenParams;
		NullCheck(L_24);
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_25 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)L_24->___onUpdate_8;
		NullCheck(L_23);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_23)->___onUpdate_16 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_23)->___onUpdate_16), (void*)L_25);
		RuntimeObject* L_26 = ___0_t;
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_27 = ___1_tweenParams;
		NullCheck(L_27);
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_28 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)L_27->___onStepComplete_9;
		NullCheck(L_26);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_26)->___onStepComplete_17 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_26)->___onStepComplete_17), (void*)L_28);
		RuntimeObject* L_29 = ___0_t;
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_30 = ___1_tweenParams;
		NullCheck(L_30);
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_31 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)L_30->___onComplete_10;
		NullCheck(L_29);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_29)->___onComplete_18 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_29)->___onComplete_18), (void*)L_31);
		RuntimeObject* L_32 = ___0_t;
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_33 = ___1_tweenParams;
		NullCheck(L_33);
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_34 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)L_33->___onKill_11;
		NullCheck(L_32);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_32)->___onKill_19 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_32)->___onKill_19), (void*)L_34);
		RuntimeObject* L_35 = ___0_t;
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_36 = ___1_tweenParams;
		NullCheck(L_36);
		TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* L_37 = (TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67*)L_36->___onWaypointChange_12;
		NullCheck(L_35);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_35)->___onWaypointChange_20 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_35)->___onWaypointChange_20), (void*)L_37);
		RuntimeObject* L_38 = ___0_t;
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_39 = ___1_tweenParams;
		NullCheck(L_39);
		bool L_40 = (bool)L_39->___isRecyclable_13;
		NullCheck(L_38);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_38)->___isRecyclable_23 = L_40;
		RuntimeObject* L_41 = ___0_t;
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_42 = ___1_tweenParams;
		NullCheck(L_42);
		bool L_43 = (bool)L_42->___isSpeedBased_14;
		NullCheck(L_41);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_41)->___isSpeedBased_24 = L_43;
		RuntimeObject* L_44 = ___0_t;
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_45 = ___1_tweenParams;
		NullCheck(L_45);
		bool L_46 = (bool)L_45->___autoKill_15;
		NullCheck(L_44);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_44)->___autoKill_25 = L_46;
		RuntimeObject* L_47 = ___0_t;
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_48 = ___1_tweenParams;
		NullCheck(L_48);
		int32_t L_49 = (int32_t)L_48->___loops_16;
		NullCheck(L_47);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_47)->___loops_27 = L_49;
		RuntimeObject* L_50 = ___0_t;
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_51 = ___1_tweenParams;
		NullCheck(L_51);
		int32_t L_52 = (int32_t)L_51->___loopType_17;
		NullCheck(L_50);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_50)->___loopType_28 = L_52;
		RuntimeObject* L_53 = ___0_t;
		NullCheck(L_53);
		int32_t L_54 = (int32_t)((ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89*)L_53)->___tweenType_0;
		if (L_54)
		{
			goto IL_0179;
		}
	}
	{
		RuntimeObject* L_55 = ___0_t;
		NullCheck(L_55);
		int32_t L_56 = (int32_t)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_55)->___loops_27;
		if ((((int32_t)L_56) <= ((int32_t)(-1))))
		{
			goto IL_0169;
		}
	}
	{
		RuntimeObject* L_57 = ___0_t;
		RuntimeObject* L_58 = ___0_t;
		NullCheck(L_58);
		float L_59 = (float)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_58)->___duration_26;
		RuntimeObject* L_60 = ___0_t;
		NullCheck(L_60);
		int32_t L_61 = (int32_t)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_60)->___loops_27;
		NullCheck(L_57);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_57)->___fullDuration_48 = ((float)il2cpp_codegen_multiply(L_59, ((float)L_61)));
		goto IL_0179;
	}

IL_0169:
	{
		RuntimeObject* L_62 = ___0_t;
		NullCheck(L_62);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_62)->___fullDuration_48 = (std::numeric_limits<float>::infinity());
	}

IL_0179:
	{
		RuntimeObject* L_63 = ___0_t;
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_64 = ___1_tweenParams;
		NullCheck(L_64);
		float L_65 = (float)L_64->___delay_18;
		NullCheck(L_63);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_63)->___delay_29 = L_65;
		RuntimeObject* L_66 = ___0_t;
		RuntimeObject* L_67 = ___0_t;
		NullCheck(L_67);
		float L_68 = (float)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_67)->___delay_29;
		NullCheck(L_66);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_66)->___delayComplete_53 = (bool)((((int32_t)((!(((float)L_68) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		RuntimeObject* L_69 = ___0_t;
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_70 = ___1_tweenParams;
		NullCheck(L_70);
		bool L_71 = (bool)L_70->___isRelative_19;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_69);
		Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_69, L_71, NULL);
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_72 = ___1_tweenParams;
		NullCheck(L_72);
		int32_t L_73 = (int32_t)L_72->___easeType_20;
		if (L_73)
		{
			goto IL_01f1;
		}
	}
	{
		RuntimeObject* L_74 = ___0_t;
		NullCheck(L_74);
		int32_t L_75 = (int32_t)((ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89*)L_74)->___tweenType_0;
		if ((!(((uint32_t)L_75) == ((uint32_t)1))))
		{
			goto IL_01df;
		}
	}
	{
		RuntimeObject* L_76 = ___0_t;
		NullCheck(L_76);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_76)->___easeType_31 = (int32_t)1;
		goto IL_0202;
	}

IL_01df:
	{
		RuntimeObject* L_77 = ___0_t;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_78 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultEaseType_20;
		NullCheck(L_77);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_77)->___easeType_31 = L_78;
		goto IL_0202;
	}

IL_01f1:
	{
		RuntimeObject* L_79 = ___0_t;
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_80 = ___1_tweenParams;
		NullCheck(L_80);
		int32_t L_81 = (int32_t)L_80->___easeType_20;
		NullCheck(L_79);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_79)->___easeType_31 = L_81;
	}

IL_0202:
	{
		RuntimeObject* L_82 = ___0_t;
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_83 = ___1_tweenParams;
		NullCheck(L_83);
		EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* L_84 = (EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04*)L_83->___customEase_21;
		NullCheck(L_82);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_82)->___customEase_32 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_82)->___customEase_32), (void*)L_84);
		RuntimeObject* L_85 = ___0_t;
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_86 = ___1_tweenParams;
		NullCheck(L_86);
		float L_87 = (float)L_86->___easeOvershootOrAmplitude_22;
		NullCheck(L_85);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_85)->___easeOvershootOrAmplitude_33 = L_87;
		RuntimeObject* L_88 = ___0_t;
		TweenParams_t0BF9382130164497B9A5A19076149D1CEDC697DA* L_89 = ___1_tweenParams;
		NullCheck(L_89);
		float L_90 = (float)L_89->___easePeriod_23;
		NullCheck(L_88);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_88)->___easePeriod_34 = L_90;
		RuntimeObject* L_91 = ___0_t;
		return L_91;
	}
}
// T DG.Tweening.TweenSettingsExtensions::SetAutoKill<System.Object>(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetAutoKill_TisRuntimeObject_m5303908097DB4965532C4DAE045A5ADB75808258_gshared (RuntimeObject* ___0_t, bool ___1_autoKillOnCompletion, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_t;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_1 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1, NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_3 = ___0_t;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_3)->___creationLocked_44;
		if (!L_4)
		{
			goto IL_0024;
		}
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___0_t;
		return L_5;
	}

IL_0024:
	{
		RuntimeObject* L_6 = ___0_t;
		bool L_7 = ___1_autoKillOnCompletion;
		NullCheck(L_6);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_6)->___autoKill_25 = L_7;
		RuntimeObject* L_8 = ___0_t;
		return L_8;
	}
}
// T DG.Tweening.TweenSettingsExtensions::SetDelay<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetDelay_TisRuntimeObject_mF70ED89B398DC4E92D4C6835829159161826326B_gshared (RuntimeObject* ___0_t, float ___1_delay, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeObject* L_0 = ___0_t;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_1 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1, NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_3 = ___0_t;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_3)->___creationLocked_44;
		if (!L_4)
		{
			goto IL_0024;
		}
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___0_t;
		return L_5;
	}

IL_0024:
	{
		RuntimeObject* L_6 = ___0_t;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)((ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89*)L_6)->___tweenType_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_8 = ___0_t;
		float L_9 = ___1_delay;
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_10;
		L_10 = TweenSettingsExtensions_PrependInterval_mCC5525CBFA2E20938D4D095DF5F78720C23228E0(((Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C*)IsInstSealed((RuntimeObject*)L_8, Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_il2cpp_TypeInfo_var)), L_9, NULL);
		goto IL_0068;
	}

IL_0046:
	{
		RuntimeObject* L_11 = ___0_t;
		float L_12 = ___1_delay;
		NullCheck(L_11);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_11)->___delay_29 = L_12;
		RuntimeObject* L_13 = ___0_t;
		float L_14 = ___1_delay;
		NullCheck(L_13);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_13)->___delayComplete_53 = (bool)((((int32_t)((!(((float)L_14) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0068:
	{
		RuntimeObject* L_15 = ___0_t;
		return L_15;
	}
}
// T DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(T,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetEase_TisRuntimeObject_mDA26A73227A145837952376DD9573026EB80599F_gshared (RuntimeObject* ___0_t, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_animCurve, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EaseCurve_Evaluate_m036A88A768920A29FA6C7EA6E78646F679C9DFEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EaseCurve_t36BD7EAD5E58656A06E0D71596FF781803BE9C5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeObject* L_0 = ___0_t;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1, NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_t;
		return L_3;
	}

IL_0017:
	{
		RuntimeObject* L_4 = ___0_t;
		NullCheck(L_4);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___easeType_31 = (int32_t)((int32_t)37);
		RuntimeObject* L_5 = ___0_t;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_6 = ___1_animCurve;
		EaseCurve_t36BD7EAD5E58656A06E0D71596FF781803BE9C5F* L_7 = (EaseCurve_t36BD7EAD5E58656A06E0D71596FF781803BE9C5F*)il2cpp_codegen_object_new(EaseCurve_t36BD7EAD5E58656A06E0D71596FF781803BE9C5F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EaseCurve__ctor_m29BD0E232922C8CE2E4AC877F79EF6096C34EDFB(L_7, L_6, NULL);
		EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* L_8 = (EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04*)il2cpp_codegen_object_new(EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		EaseFunction__ctor_mD630BE102357BB21BD878DF5E98F90BFE785A0F8(L_8, (RuntimeObject*)L_7, (intptr_t)((void*)EaseCurve_Evaluate_m036A88A768920A29FA6C7EA6E78646F679C9DFEE_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_5)->___customEase_32 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_5)->___customEase_32), (void*)L_8);
		RuntimeObject* L_9 = ___0_t;
		return L_9;
	}
}
// T DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(T,DG.Tweening.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetEase_TisRuntimeObject_m28E0D61D2E7C5417FB6048D549C4A02BCABF3F46_gshared (RuntimeObject* ___0_t, int32_t ___1_ease, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_t;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1, NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_t;
		return L_3;
	}

IL_0017:
	{
		RuntimeObject* L_4 = ___0_t;
		int32_t L_5 = ___1_ease;
		NullCheck(L_4);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___easeType_31 = L_5;
		int32_t L_6 = ___1_ease;
		bool L_7;
		L_7 = EaseManager_IsFlashEase_mB7D47A96B8C663F7FA56AD8D10B9586C76204FF6(L_6, NULL);
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		RuntimeObject* L_8 = ___0_t;
		RuntimeObject* L_9 = ___0_t;
		NullCheck(L_9);
		float L_10 = (float)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_9)->___easeOvershootOrAmplitude_33;
		NullCheck(L_8);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_8)->___easeOvershootOrAmplitude_33 = ((float)il2cpp_codegen_cast_double_to_int<int32_t>(L_10));
	}

IL_0043:
	{
		RuntimeObject* L_11 = ___0_t;
		NullCheck(L_11);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_11)->___customEase_32 = (EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_11)->___customEase_32), (void*)(EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04*)NULL);
		RuntimeObject* L_12 = ___0_t;
		return L_12;
	}
}
// T DG.Tweening.TweenSettingsExtensions::SetId<System.Object>(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetId_TisRuntimeObject_m4FB9D05F8ED6B508C90460EBF5ED845224DD4755_gshared (RuntimeObject* ___0_t, String_t* ___1_stringId, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_t;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1, NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_t;
		return L_3;
	}

IL_0017:
	{
		RuntimeObject* L_4 = ___0_t;
		String_t* L_5 = ___1_stringId;
		NullCheck(L_4);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___stringId_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___stringId_8), (void*)L_5);
		RuntimeObject* L_6 = ___0_t;
		return L_6;
	}
}
// T DG.Tweening.TweenSettingsExtensions::SetLoops<System.Object>(T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetLoops_TisRuntimeObject_m30FF346B469255E3C33C49622A4B5171078C99BD_gshared (RuntimeObject* ___0_t, int32_t ___1_loops, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_t;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_1 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1, NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_3 = ___0_t;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_3)->___creationLocked_44;
		if (!L_4)
		{
			goto IL_0024;
		}
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___0_t;
		return L_5;
	}

IL_0024:
	{
		int32_t L_6 = ___1_loops;
		if ((((int32_t)L_6) >= ((int32_t)(-1))))
		{
			goto IL_002d;
		}
	}
	{
		___1_loops = (-1);
		goto IL_0033;
	}

IL_002d:
	{
		int32_t L_7 = ___1_loops;
		if (L_7)
		{
			goto IL_0033;
		}
	}
	{
		___1_loops = 1;
	}

IL_0033:
	{
		RuntimeObject* L_8 = ___0_t;
		int32_t L_9 = ___1_loops;
		NullCheck(L_8);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_8)->___loops_27 = L_9;
		RuntimeObject* L_10 = ___0_t;
		NullCheck(L_10);
		int32_t L_11 = (int32_t)((ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89*)L_10)->___tweenType_0;
		if (L_11)
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_12 = ___1_loops;
		if ((((int32_t)L_12) <= ((int32_t)(-1))))
		{
			goto IL_006b;
		}
	}
	{
		RuntimeObject* L_13 = ___0_t;
		RuntimeObject* L_14 = ___0_t;
		NullCheck(L_14);
		float L_15 = (float)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_14)->___duration_26;
		int32_t L_16 = ___1_loops;
		NullCheck(L_13);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_13)->___fullDuration_48 = ((float)il2cpp_codegen_multiply(L_15, ((float)L_16)));
		goto IL_007b;
	}

IL_006b:
	{
		RuntimeObject* L_17 = ___0_t;
		NullCheck(L_17);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_17)->___fullDuration_48 = (std::numeric_limits<float>::infinity());
	}

IL_007b:
	{
		RuntimeObject* L_18 = ___0_t;
		return L_18;
	}
}
// T DG.Tweening.TweenSettingsExtensions::SetLoops<System.Object>(T,System.Int32,DG.Tweening.LoopType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetLoops_TisRuntimeObject_m47D6D13211B8E98EC93621D5ACA6828C463AFBF9_gshared (RuntimeObject* ___0_t, int32_t ___1_loops, int32_t ___2_loopType, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_t;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_1 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1, NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_3 = ___0_t;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_3)->___creationLocked_44;
		if (!L_4)
		{
			goto IL_0024;
		}
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___0_t;
		return L_5;
	}

IL_0024:
	{
		int32_t L_6 = ___1_loops;
		if ((((int32_t)L_6) >= ((int32_t)(-1))))
		{
			goto IL_002d;
		}
	}
	{
		___1_loops = (-1);
		goto IL_0033;
	}

IL_002d:
	{
		int32_t L_7 = ___1_loops;
		if (L_7)
		{
			goto IL_0033;
		}
	}
	{
		___1_loops = 1;
	}

IL_0033:
	{
		RuntimeObject* L_8 = ___0_t;
		int32_t L_9 = ___1_loops;
		NullCheck(L_8);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_8)->___loops_27 = L_9;
		RuntimeObject* L_10 = ___0_t;
		int32_t L_11 = ___2_loopType;
		NullCheck(L_10);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_10)->___loopType_28 = L_11;
		RuntimeObject* L_12 = ___0_t;
		NullCheck(L_12);
		int32_t L_13 = (int32_t)((ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89*)L_12)->___tweenType_0;
		if (L_13)
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_14 = ___1_loops;
		if ((((int32_t)L_14) <= ((int32_t)(-1))))
		{
			goto IL_0077;
		}
	}
	{
		RuntimeObject* L_15 = ___0_t;
		RuntimeObject* L_16 = ___0_t;
		NullCheck(L_16);
		float L_17 = (float)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_16)->___duration_26;
		int32_t L_18 = ___1_loops;
		NullCheck(L_15);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_15)->___fullDuration_48 = ((float)il2cpp_codegen_multiply(L_17, ((float)L_18)));
		goto IL_0087;
	}

IL_0077:
	{
		RuntimeObject* L_19 = ___0_t;
		NullCheck(L_19);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_19)->___fullDuration_48 = (std::numeric_limits<float>::infinity());
	}

IL_0087:
	{
		RuntimeObject* L_20 = ___0_t;
		return L_20;
	}
}
// T DG.Tweening.TweenSettingsExtensions::SetRelative<System.Object>(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetRelative_TisRuntimeObject_mA2AD07BE9F0E803F61F6B09473DFE479A65ADBE1_gshared (RuntimeObject* ___0_t, bool ___1_isRelative, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_t;
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_1 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1, NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_3 = ___0_t;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_3)->___creationLocked_44;
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_5 = ___0_t;
		NullCheck(L_5);
		bool L_6 = (bool)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_5)->___isFrom_21;
		if (L_6)
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_7 = ___0_t;
		NullCheck(L_7);
		bool L_8 = (bool)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_7)->___isBlendable_22;
		if (!L_8)
		{
			goto IL_003e;
		}
	}

IL_003c:
	{
		RuntimeObject* L_9 = ___0_t;
		return L_9;
	}

IL_003e:
	{
		RuntimeObject* L_10 = ___0_t;
		bool L_11 = ___1_isRelative;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_10);
		Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_10, L_11, NULL);
		RuntimeObject* L_12 = ___0_t;
		return L_12;
	}
}
// T DG.Tweening.TweenSettingsExtensions::SetSpeedBased<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetSpeedBased_TisRuntimeObject_m2B2A06DDF3716F8F63F6AE9B786AB9379CCA57C9_gshared (RuntimeObject* ___0_t, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_t;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_1 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1, NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_3 = ___0_t;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_3)->___creationLocked_44;
		if (!L_4)
		{
			goto IL_0024;
		}
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___0_t;
		return L_5;
	}

IL_0024:
	{
		RuntimeObject* L_6 = ___0_t;
		NullCheck(L_6);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_6)->___isSpeedBased_24 = (bool)1;
		RuntimeObject* L_7 = ___0_t;
		return L_7;
	}
}
// T DG.Tweening.TweenSettingsExtensions::SetTarget<System.Object>(T,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetTarget_TisRuntimeObject_m864840DC4375075588F2154A96F118D5FAEE3FD6_gshared (RuntimeObject* ___0_t, RuntimeObject* ___1_target, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* V_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_t;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1, NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_t;
		return L_3;
	}

IL_0017:
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = DOTween_get_debugStoreTargetId_m96F1367AD4955D84B2284A01EDD146DCE64B3A75(NULL);
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		RuntimeObject* L_5 = ___1_target;
		V_0 = ((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)IsInstClass((RuntimeObject*)L_5, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var));
		RuntimeObject* L_6 = ___0_t;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B5_0 = ((RuntimeObject*)(L_6));
		if (L_8)
		{
			G_B6_0 = ((RuntimeObject*)(L_6));
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_9 = ___1_target;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		G_B7_0 = L_10;
		G_B7_1 = G_B5_0;
		goto IL_0042;
	}

IL_003c:
	{
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_11 = V_0;
		NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_11);
		String_t* L_12;
		L_12 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_11, NULL);
		G_B7_0 = L_12;
		G_B7_1 = G_B6_0;
	}

IL_0042:
	{
		NullCheck(G_B7_1);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)G_B7_1)->___debugTargetId_35 = G_B7_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)G_B7_1)->___debugTargetId_35), (void*)G_B7_0);
	}

IL_0047:
	{
		RuntimeObject* L_13 = ___0_t;
		RuntimeObject* L_14 = ___1_target;
		NullCheck(L_13);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_13)->___target_10 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_13)->___target_10), (void*)L_14);
		RuntimeObject* L_15 = ___0_t;
		return L_15;
	}
}
// T DG.Tweening.TweenSettingsExtensions::SetUpdate<System.Object>(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetUpdate_TisRuntimeObject_m31DAD606349424C0FDDA8FD20A1155DB5DE576D7_gshared (RuntimeObject* ___0_t, bool ___1_isIndependentUpdate, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeObject* L_0 = ___0_t;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1, NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_t;
		return L_3;
	}

IL_0017:
	{
		RuntimeObject* L_4 = ___0_t;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_5 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultUpdateType_14;
		bool L_6 = ___1_isIndependentUpdate;
		il2cpp_codegen_runtime_class_init_inline(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		TweenManager_SetUpdateType_m4C1E97DD675C70ABA66E53D283EDABB6337E44B4((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4, L_5, L_6, NULL);
		RuntimeObject* L_7 = ___0_t;
		return L_7;
	}
}
// T DG.Tweening.TweenSettingsExtensions::SetUpdate<System.Object>(T,DG.Tweening.UpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetUpdate_TisRuntimeObject_mD1EFB89D6F76C443884C1C1286608ACC87B1352F_gshared (RuntimeObject* ___0_t, int32_t ___1_updateType, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeObject* L_0 = ___0_t;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1, NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_t;
		return L_3;
	}

IL_0017:
	{
		RuntimeObject* L_4 = ___0_t;
		int32_t L_5 = ___1_updateType;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_6 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultTimeScaleIndependent_15;
		il2cpp_codegen_runtime_class_init_inline(TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var);
		TweenManager_SetUpdateType_m4C1E97DD675C70ABA66E53D283EDABB6337E44B4((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4, L_5, L_6, NULL);
		RuntimeObject* L_7 = ___0_t;
		return L_7;
	}
}
// System.Void DG.Tweening.Tweener::DOStartupDurationBased<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener_DOStartupDurationBased_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericStruct_mF127BAD79EDC8BDCBE407FFCB288DC7CA5D4B784_gshared (/*DG.Tweening.Core.TweenerCore`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* ___0_t, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TPlugOptions)
	const uint32_t SizeOf_TPlugOptions_t81F31C9EB1EF9CDF582023A3E98CD64BDEF38AE2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// sizeof(T2)
	const uint32_t SizeOf_T2_tE3473B09F549037482683D400BE8E56768D983CF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// T2
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_tE3473B09F549037482683D400BE8E56768D983CF);
	// TPlugOptions
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_TPlugOptions_t81F31C9EB1EF9CDF582023A3E98CD64BDEF38AE2);
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B4_0 = NULL;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B5_1 = NULL;
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_0 = ___0_t;
		NullCheck(L_0);
		bool L_1 = (bool)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___isSpeedBased_24;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_2 = ___0_t;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_3 = ___0_t;
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_4 = *(ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),6));
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_5 = ___0_t;
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),3)), SizeOf_TPlugOptions_t81F31C9EB1EF9CDF582023A3E98CD64BDEF38AE2);
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_7 = ___0_t;
		NullCheck(L_7);
		float L_8 = (float)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_7)->___duration_26;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_9 = ___0_t;
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),2)), SizeOf_T2_tE3473B09F549037482683D400BE8E56768D983CF);
		NullCheck(L_4);
		float L_11;
		L_11 = VirtualFuncInvoker3Invoker< float, Il2CppFullySharedGenericStruct, float, Il2CppFullySharedGenericAny >::Invoke(9 /* System.Single DG.Tweening.Plugins.Core.ABSTweenPlugin`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::GetSpeedBasedDuration(TPlugOptions,System.Single,T2) */, L_4, L_6, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_10: *(void**)L_10));
		NullCheck(L_2);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_2)->___duration_26 = L_11;
	}

IL_002b:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_12 = ___0_t;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_13 = ___0_t;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_13)->___loops_27;
		G_B3_0 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)L_12);
		if ((((int32_t)L_14) > ((int32_t)(-1))))
		{
			G_B4_0 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)L_12);
			goto IL_003c;
		}
	}
	{
		G_B5_0 = (std::numeric_limits<float>::infinity());
		G_B5_1 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)G_B3_0);
		goto IL_004a;
	}

IL_003c:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_15 = ___0_t;
		NullCheck(L_15);
		float L_16 = (float)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_15)->___duration_26;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_17 = ___0_t;
		NullCheck(L_17);
		int32_t L_18 = (int32_t)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_17)->___loops_27;
		G_B5_0 = ((float)il2cpp_codegen_multiply(L_16, ((float)L_18)));
		G_B5_1 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)G_B4_0);
	}

IL_004a:
	{
		NullCheck(G_B5_1);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)G_B5_1)->___fullDuration_48 = G_B5_0;
		return;
	}
}
// System.Boolean DG.Tweening.Tweener::DOStartupSpecials<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DOStartupSpecials_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericStruct_m427FAACE3604ED3F46028BCD4A7D899EB8A6D16E_gshared (/*DG.Tweening.Core.TweenerCore`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenerCore_3_t0CD1AF1B188E9D008629D280210B5FA8C761E336_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_0 = ___0_t;
			NullCheck(L_0);
			int32_t L_1 = (int32_t)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___specialStartupMode_43;
			V_0 = L_1;
			int32_t L_2 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
			{
				case 0:
				{
					goto IL_0021_1;
				}
				case 1:
				{
					goto IL_0043_1;
				}
				case 2:
				{
					goto IL_0032_1;
				}
				case 3:
				{
					goto IL_0054_1;
				}
			}
		}
		{
			goto IL_0065_1;
		}

IL_0021_1:
		{
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_3 = ___0_t;
			bool L_4;
			L_4 = SpecialPluginsUtils_SetLookAt_m032BE1B008809A24C0B4BD53A9689F7DD70F7FCF(((TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3*)IsInstClass((RuntimeObject*)L_3, TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3_il2cpp_TypeInfo_var)), NULL);
			if (L_4)
			{
				goto IL_0065_1;
			}
		}
		{
			V_1 = (bool)0;
			goto IL_006e;
		}

IL_0032_1:
		{
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_5 = ___0_t;
			bool L_6;
			L_6 = SpecialPluginsUtils_SetPunch_m65C9920310ABC6FC6C483A6CEC088F3A360EE3CA(((TweenerCore_3_t0CD1AF1B188E9D008629D280210B5FA8C761E336*)IsInstClass((RuntimeObject*)L_5, TweenerCore_3_t0CD1AF1B188E9D008629D280210B5FA8C761E336_il2cpp_TypeInfo_var)), NULL);
			if (L_6)
			{
				goto IL_0065_1;
			}
		}
		{
			V_1 = (bool)0;
			goto IL_006e;
		}

IL_0043_1:
		{
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_7 = ___0_t;
			bool L_8;
			L_8 = SpecialPluginsUtils_SetShake_m6F23CBF51E66BEAB3791161223E67374E976FF20(((TweenerCore_3_t0CD1AF1B188E9D008629D280210B5FA8C761E336*)IsInstClass((RuntimeObject*)L_7, TweenerCore_3_t0CD1AF1B188E9D008629D280210B5FA8C761E336_il2cpp_TypeInfo_var)), NULL);
			if (L_8)
			{
				goto IL_0065_1;
			}
		}
		{
			V_1 = (bool)0;
			goto IL_006e;
		}

IL_0054_1:
		{
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_9 = ___0_t;
			bool L_10;
			L_10 = SpecialPluginsUtils_SetCameraShakePosition_m49B0FC03FA80CF51647589CCCB44BA1487B037A3(((TweenerCore_3_t0CD1AF1B188E9D008629D280210B5FA8C761E336*)IsInstClass((RuntimeObject*)L_9, TweenerCore_3_t0CD1AF1B188E9D008629D280210B5FA8C761E336_il2cpp_TypeInfo_var)), NULL);
			if (L_10)
			{
				goto IL_0065_1;
			}
		}
		{
			V_1 = (bool)0;
			goto IL_006e;
		}

IL_0065_1:
		{
			V_1 = (bool)1;
			goto IL_006e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0069;
		}
		throw e;
	}

CATCH_0069:
	{// begin catch(System.Object)
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_006e;
	}// end catch (depth: 1)

IL_006e:
	{
		bool L_11 = V_1;
		return L_11;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeEndValue<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* Tweener_DoChangeEndValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericStruct_mB2812F741EB26B0400E7AE1C41D8FD426F1F3C9C_gshared (/*DG.Tweening.Core.TweenerCore`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* ___0_t, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_newEndValue, float ___2_newDuration, bool ___3_snapStartValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T2)
	const uint32_t SizeOf_T2_tE48501F6F32076F79C09C65FC49FD7C48012689A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T1
	// sizeof(T1)
	const uint32_t SizeOf_T1_t9BE45F2AC84095915053DF1355DA7AC1326CACC4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T1_t9BE45F2AC84095915053DF1355DA7AC1326CACC4);
	const Il2CppFullySharedGenericAny L_35 = L_17;
	// T2
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_tE48501F6F32076F79C09C65FC49FD7C48012689A);
	const Il2CppFullySharedGenericAny L_18 = L_1;
	const Il2CppFullySharedGenericAny L_36 = L_1;
	Exception_t* V_0 = NULL;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_0 = ___0_t;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_newEndValue : &___1_newEndValue), SizeOf_T2_tE48501F6F32076F79C09C65FC49FD7C48012689A);
		NullCheck(L_0);
		il2cpp_codegen_write_instance_field_data(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1), L_1, SizeOf_T2_tE48501F6F32076F79C09C65FC49FD7C48012689A);
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_2 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_2);
		Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_2, (bool)0, NULL);
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_3 = ___0_t;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_3)->___startupDone_45;
		if (!L_4)
		{
			goto IL_00c0;
		}
	}
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_5 = ___0_t;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_5)->___specialStartupMode_43;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_7 = ___0_t;
		bool L_8;
		L_8 = InvokerFuncInvoker1< bool, TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_7);
		if (L_8)
		{
			goto IL_002b;
		}
	}
	{
		return (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)NULL;
	}

IL_002b:
	{
		bool L_9 = ___3_snapStartValue;
		if (!L_9)
		{
			goto IL_00b4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_10 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___useSafeMode_1;
		if (!L_10)
		{
			goto IL_0097;
		}
	}
	try
	{// begin try (depth: 1)
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_11 = ___0_t;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_12 = ___0_t;
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_13 = *(ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1**)il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),6));
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_14 = ___0_t;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_15 = ___0_t;
		DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14* L_16 = *(DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14**)il2cpp_codegen_get_instance_field_data_pointer(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),4));
		NullCheck(L_16);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_16, (Il2CppFullySharedGenericAny*)L_17);
		NullCheck(L_13);
		VirtualActionInvoker3Invoker< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(6 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, L_13, L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 6)) ? L_17: *(void**)L_17), (Il2CppFullySharedGenericAny*)L_18);
		NullCheck(L_11);
		il2cpp_codegen_write_instance_field_data(L_11, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0), L_18, SizeOf_T2_tE48501F6F32076F79C09C65FC49FD7C48012689A);
		goto IL_00b4;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0057;
		}
		throw e;
	}

CATCH_0057:
	{// begin catch(System.Exception)
		{
			V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			bool L_19;
			L_19 = Debugger_ShouldLogSafeModeCapturedError_m5EE800D2A5FD98C95C119D9AF68035095A123C47(NULL);
			if (!L_19)
			{
				goto IL_0081;
			}
		}
		{
			Exception_t* L_20 = V_0;
			NullCheck(L_20);
			MethodBase_t* L_21;
			L_21 = Exception_get_TargetSite_m0CE79BBF864CCEA96B72ED52EC66753CFBE5ED6A(L_20, NULL);
			Exception_t* L_22 = V_0;
			NullCheck(L_22);
			String_t* L_23;
			L_23 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_22);
			Exception_t* L_24 = V_0;
			NullCheck(L_24);
			String_t* L_25;
			L_25 = VirtualFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Exception::get_StackTrace() */, L_24);
			String_t* L_26;
			L_26 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9365D4C1C592580176E99B94E4C370640A2640F)), (RuntimeObject*)L_21, (RuntimeObject*)L_23, (RuntimeObject*)L_25, NULL);
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_27 = ___0_t;
			Debugger_LogSafeModeCapturedError_m0EE4B4F14B9243B4A9BD757853CAB77B5A888ED6((RuntimeObject*)L_26, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_27, NULL);
		}

IL_0081:
		{
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_28 = ___0_t;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TweenManager_t3DFB74C661BA08421AF4EB9F62D6DB3B8F7351F1_il2cpp_TypeInfo_var)));
			TweenManager_Despawn_mF56A8F1D2B480230F68F0149F6122D0BBAA129FC((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_28, (bool)1, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mC993434DFE20DDF1E44389DACD34085F31E6ED20((&((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))))->___safeModeReport_27), (int32_t)1, NULL);
			V_1 = (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)NULL;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00ed;
		}
	}// end catch (depth: 1)

IL_0097:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_29 = ___0_t;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_30 = ___0_t;
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_31 = *(ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1**)il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),6));
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_32 = ___0_t;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_33 = ___0_t;
		DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14* L_34 = *(DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),4));
		NullCheck(L_34);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_34, (Il2CppFullySharedGenericAny*)L_35);
		NullCheck(L_31);
		VirtualActionInvoker3Invoker< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(6 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, L_31, L_32, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 6)) ? L_35: *(void**)L_35), (Il2CppFullySharedGenericAny*)L_36);
		NullCheck(L_29);
		il2cpp_codegen_write_instance_field_data(L_29, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0), L_36, SizeOf_T2_tE48501F6F32076F79C09C65FC49FD7C48012689A);
	}

IL_00b4:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_37 = ___0_t;
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_38 = *(ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1**)il2cpp_codegen_get_instance_field_data_pointer(L_37, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),6));
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_39 = ___0_t;
		NullCheck(L_38);
		VirtualActionInvoker1Invoker< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* >::Invoke(8 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, L_38, L_39);
	}

IL_00c0:
	{
		float L_40 = ___2_newDuration;
		if ((!(((float)L_40) > ((float)(0.0f)))))
		{
			goto IL_00dd;
		}
	}
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_41 = ___0_t;
		float L_42 = ___2_newDuration;
		NullCheck(L_41);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_41)->___duration_26 = L_42;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_43 = ___0_t;
		NullCheck(L_43);
		bool L_44 = (bool)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_43)->___startupDone_45;
		if (!L_44)
		{
			goto IL_00dd;
		}
	}
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_45 = ___0_t;
		InvokerActionInvoker1< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)), il2cpp_rgctx_method(method->rgctx_data, 9), NULL, L_45);
	}

IL_00dd:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_46 = ___0_t;
		bool L_47;
		L_47 = Tween_DoGoto_m1A61731CB2E2D27D1E08ADD844E575A5DAD8939C((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_46, (0.0f), 0, (int32_t)2, NULL);
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_48 = ___0_t;
		return L_48;
	}

IL_00ed:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_49 = V_1;
		return L_49;
	}
}
// System.Boolean DG.Tweening.Tweener::DoStartup<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericStruct_m7844713579DCB7C27C603F35641565347ECB2EF3_gshared (/*DG.Tweening.Core.TweenerCore`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T2)
	const uint32_t SizeOf_T2_tC4A76B819474D2BA458497F91AF356C820C52665 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 7));
	// T1
	// sizeof(T1)
	const uint32_t SizeOf_T1_t5767A194576CC1FC1703FC747AE22F6F38E4DC35 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T1_t5767A194576CC1FC1703FC747AE22F6F38E4DC35);
	const Il2CppFullySharedGenericAny L_47 = L_23;
	// T2
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T2_tC4A76B819474D2BA458497F91AF356C820C52665);
	const Il2CppFullySharedGenericAny L_48 = L_24;
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B8_0 = NULL;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B9_1 = NULL;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B18_0 = NULL;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B19_1 = NULL;
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_0 = ___0_t;
		NullCheck(L_0);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___startupDone_45 = (bool)1;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_1 = ___0_t;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1)->___specialStartupMode_43;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_3 = ___0_t;
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3);
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_5 = ___0_t;
		NullCheck(L_5);
		bool L_6 = (bool)((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)L_5)->___hasManuallySetStartValue_55;
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___useSafeMode_1;
		if (!L_7)
		{
			goto IL_00af;
		}
	}
	try
	{// begin try (depth: 1)
		{
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_8 = ___0_t;
			NullCheck(L_8);
			bool L_9 = (bool)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_8)->___isFrom_21;
			if (!L_9)
			{
				goto IL_005a_1;
			}
		}
		{
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_10 = ___0_t;
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_11 = ___0_t;
			NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_11);
			bool L_12;
			L_12 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_11, NULL);
			G_B7_0 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)L_10);
			if (!L_12)
			{
				G_B8_0 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)L_10);
				goto IL_004a_1;
			}
		}
		{
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_13 = ___0_t;
			NullCheck(L_13);
			bool L_14 = (bool)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_13)->___isBlendable_22;
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)G_B7_0);
			goto IL_004b_1;
		}

IL_004a_1:
		{
			G_B9_0 = 0;
			G_B9_1 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)G_B8_0);
		}

IL_004b_1:
		{
			NullCheck((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B9_1);
			Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_15;
			L_15 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(10 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_16 = ___0_t;
			NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_16);
			Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_16, (bool)0, NULL);
			goto IL_0077_1;
		}

IL_005a_1:
		{
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_17 = ___0_t;
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_18 = ___0_t;
			ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_19 = *(ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1**)il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),6));
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_20 = ___0_t;
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_21 = ___0_t;
			DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14* L_22 = *(DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14**)il2cpp_codegen_get_instance_field_data_pointer(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),4));
			NullCheck(L_22);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_22, (Il2CppFullySharedGenericAny*)L_23);
			NullCheck(L_19);
			VirtualActionInvoker3Invoker< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(6 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, L_19, L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? L_23: *(void**)L_23), (Il2CppFullySharedGenericAny*)L_24);
			NullCheck(L_17);
			il2cpp_codegen_write_instance_field_data(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0), L_24, SizeOf_T2_tC4A76B819474D2BA458497F91AF356C820C52665);
		}

IL_0077_1:
		{
			goto IL_00f8;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{// begin catch(System.Exception)
		{
			V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			bool L_25;
			L_25 = Debugger_ShouldLogSafeModeCapturedError_m5EE800D2A5FD98C95C119D9AF68035095A123C47(NULL);
			if (!L_25)
			{
				goto IL_009d;
			}
		}
		{
			Exception_t* L_26 = V_0;
			NullCheck(L_26);
			MethodBase_t* L_27;
			L_27 = Exception_get_TargetSite_m0CE79BBF864CCEA96B72ED52EC66753CFBE5ED6A(L_26, NULL);
			Exception_t* L_28 = V_0;
			NullCheck(L_28);
			String_t* L_29;
			L_29 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_28);
			String_t* L_30;
			L_30 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject*)L_27, (RuntimeObject*)L_29, NULL);
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_31 = ___0_t;
			Debugger_LogSafeModeCapturedError_m0EE4B4F14B9243B4A9BD757853CAB77B5A888ED6((RuntimeObject*)L_30, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_31, NULL);
		}

IL_009d:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mC993434DFE20DDF1E44389DACD34085F31E6ED20((&((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))))->___safeModeReport_27), (int32_t)3, NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0135;
		}
	}// end catch (depth: 1)

IL_00af:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_32 = ___0_t;
		NullCheck(L_32);
		bool L_33 = (bool)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_32)->___isFrom_21;
		if (!L_33)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_34 = ___0_t;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_35 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_35);
		bool L_36;
		L_36 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_35, NULL);
		G_B17_0 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)L_34);
		if (!L_36)
		{
			G_B18_0 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)L_34);
			goto IL_00cb;
		}
	}
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_37 = ___0_t;
		NullCheck(L_37);
		bool L_38 = (bool)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_37)->___isBlendable_22;
		G_B19_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		G_B19_1 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)G_B17_0);
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)G_B18_0);
	}

IL_00cc:
	{
		NullCheck((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B19_1);
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_39;
		L_39 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(10 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_40 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_40);
		Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_40, (bool)0, NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_41 = ___0_t;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_42 = ___0_t;
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_43 = *(ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1**)il2cpp_codegen_get_instance_field_data_pointer(L_42, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),6));
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_44 = ___0_t;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_45 = ___0_t;
		DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14* L_46 = *(DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14**)il2cpp_codegen_get_instance_field_data_pointer(L_45, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),4));
		NullCheck(L_46);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_46, (Il2CppFullySharedGenericAny*)L_47);
		NullCheck(L_43);
		VirtualActionInvoker3Invoker< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(6 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, L_43, L_44, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? L_47: *(void**)L_47), (Il2CppFullySharedGenericAny*)L_48);
		NullCheck(L_41);
		il2cpp_codegen_write_instance_field_data(L_41, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0), L_48, SizeOf_T2_tC4A76B819474D2BA458497F91AF356C820C52665);
	}

IL_00f8:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_49 = ___0_t;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_49);
		bool L_50;
		L_50 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_49, NULL);
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_51 = ___0_t;
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_52 = *(ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1**)il2cpp_codegen_get_instance_field_data_pointer(L_51, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),6));
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_53 = ___0_t;
		NullCheck(L_52);
		VirtualActionInvoker1Invoker< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* >::Invoke(7 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, L_52, L_53);
	}

IL_010c:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_54 = ___0_t;
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_55 = *(ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1**)il2cpp_codegen_get_instance_field_data_pointer(L_54, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),6));
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_56 = ___0_t;
		NullCheck(L_55);
		VirtualActionInvoker1Invoker< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* >::Invoke(8 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, L_55, L_56);
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_57 = ___0_t;
		InvokerActionInvoker1< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 10)), il2cpp_rgctx_method(method->rgctx_data, 10), NULL, L_57);
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_58 = ___0_t;
		NullCheck(L_58);
		float L_59 = (float)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_58)->___duration_26;
		if ((!(((float)L_59) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_60 = ___0_t;
		NullCheck(L_60);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_60)->___easeType_31 = (int32_t)((int32_t)36);
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_61 = V_1;
		return L_61;
	}
}
// System.Single DG.Tweening.Tweener::DoUpdateDelay<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericStruct_m2DD6E91B1BD32C838E83D9A00E23091E2BC6C595_gshared (/*DG.Tweening.Core.TweenerCore`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* ___0_t, float ___1_elapsed, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	float V_0 = 0.0f;
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_0 = ___0_t;
		NullCheck(L_0);
		float L_1 = (float)((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___delay_29;
		V_0 = L_1;
		float L_2 = ___1_elapsed;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_4 = ___0_t;
		float L_5 = V_0;
		NullCheck(L_4);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___elapsedDelay_52 = L_5;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_6 = ___0_t;
		NullCheck(L_6);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_6)->___delayComplete_53 = (bool)1;
		float L_7 = ___1_elapsed;
		float L_8 = V_0;
		return ((float)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_001d:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_9 = ___0_t;
		float L_10 = ___1_elapsed;
		NullCheck(L_9);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_9)->___elapsedDelay_52 = L_10;
		return (0.0f);
	}
}
// System.Boolean DG.Tweening.Tweener::Setup<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single,DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericStruct_m367D27ACD74D1F94574B61F66A9FE4BCE9878768_gshared (/*DG.Tweening.Core.TweenerCore`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* ___0_t, DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14* ___1_getter, DOSetter_1_t856F6D96CAAFD28A21A398D2B3838D27D7E9BD16* ___2_setter, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___3_endValue, float ___4_duration, ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* ___5_plugin, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T2)
	const uint32_t SizeOf_T2_t1A317392D2BC29857CB52C1A930D6A4DD8BD2535 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	// T2
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_t1A317392D2BC29857CB52C1A930D6A4DD8BD2535);
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B8_0 = NULL;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_0 = ___5_plugin;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_1 = ___0_t;
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_2 = ___5_plugin;
		NullCheck(L_1);
		il2cpp_codegen_write_instance_field_data<ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1*>(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 1),6), L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_3 = ___0_t;
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_4 = *(ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 1),6));
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_5 = ___0_t;
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_6;
		L_6 = InvokerFuncInvoker0< ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL);
		NullCheck(L_5);
		il2cpp_codegen_write_instance_field_data<ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1*>(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 1),6), L_6);
	}

IL_0021:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_7 = ___0_t;
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_8 = *(ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 1),6));
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_mBAD7F720F13F12B84A27F564F83F00B66EEE6B9E((RuntimeObject*)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL, NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_9 = ___0_t;
		DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14* L_10 = ___1_getter;
		NullCheck(L_9);
		il2cpp_codegen_write_instance_field_data<DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14*>(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 1),4), L_10);
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_11 = ___0_t;
		DOSetter_1_t856F6D96CAAFD28A21A398D2B3838D27D7E9BD16* L_12 = ___2_setter;
		NullCheck(L_11);
		il2cpp_codegen_write_instance_field_data<DOSetter_1_t856F6D96CAAFD28A21A398D2B3838D27D7E9BD16*>(L_11, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 1),5), L_12);
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_13 = ___0_t;
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? ___3_endValue : &___3_endValue), SizeOf_T2_t1A317392D2BC29857CB52C1A930D6A4DD8BD2535);
		NullCheck(L_13);
		il2cpp_codegen_write_instance_field_data(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 1),1), L_14, SizeOf_T2_t1A317392D2BC29857CB52C1A930D6A4DD8BD2535);
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_15 = ___0_t;
		float L_16 = ___4_duration;
		NullCheck(L_15);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_15)->___duration_26 = L_16;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_17 = ___0_t;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultAutoKill_17;
		NullCheck(L_17);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_17)->___autoKill_25 = L_18;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_19 = ___0_t;
		bool L_20 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultRecyclable_19;
		NullCheck(L_19);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_19)->___isRecyclable_23 = L_20;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_21 = ___0_t;
		int32_t L_22 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultEaseType_20;
		NullCheck(L_21);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_21)->___easeType_31 = L_22;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_23 = ___0_t;
		float L_24 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultEaseOvershootOrAmplitude_21;
		NullCheck(L_23);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_23)->___easeOvershootOrAmplitude_33 = L_24;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_25 = ___0_t;
		float L_26 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultEasePeriod_22;
		NullCheck(L_25);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_25)->___easePeriod_34 = L_26;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_27 = ___0_t;
		int32_t L_28 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultLoopType_18;
		NullCheck(L_27);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_27)->___loopType_28 = L_28;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_29 = ___0_t;
		int32_t L_30 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultAutoPlay_16;
		G_B7_0 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)L_29);
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)L_29);
			goto IL_00a8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultAutoPlay_16;
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)G_B7_0);
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)G_B8_0);
	}

IL_00a9:
	{
		NullCheck(G_B9_1);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)G_B9_1)->___isPlaying_50 = (bool)G_B9_0;
		return (bool)1;
	}
}
// System.Void UnityEngine.UIElements.UIR.UIRenderDevice::DrawRanges<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(UnityEngine.UIElements.UIR.Utility/GPUBuffer`1<I>,UnityEngine.UIElements.UIR.Utility/GPUBuffer`1<T>,Unity.Collections.NativeSlice`1<UnityEngine.UIElements.UIR.DrawBufferRange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIRenderDevice_DrawRanges_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m71F34C7DEDCF897C928FC2BED61084149C5AF648_gshared (UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302* __this, GPUBuffer_1_t59623B2A3B8EFD33FB05C973C4C4EAFCF89ED241* ___0_ib, GPUBuffer_1_t59623B2A3B8EFD33FB05C973C4C4EAFCF89ED241* ___1_vb, NativeSlice_1_t2E5DBD9A5F77A5044A4160098A0B2A45D3EE8974 ___2_ranges, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSliceUnsafeUtility_GetUnsafePtr_TisDrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4_m3F0318274FE0636367B91558C6673DEF834FB1A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_get_Length_m2566843C81FEFDDF6407962D4E34F13C3133028D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRenderDevice_DrawRanges_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m71F34C7DEDCF897C928FC2BED61084149C5AF648_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t* V_0 = NULL;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((uintptr_t)((uintptr_t)1) * (uintptr_t)L_0 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), UIRenderDevice_DrawRanges_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m71F34C7DEDCF897C928FC2BED61084149C5AF648_RuntimeMethod_var);
		intptr_t L_1 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)1), (int32_t)L_0));
		int8_t* L_2 = (int8_t*) (L_1 ? alloca(L_1) : NULL);
		memset(L_2, 0, L_1);
		V_0 = (intptr_t*)(L_2);
		intptr_t* L_3 = V_0;
		GPUBuffer_1_t59623B2A3B8EFD33FB05C973C4C4EAFCF89ED241* L_4 = ___1_vb;
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = InvokerFuncInvoker0< intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_4);
		*((intptr_t*)L_3) = (intptr_t)L_5;
		GPUBuffer_1_t59623B2A3B8EFD33FB05C973C4C4EAFCF89ED241* L_6 = ___0_ib;
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = InvokerFuncInvoker0< intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_6);
		intptr_t* L_8 = V_0;
		NativeSlice_1_t2E5DBD9A5F77A5044A4160098A0B2A45D3EE8974 L_9 = ___2_ranges;
		void* L_10;
		L_10 = NativeSliceUnsafeUtility_GetUnsafePtr_TisDrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4_m3F0318274FE0636367B91558C6673DEF834FB1A5(L_9, NativeSliceUnsafeUtility_GetUnsafePtr_TisDrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4_m3F0318274FE0636367B91558C6673DEF834FB1A5_RuntimeMethod_var);
		intptr_t L_11;
		memset((&L_11), 0, sizeof(L_11));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_11), L_10, /*hidden argument*/NULL);
		int32_t L_12;
		L_12 = NativeSlice_1_get_Length_m2566843C81FEFDDF6407962D4E34F13C3133028D((&___2_ranges), NativeSlice_1_get_Length_m2566843C81FEFDDF6407962D4E34F13C3133028D_RuntimeMethod_var);
		intptr_t L_13 = (intptr_t)__this->___m_VertexDecl_2;
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Utility_DrawRanges_m6F5AE31B6A857DB71F66A2662C6EBE1B218B6FF4(L_7, L_8, 1, L_11, L_12, L_13, NULL);
		return;
	}
}
// Unity.Collections.NativeSlice`1<T> UnityEngine.UIElements.UIR.UIRenderDevice::PtrToSlice<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 UIRenderDevice_PtrToSlice_TisIl2CppFullySharedGenericStruct_m0EE4C09A713B60EB7E390B5330800B63CEF94BDF_gshared (void* ___0_p, int32_t ___1_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		void* L_0 = ___0_p;
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		int32_t L_2 = ___1_count;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_3;
		L_3 = InvokerFuncInvoker3< NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, void*, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2);
		V_0 = L_3;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_4 = V_0;
		V_1 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_5 = V_1;
		return L_5;
	}
}
// T UnityEngine.UIElements.UQueryExtensions::Q<System.Object>(UnityEngine.UIElements.VisualElement,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UQueryExtensions_Q_TisRuntimeObject_mE41C425481646FE357E4650A7CB20F7C3F2CCA40_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_e, String_t* ___1_name, String_t* ___2_className, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		V_1 = (bool)((((RuntimeObject*)(Type_t*)L_1) == ((RuntimeObject*)(Type_t*)L_3))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_5 = ___0_e;
		String_t* L_6 = ___1_name;
		String_t* L_7 = ___2_className;
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8;
		L_8 = UQueryExtensions_Q_m95306617BF08AC2853EABB5299786D2095BE631E(L_5, L_6, L_7, NULL);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0237;
	}

IL_0034:
	{
		String_t* L_9 = ___1_name;
		V_3 = (bool)((((RuntimeObject*)(String_t*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0114;
		}
	}
	{
		String_t* L_11 = ___2_className;
		V_4 = (bool)((((RuntimeObject*)(String_t*)L_11) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_009b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13 = ___0_e;
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_14;
		L_14 = UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004((&((UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_StaticFields*)il2cpp_codegen_static_fields_for(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var))->___SingleElementTypeQuery_4), L_13, UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004_RuntimeMethod_var);
		V_0 = L_14;
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_15 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_16 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_15.___m_Matchers_2;
		NullCheck(L_16);
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_17;
		L_17 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_16, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_18 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_17.___complexSelector_1;
		NullCheck(L_18);
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_19;
		L_19 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_18, NULL);
		NullCheck(L_19);
		int32_t L_20 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_22;
		L_22 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 3));
		IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4* L_23 = ((IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 3)))->___s_Instance_0;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_24;
		L_24 = StyleSelectorPart_CreatePredicate_m9B21A0E45BE2A1EBCA075E7C3EA04216EFB99026((RuntimeObject*)L_23, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_24);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_25;
		L_25 = UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94((&V_0), UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94_RuntimeMethod_var);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_25, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0237;
	}

IL_009b:
	{
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_26 = ___0_e;
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_27;
		L_27 = UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004((&((UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_StaticFields*)il2cpp_codegen_static_fields_for(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var))->___SingleElementTypeAndClassQuery_6), L_26, UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004_RuntimeMethod_var);
		V_0 = L_27;
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_28 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_29 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_28.___m_Matchers_2;
		NullCheck(L_29);
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_30;
		L_30 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_29, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_31 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_30.___complexSelector_1;
		NullCheck(L_31);
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_32;
		L_32 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_31, NULL);
		NullCheck(L_32);
		int32_t L_33 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_35;
		L_35 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_34, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 3));
		IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4* L_36 = ((IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 3)))->___s_Instance_0;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_37;
		L_37 = StyleSelectorPart_CreatePredicate_m9B21A0E45BE2A1EBCA075E7C3EA04216EFB99026((RuntimeObject*)L_36, NULL);
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(0), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_37);
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_38 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_39 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_38.___m_Matchers_2;
		NullCheck(L_39);
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_40;
		L_40 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_39, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_41 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_40.___complexSelector_1;
		NullCheck(L_41);
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_42;
		L_42 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_41, NULL);
		NullCheck(L_42);
		int32_t L_43 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_44);
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_45;
		L_45 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_44, NULL);
		String_t* L_46 = ___2_className;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_47;
		L_47 = StyleSelectorPart_CreateClass_m5B7F89D3BE469D181E0887E94F4031B92554656E(L_46, NULL);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(1), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_47);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_48;
		L_48 = UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94((&V_0), UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94_RuntimeMethod_var);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_48, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0237;
	}

IL_0114:
	{
		String_t* L_49 = ___2_className;
		V_5 = (bool)((((RuntimeObject*)(String_t*)L_49) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_50 = V_5;
		if (!L_50)
		{
			goto IL_0198;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_51 = ___0_e;
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_52;
		L_52 = UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004((&((UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_StaticFields*)il2cpp_codegen_static_fields_for(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var))->___SingleElementTypeAndNameQuery_5), L_51, UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004_RuntimeMethod_var);
		V_0 = L_52;
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_53 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_54 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_53.___m_Matchers_2;
		NullCheck(L_54);
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_55;
		L_55 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_54, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_56 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_55.___complexSelector_1;
		NullCheck(L_56);
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_57;
		L_57 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_56, NULL);
		NullCheck(L_57);
		int32_t L_58 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_59);
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_60;
		L_60 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_59, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 3));
		IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4* L_61 = ((IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 3)))->___s_Instance_0;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_62;
		L_62 = StyleSelectorPart_CreatePredicate_m9B21A0E45BE2A1EBCA075E7C3EA04216EFB99026((RuntimeObject*)L_61, NULL);
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(0), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_62);
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_63 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_64 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_63.___m_Matchers_2;
		NullCheck(L_64);
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_65;
		L_65 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_64, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_66 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_65.___complexSelector_1;
		NullCheck(L_66);
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_67;
		L_67 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_66, NULL);
		NullCheck(L_67);
		int32_t L_68 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_69);
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_70;
		L_70 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_69, NULL);
		String_t* L_71 = ___1_name;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_72;
		L_72 = StyleSelectorPart_CreateId_m8C5422E6675A02D0A623D8BB2A1F6704299F0357(L_71, NULL);
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(1), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_72);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_73;
		L_73 = UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94((&V_0), UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94_RuntimeMethod_var);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_73, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0237;
	}

IL_0198:
	{
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_74 = ___0_e;
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_75;
		L_75 = UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004((&((UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_StaticFields*)il2cpp_codegen_static_fields_for(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var))->___SingleElementTypeAndNameAndClassQuery_7), L_74, UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004_RuntimeMethod_var);
		V_0 = L_75;
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_76 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_77 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_76.___m_Matchers_2;
		NullCheck(L_77);
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_78;
		L_78 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_77, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_79 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_78.___complexSelector_1;
		NullCheck(L_79);
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_80;
		L_80 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_79, NULL);
		NullCheck(L_80);
		int32_t L_81 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_82);
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_83;
		L_83 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_82, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 3));
		IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4* L_84 = ((IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 3)))->___s_Instance_0;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_85;
		L_85 = StyleSelectorPart_CreatePredicate_m9B21A0E45BE2A1EBCA075E7C3EA04216EFB99026((RuntimeObject*)L_84, NULL);
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(0), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_85);
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_86 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_87 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_86.___m_Matchers_2;
		NullCheck(L_87);
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_88;
		L_88 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_87, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_89 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_88.___complexSelector_1;
		NullCheck(L_89);
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_90;
		L_90 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_89, NULL);
		NullCheck(L_90);
		int32_t L_91 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_92 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		NullCheck(L_92);
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_93;
		L_93 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_92, NULL);
		String_t* L_94 = ___1_name;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_95;
		L_95 = StyleSelectorPart_CreateId_m8C5422E6675A02D0A623D8BB2A1F6704299F0357(L_94, NULL);
		NullCheck(L_93);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(1), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_95);
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_96 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_97 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_96.___m_Matchers_2;
		NullCheck(L_97);
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_98;
		L_98 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_97, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_99 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_98.___complexSelector_1;
		NullCheck(L_99);
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_100;
		L_100 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_99, NULL);
		NullCheck(L_100);
		int32_t L_101 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		NullCheck(L_102);
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_103;
		L_103 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_102, NULL);
		String_t* L_104 = ___2_className;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_105;
		L_105 = StyleSelectorPart_CreateClass_m5B7F89D3BE469D181E0887E94F4031B92554656E(L_104, NULL);
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(2), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_105);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_106;
		L_106 = UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94((&V_0), UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94_RuntimeMethod_var);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_106, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0237;
	}

IL_0237:
	{
		RuntimeObject* L_107 = V_2;
		return L_107;
	}
}
// UnityEngine.UIElements.UQueryBuilder`1<T> UnityEngine.UIElements.UQueryExtensions::Query<System.Object>(UnityEngine.UIElements.VisualElement,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2 UQueryExtensions_Query_TisRuntimeObject_m54F26487B79AE0ECC38A0B9D6615D7FD6B1F56C9_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_e, String_t* ___1_name, String_t* ___2_className, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryBuilder_1__ctor_m841C38F69A30425CCEA1F93525C97AD0B9648486_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_e;
		V_1 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UQueryExtensions_Query_TisRuntimeObject_m54F26487B79AE0ECC38A0B9D6615D7FD6B1F56C9_RuntimeMethod_var)));
	}

IL_0014:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3 = ___0_e;
		UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139 L_4;
		memset((&L_4), 0, sizeof(L_4));
		UQueryBuilder_1__ctor_m841C38F69A30425CCEA1F93525C97AD0B9648486((&L_4), L_3, /*hidden argument*/UQueryBuilder_1__ctor_m841C38F69A30425CCEA1F93525C97AD0B9648486_RuntimeMethod_var);
		V_2 = L_4;
		String_t* L_5 = ___1_name;
		String_t* L_6 = ___2_className;
		UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2 L_7;
		L_7 = InvokerFuncInvoker2< UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2, String_t*, String_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), (&V_2), L_5, L_6);
		V_0 = L_7;
		UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2 L_8 = V_0;
		V_3 = L_8;
		goto IL_0029;
	}

IL_0029:
	{
		UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2 L_9 = V_3;
		return L_9;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_Add_TisIl2CppFullySharedGenericAny_mDA4722F94AF13693FCE1583B641A792D2EA47924_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tBE6850158665A8E196430E1D80AEFF9AC121F5F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_tBE6850158665A8E196430E1D80AEFF9AC121F5F9;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_Add_TisIl2CppFullySharedGenericAny_mC89D70E498F759E971238CF82E99E44CC68197DA_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_source, intptr_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tEE9E2B0A67EF7877E2DDB454C5066EBB8C09D0DA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		intptr_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_tEE9E2B0A67EF7877E2DDB454C5066EBB8C09D0DA;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
// System.Void* System.Runtime.CompilerServices.Unsafe::Add<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_Add_TisIl2CppFullySharedGenericAny_m25356A475C0867B15741BD80812E4EBA4394F3C5_gshared (void* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t3ED59D9C3AB22383C6F506D05E4A04928B7130D6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_t3ED59D9C3AB22383C6F506D05E4A04928B7130D6;
		return ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m023762698D869AA8F4D477B66833C0BCFC1EA25C_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_source, intptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		intptr_t L_1 = ___1_byteOffset;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)L_1), NULL);
		Il2CppFullySharedGenericAny* L_3;
		L_3 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_2);
		return L_3;
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisIl2CppFullySharedGenericAny_mEFCD9F27093DEB04CA603DC1C6F306CE6DCCDC3C_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_left, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_left;
		Il2CppFullySharedGenericAny* L_1 = ___1_right;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
// T System.Runtime.CompilerServices.Unsafe::As<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Unsafe_As_TisRuntimeObject_mFDA1457944192D987E8EC451CC8BFB2E800D78A1_gshared (RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_o;
		return L_0;
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAF06A659941D15118FC1E4800E3A7A0F262628A4_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
// System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisIl2CppFullySharedGenericAny_mE85961ECFFC7310EBEF309E6E67AD0FED2F9030B_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_value;
		return (void*)(((uintptr_t)L_0));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_m088920550101BD3FA6B40E99A5F107C35BE752FA_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		return L_0;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_mD269D4D95DA51D3CF4E4025805638814158802A3_gshared (void* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___0_source;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisIl2CppFullySharedGenericAny_m731B9B0C5A4B349E4545E7AAAB44731B9ADB6597_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_left, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_left;
		Il2CppFullySharedGenericAny* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// T System.Runtime.CompilerServices.Unsafe::Read<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_Read_TisIl2CppFullySharedGenericAny_mF6B28073E683AAE891ED373C5F5F29DA2A0708A2_gshared (void* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
	{
		void* L_0 = ___0_source;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
		return;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_ReadUnaligned_TisIl2CppFullySharedGenericAny_m42C276800437B81F51F1F38619B499B6AAFB0021_gshared (uint8_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
	{
		uint8_t* L_0 = ___0_source;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
		return;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mD5748385042811E049C06FFD865AFD213C5FA9EB_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t77C4AF644C0D2AE4F0E9399E7AED3FED3426FBD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_t77C4AF644C0D2AE4F0E9399E7AED3FED3426FBD7;
		return (int32_t)L_0;
	}
}
// System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Byte&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisIl2CppFullySharedGenericAny_mF9DAA41D685A65A581864DBF65CE23C6F7E72BDF_gshared (uint8_t* ___0_destination, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
	{
		uint8_t* L_0 = ___0_destination;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_1, SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_1);
		return;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility::EnumEquals<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtility_EnumEquals_TisIl2CppFullySharedGenericStruct_m5C481F0B602D350AD1D467266B1FC020AD37D39F_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_lhs, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___1_rhs, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9);
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9);
	{
		il2cpp_codegen_memcpy(L_0, ___0_lhs, SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9);
		il2cpp_codegen_memcpy(L_1, ___1_rhs, SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9);
		return (bool)((((int64_t)il2cpp_codegen_conv<int64_t,false,false>(il2cpp_rgctx_data(method->rgctx_data, 0), L_0, NULL)) == ((int64_t)il2cpp_codegen_conv<int64_t,false,false>(il2cpp_rgctx_data(method->rgctx_data, 0), L_1, NULL)))? 1 : 0);
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::EnumToInt<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_EnumToInt_TisIl2CppFullySharedGenericStruct_m3B39C49C6E55DD41CE78BCEBD6E575D640D38B3D_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_enumValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct*, int32_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (Il2CppFullySharedGenericStruct*)___0_enumValue, (&V_0));
		int32_t L_0 = V_0;
		V_1 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::InternalEnumToInt<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalEnumToInt_TisIl2CppFullySharedGenericAny_mBDCF185E254B9BD3742E154D436B362227EB8F18_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_enumValue, int32_t* ___1_intValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t* L_0 = ___1_intValue;
		Il2CppFullySharedGenericAny* L_1 = ___0_enumValue;
		int32_t L_2 = *((int32_t*)L_1);
		*((int32_t*)L_0) = (int32_t)L_2;
		return;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_gshared (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C;
		il2cpp_codegen_memcpy(L_3, ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		return;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElementWithStride_TisIl2CppFullySharedGenericAny_mA2FA845DC97225E057F01D0D4161C801EECA284F_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8);
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		il2cpp_codegen_memcpy(L_3, ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8);
		return;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tE6588938356AD51CD7B5532933E8B84E7779C6E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_tE6588938356AD51CD7B5532933E8B84E7779C6E2;
		return (int32_t)L_0;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_gshared (void* ___0_destination, int32_t ___1_index, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_value : &___2_value), SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), L_3, SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisIl2CppFullySharedGenericAny_mD6C17E0F294919C280E583601A298E265D20935A_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___3_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520);
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_value : &___3_value), SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), L_3, SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), (void*)L_3);
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::SetVectorArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(UnityEngine.MaterialPropertyBlock,System.Int32,Unity.Collections.NativeSlice`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetVectorArray_TisIl2CppFullySharedGenericStruct_m81E3635992729EE14FE0F341841167D9B847780B_gshared (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___0_props, int32_t ___1_name, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___2_vector4s, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (&___2_vector4s));
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), (&___2_vector4s));
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_0, L_1))/((int32_t)16)));
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_2 = ___0_props;
		int32_t L_3 = ___1_name;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_4 = ___2_vector4s;
		void* L_5;
		L_5 = InvokerFuncInvoker1< void*, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_4);
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_6), L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Utility_SetVectorArray_m36650D854AAE55F689FF622D36CC2AC0B9FD7FB1(L_2, L_3, L_6, L_7, NULL);
		return;
	}
}
// T UnityEngine.UIElements.UxmlAttributeDescription::GetValueFromBag<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.Func`3<System.String,T,T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxmlAttributeDescription_GetValueFromBag_TisIl2CppFullySharedGenericAny_mAD4F4838D245291B33A0A6819595AAE917FA073A_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* ___2_converterFunc, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___3_defaultValue, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	const Il2CppFullySharedGenericAny L_11 = L_9;
	const Il2CppFullySharedGenericAny L_12 = L_9;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	memset(V_3, 0, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	{
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_0 = ___2_converterFunc;
		V_1 = (bool)((((RuntimeObject*)(Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UxmlAttributeDescription_GetValueFromBag_TisIl2CppFullySharedGenericAny_mAD4F4838D245291B33A0A6819595AAE917FA073A_RuntimeMethod_var)));
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_bag;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_4 = ___1_cc;
		bool L_5;
		L_5 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_3, L_4, (&V_0), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_7 = ___2_converterFunc;
		String_t* L_8 = V_0;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___3_defaultValue : &___3_defaultValue), SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		NullCheck(L_7);
		InvokerActionInvoker3< String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_7, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_9: *(void**)L_9), (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy(V_3, L_10, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		goto IL_0035;
	}

IL_0030:
	{
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___3_defaultValue : &___3_defaultValue), SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		il2cpp_codegen_memcpy(V_3, L_11, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		goto IL_0035;
	}

IL_0035:
	{
		il2cpp_codegen_memcpy(L_12, V_3, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_12, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.UxmlAttributeDescription::TryGetValueFromBag<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.Func`3<System.String,T,T>,T,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxmlAttributeDescription_TryGetValueFromBag_TisIl2CppFullySharedGenericAny_mCED4FA8C9BF02C7E06E00E3C378BF3E04890B72F_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* ___2_converterFunc, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___3_defaultValue, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___4_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
	const Il2CppFullySharedGenericAny L_12 = L_9;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___0_bag;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_1 = ___1_cc;
		bool L_2;
		L_2 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_0, L_1, (&V_0), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_4 = ___2_converterFunc;
		V_2 = (bool)((!(((RuntimeObject*)(Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_6 = ___4_value;
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_7 = ___2_converterFunc;
		String_t* L_8 = V_0;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___3_defaultValue : &___3_defaultValue), SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		NullCheck(L_7);
		InvokerActionInvoker3< String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_7, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_9: *(void**)L_9), (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_6, L_10, SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_6, (void*)L_10);
		goto IL_0037;
	}

IL_002c:
	{
		Il2CppFullySharedGenericAny* L_11 = ___4_value;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___3_defaultValue : &___3_defaultValue), SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_11, L_12, SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_11, (void*)L_12);
	}

IL_0037:
	{
		V_3 = (bool)1;
		goto IL_003f;
	}

IL_003b:
	{
		V_3 = (bool)0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
// System.Numerics.Vector`1<System.UInt64> System.Numerics.Vector::AsVectorUInt64<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisIl2CppFullySharedGenericStruct_mD3B6243B6DD2F19C7DA294F642D66F699D797811_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = InvokerFuncInvoker1< Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0);
		return L_1;
	}
}
// System.Numerics.Vector`1<T> System.Numerics.Vector::Equals<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Numerics.Vector`1<T>,System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 Vector_Equals_TisIl2CppFullySharedGenericStruct_m589C7C54FDBBA8A38CC7672C2E2734EB16BDFD24_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_left, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___1_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___0_left;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_1 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_2;
		L_2 = InvokerFuncInvoker2< Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1);
		return L_2;
	}
}
// UnityEngine.UIElements.Experimental.ValueAnimation`1<T> UnityEngine.UIElements.VisualElement::StartAnimation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.Experimental.ValueAnimation`1<T>,System.Func`2<UnityEngine.UIElements.VisualElement,T>,T,System.Int32,System.Action`2<UnityEngine.UIElements.VisualElement,T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* VisualElement_StartAnimation_TisIl2CppFullySharedGenericAny_m300B910AACD4424D5526A2A5802A0B43DCDDC3A9_gshared (/*UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* ___0_anim, Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C* ___1_fromValueGetter, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_to, int32_t ___3_durationMs, Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E* ___4_onValueChanged, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t57C63BDE4B938B0DA7CC7EDBEC89B668884105BA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t57C63BDE4B938B0DA7CC7EDBEC89B668884105BA);
	ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* V_0 = NULL;
	{
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_0 = ___0_anim;
		Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C* L_1 = ___1_fromValueGetter;
		NullCheck(L_0);
		InvokerActionInvoker1< Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_0, L_1);
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_2 = ___0_anim;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_to : &___2_to), SizeOf_T_t57C63BDE4B938B0DA7CC7EDBEC89B668884105BA);
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_3: *(void**)L_3));
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_4 = ___0_anim;
		int32_t L_5 = ___3_durationMs;
		NullCheck(L_4);
		InvokerActionInvoker1< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_4, L_5);
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_6 = ___0_anim;
		Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E* L_7 = ___4_onValueChanged;
		NullCheck(L_6);
		InvokerActionInvoker1< Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), L_6, L_7);
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_8 = ___0_anim;
		NullCheck(L_8);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)), il2cpp_rgctx_method(method->rgctx_data, 8), L_8);
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_9 = ___0_anim;
		V_0 = L_9;
		goto IL_002d;
	}

IL_002d:
	{
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_10 = V_0;
		return L_10;
	}
}
// System.Void UnityEngine.UIElements.VisualTreeUpdater::SetUpdater<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualTreeUpdater_SetUpdater_TisIl2CppFullySharedGenericAny_m4EF351A8B23A4EE9E88C20E5398468F5AC304360_gshared (VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9* __this, int32_t ___0_phase, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	memset(V_0, 0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	memset(V_1, 0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_0 = (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449*)__this->___m_UpdaterArray_1;
		int32_t L_1 = ___0_phase;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C(L_0, L_1, NULL);
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0013;
		}
	}
	{
		goto IL_0019;
	}

IL_0013:
	{
		NullCheck((RuntimeObject*)G_B2_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)G_B2_0);
	}

IL_0019:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(V_1, L_4, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_5 = (BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303*)__this->___m_Panel_0;
		ConstrainedActionInvoker1< BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_6, (void*)(Il2CppFullySharedGenericAny*)V_1, L_5);
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		il2cpp_codegen_memcpy(V_0, L_7, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_8 = (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449*)__this->___m_UpdaterArray_1;
		int32_t L_9 = ___0_phase;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_10);
		NullCheck(L_8);
		UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11(L_8, L_9, (RuntimeObject*)L_11, NULL);
		return;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Volatile_Read_TisRuntimeObject_mDE75C7462350B2A7FB1546BCE22D13CBD69AC088_gshared (RuntimeObject** ___0_location, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = (RuntimeObject*)L_1->___Value_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_3;
		L_3 = il2cpp_unsafe_as<RuntimeObject*>(L_2);
		return L_3;
	}
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_mBB6C58646958F01615FEBF405DCE2A9926F81962_gshared (RuntimeObject** ___0_location, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = ___1_value;
		il2cpp_codegen_memory_barrier();
		L_1->___Value_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Value_0), (void*)L_2);
		return;
	}
}
// T System.Xml.Linq.XDocument::GetFirstNode<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocument_GetFirstNode_TisRuntimeObject_mB6611AFC4A5D605253FE7A3ABB8BFCB6250CA705_gshared (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNode_t185C922661054AAD14F49676DD6F3CB10D652A30_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = (RuntimeObject*)((XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF*)__this)->___content_3;
		V_0 = ((XNode_t185C922661054AAD14F49676DD6F3CB10D652A30*)IsInstClass((RuntimeObject*)L_0, XNode_t185C922661054AAD14F49676DD6F3CB10D652A30_il2cpp_TypeInfo_var));
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0035;
		}
	}

IL_000f:
	{
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_2 = V_0;
		NullCheck(L_2);
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_3 = (XNode_t185C922661054AAD14F49676DD6F3CB10D652A30*)L_2->___next_2;
		V_0 = L_3;
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_4 = V_0;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_5 = V_1;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = V_1;
		return L_6;
	}

IL_002c:
	{
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_7 = V_0;
		RuntimeObject* L_8 = (RuntimeObject*)((XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF*)__this)->___content_3;
		if ((!(((RuntimeObject*)(XNode_t185C922661054AAD14F49676DD6F3CB10D652A30*)L_7) == ((RuntimeObject*)(RuntimeObject*)L_8))))
		{
			goto IL_000f;
		}
	}

IL_0035:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_2;
		return L_9;
	}
}
// T System.Xml.Linq.XObject::Annotation<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XObject_Annotation_TisRuntimeObject_mA59EF6437D825A65AED4C032B09C4AAEAD53631E_gshared (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___annotations_1;
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___annotations_1;
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___annotations_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
	}

IL_0028:
	{
		V_1 = 0;
		goto IL_004d;
	}

IL_002c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject* L_8 = V_2;
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_9 = V_2;
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_10 = V_3;
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		RuntimeObject* L_11 = V_3;
		return L_11;
	}

IL_0049:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004d:
	{
		int32_t L_13 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_002c;
		}
	}

IL_0053:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject*));
		RuntimeObject* L_15 = V_4;
		return L_15;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* XmlListConverter_ToArray_TisIl2CppFullySharedGenericAny_mE842A5B9F83A5858104C85C66B591AD394929357_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tDC5A1FFD4912C532F838E238130A2E3F50CA030C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T_tDC5A1FFD4912C532F838E238130A2E3F50CA030C);
	const Il2CppFullySharedGenericAny L_37 = L_15;
	RuntimeObject* V_0 = NULL;
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_1 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		void* L_16 = UnBox_Any(L_14, il2cpp_rgctx_data(method->rgctx_data, 2), L_15);
		NullCheck(L_5);
		il2cpp_codegen_memcpy((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_16))), SizeOf_T_tDC5A1FFD4912C532F838E238130A2E3F50CA030C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_16))));
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0047:
	{
		int32_t L_18 = V_3;
		RuntimeObject* L_19 = V_0;
		NullCheck((RuntimeObject*)L_19);
		int32_t L_20;
		L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_001a;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = V_2;
		return L_21;
	}

IL_0052:
	{
		RuntimeObject* L_22 = ___0_list;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_23 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_23);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_23);
		V_1 = L_23;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_22, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_22, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_24;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_25 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_26 = V_6;
					if (!L_26)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_27 = V_6;
					NullCheck(L_27);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_27);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_28 = V_4;
				NullCheck(L_28);
				RuntimeObject* L_29;
				L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_28);
				V_5 = L_29;
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_30 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_31 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
				RuntimeObject* L_32 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_34;
				L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
				RuntimeObject* L_35 = ___1_nsResolver;
				NullCheck(L_31);
				RuntimeObject* L_36;
				L_36 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_31, L_32, L_34, L_35);
				void* L_38 = UnBox_Any(L_36, il2cpp_rgctx_data(method->rgctx_data, 2), L_37);
				NullCheck(L_30);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_38))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_38)))));
			}

IL_0093_1:
			{
				RuntimeObject* L_39 = V_4;
				NullCheck(L_39);
				bool L_40;
				L_40 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_39);
				if (L_40)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_41 = V_1;
		NullCheck(L_41);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_42;
		L_42 = InvokerFuncInvoker0< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_41);
		return L_42;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppFullySharedGenericAny_mD6B660A63955117687D6131FC1DB255161D1A2BA_gshared (intptr_t ___0_array, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(ArrayType)
	const uint32_t SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// ArrayType
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
	const Il2CppFullySharedGenericAny L_20 = L_12;
	const Il2CppFullySharedGenericAny L_28 = L_12;
	const Il2CppFullySharedGenericAny L_36 = L_12;
	const Il2CppFullySharedGenericAny L_44 = L_12;
	const Il2CppFullySharedGenericAny L_52 = L_12;
	const Il2CppFullySharedGenericAny L_60 = L_12;
	const Il2CppFullySharedGenericAny L_68 = L_12;
	const Il2CppFullySharedGenericAny L_76 = L_12;
	const Il2CppFullySharedGenericAny L_99 = L_12;
	const Il2CppFullySharedGenericAny L_122 = L_12;
	const Il2CppFullySharedGenericAny L_129 = L_12;
	const Il2CppFullySharedGenericAny L_130 = L_12;
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
	memset(V_3, 0, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	Il2CppFullySharedGenericAny V_24 = alloca(SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
	memset(V_24, 0, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		void* L_13 = UnBox_Any((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1), L_12);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_13))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_14) == ((RuntimeObject*)(Type_t*)L_16))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_18 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_19;
		L_19 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_18, NULL);
		void* L_21 = UnBox_Any((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 1), L_20);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_21))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_22 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_22) == ((RuntimeObject*)(Type_t*)L_24))? 1 : 0);
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_26 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_26, NULL);
		void* L_29 = UnBox_Any((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 1), L_28);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_29))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_6;
		if (!L_33)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_34 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_35;
		L_35 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_34, NULL);
		void* L_37 = UnBox_Any((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1), L_36);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_37))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_38 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_38) == ((RuntimeObject*)(Type_t*)L_40))? 1 : 0);
		bool L_41 = V_7;
		if (!L_41)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_42 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_43;
		L_43 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_42, NULL);
		void* L_45 = UnBox_Any((RuntimeObject*)L_43, il2cpp_rgctx_data(method->rgctx_data, 1), L_44);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_45))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_46 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_46) == ((RuntimeObject*)(Type_t*)L_48))? 1 : 0);
		bool L_49 = V_8;
		if (!L_49)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_50 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_51;
		L_51 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_50, NULL);
		void* L_53 = UnBox_Any((RuntimeObject*)L_51, il2cpp_rgctx_data(method->rgctx_data, 1), L_52);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_53))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_9;
		if (!L_57)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_58 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_59;
		L_59 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_58, NULL);
		void* L_61 = UnBox_Any((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1), L_60);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_61))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_62 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_64;
		L_64 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_63, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_62) == ((RuntimeObject*)(Type_t*)L_64))? 1 : 0);
		bool L_65 = V_10;
		if (!L_65)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_66 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_67;
		L_67 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_66, NULL);
		void* L_69 = UnBox_Any((RuntimeObject*)L_67, il2cpp_rgctx_data(method->rgctx_data, 1), L_68);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_69))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_70 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_72;
		L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_70) == ((RuntimeObject*)(Type_t*)L_72))? 1 : 0);
		bool L_73 = V_11;
		if (!L_73)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_74 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_75;
		L_75 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_74, NULL);
		void* L_77 = UnBox_Any((RuntimeObject*)L_75, il2cpp_rgctx_data(method->rgctx_data, 1), L_76);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_77))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_78 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_78) == ((RuntimeObject*)(Type_t*)L_80))? 1 : 0);
		bool L_81 = V_12;
		if (!L_81)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_82 = ___0_array;
		int32_t L_83;
		L_83 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_82, NULL);
		V_13 = L_83;
		int32_t L_84 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_85 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_84);
		V_14 = L_85;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_86 = ___0_array;
		int32_t L_87 = V_15;
		intptr_t L_88;
		L_88 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_86, L_87, NULL);
		V_16 = L_88;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_89 = V_14;
		int32_t L_90 = V_15;
		intptr_t L_91 = V_16;
		String_t* L_92;
		L_92 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_91, NULL);
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, L_92);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(L_90), (String_t*)L_92);
		intptr_t L_93 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_93, NULL);
		int32_t L_94 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_01c3:
	{
		int32_t L_95 = V_15;
		int32_t L_96 = V_13;
		V_17 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		bool L_97 = V_17;
		if (L_97)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_98 = V_14;
		void* L_100 = UnBox_Any((RuntimeObject*)L_98, il2cpp_rgctx_data(method->rgctx_data, 1), L_99);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_100))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_101 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_103;
		L_103 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_102, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_101) == ((RuntimeObject*)(Type_t*)L_103))? 1 : 0);
		bool L_104 = V_18;
		if (!L_104)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_105 = ___0_array;
		int32_t L_106;
		L_106 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_105, NULL);
		V_19 = L_106;
		int32_t L_107 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_108 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_107);
		V_20 = L_108;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_109 = ___0_array;
		int32_t L_110 = V_21;
		intptr_t L_111;
		L_111 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_109, L_110, NULL);
		V_22 = L_111;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_112 = V_20;
		int32_t L_113 = V_21;
		intptr_t L_114 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_115 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_115);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_115, L_114, NULL);
		NullCheck(L_112);
		ArrayElementTypeCheck (L_112, L_115);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(L_113), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_115);
		intptr_t L_116 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_116, NULL);
		int32_t L_117 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_117, 1));
	}

IL_022c:
	{
		int32_t L_118 = V_21;
		int32_t L_119 = V_19;
		V_23 = (bool)((((int32_t)L_118) < ((int32_t)L_119))? 1 : 0);
		bool L_120 = V_23;
		if (L_120)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_121 = V_20;
		void* L_123 = UnBox_Any((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 1), L_122);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_123))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_124 = V_0;
		Type_t* L_125 = L_124;
		G_B31_0 = L_125;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_125)
		{
			G_B32_0 = L_125;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_126;
		L_126 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_126;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_127;
		L_127 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_128 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_128);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_128, L_127, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_128, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppFullySharedGenericAny_mD6B660A63955117687D6131FC1DB255161D1A2BA_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_24, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		il2cpp_codegen_memcpy(L_129, V_24, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		il2cpp_codegen_memcpy(V_3, L_129, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0272:
	{
		il2cpp_codegen_memcpy(L_130, V_3, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_130, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		return;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisIl2CppFullySharedGenericAny_m5714D44FF454CB672C9F04F1316533DAD6C6BCBB_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		bool L_5 = ___2_isStatic;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisIl2CppFullySharedGenericAny_mBB787943D3DB158E741B5FF2B66EFB90237F837C_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = InvokerFuncInvoker1< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_2);
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisIl2CppFullySharedGenericAny_m5BFF8BF215EBBD2B94DB67B384DAB97E221FA134_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsBaseConverter::DeserializeMember<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,System.Type,System.String,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_DeserializeMember_TisIl2CppFullySharedGenericAny_mD950968993B7222E483356975AAB178517564D4A_gshared (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___0_data, Type_t* ___1_overrideConverterType, String_t* ___2_name, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t66A6B07095DD463B03FC01500296FB7356DCAEB1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T_t66A6B07095DD463B03FC01500296FB7356DCAEB1);
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (data.TryGetValue(name, out memberData) == false)
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = ___0_data;
		String_t* L_1 = ___2_name;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		// value = default(T);
		Il2CppFullySharedGenericAny* L_3 = ___3_value;
		il2cpp_codegen_initobj(L_3, SizeOf_T_t66A6B07095DD463B03FC01500296FB7356DCAEB1);
		// return fsResult.Fail("Unable to find member \"" + name + "\"");
		String_t* L_4 = ___2_name;
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23, L_4, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_6;
		L_6 = fsResult_Fail_m3315594F29830C02FD560F7401D311F99DA241CD(L_5, NULL);
		return L_6;
	}

IL_0029:
	{
		// object storage = null;
		V_1 = NULL;
		// var result = Serializer.TryDeserialize(memberData, typeof(T), overrideConverterType, ref storage);
		fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* L_7 = (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC*)__this->___Serializer_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_8 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = ___1_overrideConverterType;
		NullCheck(L_7);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_12;
		L_12 = fsSerializer_TryDeserialize_m675340784F47BA9FF50C193F53A3BAAA1D18D2B9(L_7, L_8, L_10, L_11, (&V_1), NULL);
		// value = (T)storage;
		Il2CppFullySharedGenericAny* L_13 = ___3_value;
		RuntimeObject* L_14 = V_1;
		void* L_16 = UnBox_Any(L_14, il2cpp_rgctx_data(method->rgctx_data, 1), L_15);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_13, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_16))), SizeOf_T_t66A6B07095DD463B03FC01500296FB7356DCAEB1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_13, (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_16))));
		// return result;
		return L_12;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsBaseConverter::SerializeMember<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,System.Type,System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_SerializeMember_TisIl2CppFullySharedGenericAny_m79CBD6541C56F6775C6AFE833F82B8B7DE1AD522_gshared (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___0_data, Type_t* ___1_overrideConverterType, String_t* ___2_name, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___3_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t3A237E4AA0892E30C7702FD24E2E0300B01B1262 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t3A237E4AA0892E30C7702FD24E2E0300B01B1262);
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var result = Serializer.TrySerialize(typeof(T), overrideConverterType, value, out memberData);
		fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* L_0 = (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC*)__this->___Serializer_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		Type_t* L_3 = ___1_overrideConverterType;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___3_value : &___3_value), SizeOf_T_t3A237E4AA0892E30C7702FD24E2E0300B01B1262);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_4);
		NullCheck(L_0);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_6;
		L_6 = fsSerializer_TrySerialize_m2E029A68D43C8F4783B5912AB8004658E41AB84B(L_0, L_2, L_3, L_5, (&V_0), NULL);
		V_1 = L_6;
		// if (result.Succeeded)
		bool L_7;
		L_7 = fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline((&V_1), NULL);
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		// data[name] = memberData;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_8 = ___0_data;
		String_t* L_9 = ___2_name;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_10 = V_0;
		NullCheck(L_8);
		Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8(L_8, L_9, L_10, Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
	}

IL_0031:
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_11 = V_1;
		return L_11;
	}
}
// T Unity.VisualScripting.FullSerializer.fsContext::Get<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsContext_Get_TisIl2CppFullySharedGenericAny_m291C6F4855EE2BB88FED4FA436058E2BDABA90A5_gshared (fsContext_t3B227C205D84208E2D8934429C07677542C97B5F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t4FF9F0AFC05B7E0F85A4B934B59D234155F6E4A5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t4FF9F0AFC05B7E0F85A4B934B59D234155F6E4A5);
	RuntimeObject* V_0 = NULL;
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (_contextObjects.TryGetValue(typeof(T), out val))
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_0 = (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*)__this->____contextObjects_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return (T)val;
		RuntimeObject* L_4 = V_0;
		void* L_6 = UnBox_Any(L_4, il2cpp_rgctx_data(method->rgctx_data, 1), L_5);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_6))), SizeOf_T_t4FF9F0AFC05B7E0F85A4B934B59D234155F6E4A5);
		return;
	}

IL_0020:
	{
		// throw new InvalidOperationException("There is no context object of type " + typeof(T));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		Type_t* L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBA2F217B5B8E3E9CFB32D71843BB131F5263FF34));
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBA2F217B5B8E3E9CFB32D71843BB131F5263FF34));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_10;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B5_1, G_B5_0, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_12 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsContext_Get_TisIl2CppFullySharedGenericAny_m291C6F4855EE2BB88FED4FA436058E2BDABA90A5_RuntimeMethod_var)));
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsContext::Set<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsContext_Set_TisIl2CppFullySharedGenericAny_mAB9E5A73CD1BC1599F11B9B5FF1CDAE55086E05C_gshared (fsContext_t3B227C205D84208E2D8934429C07677542C97B5F* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t5A1B1DFB3DBD00270ED3B0AD25CD7659CF44974B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t5A1B1DFB3DBD00270ED3B0AD25CD7659CF44974B);
	{
		// _contextObjects[typeof(T)] = obj;
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_0 = (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*)__this->____contextObjects_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___0_obj : &___0_obj), SizeOf_T_t5A1B1DFB3DBD00270ED3B0AD25CD7659CF44974B);
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_3);
		NullCheck(L_0);
		Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96(L_0, L_2, L_4, Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var);
		// }
		return;
	}
}
// T Unity.VisualScripting.FullSerializer.fsData::Cast<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsData_Cast_TisIl2CppFullySharedGenericAny_m59964E85C8553DF957981BF63F5C2EC6703B8888_gshared (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tBE9A67E171C85D8CA29A1569A871BCDB274C8EBF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tBE9A67E171C85D8CA29A1569A871BCDB274C8EBF);
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Type_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	Type_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Type_t* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	Type_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	String_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	{
		// if (_value is T)
		RuntimeObject* L_0 = (RuntimeObject*)__this->____value_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0))))
		{
			goto IL_0019;
		}
	}
	{
		// return (T)_value;
		RuntimeObject* L_1 = (RuntimeObject*)__this->____value_0;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(method->rgctx_data, 0), L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_3))), SizeOf_T_tBE9A67E171C85D8CA29A1569A871BCDB274C8EBF);
		return;
	}

IL_0019:
	{
		// throw new InvalidCastException("Unable to cast <" + this + "> (with type = " +
		//     _value.GetType() + ") to type " + typeof(T));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		G_B3_0 = __this;
		G_B3_1 = 1;
		G_B3_2 = L_6;
		G_B3_3 = L_6;
		if (__this)
		{
			G_B4_0 = __this;
			G_B4_1 = 1;
			G_B4_2 = L_6;
			G_B4_3 = L_6;
			goto IL_0031;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		G_B5_2 = G_B3_2;
		G_B5_3 = G_B3_3;
		goto IL_0036;
	}

IL_0031:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_7;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
		G_B5_3 = G_B4_3;
	}

IL_0036:
	{
		NullCheck(G_B5_2);
		ArrayElementTypeCheck (G_B5_2, G_B5_0);
		(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = G_B5_3;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral537F955588893B499438876FBA6FFDB5522EB027)));
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral537F955588893B499438876FBA6FFDB5522EB027)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		RuntimeObject* L_10 = (RuntimeObject*)__this->____value_0;
		NullCheck(L_10);
		Type_t* L_11;
		L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_10, NULL);
		Type_t* L_12 = L_11;
		G_B6_0 = L_12;
		G_B6_1 = 3;
		G_B6_2 = L_9;
		G_B6_3 = L_9;
		if (L_12)
		{
			G_B7_0 = L_12;
			G_B7_1 = 3;
			G_B7_2 = L_9;
			G_B7_3 = L_9;
			goto IL_0053;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0058;
	}

IL_0053:
	{
		NullCheck((RuntimeObject*)G_B7_0);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B7_0);
		G_B8_0 = L_13;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0058:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = G_B8_3;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F55817E612497BA20DDBC0EA7111ED68FC1666E)));
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F55817E612497BA20DDBC0EA7111ED68FC1666E)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		Type_t* L_18 = L_17;
		G_B9_0 = L_18;
		G_B9_1 = 5;
		G_B9_2 = L_15;
		G_B9_3 = L_15;
		if (L_18)
		{
			G_B10_0 = L_18;
			G_B10_1 = 5;
			G_B10_2 = L_15;
			G_B10_3 = L_15;
			goto IL_0074;
		}
	}
	{
		G_B11_0 = ((String_t*)(NULL));
		G_B11_1 = G_B9_1;
		G_B11_2 = G_B9_2;
		G_B11_3 = G_B9_3;
		goto IL_0079;
	}

IL_0074:
	{
		NullCheck((RuntimeObject*)G_B10_0);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B10_0);
		G_B11_0 = L_19;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		G_B11_3 = G_B10_3;
	}

IL_0079:
	{
		NullCheck(G_B11_2);
		ArrayElementTypeCheck (G_B11_2, G_B11_0);
		(G_B11_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B11_1), (String_t*)G_B11_0);
		String_t* L_20;
		L_20 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(G_B11_3, NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_21 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsData_Cast_TisIl2CppFullySharedGenericAny_m59964E85C8553DF957981BF63F5C2EC6703B8888_RuntimeMethod_var)));
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.fsEnumConverter::ArrayContains<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsEnumConverter_ArrayContains_TisIl2CppFullySharedGenericAny_m4858946975F16253C1272A5B33762275FA856C06_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_values, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t059EDBAAA8BB194D521A4740722ABDEDE6811131 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t059EDBAAA8BB194D521A4740722ABDEDE6811131);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t059EDBAAA8BB194D521A4740722ABDEDE6811131);
	int32_t V_0 = 0;
	{
		// for (var i = 0; i < values.Length; ++i)
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		// if (EqualityComparer<T>.Default.Equals(values[i], value))
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = InvokerFuncInvoker0< EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_values;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_t059EDBAAA8BB194D521A4740722ABDEDE6811131);
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? ___1_value : &___1_value), SizeOf_T_t059EDBAAA8BB194D521A4740722ABDEDE6811131);
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Equals(T,T) */, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? L_4: *(void**)L_4), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? L_5: *(void**)L_5));
		if (!L_6)
		{
			goto IL_001a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_001a:
	{
		// for (var i = 0; i < values.Length; ++i)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001e:
	{
		// for (var i = 0; i < values.Length; ++i)
		int32_t L_8 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = ___0_values;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<T> Unity.VisualScripting.FullSerializer.Internal.fsOption::Just<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_Just_TisIl2CppFullySharedGenericAny_m29BB81EA3CFE4D1DC8CB7BEB746EF9C053DCF70C_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_value, fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tF41E1145E66EAE3CF7E6499BD09CBA3A0EF365E4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// sizeof(Unity.VisualScripting.FullSerializer.Internal.fsOption`1<T>)
	const uint32_t SizeOf_fsOption_1_t94E57BA0CA9FA35974F429ECB93CB3C18B13D8DA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tF41E1145E66EAE3CF7E6499BD09CBA3A0EF365E4);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tF41E1145E66EAE3CF7E6499BD09CBA3A0EF365E4);
	// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<T>
	const fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88 L_2 = alloca(SizeOf_fsOption_1_t94E57BA0CA9FA35974F429ECB93CB3C18B13D8DA);
	{
		// return new fsOption<T>(value);
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_value : &___0_value), SizeOf_T_tF41E1145E66EAE3CF7E6499BD09CBA3A0EF365E4);
		memset(L_2, 0, SizeOf_fsOption_1_t94E57BA0CA9FA35974F429ECB93CB3C18B13D8DA);
		fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tF41E1145E66EAE3CF7E6499BD09CBA3A0EF365E4): *(void**)L_0), /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_fsOption_1_t94E57BA0CA9FA35974F429ECB93CB3C18B13D8DA);
		return;
	}
}
// TAttribute Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetAttribute<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsPortableReflection_GetAttribute_TisRuntimeObject_m1C0FA5FADFE944AE738700734DAF1F7431F24F2A_gshared (MemberInfo_t* ___0_element, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		// return GetAttribute<TAttribute>(element, /*shouldCache:*/ true);
		MemberInfo_t* L_0 = ___0_element;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = InvokerFuncInvoker2< RuntimeObject*, MemberInfo_t*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, (bool)1);
		return L_1;
	}
}
// TAttribute Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetAttribute<System.Object>(System.Reflection.MemberInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsPortableReflection_GetAttribute_TisRuntimeObject_m6854932ED6F763F1AB235CC3DFA9790D981825C2_gshared (MemberInfo_t* ___0_element, bool ___1_shouldCache, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		// return (TAttribute)GetAttribute(element, typeof(TAttribute), shouldCache);
		MemberInfo_t* L_0 = ___0_element;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3 = ___1_shouldCache;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_4;
		L_4 = fsPortableReflection_GetAttribute_m54325D68CE95535644F25CD39FAA3D4858745EB8(L_0, L_2, L_3, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsSerializer::TryDeserialize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.VisualScripting.FullSerializer.fsData,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TryDeserialize_TisIl2CppFullySharedGenericAny_m8F46C3E4472E3EACA5D9F7A58E397A6D10546582_gshared (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_instance, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t594BBE454D274A88EA1B5E96B1F70F1AFAB8E1AC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t594BBE454D274A88EA1B5E96B1F70F1AFAB8E1AC);
	const Il2CppFullySharedGenericAny L_10 = L_1;
	RuntimeObject* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// object boxed = instance;
		Il2CppFullySharedGenericAny* L_0 = ___1_instance;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_t594BBE454D274A88EA1B5E96B1F70F1AFAB8E1AC);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_1);
		V_0 = L_2;
		// var fail = TryDeserialize(data, typeof(T), ref boxed);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_3 = ___0_data;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_6;
		L_6 = fsSerializer_TryDeserialize_mBBA19D9240A719A58C3DA23F2D8D4C538C5C81F2(__this, L_3, L_5, (&V_0), NULL);
		V_1 = L_6;
		// if (fail.Succeeded)
		bool L_7;
		L_7 = fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline((&V_1), NULL);
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		// instance = (T)boxed;
		Il2CppFullySharedGenericAny* L_8 = ___1_instance;
		RuntimeObject* L_9 = V_0;
		void* L_11 = UnBox_Any(L_9, il2cpp_rgctx_data(method->rgctx_data, 1), L_10);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_8, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_11))), SizeOf_T_t594BBE454D274A88EA1B5E96B1F70F1AFAB8E1AC);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_8, (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_11))));
	}

IL_0035:
	{
		// return fail;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_12 = V_1;
		return L_12;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsSerializer::TrySerialize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T,Unity.VisualScripting.FullSerializer.fsData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TrySerialize_TisIl2CppFullySharedGenericAny_mD467C2221EABCCED5F049B2996388895D66CD6A3_gshared (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_data, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tEB7E9E00FDC44AE50752B1BF0E0F507EF4AFFBAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tEB7E9E00FDC44AE50752B1BF0E0F507EF4AFFBAB);
	{
		// return TrySerialize(typeof(T), instance, out data);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___0_instance : &___0_instance), SizeOf_T_tEB7E9E00FDC44AE50752B1BF0E0F507EF4AFFBAB);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_2);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_data;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5;
		L_5 = fsSerializer_TrySerialize_mADDE6667080A2E2C69A54662C47111A08A7EC006(__this, L_1, L_3, L_4, NULL);
		return L_5;
	}
}
// TAttribute Unity.VisualScripting.AttributeUtility/AttributeCache::GetAttribute<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttributeCache_GetAttribute_TisRuntimeObject_m8D7B16DA8433AA2FD4CC676A84EA8FE6D90195FC_gshared (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, bool ___0_inherit, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		// return (TAttribute)GetAttribute(typeof(TAttribute), inherit);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2 = ___0_inherit;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_3;
		L_3 = AttributeCache_GetAttribute_m1B367E0EC1D06BB18254A3C357B7547316F26AA9(__this, L_1, L_2, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// System.Boolean Unity.VisualScripting.AttributeUtility/AttributeCache::HasAttribute<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttributeCache_HasAttribute_TisRuntimeObject_m33C55B47DD3C264A03B4158F49782290B1B7E4FD_gshared (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, bool ___0_inherit, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		// return HasAttribute(typeof(TAttribute), inherit);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2 = ___0_inherit;
		bool L_3;
		L_3 = AttributeCache_HasAttribute_m6DE0BA7A52D8EB2284ED28B641AF6F41C53C8AA7(__this, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::VisitLambda<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* QuoteVisitor_VisitLambda_TisIl2CppFullySharedGenericAny_m3A43E5E58A18E3D2892C620B8AED19012BA4E57B_gshared (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* ___0_node, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_0;
		L_0 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_1 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_5 = (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*)il2cpp_codegen_object_new(List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D(L_5, L_4, List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_6 = V_2;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_7 = ___0_node;
		int32_t L_8 = V_3;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_9;
		L_9 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7, L_8);
		NullCheck(L_6);
		List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline(L_6, L_9, List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76(__this, L_14, NULL);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_15 = ___0_node;
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = InvokerFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_15);
		RuntimeObject* L_17 = V_0;
		QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9(__this, L_17, NULL);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_18 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::VisitLambda<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisIl2CppFullySharedGenericAny_m0060183C8192066670005792D19D2EC19C50DBB7_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* ___0_node, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_0 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_3 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_6 = ___0_node;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_15 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_18 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_23 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_25 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_26 = ___0_node;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_28;
		L_28 = VirtualFuncInvoker2Invoker< Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(18 /* System.Linq.Expressions.Expression`1<TDelegate> System.Linq.Expressions.Expression`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Rewrite(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[]) */, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CFactoryU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields*)il2cpp_codegen_static_fields_for(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var))->___s_defaultTaskScheduler_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) 
{
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = __this->____cancellationToken_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var))->____logPriority_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CactiveU3Ek__BackingField_39;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CisRelativeU3Ek__BackingField_30 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CisRelativeU3Ek__BackingField_30;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_value;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974* __this, const RuntimeMethod* method) 
{
	{
		// public bool Succeeded => _success;
		bool L_0 = __this->____success_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->____body_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___1_length;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value_0;
		return L_0;
	}
}

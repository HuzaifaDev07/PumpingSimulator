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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Collections.Generic.IEnumerable`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerable_1_tF935EA96E674DA576274AF74E38AEA7E077E7A85;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t91E36549D76184780FD8995722CD4A87A2650C23;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t1EC718175613632CD4775345600304230E9A83DF;
// System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52;
// System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystemInternal>
struct List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
struct Predicate_1_t6F78EB768ADC7C118AD7254414DA44D4F6B69E55;
// System.Predicate`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_tF8AC2AD8CB819841C1BA6BCAF4C2733CCD50296F;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t9C1552FD6D45110B089FD7B6E1E6934E83152E28;
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D;
// UnityEngine.LowLevel.PlayerLoopSystemInternal[]
struct PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Events.InvokableCall
struct InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// UnityEngine.Events.PersistentCall
struct PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4;

IL2CPP_EXTERN_C RuntimeClass* InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1EC718175613632CD4775345600304230E9A83DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t91E36549D76184780FD8995722CD4A87A2650C23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t6F78EB768ADC7C118AD7254414DA44D4F6B69E55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m56B864557E6F08E5A86D6836F6AB82841715AB97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m974E4B176EED3974261571D8D323B9C758CF6007_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBF1F6446251FA06D6E25CF0E23E802D0586BA020_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m20B47157F68B2A1C1C92F34C111874885F78607A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDB586A60ED2ED46DF3A5D908D7D5AC09B1B9AC2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE8C9DBF42FFBF23E98D07CC92A82777A0840B5AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m3B1397CA37D9F44625CC7581B86878E36C1F8CCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD74B7A44A8EC40E059B9CFF3B29DC3F6BF6C4924_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAll_m5411A629E03E3C36C002C5BE2CAFE5E82F6F9B30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mF1B4B099D6EC830C7AE856231485FF238F2985E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mF7A76508CD1157C08B24725F6EBF02A543C8C86F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0CF79D6ED4DC92AC7C615C8812EE882941929241_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4F00C44EA0380F628F874E843EF973905C05E2C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA457A1677905C83AD674D55C89B663B126D8F0C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDB467FD8BAC40A706631A0CEE456876DC4287A53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFEECC8D3F82BB0A022FC84C60FE2CE3F0C456172_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m310B0D806832AA42537F42C5245707E84C468123_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m0F86EE963CEFB634508EE5D050332DB67B206F82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventBase_FindMethod_m0B00339CC16B63CF1C50714D018A87948FC0B23B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F;;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com;;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke;;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D;
struct PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t91E36549D76184780FD8995722CD4A87A2650C23  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BaseInvokableCallU5BU5D_tF8AC2AD8CB819841C1BA6BCAF4C2733CCD50296F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t1EC718175613632CD4775345600304230E9A83DF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PersistentCallU5BU5D_t9C1552FD6D45110B089FD7B6E1E6934E83152E28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystemInternal>
struct List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2* ____items_1;
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

// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D  : public RuntimeObject
{
	// UnityEngine.Object UnityEngine.Events.ArgumentCache::m_ObjectArgument
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectArgument_0;
	// System.String UnityEngine.Events.ArgumentCache::m_ObjectArgumentAssemblyTypeName
	String_t* ___m_ObjectArgumentAssemblyTypeName_1;
	// System.Int32 UnityEngine.Events.ArgumentCache::m_IntArgument
	int32_t ___m_IntArgument_2;
	// System.Single UnityEngine.Events.ArgumentCache::m_FloatArgument
	float ___m_FloatArgument_3;
	// System.String UnityEngine.Events.ArgumentCache::m_StringArgument
	String_t* ___m_StringArgument_4;
	// System.Boolean UnityEngine.Events.ArgumentCache::m_BoolArgument
	bool ___m_BoolArgument_5;
};

// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339  : public RuntimeObject
{
};

// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235  : public RuntimeObject
{
};

// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_PersistentCalls
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* ___m_PersistentCalls_0;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_RuntimeCalls
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* ___m_RuntimeCalls_1;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_ExecutingCalls
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* ___m_ExecutingCalls_2;
	// System.Boolean UnityEngine.Events.InvokableCallList::m_NeedsUpdate
	bool ___m_NeedsUpdate_3;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// UnityEngine.Events.PersistentCall
struct PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF  : public RuntimeObject
{
	// UnityEngine.Object UnityEngine.Events.PersistentCall::m_Target
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_Target_0;
	// System.String UnityEngine.Events.PersistentCall::m_TargetAssemblyTypeName
	String_t* ___m_TargetAssemblyTypeName_1;
	// System.String UnityEngine.Events.PersistentCall::m_MethodName
	String_t* ___m_MethodName_2;
	// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::m_Mode
	int32_t ___m_Mode_3;
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* ___m_Arguments_4;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_5;
};

// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall> UnityEngine.Events.PersistentCallGroup::m_Calls
	List_1_t1EC718175613632CD4775345600304230E9A83DF* ___m_Calls_0;
};

// UnityEngine.LowLevel.PlayerLoop
struct PlayerLoop_t8F7F13423313673545CF553CAE84DA97EB0273AB  : public RuntimeObject
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
struct Enumerator_tA2BA94CFC1C74A74D61FECF814D901AEAAE4BFA9 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t1EC718175613632CD4775345600304230E9A83DF* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.PlayerLoop.EarlyUpdate
struct EarlyUpdate_t3FEEF0153D8D192317CEFD9EE3F3E1573955095B 
{
	union
	{
		struct
		{
		};
		uint8_t EarlyUpdate_t3FEEF0153D8D192317CEFD9EE3F3E1573955095B__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate
struct FixedUpdate_tCF8FD444F9ACA24B19A6697CB873E558CC06A2D1 
{
	union
	{
		struct
		{
		};
		uint8_t FixedUpdate_tCF8FD444F9ACA24B19A6697CB873E558CC06A2D1__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization
struct Initialization_tDAACE77B534B3BDAC1A482FEA5917F2AB58A1016 
{
	union
	{
		struct
		{
		};
		uint8_t Initialization_tDAACE77B534B3BDAC1A482FEA5917F2AB58A1016__padding[1];
	};
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

// UnityEngine.Events.InvokableCall
struct InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122  : public BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339
{
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___Delegate_0;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 
{
	// System.Boolean[] System.Reflection.ParameterModifier::_byRef
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____byRef_0;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_com
{
	int32_t* ____byRef_0;
};

// UnityEngine.PlayerLoop.PostLateUpdate
struct PostLateUpdate_t8D100B8147895DB5492ABDC2ABF8ACACA3EA1256 
{
	union
	{
		struct
		{
		};
		uint8_t PostLateUpdate_t8D100B8147895DB5492ABDC2ABF8ACACA3EA1256__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate
struct PreLateUpdate_t2DCE1BE25ACE7BC92CEE04C59E9F2F68A9C78FE6 
{
	union
	{
		struct
		{
		};
		uint8_t PreLateUpdate_t2DCE1BE25ACE7BC92CEE04C59E9F2F68A9C78FE6__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate
struct PreUpdate_tD3D2902387A8CA02CEED9FD2BFE8435ED80A51ED 
{
	union
	{
		struct
		{
		};
		uint8_t PreUpdate_tD3D2902387A8CA02CEED9FD2BFE8435ED80A51ED__padding[1];
	};
};

// UnityEngine.PlayerLoop.TimeUpdate
struct TimeUpdate_t81E3446F4486BC0736BFE3CBAE8FFA6848583E51 
{
	union
	{
		struct
		{
		};
		uint8_t TimeUpdate_t81E3446F4486BC0736BFE3CBAE8FFA6848583E51__padding[1];
	};
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.PlayerLoop.Update
struct Update_tFCBD46F301DE58EC1756B662441FF6E0F6733A89 
{
	union
	{
		struct
		{
		};
		uint8_t Update_tFCBD46F301DE58EC1756B662441FF6E0F6733A89__padding[1];
	};
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

// UnityEngine.PlayerLoop.EarlyUpdate/ARCoreUpdate
struct ARCoreUpdate_t0870925EB7DB96EFA85333F36698760A8861C270 
{
	union
	{
		struct
		{
		};
		uint8_t ARCoreUpdate_t0870925EB7DB96EFA85333F36698760A8861C270__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/AnalyticsCoreStatsUpdate
struct AnalyticsCoreStatsUpdate_t0AC27EABB00A0681E6915B93878E94FAE8DD9C1E 
{
	union
	{
		struct
		{
		};
		uint8_t AnalyticsCoreStatsUpdate_t0AC27EABB00A0681E6915B93878E94FAE8DD9C1E__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ClearIntermediateRenderers
struct ClearIntermediateRenderers_t3870E195EEF160DB91F9F67A109DFCE8EB630FB5 
{
	union
	{
		struct
		{
		};
		uint8_t ClearIntermediateRenderers_t3870E195EEF160DB91F9F67A109DFCE8EB630FB5__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ClearLines
struct ClearLines_tCA55FECEBB3CB979817F2331F7DE68FB037CFFCA 
{
	union
	{
		struct
		{
		};
		uint8_t ClearLines_tCA55FECEBB3CB979817F2331F7DE68FB037CFFCA__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/DeliverIosPlatformEvents
struct DeliverIosPlatformEvents_t1F56F9C02CC5108CCBFD4B87570C7DDB9E15FD6A 
{
	union
	{
		struct
		{
		};
		uint8_t DeliverIosPlatformEvents_t1F56F9C02CC5108CCBFD4B87570C7DDB9E15FD6A__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/DispatchEventQueueEvents
struct DispatchEventQueueEvents_t6A8B38D90EFC8731159C218D19FC8739A0ED7232 
{
	union
	{
		struct
		{
		};
		uint8_t DispatchEventQueueEvents_t6A8B38D90EFC8731159C218D19FC8739A0ED7232__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ExecuteMainThreadJobs
struct ExecuteMainThreadJobs_t2AF302649970650DD66001B9F9DB0DA2F46E17C3 
{
	union
	{
		struct
		{
		};
		uint8_t ExecuteMainThreadJobs_t2AF302649970650DD66001B9F9DB0DA2F46E17C3__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/GpuTimestamp
struct GpuTimestamp_t5B6C8013AEC6F086F0366993EB0153A6E1C11A35 
{
	union
	{
		struct
		{
		};
		uint8_t GpuTimestamp_t5B6C8013AEC6F086F0366993EB0153A6E1C11A35__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PerformanceAnalyticsUpdate
struct PerformanceAnalyticsUpdate_t8B6378DF3D9F24091428D1F944CA9867C30BE4C2 
{
	union
	{
		struct
		{
		};
		uint8_t PerformanceAnalyticsUpdate_t8B6378DF3D9F24091428D1F944CA9867C30BE4C2__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PhysicsResetInterpolatedTransformPosition
struct PhysicsResetInterpolatedTransformPosition_t1048CAAC4D8DBC7AA534BFE62473D2D12C4E6D1F 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsResetInterpolatedTransformPosition_t1048CAAC4D8DBC7AA534BFE62473D2D12C4E6D1F__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PlayerCleanupCachedData
struct PlayerCleanupCachedData_t03AAFC538395693086152E6BF5AFAAFF0F9444DB 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerCleanupCachedData_t03AAFC538395693086152E6BF5AFAAFF0F9444DB__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PollHtcsPlayerConnection
struct PollHtcsPlayerConnection_t2498151E6AFBCC1C68848C08C8540E8F741EF209 
{
	union
	{
		struct
		{
		};
		uint8_t PollHtcsPlayerConnection_t2498151E6AFBCC1C68848C08C8540E8F741EF209__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PollPlayerConnection
struct PollPlayerConnection_tA188E9A07C41BA07CE3C73E2D45608F7D551057A 
{
	union
	{
		struct
		{
		};
		uint8_t PollPlayerConnection_tA188E9A07C41BA07CE3C73E2D45608F7D551057A__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PresentBeforeUpdate
struct PresentBeforeUpdate_t9B96C36B1A049894E20D367554C2D00F54EE3A52 
{
	union
	{
		struct
		{
		};
		uint8_t PresentBeforeUpdate_t9B96C36B1A049894E20D367554C2D00F54EE3A52__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ProcessMouseInWindow
struct ProcessMouseInWindow_t7759A2277757FE54B719695E47C7AC5E9A920112 
{
	union
	{
		struct
		{
		};
		uint8_t ProcessMouseInWindow_t7759A2277757FE54B719695E47C7AC5E9A920112__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ProcessRemoteInput
struct ProcessRemoteInput_t268646D8132AA773DC3D8AEDCE53F0DC2FE88996 
{
	union
	{
		struct
		{
		};
		uint8_t ProcessRemoteInput_t268646D8132AA773DC3D8AEDCE53F0DC2FE88996__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/RendererNotifyInvisible
struct RendererNotifyInvisible_tC43ACAF01E9D5C34252E8B4B99A05EB2ACA191FE 
{
	union
	{
		struct
		{
		};
		uint8_t RendererNotifyInvisible_tC43ACAF01E9D5C34252E8B4B99A05EB2ACA191FE__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ResetFrameStatsAfterPresent
struct ResetFrameStatsAfterPresent_t511B4B8D887E68EB91B888E92C2D8258CB5BAAA2 
{
	union
	{
		struct
		{
		};
		uint8_t ResetFrameStatsAfterPresent_t511B4B8D887E68EB91B888E92C2D8258CB5BAAA2__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ScriptRunDelayedStartupFrame
struct ScriptRunDelayedStartupFrame_t437517E506EB51DF22436E8A2D517D627D9D1A35 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedStartupFrame_t437517E506EB51DF22436E8A2D517D627D9D1A35__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/SpriteAtlasManagerUpdate
struct SpriteAtlasManagerUpdate_t23345CA37B85F095F76F78D51130AA713DF706AB 
{
	union
	{
		struct
		{
		};
		uint8_t SpriteAtlasManagerUpdate_t23345CA37B85F095F76F78D51130AA713DF706AB__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/TangoUpdate
struct TangoUpdate_t0773D7F4190273AC99FEAD6DB5AB43C671AA56D2 
{
	union
	{
		struct
		{
		};
		uint8_t TangoUpdate_t0773D7F4190273AC99FEAD6DB5AB43C671AA56D2__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UnityWebRequestUpdate
struct UnityWebRequestUpdate_tD66FF44EB2E15D5F3F34D6E016FE11ABFE364E7D 
{
	union
	{
		struct
		{
		};
		uint8_t UnityWebRequestUpdate_tD66FF44EB2E15D5F3F34D6E016FE11ABFE364E7D__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateAsyncReadbackManager
struct UpdateAsyncReadbackManager_t438EC08527D0B0543D920C30750BCD94A690126A 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateAsyncReadbackManager_t438EC08527D0B0543D920C30750BCD94A690126A__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateCanvasRectTransform
struct UpdateCanvasRectTransform_t41CECA98EFF313B8463EEFF63BFB15DF0513A428 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateCanvasRectTransform_t41CECA98EFF313B8463EEFF63BFB15DF0513A428__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateInputManager
struct UpdateInputManager_tBC43869EB39DE6B92FBA117E2EA22B4DCD788F2A 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateInputManager_tBC43869EB39DE6B92FBA117E2EA22B4DCD788F2A__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateKinect
struct UpdateKinect_tDDC4C28D19025796CB94F9DE552BA9C0ADEDCE45 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateKinect_tDDC4C28D19025796CB94F9DE552BA9C0ADEDCE45__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateMainGameViewRect
struct UpdateMainGameViewRect_tE725390DFE266FA0F34148D2184B9CCE9A7C46C6 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateMainGameViewRect_tE725390DFE266FA0F34148D2184B9CCE9A7C46C6__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdatePreloading
struct UpdatePreloading_t45C914112124AD6E405EE2B11DA76D265C20F77F 
{
	union
	{
		struct
		{
		};
		uint8_t UpdatePreloading_t45C914112124AD6E405EE2B11DA76D265C20F77F__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateStreamingManager
struct UpdateStreamingManager_tC612A33DB9BEFE10B1970D4A655B2F9EAF407D42 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateStreamingManager_tC612A33DB9BEFE10B1970D4A655B2F9EAF407D42__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateTextureStreamingManager
struct UpdateTextureStreamingManager_t0E74B3EDF837DFE1179C4CDB979B969DC58E3A2F 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateTextureStreamingManager_t0E74B3EDF837DFE1179C4CDB979B969DC58E3A2F__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/XRUpdate
struct XRUpdate_tDF532E307AA39BCF2FB4780E252EC0CCE1C124B9 
{
	union
	{
		struct
		{
		};
		uint8_t XRUpdate_tDF532E307AA39BCF2FB4780E252EC0CCE1C124B9__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/AudioFixedUpdate
struct AudioFixedUpdate_tFF50E2AD8BE118EE03F1E31B5B5BDFB91D0418F2 
{
	union
	{
		struct
		{
		};
		uint8_t AudioFixedUpdate_tFF50E2AD8BE118EE03F1E31B5B5BDFB91D0418F2__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/ClearLines
struct ClearLines_tCAF10AEE1122923282F5586C7ED0CFE4FCB6D0E3 
{
	union
	{
		struct
		{
		};
		uint8_t ClearLines_tCAF10AEE1122923282F5586C7ED0CFE4FCB6D0E3__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedSampleTime
struct DirectorFixedSampleTime_tE4F7C94C031FD40BBBF938DE47BD701409110219 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedSampleTime_tE4F7C94C031FD40BBBF938DE47BD701409110219__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedUpdate
struct DirectorFixedUpdate_t010D8D27494573A4CCD9A3F65EB96DBD0F0AC9D9 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedUpdate_t010D8D27494573A4CCD9A3F65EB96DBD0F0AC9D9__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedUpdatePostPhysics
struct DirectorFixedUpdatePostPhysics_tB860502DD096EC153005619C9607049E7DEF408A 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedUpdatePostPhysics_tB860502DD096EC153005619C9607049E7DEF408A__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/LegacyFixedAnimationUpdate
struct LegacyFixedAnimationUpdate_t2F56DD05BE773AF12B8024A86FBB03175BD99C6D 
{
	union
	{
		struct
		{
		};
		uint8_t LegacyFixedAnimationUpdate_t2F56DD05BE773AF12B8024A86FBB03175BD99C6D__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/NewInputFixedUpdate
struct NewInputFixedUpdate_tDD791A781B81753165645E5A6B24C54524BAB373 
{
	union
	{
		struct
		{
		};
		uint8_t NewInputFixedUpdate_tDD791A781B81753165645E5A6B24C54524BAB373__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/Physics2DFixedUpdate
struct Physics2DFixedUpdate_t1A722B7DD754C177785AB6A4948CC9DD8B4E13C5 
{
	union
	{
		struct
		{
		};
		uint8_t Physics2DFixedUpdate_t1A722B7DD754C177785AB6A4948CC9DD8B4E13C5__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/PhysicsClothFixedUpdate
struct PhysicsClothFixedUpdate_tC2A56A2FB665B621E7D60D0691150D01C669362B 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsClothFixedUpdate_tC2A56A2FB665B621E7D60D0691150D01C669362B__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/PhysicsFixedUpdate
struct PhysicsFixedUpdate_tF76C7633EB2FC69A88CE7DE7B95C98FA3E4641E6 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsFixedUpdate_tF76C7633EB2FC69A88CE7DE7B95C98FA3E4641E6__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/ScriptRunBehaviourFixedUpdate
struct ScriptRunBehaviourFixedUpdate_tC21CDED0EB965CC4170728A1428C331E9FC0D04D 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourFixedUpdate_tC21CDED0EB965CC4170728A1428C331E9FC0D04D__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/ScriptRunDelayedFixedFrameRate
struct ScriptRunDelayedFixedFrameRate_t8A96D1EF94E7948A73808C8D8B264CD001C901BB 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedFixedFrameRate_t8A96D1EF94E7948A73808C8D8B264CD001C901BB__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/XRFixedUpdate
struct XRFixedUpdate_tA04D874E51DDD5CEA43B0052193F17C7F5FFB006 
{
	union
	{
		struct
		{
		};
		uint8_t XRFixedUpdate_tA04D874E51DDD5CEA43B0052193F17C7F5FFB006__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/AsyncUploadTimeSlicedUpdate
struct AsyncUploadTimeSlicedUpdate_t5EBE201AE7C230BDE8B8F4EB414DB244DCC386B6 
{
	union
	{
		struct
		{
		};
		uint8_t AsyncUploadTimeSlicedUpdate_t5EBE201AE7C230BDE8B8F4EB414DB244DCC386B6__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/DirectorSampleTime
struct DirectorSampleTime_t36E04867AC7305A062E990E2F8E30ED8652883A0 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorSampleTime_t36E04867AC7305A062E990E2F8E30ED8652883A0__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/ProfilerStartFrame
struct ProfilerStartFrame_t80452E048B09F684583B024353CEF1C50B650E43 
{
	union
	{
		struct
		{
		};
		uint8_t ProfilerStartFrame_t80452E048B09F684583B024353CEF1C50B650E43__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/SynchronizeInputs
struct SynchronizeInputs_tDEECB3386F5E73129815BA3BFA47F033D31CC9EF 
{
	union
	{
		struct
		{
		};
		uint8_t SynchronizeInputs_tDEECB3386F5E73129815BA3BFA47F033D31CC9EF__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/SynchronizeState
struct SynchronizeState_t46EEC7F26CE1203D756418F000A011081D74923A 
{
	union
	{
		struct
		{
		};
		uint8_t SynchronizeState_t46EEC7F26CE1203D756418F000A011081D74923A__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/UpdateCameraMotionVectors
struct UpdateCameraMotionVectors_t67A02B2283F2C5C3FC6E456F46AB5E6BE4126391 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateCameraMotionVectors_t67A02B2283F2C5C3FC6E456F46AB5E6BE4126391__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/XREarlyUpdate
struct XREarlyUpdate_t2FE37D888210382039DD766A0911539EBB10D015 
{
	union
	{
		struct
		{
		};
		uint8_t XREarlyUpdate_t2FE37D888210382039DD766A0911539EBB10D015__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/BatchModeUpdate
struct BatchModeUpdate_t686C5FBF3907281713E45590481A06FCF403325D 
{
	union
	{
		struct
		{
		};
		uint8_t BatchModeUpdate_t686C5FBF3907281713E45590481A06FCF403325D__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ClearImmediateRenderers
struct ClearImmediateRenderers_tD5807343A690F45CD8EAAE07F9224F80986F17EB 
{
	union
	{
		struct
		{
		};
		uint8_t ClearImmediateRenderers_tD5807343A690F45CD8EAAE07F9224F80986F17EB__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/DirectorLateUpdate
struct DirectorLateUpdate_t6D55F5058BD025D280245CBD42C162C483E1D512 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorLateUpdate_t6D55F5058BD025D280245CBD42C162C483E1D512__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/DirectorRenderImage
struct DirectorRenderImage_t8250BBB821B976257F3EAEC1448C3991AFF63C1B 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorRenderImage_t8250BBB821B976257F3EAEC1448C3991AFF63C1B__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/EndGraphicsJobsAfterScriptLateUpdate
struct EndGraphicsJobsAfterScriptLateUpdate_tEE7D7895D684058F163063191B2D2874BE7FA562 
{
	union
	{
		struct
		{
		};
		uint8_t EndGraphicsJobsAfterScriptLateUpdate_tEE7D7895D684058F163063191B2D2874BE7FA562__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/EnlightenRuntimeUpdate
struct EnlightenRuntimeUpdate_tF0560FB54CCF2F4A32DA721EBA26E848DF5D76E3 
{
	union
	{
		struct
		{
		};
		uint8_t EnlightenRuntimeUpdate_tF0560FB54CCF2F4A32DA721EBA26E848DF5D76E3__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ExecuteGameCenterCallbacks
struct ExecuteGameCenterCallbacks_tCD187757744592AED2400D913D99DD4180E48857 
{
	union
	{
		struct
		{
		};
		uint8_t ExecuteGameCenterCallbacks_tCD187757744592AED2400D913D99DD4180E48857__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/FinishFrameRendering
struct FinishFrameRendering_tEAE352E2A0817EF409C36B50BC74A0AE91403039 
{
	union
	{
		struct
		{
		};
		uint8_t FinishFrameRendering_tEAE352E2A0817EF409C36B50BC74A0AE91403039__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/GUIClearEvents
struct GUIClearEvents_tAD3C9126D5AB5761F35668BB8D192901D0654FD2 
{
	union
	{
		struct
		{
		};
		uint8_t GUIClearEvents_tAD3C9126D5AB5761F35668BB8D192901D0654FD2__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/GraphicsWarmupPreloadedShaders
struct GraphicsWarmupPreloadedShaders_tF4CA3BFEDAEFF58490F38AD9FC40668CFCE3EA3D 
{
	union
	{
		struct
		{
		};
		uint8_t GraphicsWarmupPreloadedShaders_tF4CA3BFEDAEFF58490F38AD9FC40668CFCE3EA3D__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/InputEndFrame
struct InputEndFrame_t42B7FD0989A122BDDE757062094FBD3AAF900B33 
{
	union
	{
		struct
		{
		};
		uint8_t InputEndFrame_t42B7FD0989A122BDDE757062094FBD3AAF900B33__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/MemoryFrameMaintenance
struct MemoryFrameMaintenance_t0E4EADC6A05D1699FDC722959D64FB3F30DD6E90 
{
	union
	{
		struct
		{
		};
		uint8_t MemoryFrameMaintenance_t0E4EADC6A05D1699FDC722959D64FB3F30DD6E90__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ParticleSystemEndUpdateAll
struct ParticleSystemEndUpdateAll_tA5B846F08C725EB3642F2F9C30B721F335C96410 
{
	union
	{
		struct
		{
		};
		uint8_t ParticleSystemEndUpdateAll_tA5B846F08C725EB3642F2F9C30B721F335C96410__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothBeginUpdate
struct PhysicsSkinnedClothBeginUpdate_t7594D90D7261A07D1753941535C489D7CF38E696 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsSkinnedClothBeginUpdate_t7594D90D7261A07D1753941535C489D7CF38E696__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothFinishUpdate
struct PhysicsSkinnedClothFinishUpdate_tF276BC670113332DE88FD62F6139F1126AA23C75 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsSkinnedClothFinishUpdate_tF276BC670113332DE88FD62F6139F1126AA23C75__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerEmitCanvasGeometry
struct PlayerEmitCanvasGeometry_t5C1E32B15900188F564F4E318B352EEDF3910375 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerEmitCanvasGeometry_t5C1E32B15900188F564F4E318B352EEDF3910375__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameComplete
struct PlayerSendFrameComplete_tBACAC212A197B5446CB6F593799C7695BB24EC05 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFrameComplete_tBACAC212A197B5446CB6F593799C7695BB24EC05__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFramePostPresent
struct PlayerSendFramePostPresent_t84861404A02490869D3F46F7F2C0A17290545EC1 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFramePostPresent_t84861404A02490869D3F46F7F2C0A17290545EC1__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameStarted
struct PlayerSendFrameStarted_t4DDB339CF02291AAF8CB8FBBF4011458A485FD94 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFrameStarted_t4DDB339CF02291AAF8CB8FBBF4011458A485FD94__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerUpdateCanvases
struct PlayerUpdateCanvases_t14545D10F675BACF66AD183C46A48D9242713404 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerUpdateCanvases_t14545D10F675BACF66AD183C46A48D9242713404__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PresentAfterDraw
struct PresentAfterDraw_t9C61FF8A9FE7A311D239FD7FC1E4F7E24B6549ED 
{
	union
	{
		struct
		{
		};
		uint8_t PresentAfterDraw_t9C61FF8A9FE7A311D239FD7FC1E4F7E24B6549ED__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ProcessWebSendMessages
struct ProcessWebSendMessages_tC8FFF5536FFB6F2AFFA10F33E65A5077DBF5B930 
{
	union
	{
		struct
		{
		};
		uint8_t ProcessWebSendMessages_tC8FFF5536FFB6F2AFFA10F33E65A5077DBF5B930__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ProfilerEndFrame
struct ProfilerEndFrame_t2A94DA438D46971D71B8288F52C4FFF2F02A2E33 
{
	union
	{
		struct
		{
		};
		uint8_t ProfilerEndFrame_t2A94DA438D46971D71B8288F52C4FFF2F02A2E33__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ProfilerSynchronizeStats
struct ProfilerSynchronizeStats_tD6DE0BB1F779FBFFB312E5BCC793E40219F28C06 
{
	union
	{
		struct
		{
		};
		uint8_t ProfilerSynchronizeStats_tD6DE0BB1F779FBFFB312E5BCC793E40219F28C06__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ResetInputAxis
struct ResetInputAxis_tEB27E7DE3846A88D2D4E021C916D8D6D88EFE413 
{
	union
	{
		struct
		{
		};
		uint8_t ResetInputAxis_tEB27E7DE3846A88D2D4E021C916D8D6D88EFE413__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ScriptRunDelayedDynamicFrameRate
struct ScriptRunDelayedDynamicFrameRate_t7071432D555EBFC8DD4E534B45F4EDF27E080F13 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedDynamicFrameRate_t7071432D555EBFC8DD4E534B45F4EDF27E080F13__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ShaderHandleErrors
struct ShaderHandleErrors_tF94E0D773C1DB05AF604B2DE50724E860E1AF013 
{
	union
	{
		struct
		{
		};
		uint8_t ShaderHandleErrors_tF94E0D773C1DB05AF604B2DE50724E860E1AF013__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/SortingGroupsUpdate
struct SortingGroupsUpdate_tB67116E697EFCB74353FE78178E7B77CFF508A07 
{
	union
	{
		struct
		{
		};
		uint8_t SortingGroupsUpdate_tB67116E697EFCB74353FE78178E7B77CFF508A07__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ThreadedLoadingDebug
struct ThreadedLoadingDebug_tDB72068BDFB2257670DA53B21B3D09F760DAFF6A 
{
	union
	{
		struct
		{
		};
		uint8_t ThreadedLoadingDebug_tDB72068BDFB2257670DA53B21B3D09F760DAFF6A__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/TriggerEndOfFrameCallbacks
struct TriggerEndOfFrameCallbacks_tBA66DD23D1D0C1E192F89C2F300BAD5F92C93F1B 
{
	union
	{
		struct
		{
		};
		uint8_t TriggerEndOfFrameCallbacks_tBA66DD23D1D0C1E192F89C2F300BAD5F92C93F1B__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllRenderers
struct UpdateAllRenderers_tDFCEDEFC02C1B3B96770B06559B45FADA50445BC 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateAllRenderers_tDFCEDEFC02C1B3B96770B06559B45FADA50445BC__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllSkinnedMeshes
struct UpdateAllSkinnedMeshes_t9015D4D4B19DE28DD05617E082E2B8304DC5E942 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateAllSkinnedMeshes_t9015D4D4B19DE28DD05617E082E2B8304DC5E942__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAudio
struct UpdateAudio_t1EE346D361B4338A8CFA185A4705AEFDAEE801AE 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateAudio_t1EE346D361B4338A8CFA185A4705AEFDAEE801AE__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCanvasRectTransform
struct UpdateCanvasRectTransform_t43DD3FE6666F14E5619AA847D7FC83A31B4AB2DF 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateCanvasRectTransform_t43DD3FE6666F14E5619AA847D7FC83A31B4AB2DF__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCaptureScreenshot
struct UpdateCaptureScreenshot_tAF9CC0F6E0462EAB2BEF9EE8BA1DAC7D5BABA360 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateCaptureScreenshot_tAF9CC0F6E0462EAB2BEF9EE8BA1DAC7D5BABA360__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCustomRenderTextures
struct UpdateCustomRenderTextures_tDCCB1380EB126CE1146781F90D4DC397502707EA 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateCustomRenderTextures_tDCCB1380EB126CE1146781F90D4DC397502707EA__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateLightProbeProxyVolumes
struct UpdateLightProbeProxyVolumes_t7E61DB4527509062E7DE783C2E8292C5CC822B56 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateLightProbeProxyVolumes_t7E61DB4527509062E7DE783C2E8292C5CC822B56__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateRectTransform
struct UpdateRectTransform_tFB89399C3715A7AE18439EDA43A8A246A70307C4 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateRectTransform_tFB89399C3715A7AE18439EDA43A8A246A70307C4__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateResolution
struct UpdateResolution_t6B90CB8B3407D59509AC4D0477435FD44682D4ED 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateResolution_t6B90CB8B3407D59509AC4D0477435FD44682D4ED__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateSubstance
struct UpdateSubstance_tB7ADB49C519BBE5D1B5DA7F6BA7177DE1FC1217A 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateSubstance_tB7ADB49C519BBE5D1B5DA7F6BA7177DE1FC1217A__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideo
struct UpdateVideo_tB21C695C93D9ECA1F8821B359B71C03EABD0E1EF 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateVideo_tB21C695C93D9ECA1F8821B359B71C03EABD0E1EF__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideoTextures
struct UpdateVideoTextures_t41EC68C3F07C66A6A9F8ADF81EC4622B680CAA7E 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateVideoTextures_t41EC68C3F07C66A6A9F8ADF81EC4622B680CAA7E__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/VFXUpdate
struct VFXUpdate_t816F9323A8CB3A06A0D9D213B1277904CD457252 
{
	union
	{
		struct
		{
		};
		uint8_t VFXUpdate_t816F9323A8CB3A06A0D9D213B1277904CD457252__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/XRPostLateUpdate
struct XRPostLateUpdate_t1EE8EAA2697F9C758F0C8C1974C59EE578EFC15F 
{
	union
	{
		struct
		{
		};
		uint8_t XRPostLateUpdate_t1EE8EAA2697F9C758F0C8C1974C59EE578EFC15F__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/XRPostPresent
struct XRPostPresent_tFF910652581DF94C8DF5BAE50633725ED22E1354 
{
	union
	{
		struct
		{
		};
		uint8_t XRPostPresent_tFF910652581DF94C8DF5BAE50633725ED22E1354__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/XRPreEndFrame
struct XRPreEndFrame_t78A1DA8FD45515933040E2B7B9CBB384967C46BF 
{
	union
	{
		struct
		{
		};
		uint8_t XRPreEndFrame_t78A1DA8FD45515933040E2B7B9CBB384967C46BF__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/AIUpdatePostScript
struct AIUpdatePostScript_t87451CCD704E89EC1C2BA0D35B3AEAA8563A33E6 
{
	union
	{
		struct
		{
		};
		uint8_t AIUpdatePostScript_t87451CCD704E89EC1C2BA0D35B3AEAA8563A33E6__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/ConstraintManagerUpdate
struct ConstraintManagerUpdate_tBB12AC594CE163F658DBBACC3853C383E1A05213 
{
	union
	{
		struct
		{
		};
		uint8_t ConstraintManagerUpdate_tBB12AC594CE163F658DBBACC3853C383E1A05213__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorDeferredEvaluate
struct DirectorDeferredEvaluate_t851C593FE275B53D22C79C8435BEB4891252F799 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorDeferredEvaluate_t851C593FE275B53D22C79C8435BEB4891252F799__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationBegin
struct DirectorUpdateAnimationBegin_t81C50CAC81BD6EC4D9648822E86BF29A47936FEC 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdateAnimationBegin_t81C50CAC81BD6EC4D9648822E86BF29A47936FEC__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationEnd
struct DirectorUpdateAnimationEnd_tD58A96B3539A4F3A050B5116895857DFADB1609E 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdateAnimationEnd_tD58A96B3539A4F3A050B5116895857DFADB1609E__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/EndGraphicsJobsAfterScriptUpdate
struct EndGraphicsJobsAfterScriptUpdate_t31BA589CB2526B56986A3C5D9ED15FB859CA806C 
{
	union
	{
		struct
		{
		};
		uint8_t EndGraphicsJobsAfterScriptUpdate_t31BA589CB2526B56986A3C5D9ED15FB859CA806C__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/LegacyAnimationUpdate
struct LegacyAnimationUpdate_tCA1859B18933D179724E4EF67D3AD39AA70F9137 
{
	union
	{
		struct
		{
		};
		uint8_t LegacyAnimationUpdate_tCA1859B18933D179724E4EF67D3AD39AA70F9137__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/ParticleSystemBeginUpdateAll
struct ParticleSystemBeginUpdateAll_t1CC03454030208134371D7310A6983F583139D3B 
{
	union
	{
		struct
		{
		};
		uint8_t ParticleSystemBeginUpdateAll_t1CC03454030208134371D7310A6983F583139D3B__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/Physics2DLateUpdate
struct Physics2DLateUpdate_t8BCE5DD17E6F2423EEE2089613AFACB04D822381 
{
	union
	{
		struct
		{
		};
		uint8_t Physics2DLateUpdate_t8BCE5DD17E6F2423EEE2089613AFACB04D822381__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/ScriptRunBehaviourLateUpdate
struct ScriptRunBehaviourLateUpdate_t4FB72F632A4C0FD8A88708419FF10E910797D3A7 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourLateUpdate_t4FB72F632A4C0FD8A88708419FF10E910797D3A7__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/UIElementsUpdatePanels
struct UIElementsUpdatePanels_t999A37AEB53E4F09E8193455832E7FE029299AA5 
{
	union
	{
		struct
		{
		};
		uint8_t UIElementsUpdatePanels_t999A37AEB53E4F09E8193455832E7FE029299AA5__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/UNetUpdate
struct UNetUpdate_tD789F426DEFBE083132EC295CFFA8C8A63BFA8E8 
{
	union
	{
		struct
		{
		};
		uint8_t UNetUpdate_tD789F426DEFBE083132EC295CFFA8C8A63BFA8E8__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/UpdateMasterServerInterface
struct UpdateMasterServerInterface_t5C89D280B0E06D2E5EE43DA200DB08F067CD8FEB 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateMasterServerInterface_t5C89D280B0E06D2E5EE43DA200DB08F067CD8FEB__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/UpdateNetworkManager
struct UpdateNetworkManager_t32CBEA7AF5C6FB8F34C8F8AD050FB631C685DD31 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateNetworkManager_t32CBEA7AF5C6FB8F34C8F8AD050FB631C685DD31__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/AIUpdate
struct AIUpdate_tA35AAF6E952364E15D0F164538EFB865E0B8DD35 
{
	union
	{
		struct
		{
		};
		uint8_t AIUpdate_tA35AAF6E952364E15D0F164538EFB865E0B8DD35__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/CheckTexFieldInput
struct CheckTexFieldInput_t82562A2FF4A6A96115095A22DE49B2C8C85592D0 
{
	union
	{
		struct
		{
		};
		uint8_t CheckTexFieldInput_t82562A2FF4A6A96115095A22DE49B2C8C85592D0__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/IMGUISendQueuedEvents
struct IMGUISendQueuedEvents_tCB68831D0D320C78C24F1D76D2FE2EE3461FDE0C 
{
	union
	{
		struct
		{
		};
		uint8_t IMGUISendQueuedEvents_tCB68831D0D320C78C24F1D76D2FE2EE3461FDE0C__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/NewInputUpdate
struct NewInputUpdate_t1564F13F15C464D3B914A6E9C043C6F2D93B9A9C 
{
	union
	{
		struct
		{
		};
		uint8_t NewInputUpdate_t1564F13F15C464D3B914A6E9C043C6F2D93B9A9C__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/Physics2DUpdate
struct Physics2DUpdate_t895E178622EB6CCC7BE36D01F8FED69820B4CED7 
{
	union
	{
		struct
		{
		};
		uint8_t Physics2DUpdate_t895E178622EB6CCC7BE36D01F8FED69820B4CED7__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/PhysicsUpdate
struct PhysicsUpdate_t5EA12922A6C5349E4F5B1F6EE3F67D90A92532A6 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsUpdate_t5EA12922A6C5349E4F5B1F6EE3F67D90A92532A6__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/SendMouseEvents
struct SendMouseEvents_t0D410EA28E53BEAFCDB37F8E58A46485D16B86F5 
{
	union
	{
		struct
		{
		};
		uint8_t SendMouseEvents_t0D410EA28E53BEAFCDB37F8E58A46485D16B86F5__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/UpdateVideo
struct UpdateVideo_tFC4416C8B8E1232540E981586130B2D7B1D9AFE3 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateVideo_tFC4416C8B8E1232540E981586130B2D7B1D9AFE3__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/WindUpdate
struct WindUpdate_t62BB75F87B0E35ADAE8ED7A801F6EB044D22143B 
{
	union
	{
		struct
		{
		};
		uint8_t WindUpdate_t62BB75F87B0E35ADAE8ED7A801F6EB044D22143B__padding[1];
	};
};

// UnityEngine.PlayerLoop.TimeUpdate/WaitForLastPresentationAndUpdateTime
struct WaitForLastPresentationAndUpdateTime_tF885D5810C1C4B2AA28DBCC6CB6003E51792F51C 
{
	union
	{
		struct
		{
		};
		uint8_t WaitForLastPresentationAndUpdateTime_tF885D5810C1C4B2AA28DBCC6CB6003E51792F51C__padding[1];
	};
};

// UnityEngine.PlayerLoop.Update/DirectorUpdate
struct DirectorUpdate_t766FFE1AA1ADCA88ABEDAEFEF5A9B46DFE782E7D 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdate_t766FFE1AA1ADCA88ABEDAEFEF5A9B46DFE782E7D__padding[1];
	};
};

// UnityEngine.PlayerLoop.Update/ScriptRunBehaviourUpdate
struct ScriptRunBehaviourUpdate_tC1140F6DB2F045EB25C6B8E5C46DBE91A1CDBBC1 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourUpdate_tC1140F6DB2F045EB25C6B8E5C46DBE91A1CDBBC1__padding[1];
	};
};

// UnityEngine.PlayerLoop.Update/ScriptRunDelayedDynamicFrameRate
struct ScriptRunDelayedDynamicFrameRate_t6806DDF61653702F6F87D55ED9330215CD5BF033 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedDynamicFrameRate_t6806DDF61653702F6F87D55ED9330215CD5BF033__padding[1];
	};
};

// UnityEngine.PlayerLoop.Update/ScriptRunDelayedTasks
struct ScriptRunDelayedTasks_t836195796CF358BFA2A1A24B90C69DB7F95EEC80 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedTasks_t836195796CF358BFA2A1A24B90C69DB7F95EEC80__padding[1];
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
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

// UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F 
{
	// System.Type UnityEngine.LowLevel.PlayerLoopSystem::type
	Type_t* ___type_0;
	// UnityEngine.LowLevel.PlayerLoopSystem[] UnityEngine.LowLevel.PlayerLoopSystem::subSystemList
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* ___subSystemList_1;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction UnityEngine.LowLevel.PlayerLoopSystem::updateDelegate
	UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* ___updateDelegate_2;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::updateFunction
	intptr_t ___updateFunction_3;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::loopConditionFunction
	intptr_t ___loopConditionFunction_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke
{
	Type_t* ___type_0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
// Native definition for COM marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com
{
	Type_t* ___type_0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};

// UnityEngine.LowLevel.PlayerLoopSystemInternal
struct PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5 
{
	// System.Type UnityEngine.LowLevel.PlayerLoopSystemInternal::type
	Type_t* ___type_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction UnityEngine.LowLevel.PlayerLoopSystemInternal::updateDelegate
	UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* ___updateDelegate_1;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystemInternal::updateFunction
	intptr_t ___updateFunction_2;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystemInternal::loopConditionFunction
	intptr_t ___loopConditionFunction_3;
	// System.Int32 UnityEngine.LowLevel.PlayerLoopSystemInternal::numSubSystems
	int32_t ___numSubSystems_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.LowLevel.PlayerLoopSystemInternal
struct PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_pinvoke
{
	Type_t* ___type_0;
	Il2CppMethodPointer ___updateDelegate_1;
	intptr_t ___updateFunction_2;
	intptr_t ___loopConditionFunction_3;
	int32_t ___numSubSystems_4;
};
// Native definition for COM marshalling of UnityEngine.LowLevel.PlayerLoopSystemInternal
struct PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_com
{
	Type_t* ___type_0;
	Il2CppMethodPointer ___updateDelegate_1;
	intptr_t ___updateFunction_2;
	intptr_t ___loopConditionFunction_3;
	int32_t ___numSubSystems_4;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
struct Predicate_1_t6F78EB768ADC7C118AD7254414DA44D4F6B69E55  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4  : public MulticastDelegate_t
{
};

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t91E36549D76184780FD8995722CD4A87A2650C23_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BaseInvokableCallU5BU5D_tF8AC2AD8CB819841C1BA6BCAF4C2733CCD50296F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t1EC718175613632CD4775345600304230E9A83DF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PersistentCallU5BU5D_t9C1552FD6D45110B089FD7B6E1E6934E83152E28* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>

// System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>

// System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystemInternal>
struct List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystemInternal>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.Events.ArgumentCache

// UnityEngine.Events.ArgumentCache

// UnityEngine.Events.BaseInvokableCall

// UnityEngine.Events.BaseInvokableCall

// System.Reflection.Binder

// System.Reflection.Binder

// UnityEngine.Events.InvokableCallList

// UnityEngine.Events.InvokableCallList

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.Reflection.ParameterInfo

// System.Reflection.ParameterInfo

// UnityEngine.Events.PersistentCall

// UnityEngine.Events.PersistentCall

// UnityEngine.Events.PersistentCallGroup

// UnityEngine.Events.PersistentCallGroup

// UnityEngine.LowLevel.PlayerLoop

// UnityEngine.LowLevel.PlayerLoop

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// System.ValueType

// System.ValueType

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.PlayerLoop.EarlyUpdate

// UnityEngine.PlayerLoop.EarlyUpdate

// UnityEngine.PlayerLoop.FixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate

// UnityEngine.PlayerLoop.Initialization

// UnityEngine.PlayerLoop.Initialization

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Events.InvokableCall

// UnityEngine.Events.InvokableCall

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// System.Reflection.ParameterModifier

// System.Reflection.ParameterModifier

// UnityEngine.PlayerLoop.PostLateUpdate

// UnityEngine.PlayerLoop.PostLateUpdate

// UnityEngine.PlayerLoop.PreLateUpdate

// UnityEngine.PlayerLoop.PreLateUpdate

// UnityEngine.PlayerLoop.PreUpdate

// UnityEngine.PlayerLoop.PreUpdate

// UnityEngine.PlayerLoop.TimeUpdate

// UnityEngine.PlayerLoop.TimeUpdate

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.PlayerLoop.Update

// UnityEngine.PlayerLoop.Update

// System.Void

// System.Void

// UnityEngine.PlayerLoop.EarlyUpdate/ARCoreUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/ARCoreUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/AnalyticsCoreStatsUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/AnalyticsCoreStatsUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/ClearIntermediateRenderers

// UnityEngine.PlayerLoop.EarlyUpdate/ClearIntermediateRenderers

// UnityEngine.PlayerLoop.EarlyUpdate/ClearLines

// UnityEngine.PlayerLoop.EarlyUpdate/ClearLines

// UnityEngine.PlayerLoop.EarlyUpdate/DeliverIosPlatformEvents

// UnityEngine.PlayerLoop.EarlyUpdate/DeliverIosPlatformEvents

// UnityEngine.PlayerLoop.EarlyUpdate/DispatchEventQueueEvents

// UnityEngine.PlayerLoop.EarlyUpdate/DispatchEventQueueEvents

// UnityEngine.PlayerLoop.EarlyUpdate/ExecuteMainThreadJobs

// UnityEngine.PlayerLoop.EarlyUpdate/ExecuteMainThreadJobs

// UnityEngine.PlayerLoop.EarlyUpdate/GpuTimestamp

// UnityEngine.PlayerLoop.EarlyUpdate/GpuTimestamp

// UnityEngine.PlayerLoop.EarlyUpdate/PerformanceAnalyticsUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/PerformanceAnalyticsUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/PhysicsResetInterpolatedTransformPosition

// UnityEngine.PlayerLoop.EarlyUpdate/PhysicsResetInterpolatedTransformPosition

// UnityEngine.PlayerLoop.EarlyUpdate/PlayerCleanupCachedData

// UnityEngine.PlayerLoop.EarlyUpdate/PlayerCleanupCachedData

// UnityEngine.PlayerLoop.EarlyUpdate/PollHtcsPlayerConnection

// UnityEngine.PlayerLoop.EarlyUpdate/PollHtcsPlayerConnection

// UnityEngine.PlayerLoop.EarlyUpdate/PollPlayerConnection

// UnityEngine.PlayerLoop.EarlyUpdate/PollPlayerConnection

// UnityEngine.PlayerLoop.EarlyUpdate/PresentBeforeUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/PresentBeforeUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/ProcessMouseInWindow

// UnityEngine.PlayerLoop.EarlyUpdate/ProcessMouseInWindow

// UnityEngine.PlayerLoop.EarlyUpdate/ProcessRemoteInput

// UnityEngine.PlayerLoop.EarlyUpdate/ProcessRemoteInput

// UnityEngine.PlayerLoop.EarlyUpdate/RendererNotifyInvisible

// UnityEngine.PlayerLoop.EarlyUpdate/RendererNotifyInvisible

// UnityEngine.PlayerLoop.EarlyUpdate/ResetFrameStatsAfterPresent

// UnityEngine.PlayerLoop.EarlyUpdate/ResetFrameStatsAfterPresent

// UnityEngine.PlayerLoop.EarlyUpdate/ScriptRunDelayedStartupFrame

// UnityEngine.PlayerLoop.EarlyUpdate/ScriptRunDelayedStartupFrame

// UnityEngine.PlayerLoop.EarlyUpdate/SpriteAtlasManagerUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/SpriteAtlasManagerUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/TangoUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/TangoUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/UnityWebRequestUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/UnityWebRequestUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateAsyncReadbackManager

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateAsyncReadbackManager

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateCanvasRectTransform

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateCanvasRectTransform

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateInputManager

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateInputManager

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateKinect

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateKinect

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateMainGameViewRect

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateMainGameViewRect

// UnityEngine.PlayerLoop.EarlyUpdate/UpdatePreloading

// UnityEngine.PlayerLoop.EarlyUpdate/UpdatePreloading

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateStreamingManager

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateStreamingManager

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateTextureStreamingManager

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateTextureStreamingManager

// UnityEngine.PlayerLoop.EarlyUpdate/XRUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/XRUpdate

// UnityEngine.PlayerLoop.FixedUpdate/AudioFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/AudioFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/ClearLines

// UnityEngine.PlayerLoop.FixedUpdate/ClearLines

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedSampleTime

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedSampleTime

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedUpdatePostPhysics

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedUpdatePostPhysics

// UnityEngine.PlayerLoop.FixedUpdate/LegacyFixedAnimationUpdate

// UnityEngine.PlayerLoop.FixedUpdate/LegacyFixedAnimationUpdate

// UnityEngine.PlayerLoop.FixedUpdate/NewInputFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/NewInputFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/Physics2DFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/Physics2DFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/PhysicsClothFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/PhysicsClothFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/PhysicsFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/PhysicsFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/ScriptRunBehaviourFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/ScriptRunBehaviourFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/ScriptRunDelayedFixedFrameRate

// UnityEngine.PlayerLoop.FixedUpdate/ScriptRunDelayedFixedFrameRate

// UnityEngine.PlayerLoop.FixedUpdate/XRFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/XRFixedUpdate

// UnityEngine.PlayerLoop.Initialization/AsyncUploadTimeSlicedUpdate

// UnityEngine.PlayerLoop.Initialization/AsyncUploadTimeSlicedUpdate

// UnityEngine.PlayerLoop.Initialization/DirectorSampleTime

// UnityEngine.PlayerLoop.Initialization/DirectorSampleTime

// UnityEngine.PlayerLoop.Initialization/ProfilerStartFrame

// UnityEngine.PlayerLoop.Initialization/ProfilerStartFrame

// UnityEngine.PlayerLoop.Initialization/SynchronizeInputs

// UnityEngine.PlayerLoop.Initialization/SynchronizeInputs

// UnityEngine.PlayerLoop.Initialization/SynchronizeState

// UnityEngine.PlayerLoop.Initialization/SynchronizeState

// UnityEngine.PlayerLoop.Initialization/UpdateCameraMotionVectors

// UnityEngine.PlayerLoop.Initialization/UpdateCameraMotionVectors

// UnityEngine.PlayerLoop.Initialization/XREarlyUpdate

// UnityEngine.PlayerLoop.Initialization/XREarlyUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/BatchModeUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/BatchModeUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/ClearImmediateRenderers

// UnityEngine.PlayerLoop.PostLateUpdate/ClearImmediateRenderers

// UnityEngine.PlayerLoop.PostLateUpdate/DirectorLateUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/DirectorLateUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/DirectorRenderImage

// UnityEngine.PlayerLoop.PostLateUpdate/DirectorRenderImage

// UnityEngine.PlayerLoop.PostLateUpdate/EndGraphicsJobsAfterScriptLateUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/EndGraphicsJobsAfterScriptLateUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/EnlightenRuntimeUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/EnlightenRuntimeUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/ExecuteGameCenterCallbacks

// UnityEngine.PlayerLoop.PostLateUpdate/ExecuteGameCenterCallbacks

// UnityEngine.PlayerLoop.PostLateUpdate/FinishFrameRendering

// UnityEngine.PlayerLoop.PostLateUpdate/FinishFrameRendering

// UnityEngine.PlayerLoop.PostLateUpdate/GUIClearEvents

// UnityEngine.PlayerLoop.PostLateUpdate/GUIClearEvents

// UnityEngine.PlayerLoop.PostLateUpdate/GraphicsWarmupPreloadedShaders

// UnityEngine.PlayerLoop.PostLateUpdate/GraphicsWarmupPreloadedShaders

// UnityEngine.PlayerLoop.PostLateUpdate/InputEndFrame

// UnityEngine.PlayerLoop.PostLateUpdate/InputEndFrame

// UnityEngine.PlayerLoop.PostLateUpdate/MemoryFrameMaintenance

// UnityEngine.PlayerLoop.PostLateUpdate/MemoryFrameMaintenance

// UnityEngine.PlayerLoop.PostLateUpdate/ParticleSystemEndUpdateAll

// UnityEngine.PlayerLoop.PostLateUpdate/ParticleSystemEndUpdateAll

// UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothBeginUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothBeginUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothFinishUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothFinishUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerEmitCanvasGeometry

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerEmitCanvasGeometry

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameComplete

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameComplete

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFramePostPresent

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFramePostPresent

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameStarted

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameStarted

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerUpdateCanvases

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerUpdateCanvases

// UnityEngine.PlayerLoop.PostLateUpdate/PresentAfterDraw

// UnityEngine.PlayerLoop.PostLateUpdate/PresentAfterDraw

// UnityEngine.PlayerLoop.PostLateUpdate/ProcessWebSendMessages

// UnityEngine.PlayerLoop.PostLateUpdate/ProcessWebSendMessages

// UnityEngine.PlayerLoop.PostLateUpdate/ProfilerEndFrame

// UnityEngine.PlayerLoop.PostLateUpdate/ProfilerEndFrame

// UnityEngine.PlayerLoop.PostLateUpdate/ProfilerSynchronizeStats

// UnityEngine.PlayerLoop.PostLateUpdate/ProfilerSynchronizeStats

// UnityEngine.PlayerLoop.PostLateUpdate/ResetInputAxis

// UnityEngine.PlayerLoop.PostLateUpdate/ResetInputAxis

// UnityEngine.PlayerLoop.PostLateUpdate/ScriptRunDelayedDynamicFrameRate

// UnityEngine.PlayerLoop.PostLateUpdate/ScriptRunDelayedDynamicFrameRate

// UnityEngine.PlayerLoop.PostLateUpdate/ShaderHandleErrors

// UnityEngine.PlayerLoop.PostLateUpdate/ShaderHandleErrors

// UnityEngine.PlayerLoop.PostLateUpdate/SortingGroupsUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/SortingGroupsUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/ThreadedLoadingDebug

// UnityEngine.PlayerLoop.PostLateUpdate/ThreadedLoadingDebug

// UnityEngine.PlayerLoop.PostLateUpdate/TriggerEndOfFrameCallbacks

// UnityEngine.PlayerLoop.PostLateUpdate/TriggerEndOfFrameCallbacks

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllRenderers

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllRenderers

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllSkinnedMeshes

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllSkinnedMeshes

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAudio

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAudio

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCanvasRectTransform

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCanvasRectTransform

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCaptureScreenshot

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCaptureScreenshot

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCustomRenderTextures

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCustomRenderTextures

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateLightProbeProxyVolumes

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateLightProbeProxyVolumes

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateRectTransform

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateRectTransform

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateResolution

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateResolution

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateSubstance

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateSubstance

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideo

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideo

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideoTextures

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideoTextures

// UnityEngine.PlayerLoop.PostLateUpdate/VFXUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/VFXUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/XRPostLateUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/XRPostLateUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/XRPostPresent

// UnityEngine.PlayerLoop.PostLateUpdate/XRPostPresent

// UnityEngine.PlayerLoop.PostLateUpdate/XRPreEndFrame

// UnityEngine.PlayerLoop.PostLateUpdate/XRPreEndFrame

// UnityEngine.PlayerLoop.PreLateUpdate/AIUpdatePostScript

// UnityEngine.PlayerLoop.PreLateUpdate/AIUpdatePostScript

// UnityEngine.PlayerLoop.PreLateUpdate/ConstraintManagerUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/ConstraintManagerUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorDeferredEvaluate

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorDeferredEvaluate

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationBegin

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationBegin

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationEnd

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationEnd

// UnityEngine.PlayerLoop.PreLateUpdate/EndGraphicsJobsAfterScriptUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/EndGraphicsJobsAfterScriptUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/LegacyAnimationUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/LegacyAnimationUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/ParticleSystemBeginUpdateAll

// UnityEngine.PlayerLoop.PreLateUpdate/ParticleSystemBeginUpdateAll

// UnityEngine.PlayerLoop.PreLateUpdate/Physics2DLateUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/Physics2DLateUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/ScriptRunBehaviourLateUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/ScriptRunBehaviourLateUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/UIElementsUpdatePanels

// UnityEngine.PlayerLoop.PreLateUpdate/UIElementsUpdatePanels

// UnityEngine.PlayerLoop.PreLateUpdate/UNetUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/UNetUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/UpdateMasterServerInterface

// UnityEngine.PlayerLoop.PreLateUpdate/UpdateMasterServerInterface

// UnityEngine.PlayerLoop.PreLateUpdate/UpdateNetworkManager

// UnityEngine.PlayerLoop.PreLateUpdate/UpdateNetworkManager

// UnityEngine.PlayerLoop.PreUpdate/AIUpdate

// UnityEngine.PlayerLoop.PreUpdate/AIUpdate

// UnityEngine.PlayerLoop.PreUpdate/CheckTexFieldInput

// UnityEngine.PlayerLoop.PreUpdate/CheckTexFieldInput

// UnityEngine.PlayerLoop.PreUpdate/IMGUISendQueuedEvents

// UnityEngine.PlayerLoop.PreUpdate/IMGUISendQueuedEvents

// UnityEngine.PlayerLoop.PreUpdate/NewInputUpdate

// UnityEngine.PlayerLoop.PreUpdate/NewInputUpdate

// UnityEngine.PlayerLoop.PreUpdate/Physics2DUpdate

// UnityEngine.PlayerLoop.PreUpdate/Physics2DUpdate

// UnityEngine.PlayerLoop.PreUpdate/PhysicsUpdate

// UnityEngine.PlayerLoop.PreUpdate/PhysicsUpdate

// UnityEngine.PlayerLoop.PreUpdate/SendMouseEvents

// UnityEngine.PlayerLoop.PreUpdate/SendMouseEvents

// UnityEngine.PlayerLoop.PreUpdate/UpdateVideo

// UnityEngine.PlayerLoop.PreUpdate/UpdateVideo

// UnityEngine.PlayerLoop.PreUpdate/WindUpdate

// UnityEngine.PlayerLoop.PreUpdate/WindUpdate

// UnityEngine.PlayerLoop.TimeUpdate/WaitForLastPresentationAndUpdateTime

// UnityEngine.PlayerLoop.TimeUpdate/WaitForLastPresentationAndUpdateTime

// UnityEngine.PlayerLoop.Update/DirectorUpdate

// UnityEngine.PlayerLoop.Update/DirectorUpdate

// UnityEngine.PlayerLoop.Update/ScriptRunBehaviourUpdate

// UnityEngine.PlayerLoop.Update/ScriptRunBehaviourUpdate

// UnityEngine.PlayerLoop.Update/ScriptRunDelayedDynamicFrameRate

// UnityEngine.PlayerLoop.Update/ScriptRunDelayedDynamicFrameRate

// UnityEngine.PlayerLoop.Update/ScriptRunDelayedTasks

// UnityEngine.PlayerLoop.Update/ScriptRunDelayedTasks

// System.Delegate

// System.Delegate

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.LowLevel.PlayerLoopSystem

// UnityEngine.LowLevel.PlayerLoopSystem

// UnityEngine.LowLevel.PlayerLoopSystemInternal

// UnityEngine.LowLevel.PlayerLoopSystemInternal

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.MulticastDelegate

// System.MulticastDelegate

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

// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>

// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction

// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 m_Items[1];

	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
};
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
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D  : public RuntimeArray
{
	ALIGN_FIELD (8) PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F m_Items[1];

	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___updateDelegate_2), (void*)NULL);
		#endif
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___updateDelegate_2), (void*)NULL);
		#endif
	}
};
// UnityEngine.LowLevel.PlayerLoopSystemInternal[]
struct PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2  : public RuntimeArray
{
	ALIGN_FIELD (8) PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5 m_Items[1];

	inline PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___updateDelegate_1), (void*)NULL);
		#endif
	}
	inline PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___updateDelegate_1), (void*)NULL);
		#endif
	}
};
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

IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_back(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_cleanup(PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com_back(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com_cleanup(PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled);

// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m2B0279AF2950764FCBFEF3BC1BF616854B3EE3AC_gshared (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::RemoveAll(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m64ACE8FD442E00A79160BB070C0133B43A8C4075_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor()
inline void List_1__ctor_m4F00C44EA0380F628F874E843EF973905C05E2C2 (List_1_t1EC718175613632CD4775345600304230E9A83DF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
inline Enumerator_tA2BA94CFC1C74A74D61FECF814D901AEAAE4BFA9 List_1_GetEnumerator_mD74B7A44A8EC40E059B9CFF3B29DC3F6BF6C4924 (List_1_t1EC718175613632CD4775345600304230E9A83DF* __this, const RuntimeMethod* method)
{
	Enumerator_tA2BA94CFC1C74A74D61FECF814D901AEAAE4BFA9 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>::Dispose()
inline void Enumerator_Dispose_m56B864557E6F08E5A86D6836F6AB82841715AB97 (Enumerator_tA2BA94CFC1C74A74D61FECF814D901AEAAE4BFA9* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>::get_Current()
inline PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* Enumerator_get_Current_mBF1F6446251FA06D6E25CF0E23E802D0586BA020_inline (Enumerator_tA2BA94CFC1C74A74D61FECF814D901AEAAE4BFA9* __this, const RuntimeMethod* method)
{
	PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PersistentCall_IsValid_mD63347854BC781710D4CC9B5FC3C3996E84A325D (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* PersistentCall_GetRuntimeCall_m0DDE14D286D9995CCE65D2DFF27D57E4D476F072 (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* ___0_theEvent, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_AddPersistentInvokableCall_mFB82EE201D90D84E0E25934EA879067BD666C0C1 (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* ___0_call, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>::MoveNext()
inline bool Enumerator_MoveNext_m974E4B176EED3974261571D8D323B9C758CF6007 (Enumerator_tA2BA94CFC1C74A74D61FECF814D901AEAAE4BFA9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(T)
inline void List_1_Add_mE8C9DBF42FFBF23E98D07CC92A82777A0840B5AD_inline (List_1_t91E36549D76184780FD8995722CD4A87A2650C23* __this, BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
inline void List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2 (List_1_t91E36549D76184780FD8995722CD4A87A2650C23* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
inline BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279 (List_1_t91E36549D76184780FD8995722CD4A87A2650C23* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
inline int32_t List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_inline (List_1_t91E36549D76184780FD8995722CD4A87A2650C23* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m1D0E12B18D9105FB553B42DAD351E9AD017B9E9B (Predicate_1_t6F78EB768ADC7C118AD7254414DA44D4F6B69E55* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m2B0279AF2950764FCBFEF3BC1BF616854B3EE3AC_gshared)((Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*)__this, ___0_object, ___1_method, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAll(System.Predicate`1<T>)
inline int32_t List_1_RemoveAll_m5411A629E03E3C36C002C5BE2CAFE5E82F6F9B30 (List_1_t91E36549D76184780FD8995722CD4A87A2650C23* __this, Predicate_1_t6F78EB768ADC7C118AD7254414DA44D4F6B69E55* ___0_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, const RuntimeMethod*))List_1_RemoveAll_m64ACE8FD442E00A79160BB070C0133B43A8C4075_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*)___0_match, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Int32)
inline void List_1__ctor_mA457A1677905C83AD674D55C89B663B126D8F0C7 (List_1_t91E36549D76184780FD8995722CD4A87A2650C23* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310 (List_1_t91E36549D76184780FD8995722CD4A87A2650C23* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (RuntimeObject*)___0_collection, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear()
inline void List_1_Clear_m3B1397CA37D9F44625CC7581B86878E36C1F8CCF_inline (List_1_t91E36549D76184780FD8995722CD4A87A2650C23* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mDB467FD8BAC40A706631A0CEE456876DC4287A53 (List_1_t91E36549D76184780FD8995722CD4A87A2650C23* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (RuntimeObject*)___0_collection, method);
}
// System.Void UnityEngine.Events.InvokableCallList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList__ctor_mE70F25915B775E7258A12670B76C7F7B3C36BF1A (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentCallGroup__ctor_m1B17318026E3D419B2C194F66882E3BED6C4200A (PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_DirtyPersistentCalls_m356D77B4849FC63501507E4D3F1054BD86D6B1CF (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* PersistentCall_get_arguments_mA3B29A1F4E7328523674ADC6FC0C7332BA053410 (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m85640B88D8DA790019005A4ADD948E036ED79694 (ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* PersistentCall_get_target_mA12C3C9A21F6F5335761CB0EB3C7C965D8C393AE (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.String UnityEngine.Events.PersistentCall::get_targetAssemblyTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PersistentCall_get_targetAssemblyTypeName_m303DE56BDE5CD469D0210E1EA73F54B4C88228BE (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Events.PersistentCall::get_methodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PersistentCall_get_methodName_mFD7F88289C9EF5DE6D7EFD3FEF1A5C640CBAF088 (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PersistentCall_get_mode_m3FFA4D4FC3DA0C38106323CD33ABBFA53ED01928 (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Type,UnityEngine.Events.PersistentListenerMode,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* UnityEventBase_FindMethod_mE417FEA28EC49921FA28EBDAB1214B0E6EC7E91B (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, String_t* ___0_name, Type_t* ___1_listenerType, int32_t ___2_mode, Type_t* ___3_argumentType, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD (Type_t* ___0_objectType, String_t* ___1_functionName, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___2_argumentTypes, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_ClearPersistent_m9A776CBBC13667875F1765B32B469BC12AFD4192 (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentCallGroup_Initialize_m937649041F14D0D20F959B07BA099246EC32BCCB (PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* __this, InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___0_invokableList, UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* ___1_unityEventBase, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_AddListener_m279B8BAED30DA27C305ADDF241F05CD2BC59625A (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_RemoveListener_m5C78FE9ECE5990F29636216E879139D5863F36C8 (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, RuntimeObject* ___0_targetObj, MethodInfo_t* ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.InvokableCallList::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_Clear_mD5CAE0A692736B31047AF342F735916CD635288F (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RebuildPersistentCallsIfNeeded_m981B8A6658A88F620345D2C7F4ADCD0D788B0266 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t91E36549D76184780FD8995722CD4A87A2650C23* InvokableCallList_PrepareInvoke_m0CF5EBCDF4913AFC13CBE09F6CFB687D0F771301 (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, const RuntimeMethod* method) ;
// System.String System.Object::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_mF3AF3FA3834D7F99592A4CA715FFD2DE12291562 (Type_t* __this, String_t* ___0_name, int32_t ___1_bindingAttr, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___2_binder, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___3_types, ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364* ___4_modifiers, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18 (Type_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase__ctor_mB1F958EAC1A7C4B31253F2E1FED173A628725DEC (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* UnityEvent_GetDelegate_mBD5D37CFB826CB3329477A509A62BF7CE26A9EF8 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_action, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_AddCall_mA78C058ED530789A28F42347B653190FEC84DBBC (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall__ctor_mF3F94B432C977EE2DE7834EC2936E90D271C0464 (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* __this, RuntimeObject* ___0_target, MethodInfo_t* ___1_theFunction, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.InvokableCall::.ctor(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall__ctor_m4FA1428E3A33219B2C8C5C571A705AC6B862FA70 (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_action, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t91E36549D76184780FD8995722CD4A87A2650C23* UnityEventBase_PrepareInvoke_m4D04FA5D7025C093047DCD3DFEEFB9DF48764FC2 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.InvokableCall::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_Invoke_m6F4828FD2B3E3BBB7AA6EECC2C37FB08538363F4 (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.LowLevel.PlayerLoopSystem::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerLoopSystem_ToString_m259B8533D2C64C15D381B16F32C710A0018684A0 (PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* __this, const RuntimeMethod* method) ;
// UnityEngine.LowLevel.PlayerLoopSystemInternal[] UnityEngine.LowLevel.PlayerLoop::GetCurrentPlayerLoopInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2* PlayerLoop_GetCurrentPlayerLoopInternal_mED0E545AD7C15B7B47AC2379908B4F8A972F17D9 (const RuntimeMethod* method) ;
// UnityEngine.LowLevel.PlayerLoopSystem UnityEngine.LowLevel.PlayerLoop::InternalToPlayerLoopSystem(UnityEngine.LowLevel.PlayerLoopSystemInternal[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F PlayerLoop_InternalToPlayerLoopSystem_m09E701EA9E0676D6CAA0B1FCACBF568E5F50A53B (PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2* ___0_internalSys, int32_t* ___1_offset, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystemInternal>::.ctor()
inline void List_1__ctor_m0CF79D6ED4DC92AC7C615C8812EE882941929241 (List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Int32 UnityEngine.LowLevel.PlayerLoop::PlayerLoopSystemToInternal(UnityEngine.LowLevel.PlayerLoopSystem,System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystemInternal>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerLoop_PlayerLoopSystemToInternal_mD99CF5A6C54164E80A88E4C52EF1E4BCA2254D5B (PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F ___0_sys, List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C** ___1_internalSys, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystemInternal>::ToArray()
inline PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2* List_1_ToArray_mF7A76508CD1157C08B24725F6EBF02A543C8C86F (List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
	return (PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2*)il2cppRetVal;
}
// System.Void UnityEngine.LowLevel.PlayerLoop::SetPlayerLoopInternal(UnityEngine.LowLevel.PlayerLoopSystemInternal[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoop_SetPlayerLoopInternal_m1643DAD5D8AF68D99B793D34A5F66C60C45BE5FA (PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2* ___0_loop, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystemInternal>::get_Count()
inline int32_t List_1_get_Count_m310B0D806832AA42537F42C5245707E84C468123_inline (List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystemInternal>::Add(T)
inline void List_1_Add_mDB586A60ED2ED46DF3A5D908D7D5AC09B1B9AC2F_inline (List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C* __this, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystemInternal>::set_Item(System.Int32,T)
inline void List_1_set_Item_m0F86EE963CEFB634508EE5D050332DB67B206F82 (List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C* __this, int32_t ___0_index, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny)&___1_value, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>::.ctor()
inline void List_1__ctor_mFEECC8D3F82BB0A022FC84C60FE2CE3F0C456172 (List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>::Add(T)
inline void List_1_Add_m20B47157F68B2A1C1C92F34C111874885F78607A_inline (List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* __this, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>::ToArray()
inline PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* List_1_ToArray_mF1B4B099D6EC830C7AE856231485FF238F2985E3 (List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
	return (PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D*)il2cppRetVal;
}
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentCallGroup__ctor_m1B17318026E3D419B2C194F66882E3BED6C4200A (PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4F00C44EA0380F628F874E843EF973905C05E2C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1EC718175613632CD4775345600304230E9A83DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_t1EC718175613632CD4775345600304230E9A83DF* L_0 = (List_1_t1EC718175613632CD4775345600304230E9A83DF*)il2cpp_codegen_object_new(List_1_t1EC718175613632CD4775345600304230E9A83DF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m4F00C44EA0380F628F874E843EF973905C05E2C2(L_0, List_1__ctor_m4F00C44EA0380F628F874E843EF973905C05E2C2_RuntimeMethod_var);
		__this->___m_Calls_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Calls_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentCallGroup_Initialize_m937649041F14D0D20F959B07BA099246EC32BCCB (PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* __this, InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___0_invokableList, UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* ___1_unityEventBase, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m56B864557E6F08E5A86D6836F6AB82841715AB97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m974E4B176EED3974261571D8D323B9C758CF6007_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBF1F6446251FA06D6E25CF0E23E802D0586BA020_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD74B7A44A8EC40E059B9CFF3B29DC3F6BF6C4924_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA2BA94CFC1C74A74D61FECF814D901AEAAE4BFA9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* V_1 = NULL;
	BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		List_1_t1EC718175613632CD4775345600304230E9A83DF* L_0 = __this->___m_Calls_0;
		NullCheck(L_0);
		Enumerator_tA2BA94CFC1C74A74D61FECF814D901AEAAE4BFA9 L_1;
		L_1 = List_1_GetEnumerator_mD74B7A44A8EC40E059B9CFF3B29DC3F6BF6C4924(L_0, List_1_GetEnumerator_mD74B7A44A8EC40E059B9CFF3B29DC3F6BF6C4924_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m56B864557E6F08E5A86D6836F6AB82841715AB97((&V_0), Enumerator_Dispose_m56B864557E6F08E5A86D6836F6AB82841715AB97_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0043_1;
			}

IL_0010_1:
			{
				PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_2;
				L_2 = Enumerator_get_Current_mBF1F6446251FA06D6E25CF0E23E802D0586BA020_inline((&V_0), Enumerator_get_Current_mBF1F6446251FA06D6E25CF0E23E802D0586BA020_RuntimeMethod_var);
				V_1 = L_2;
				PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_3 = V_1;
				NullCheck(L_3);
				bool L_4;
				L_4 = PersistentCall_IsValid_mD63347854BC781710D4CC9B5FC3C3996E84A325D(L_3, NULL);
				V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
				bool L_5 = V_3;
				if (!L_5)
				{
					goto IL_0028_1;
				}
			}
			{
				goto IL_0043_1;
			}

IL_0028_1:
			{
				PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_6 = V_1;
				UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* L_7 = ___1_unityEventBase;
				NullCheck(L_6);
				BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_8;
				L_8 = PersistentCall_GetRuntimeCall_m0DDE14D286D9995CCE65D2DFF27D57E4D476F072(L_6, L_7, NULL);
				V_2 = L_8;
				BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_9 = V_2;
				V_4 = (bool)((!(((RuntimeObject*)(BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_10 = V_4;
				if (!L_10)
				{
					goto IL_0042_1;
				}
			}
			{
				InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* L_11 = ___0_invokableList;
				BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_12 = V_2;
				NullCheck(L_11);
				InvokableCallList_AddPersistentInvokableCall_mFB82EE201D90D84E0E25934EA879067BD666C0C1(L_11, L_12, NULL);
			}

IL_0042_1:
			{
			}

IL_0043_1:
			{
				bool L_13;
				L_13 = Enumerator_MoveNext_m974E4B176EED3974261571D8D323B9C758CF6007((&V_0), Enumerator_MoveNext_m974E4B176EED3974261571D8D323B9C758CF6007_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_005d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005d:
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
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_AddPersistentInvokableCall_mFB82EE201D90D84E0E25934EA879067BD666C0C1 (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* ___0_call, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE8C9DBF42FFBF23E98D07CC92A82777A0840B5AD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_0 = __this->___m_PersistentCalls_0;
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_1 = ___0_call;
		NullCheck(L_0);
		List_1_Add_mE8C9DBF42FFBF23E98D07CC92A82777A0840B5AD_inline(L_0, L_1, List_1_Add_mE8C9DBF42FFBF23E98D07CC92A82777A0840B5AD_RuntimeMethod_var);
		__this->___m_NeedsUpdate_3 = (bool)1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_AddListener_m279B8BAED30DA27C305ADDF241F05CD2BC59625A (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* ___0_call, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE8C9DBF42FFBF23E98D07CC92A82777A0840B5AD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_0 = __this->___m_RuntimeCalls_1;
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_1 = ___0_call;
		NullCheck(L_0);
		List_1_Add_mE8C9DBF42FFBF23E98D07CC92A82777A0840B5AD_inline(L_0, L_1, List_1_Add_mE8C9DBF42FFBF23E98D07CC92A82777A0840B5AD_RuntimeMethod_var);
		__this->___m_NeedsUpdate_3 = (bool)1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_RemoveListener_m5C78FE9ECE5990F29636216E879139D5863F36C8 (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, RuntimeObject* ___0_targetObj, MethodInfo_t* ___1_method, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE8C9DBF42FFBF23E98D07CC92A82777A0840B5AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAll_m5411A629E03E3C36C002C5BE2CAFE5E82F6F9B30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA457A1677905C83AD674D55C89B663B126D8F0C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t91E36549D76184780FD8995722CD4A87A2650C23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t6F78EB768ADC7C118AD7254414DA44D4F6B69E55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* V_0 = NULL;
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_0 = (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*)il2cpp_codegen_object_new(List_1_t91E36549D76184780FD8995722CD4A87A2650C23_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2(L_0, List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2_RuntimeMethod_var);
		V_0 = L_0;
		V_2 = 0;
		goto IL_003b;
	}

IL_000b:
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_1 = __this->___m_RuntimeCalls_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_3;
		L_3 = List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279(L_1, L_2, List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var);
		RuntimeObject* L_4 = ___0_targetObj;
		MethodInfo_t* L_5 = ___1_method;
		NullCheck(L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, RuntimeObject*, MethodInfo_t* >::Invoke(5 /* System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo) */, L_3, L_4, L_5);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_8 = V_0;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_9 = __this->___m_RuntimeCalls_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_11;
		L_11 = List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279(L_9, L_10, List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var);
		NullCheck(L_8);
		List_1_Add_mE8C9DBF42FFBF23E98D07CC92A82777A0840B5AD_inline(L_8, L_11, List_1_Add_mE8C9DBF42FFBF23E98D07CC92A82777A0840B5AD_RuntimeMethod_var);
	}

IL_0036:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_003b:
	{
		int32_t L_13 = V_2;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_14 = __this->___m_RuntimeCalls_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_inline(L_14, List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_13) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_000b;
		}
	}
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_17 = __this->___m_RuntimeCalls_1;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_18 = V_0;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_19 = L_18;
		Predicate_1_t6F78EB768ADC7C118AD7254414DA44D4F6B69E55* L_20 = (Predicate_1_t6F78EB768ADC7C118AD7254414DA44D4F6B69E55*)il2cpp_codegen_object_new(Predicate_1_t6F78EB768ADC7C118AD7254414DA44D4F6B69E55_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Predicate_1__ctor_m1D0E12B18D9105FB553B42DAD351E9AD017B9E9B(L_20, L_19, (intptr_t)((void*)GetVirtualMethodInfo(L_19, 13)), NULL);
		NullCheck(L_17);
		int32_t L_21;
		L_21 = List_1_RemoveAll_m5411A629E03E3C36C002C5BE2CAFE5E82F6F9B30(L_17, L_20, List_1_RemoveAll_m5411A629E03E3C36C002C5BE2CAFE5E82F6F9B30_RuntimeMethod_var);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_22 = __this->___m_PersistentCalls_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_inline(L_22, List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_RuntimeMethod_var);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_24 = __this->___m_RuntimeCalls_1;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_inline(L_24, List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_RuntimeMethod_var);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_26 = (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*)il2cpp_codegen_object_new(List_1_t91E36549D76184780FD8995722CD4A87A2650C23_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		List_1__ctor_mA457A1677905C83AD674D55C89B663B126D8F0C7(L_26, ((int32_t)il2cpp_codegen_add(L_23, L_25)), List_1__ctor_mA457A1677905C83AD674D55C89B663B126D8F0C7_RuntimeMethod_var);
		V_1 = L_26;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_27 = V_1;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_28 = __this->___m_PersistentCalls_0;
		NullCheck(L_27);
		List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310(L_27, L_28, List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310_RuntimeMethod_var);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_29 = V_1;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_30 = __this->___m_RuntimeCalls_1;
		NullCheck(L_29);
		List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310(L_29, L_30, List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310_RuntimeMethod_var);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_31 = V_1;
		__this->___m_ExecutingCalls_2 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExecutingCalls_2), (void*)L_31);
		__this->___m_NeedsUpdate_3 = (bool)0;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_Clear_mD5CAE0A692736B31047AF342F735916CD635288F (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m3B1397CA37D9F44625CC7581B86878E36C1F8CCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDB467FD8BAC40A706631A0CEE456876DC4287A53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t91E36549D76184780FD8995722CD4A87A2650C23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* V_0 = NULL;
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_0 = __this->___m_RuntimeCalls_1;
		NullCheck(L_0);
		List_1_Clear_m3B1397CA37D9F44625CC7581B86878E36C1F8CCF_inline(L_0, List_1_Clear_m3B1397CA37D9F44625CC7581B86878E36C1F8CCF_RuntimeMethod_var);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_1 = __this->___m_PersistentCalls_0;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_2 = (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*)il2cpp_codegen_object_new(List_1_t91E36549D76184780FD8995722CD4A87A2650C23_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mDB467FD8BAC40A706631A0CEE456876DC4287A53(L_2, L_1, List_1__ctor_mDB467FD8BAC40A706631A0CEE456876DC4287A53_RuntimeMethod_var);
		V_0 = L_2;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_3 = V_0;
		__this->___m_ExecutingCalls_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExecutingCalls_2), (void*)L_3);
		__this->___m_NeedsUpdate_3 = (bool)0;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_ClearPersistent_m9A776CBBC13667875F1765B32B469BC12AFD4192 (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m3B1397CA37D9F44625CC7581B86878E36C1F8CCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDB467FD8BAC40A706631A0CEE456876DC4287A53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t91E36549D76184780FD8995722CD4A87A2650C23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* V_0 = NULL;
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_0 = __this->___m_PersistentCalls_0;
		NullCheck(L_0);
		List_1_Clear_m3B1397CA37D9F44625CC7581B86878E36C1F8CCF_inline(L_0, List_1_Clear_m3B1397CA37D9F44625CC7581B86878E36C1F8CCF_RuntimeMethod_var);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_1 = __this->___m_RuntimeCalls_1;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_2 = (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*)il2cpp_codegen_object_new(List_1_t91E36549D76184780FD8995722CD4A87A2650C23_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mDB467FD8BAC40A706631A0CEE456876DC4287A53(L_2, L_1, List_1__ctor_mDB467FD8BAC40A706631A0CEE456876DC4287A53_RuntimeMethod_var);
		V_0 = L_2;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_3 = V_0;
		__this->___m_ExecutingCalls_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExecutingCalls_2), (void*)L_3);
		__this->___m_NeedsUpdate_3 = (bool)0;
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t91E36549D76184780FD8995722CD4A87A2650C23* InvokableCallList_PrepareInvoke_m0CF5EBCDF4913AFC13CBE09F6CFB687D0F771301 (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m3B1397CA37D9F44625CC7581B86878E36C1F8CCF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* V_1 = NULL;
	{
		bool L_0 = __this->___m_NeedsUpdate_3;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_2 = __this->___m_ExecutingCalls_2;
		NullCheck(L_2);
		List_1_Clear_m3B1397CA37D9F44625CC7581B86878E36C1F8CCF_inline(L_2, List_1_Clear_m3B1397CA37D9F44625CC7581B86878E36C1F8CCF_RuntimeMethod_var);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_3 = __this->___m_ExecutingCalls_2;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_4 = __this->___m_PersistentCalls_0;
		NullCheck(L_3);
		List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310(L_3, L_4, List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310_RuntimeMethod_var);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_5 = __this->___m_ExecutingCalls_2;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_6 = __this->___m_RuntimeCalls_1;
		NullCheck(L_5);
		List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310(L_5, L_6, List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310_RuntimeMethod_var);
		__this->___m_NeedsUpdate_3 = (bool)0;
	}

IL_0044:
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_7 = __this->___m_ExecutingCalls_2;
		V_1 = L_7;
		goto IL_004d;
	}

IL_004d:
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_8 = V_1;
		return L_8;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList__ctor_mE70F25915B775E7258A12670B76C7F7B3C36BF1A (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t91E36549D76184780FD8995722CD4A87A2650C23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_0 = (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*)il2cpp_codegen_object_new(List_1_t91E36549D76184780FD8995722CD4A87A2650C23_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2(L_0, List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2_RuntimeMethod_var);
		__this->___m_PersistentCalls_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PersistentCalls_0), (void*)L_0);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_1 = (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*)il2cpp_codegen_object_new(List_1_t91E36549D76184780FD8995722CD4A87A2650C23_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2(L_1, List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2_RuntimeMethod_var);
		__this->___m_RuntimeCalls_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RuntimeCalls_1), (void*)L_1);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_2 = (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*)il2cpp_codegen_object_new(List_1_t91E36549D76184780FD8995722CD4A87A2650C23_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2(L_2, List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2_RuntimeMethod_var);
		__this->___m_ExecutingCalls_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExecutingCalls_2), (void*)L_2);
		__this->___m_NeedsUpdate_3 = (bool)1;
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
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase__ctor_mB1F958EAC1A7C4B31253F2E1FED173A628725DEC (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___m_CallsDirty_2 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* L_0 = (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382*)il2cpp_codegen_object_new(InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		InvokableCallList__ctor_mE70F25915B775E7258A12670B76C7F7B3C36BF1A(L_0, NULL);
		__this->___m_Calls_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Calls_0), (void*)L_0);
		PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* L_1 = (PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25*)il2cpp_codegen_object_new(PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PersistentCallGroup__ctor_m1B17318026E3D419B2C194F66882E3BED6C4200A(L_1, NULL);
		__this->___m_PersistentCalls_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PersistentCalls_1), (void*)L_1);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_mC47C72ED57A467E299925019E7DB9645D0F631F9 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) 
{
	{
		UnityEventBase_DirtyPersistentCalls_m356D77B4849FC63501507E4D3F1054BD86D6B1CF(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m835BA25C9F342C93FB9DF774C0894A82C4F049CB (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) 
{
	{
		UnityEventBase_DirtyPersistentCalls_m356D77B4849FC63501507E4D3F1054BD86D6B1CF(__this, NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* UnityEventBase_FindMethod_m0B00339CC16B63CF1C50714D018A87948FC0B23B (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* ___0_call, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_FindMethod_m0B00339CC16B63CF1C50714D018A87948FC0B23B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	MethodInfo_t* V_3 = NULL;
	Type_t* G_B3_0 = NULL;
	Type_t* G_B2_0 = NULL;
	Type_t* G_B7_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_2 = ___0_call;
		NullCheck(L_2);
		ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* L_3;
		L_3 = PersistentCall_get_arguments_mA3B29A1F4E7328523674ADC6FC0C7332BA053410(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m85640B88D8DA790019005A4ADD948E036ED79694(L_3, NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_7 = ___0_call;
		NullCheck(L_7);
		ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* L_8;
		L_8 = PersistentCall_get_arguments_mA3B29A1F4E7328523674ADC6FC0C7332BA053410(L_7, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m85640B88D8DA790019005A4ADD948E036ED79694(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = il2cpp_codegen_get_type(L_9, (bool)0, Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var, UnityEventBase_FindMethod_m0B00339CC16B63CF1C50714D018A87948FC0B23B_RuntimeMethod_var);
		Type_t* L_11 = L_10;
		G_B2_0 = L_11;
		if (L_11)
		{
			G_B3_0 = L_11;
			goto IL_0042;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		G_B3_0 = L_13;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_14 = ___0_call;
		NullCheck(L_14);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_15;
		L_15 = PersistentCall_get_target_mA12C3C9A21F6F5335761CB0EB3C7C965D8C393AE(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_16)
		{
			goto IL_005f;
		}
	}
	{
		PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_17 = ___0_call;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = PersistentCall_get_targetAssemblyTypeName_m303DE56BDE5CD469D0210E1EA73F54B4C88228BE(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = il2cpp_codegen_get_type(L_18, (bool)0, Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var, UnityEventBase_FindMethod_m0B00339CC16B63CF1C50714D018A87948FC0B23B_RuntimeMethod_var);
		G_B7_0 = L_19;
		goto IL_006a;
	}

IL_005f:
	{
		PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_20 = ___0_call;
		NullCheck(L_20);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_21;
		L_21 = PersistentCall_get_target_mA12C3C9A21F6F5335761CB0EB3C7C965D8C393AE(L_20, NULL);
		NullCheck(L_21);
		Type_t* L_22;
		L_22 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_21, NULL);
		G_B7_0 = L_22;
	}

IL_006a:
	{
		V_1 = G_B7_0;
		PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_23 = ___0_call;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = PersistentCall_get_methodName_mFD7F88289C9EF5DE6D7EFD3FEF1A5C640CBAF088(L_23, NULL);
		Type_t* L_25 = V_1;
		PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_26 = ___0_call;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = PersistentCall_get_mode_m3FFA4D4FC3DA0C38106323CD33ABBFA53ED01928(L_26, NULL);
		Type_t* L_28 = V_0;
		MethodInfo_t* L_29;
		L_29 = UnityEventBase_FindMethod_mE417FEA28EC49921FA28EBDAB1214B0E6EC7E91B(__this, L_24, L_25, L_27, L_28, NULL);
		V_3 = L_29;
		goto IL_0082;
	}

IL_0082:
	{
		MethodInfo_t* L_30 = V_3;
		return L_30;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Type,UnityEngine.Events.PersistentListenerMode,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* UnityEventBase_FindMethod_mE417FEA28EC49921FA28EBDAB1214B0E6EC7E91B (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, String_t* ___0_name, Type_t* ___1_listenerType, int32_t ___2_mode, Type_t* ___3_argumentType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MethodInfo_t* V_2 = NULL;
	Type_t* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B10_2 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B10_3 = NULL;
	String_t* G_B10_4 = NULL;
	Type_t* G_B10_5 = NULL;
	Type_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B9_2 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B9_3 = NULL;
	String_t* G_B9_4 = NULL;
	Type_t* G_B9_5 = NULL;
	{
		int32_t L_0 = ___2_mode;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002c;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_00c1;
			}
			case 3:
			{
				goto IL_006a;
			}
			case 4:
			{
				goto IL_004d;
			}
			case 5:
			{
				goto IL_00a4;
			}
			case 6:
			{
				goto IL_0087;
			}
		}
	}
	{
		goto IL_00e4;
	}

IL_002c:
	{
		String_t* L_3 = ___0_name;
		Type_t* L_4 = ___1_listenerType;
		MethodInfo_t* L_5;
		L_5 = VirtualFuncInvoker2< MethodInfo_t*, String_t*, Type_t* >::Invoke(6 /* System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Type) */, __this, L_3, L_4);
		V_2 = L_5;
		goto IL_00e8;
	}

IL_003a:
	{
		Type_t* L_6 = ___1_listenerType;
		String_t* L_7 = ___0_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_8 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)0);
		MethodInfo_t* L_9;
		L_9 = UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD(L_6, L_7, L_8, NULL);
		V_2 = L_9;
		goto IL_00e8;
	}

IL_004d:
	{
		Type_t* L_10 = ___1_listenerType;
		String_t* L_11 = ___0_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_12 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_15);
		MethodInfo_t* L_16;
		L_16 = UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD(L_10, L_11, L_13, NULL);
		V_2 = L_16;
		goto IL_00e8;
	}

IL_006a:
	{
		Type_t* L_17 = ___1_listenerType;
		String_t* L_18 = ___0_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_20 = L_19;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_22);
		MethodInfo_t* L_23;
		L_23 = UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD(L_17, L_18, L_20, NULL);
		V_2 = L_23;
		goto IL_00e8;
	}

IL_0087:
	{
		Type_t* L_24 = ___1_listenerType;
		String_t* L_25 = ___0_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_26 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_27 = L_26;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_29);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_29);
		MethodInfo_t* L_30;
		L_30 = UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD(L_24, L_25, L_27, NULL);
		V_2 = L_30;
		goto IL_00e8;
	}

IL_00a4:
	{
		Type_t* L_31 = ___1_listenerType;
		String_t* L_32 = ___0_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_33 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_34 = L_33;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_36);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_36);
		MethodInfo_t* L_37;
		L_37 = UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD(L_31, L_32, L_34, NULL);
		V_2 = L_37;
		goto IL_00e8;
	}

IL_00c1:
	{
		Type_t* L_38 = ___1_listenerType;
		String_t* L_39 = ___0_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_40 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_41 = L_40;
		Type_t* L_42 = ___3_argumentType;
		Type_t* L_43 = L_42;
		G_B9_0 = L_43;
		G_B9_1 = 0;
		G_B9_2 = L_41;
		G_B9_3 = L_41;
		G_B9_4 = L_39;
		G_B9_5 = L_38;
		if (L_43)
		{
			G_B10_0 = L_43;
			G_B10_1 = 0;
			G_B10_2 = L_41;
			G_B10_3 = L_41;
			G_B10_4 = L_39;
			G_B10_5 = L_38;
			goto IL_00db;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		G_B10_0 = L_45;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00db:
	{
		NullCheck(G_B10_2);
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		(G_B10_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B10_1), (Type_t*)G_B10_0);
		MethodInfo_t* L_46;
		L_46 = UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD(G_B10_5, G_B10_4, G_B10_3, NULL);
		V_2 = L_46;
		goto IL_00e8;
	}

IL_00e4:
	{
		V_2 = (MethodInfo_t*)NULL;
		goto IL_00e8;
	}

IL_00e8:
	{
		MethodInfo_t* L_47 = V_2;
		return L_47;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_DirtyPersistentCalls_m356D77B4849FC63501507E4D3F1054BD86D6B1CF (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) 
{
	{
		InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* L_0 = __this->___m_Calls_0;
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m9A776CBBC13667875F1765B32B469BC12AFD4192(L_0, NULL);
		__this->___m_CallsDirty_2 = (bool)1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RebuildPersistentCallsIfNeeded_m981B8A6658A88F620345D2C7F4ADCD0D788B0266 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_CallsDirty_2;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* L_2 = __this->___m_PersistentCalls_1;
		InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* L_3 = __this->___m_Calls_0;
		NullCheck(L_2);
		PersistentCallGroup_Initialize_m937649041F14D0D20F959B07BA099246EC32BCCB(L_2, L_3, __this, NULL);
		__this->___m_CallsDirty_2 = (bool)0;
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_AddCall_mA78C058ED530789A28F42347B653190FEC84DBBC (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* ___0_call, const RuntimeMethod* method) 
{
	{
		InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* L_0 = __this->___m_Calls_0;
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_1 = ___0_call;
		NullCheck(L_0);
		InvokableCallList_AddListener_m279B8BAED30DA27C305ADDF241F05CD2BC59625A(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveListener_mFF8F8FAD5F18BA872C3CE005DC134B6828E1AD3B (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, RuntimeObject* ___0_targetObj, MethodInfo_t* ___1_method, const RuntimeMethod* method) 
{
	{
		InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* L_0 = __this->___m_Calls_0;
		RuntimeObject* L_1 = ___0_targetObj;
		MethodInfo_t* L_2 = ___1_method;
		NullCheck(L_0);
		InvokableCallList_RemoveListener_m5C78FE9ECE5990F29636216E879139D5863F36C8(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) 
{
	{
		InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* L_0 = __this->___m_Calls_0;
		NullCheck(L_0);
		InvokableCallList_Clear_mD5CAE0A692736B31047AF342F735916CD635288F(L_0, NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t91E36549D76184780FD8995722CD4A87A2650C23* UnityEventBase_PrepareInvoke_m4D04FA5D7025C093047DCD3DFEEFB9DF48764FC2 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) 
{
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* V_0 = NULL;
	{
		UnityEventBase_RebuildPersistentCallsIfNeeded_m981B8A6658A88F620345D2C7F4ADCD0D788B0266(__this, NULL);
		InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* L_0 = __this->___m_Calls_0;
		NullCheck(L_0);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_1;
		L_1 = InvokableCallList_PrepareInvoke_m0CF5EBCDF4913AFC13CBE09F6CFB687D0F771301(L_0, NULL);
		V_0 = L_1;
		goto IL_0016;
	}

IL_0016:
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityEventBase_ToString_mE86F29D699C7537CACCAF3945F797EE659CE6522 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F(__this, NULL);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_2, NULL);
		V_0 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD (Type_t* ___0_objectType, String_t* ___1_functionName, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___2_argumentTypes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	bool V_1 = false;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_5 = NULL;
	int32_t V_6 = 0;
	ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* V_7 = NULL;
	Type_t* V_8 = NULL;
	Type_t* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	MethodInfo_t* V_12 = NULL;
	bool V_13 = false;
	int32_t G_B14_0 = 0;
	{
		goto IL_0091;
	}

IL_0006:
	{
		Type_t* L_0 = ___0_objectType;
		String_t* L_1 = ___1_functionName;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = ___2_argumentTypes;
		NullCheck(L_0);
		MethodInfo_t* L_3;
		L_3 = Type_GetMethod_mF3AF3FA3834D7F99592A4CA715FFD2DE12291562(L_0, L_1, ((int32_t)60), (Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*)NULL, L_2, (ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364*)NULL, NULL);
		V_0 = L_3;
		MethodInfo_t* L_4 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(MethodInfo_t*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0088;
		}
	}
	{
		MethodInfo_t* L_6 = V_0;
		NullCheck(L_6);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_7;
		L_7 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_6);
		V_2 = L_7;
		V_3 = (bool)1;
		V_4 = 0;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_8 = V_2;
		V_5 = L_8;
		V_6 = 0;
		goto IL_0073;
	}

IL_0032:
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_9 = V_5;
		int32_t L_10 = V_6;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_7 = L_12;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = ___2_argumentTypes;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Type_t* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_8 = L_16;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_17 = V_7;
		NullCheck(L_17);
		Type_t* L_18;
		L_18 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_17);
		V_9 = L_18;
		Type_t* L_19 = V_8;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_19, NULL);
		Type_t* L_21 = V_9;
		NullCheck(L_21);
		bool L_22;
		L_22 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_21, NULL);
		V_3 = (bool)((((int32_t)L_20) == ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_3;
		V_10 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_10;
		if (!L_24)
		{
			goto IL_0066;
		}
	}
	{
		goto IL_007b;
	}

IL_0066:
	{
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		int32_t L_26 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0073:
	{
		int32_t L_27 = V_6;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_28 = V_5;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_0032;
		}
	}

IL_007b:
	{
		bool L_29 = V_3;
		V_11 = L_29;
		bool L_30 = V_11;
		if (!L_30)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t* L_31 = V_0;
		V_12 = L_31;
		goto IL_00b3;
	}

IL_0087:
	{
	}

IL_0088:
	{
		Type_t* L_32 = ___0_objectType;
		NullCheck(L_32);
		Type_t* L_33;
		L_33 = VirtualFuncInvoker0< Type_t* >::Invoke(111 /* System.Type System.Type::get_BaseType() */, L_32);
		___0_objectType = L_33;
	}

IL_0091:
	{
		Type_t* L_34 = ___0_objectType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		if ((((RuntimeObject*)(Type_t*)L_34) == ((RuntimeObject*)(Type_t*)L_36)))
		{
			goto IL_00a4;
		}
	}
	{
		Type_t* L_37 = ___0_objectType;
		G_B14_0 = ((!(((RuntimeObject*)(Type_t*)L_37) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_00a5;
	}

IL_00a4:
	{
		G_B14_0 = 0;
	}

IL_00a5:
	{
		V_13 = (bool)G_B14_0;
		bool L_38 = V_13;
		if (L_38)
		{
			goto IL_0006;
		}
	}
	{
		V_12 = (MethodInfo_t*)NULL;
		goto IL_00b3;
	}

IL_00b3:
	{
		MethodInfo_t* L_39 = V_12;
		return L_39;
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
void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_Multicast(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* currentDelegate = reinterpret_cast<UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_OpenInst(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_OpenStatic(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_OpenStaticInvoker(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_ClosedStaticInvoker(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_Multicast;
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method) 
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
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_InvokeArray_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InvokeArray_3), (void*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		UnityEventBase__ctor_mB1F958EAC1A7C4B31253F2E1FED173A628725DEC(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) 
{
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = ___0_call;
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_1;
		L_1 = UnityEvent_GetDelegate_mBD5D37CFB826CB3329477A509A62BF7CE26A9EF8(L_0, NULL);
		UnityEventBase_AddCall_mA78C058ED530789A28F42347B653190FEC84DBBC(__this, L_1, NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* UnityEvent_FindMethod_Impl_m62E3D2795BACFF1BA2ED6A431ABD5FB2C7D3D681 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, String_t* ___0_name, Type_t* ___1_targetObjType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	{
		Type_t* L_0 = ___1_targetObjType;
		String_t* L_1 = ___0_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)0);
		MethodInfo_t* L_3;
		L_3 = UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		MethodInfo_t* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* UnityEvent_GetDelegate_m6665C6282D3668BC57F2702FD0C3B108F4CFD226 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, RuntimeObject* ___0_target, MethodInfo_t* ___1_theFunction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_target;
		MethodInfo_t* L_1 = ___1_theFunction;
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_2 = (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)il2cpp_codegen_object_new(InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvokableCall__ctor_mF3F94B432C977EE2DE7834EC2936E90D271C0464(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* UnityEvent_GetDelegate_mBD5D37CFB826CB3329477A509A62BF7CE26A9EF8 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* V_0 = NULL;
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = ___0_action;
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_1 = (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)il2cpp_codegen_object_new(InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InvokableCall__ctor_m4FA1428E3A33219B2C8C5C571A705AC6B862FA70(L_1, L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* V_2 = NULL;
	bool V_3 = false;
	InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_0;
		L_0 = UnityEventBase_PrepareInvoke_m4D04FA5D7025C093047DCD3DFEEFB9DF48764FC2(__this, NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0089;
	}

IL_000c:
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_3;
		L_3 = List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279(L_1, L_2, List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var);
		V_2 = ((InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)IsInstClass((RuntimeObject*)L_3, InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var));
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_6 = V_2;
		NullCheck(L_6);
		InvokableCall_Invoke_m6F4828FD2B3E3BBB7AA6EECC2C37FB08538363F4(L_6, NULL);
		goto IL_0084;
	}

IL_002b:
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_9;
		L_9 = List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279(L_7, L_8, List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var);
		V_4 = ((InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)IsInstClass((RuntimeObject*)L_9, InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var));
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_10 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_12 = V_4;
		NullCheck(L_12);
		InvokableCall_Invoke_m6F4828FD2B3E3BBB7AA6EECC2C37FB08538363F4(L_12, NULL);
		goto IL_0083;
	}

IL_004f:
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_15;
		L_15 = List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279(L_13, L_14, List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var);
		V_6 = L_15;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = __this->___m_InvokeArray_3;
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_16) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_0074;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___m_InvokeArray_3 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InvokeArray_3), (void*)L_18);
	}

IL_0074:
	{
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_19 = V_6;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = __this->___m_InvokeArray_3;
		NullCheck(L_19);
		VirtualActionInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, L_19, L_20);
	}

IL_0083:
	{
	}

IL_0084:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0089:
	{
		int32_t L_22 = V_1;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_inline(L_23, List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_22) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_8;
		if (L_25)
		{
			goto IL_000c;
		}
	}
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
// Conversion methods for marshalling of: UnityEngine.LowLevel.PlayerLoopSystemInternal
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke(const PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5& unmarshaled, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_pinvoke& marshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystemInternal': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_back(const PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_pinvoke& marshaled, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5& unmarshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystemInternal': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.LowLevel.PlayerLoopSystemInternal
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_cleanup(PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.LowLevel.PlayerLoopSystemInternal
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_com(const PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5& unmarshaled, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_com& marshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystemInternal': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_com_back(const PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_com& marshaled, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5& unmarshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystemInternal': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.LowLevel.PlayerLoopSystemInternal
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_com_cleanup(PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.LowLevel.PlayerLoopSystem
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_back(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.LowLevel.PlayerLoopSystem
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_cleanup(PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.LowLevel.PlayerLoopSystem
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com_back(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.LowLevel.PlayerLoopSystem
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com_cleanup(PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled)
{
}
// System.String UnityEngine.LowLevel.PlayerLoopSystem::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerLoopSystem_ToString_m259B8533D2C64C15D381B16F32C710A0018684A0 (PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___type_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* PlayerLoopSystem_ToString_m259B8533D2C64C15D381B16F32C710A0018684A0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = PlayerLoopSystem_ToString_m259B8533D2C64C15D381B16F32C710A0018684A0(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_Multicast(UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* currentDelegate = reinterpret_cast<UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_OpenInst(UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_OpenStatic(UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_OpenStaticInvoker(UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_ClosedStaticInvoker(UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4 (UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateFunction__ctor_m0D1D766F22D02176396DA6745A60EA046EE8227B (UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_Multicast;
}
// System.Void UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B (UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method) 
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
// UnityEngine.LowLevel.PlayerLoopSystem UnityEngine.LowLevel.PlayerLoop::GetCurrentPlayerLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F PlayerLoop_GetCurrentPlayerLoop_mDC8CBE388799E9CF78200030C101875B1ABD4BA3 (const RuntimeMethod* method) 
{
	PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2* V_0 = NULL;
	int32_t V_1 = 0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2* L_0;
		L_0 = PlayerLoop_GetCurrentPlayerLoopInternal_mED0E545AD7C15B7B47AC2379908B4F8A972F17D9(NULL);
		V_0 = L_0;
		V_1 = 0;
		PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2* L_1 = V_0;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_2;
		L_2 = PlayerLoop_InternalToPlayerLoopSystem_m09E701EA9E0676D6CAA0B1FCACBF568E5F50A53B(L_1, (&V_1), NULL);
		V_2 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_3 = V_2;
		return L_3;
	}
}
// System.Void UnityEngine.LowLevel.PlayerLoop::SetPlayerLoop(UnityEngine.LowLevel.PlayerLoopSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoop_SetPlayerLoop_m7D2DB1287D886B0AC17C24F86C897C82A813D01B (PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F ___0_loop, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF7A76508CD1157C08B24725F6EBF02A543C8C86F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0CF79D6ED4DC92AC7C615C8812EE882941929241_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C* V_0 = NULL;
	{
		List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C* L_0 = (List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C*)il2cpp_codegen_object_new(List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m0CF79D6ED4DC92AC7C615C8812EE882941929241(L_0, List_1__ctor_m0CF79D6ED4DC92AC7C615C8812EE882941929241_RuntimeMethod_var);
		V_0 = L_0;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_1 = ___0_loop;
		int32_t L_2;
		L_2 = PlayerLoop_PlayerLoopSystemToInternal_mD99CF5A6C54164E80A88E4C52EF1E4BCA2254D5B(L_1, (&V_0), NULL);
		List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C* L_3 = V_0;
		NullCheck(L_3);
		PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2* L_4;
		L_4 = List_1_ToArray_mF7A76508CD1157C08B24725F6EBF02A543C8C86F(L_3, List_1_ToArray_mF7A76508CD1157C08B24725F6EBF02A543C8C86F_RuntimeMethod_var);
		PlayerLoop_SetPlayerLoopInternal_m1643DAD5D8AF68D99B793D34A5F66C60C45BE5FA(L_4, NULL);
		return;
	}
}
// System.Int32 UnityEngine.LowLevel.PlayerLoop::PlayerLoopSystemToInternal(UnityEngine.LowLevel.PlayerLoopSystem,System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystemInternal>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerLoop_PlayerLoopSystemToInternal_mD99CF5A6C54164E80A88E4C52EF1E4BCA2254D5B (PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F ___0_sys, List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C** ___1_internalSys, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDB586A60ED2ED46DF3A5D908D7D5AC09B1B9AC2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m310B0D806832AA42537F42C5245707E84C468123_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m0F86EE963CEFB634508EE5D050332DB67B206F82_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	{
		List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C** L_0 = ___1_internalSys;
		List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C* L_1 = *((List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C**)L_0);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m310B0D806832AA42537F42C5245707E84C468123_inline(L_1, List_1_get_Count_m310B0D806832AA42537F42C5245707E84C468123_RuntimeMethod_var);
		V_0 = L_2;
		il2cpp_codegen_initobj((&V_2), sizeof(PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5));
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_3 = ___0_sys;
		Type_t* L_4 = L_3.___type_0;
		(&V_2)->___type_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___type_0), (void*)L_4);
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_5 = ___0_sys;
		UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* L_6 = L_5.___updateDelegate_2;
		(&V_2)->___updateDelegate_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___updateDelegate_1), (void*)L_6);
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_7 = ___0_sys;
		intptr_t L_8 = L_7.___updateFunction_3;
		(&V_2)->___updateFunction_2 = L_8;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_9 = ___0_sys;
		intptr_t L_10 = L_9.___loopConditionFunction_4;
		(&V_2)->___loopConditionFunction_3 = L_10;
		(&V_2)->___numSubSystems_4 = 0;
		PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5 L_11 = V_2;
		V_1 = L_11;
		List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C** L_12 = ___1_internalSys;
		List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C* L_13 = *((List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C**)L_12);
		PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5 L_14 = V_1;
		NullCheck(L_13);
		List_1_Add_mDB586A60ED2ED46DF3A5D908D7D5AC09B1B9AC2F_inline(L_13, L_14, List_1_Add_mDB586A60ED2ED46DF3A5D908D7D5AC09B1B9AC2F_RuntimeMethod_var);
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_15 = ___0_sys;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_16 = L_15.___subSystemList_1;
		V_3 = (bool)((!(((RuntimeObject*)(PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D*)L_16) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_00a4;
		}
	}
	{
		V_4 = 0;
		goto IL_0091;
	}

IL_006b:
	{
		int32_t* L_18 = (&(&V_1)->___numSubSystems_4);
		int32_t* L_19 = L_18;
		int32_t L_20 = *((int32_t*)L_19);
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_21 = ___0_sys;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_22 = L_21.___subSystemList_1;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C** L_26 = ___1_internalSys;
		int32_t L_27;
		L_27 = PlayerLoop_PlayerLoopSystemToInternal_mD99CF5A6C54164E80A88E4C52EF1E4BCA2254D5B(L_25, L_26, NULL);
		*((int32_t*)L_19) = (int32_t)((int32_t)il2cpp_codegen_add(L_20, L_27));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0091:
	{
		int32_t L_29 = V_4;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_30 = ___0_sys;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_31 = L_30.___subSystemList_1;
		NullCheck(L_31);
		V_5 = (bool)((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))))? 1 : 0);
		bool L_32 = V_5;
		if (L_32)
		{
			goto IL_006b;
		}
	}
	{
	}

IL_00a4:
	{
		List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C** L_33 = ___1_internalSys;
		List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C* L_34 = *((List_1_t61FF0139870BC4E4F0FE8DFF2CD4AB6482C0EA7C**)L_33);
		int32_t L_35 = V_0;
		PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5 L_36 = V_1;
		NullCheck(L_34);
		List_1_set_Item_m0F86EE963CEFB634508EE5D050332DB67B206F82(L_34, L_35, L_36, List_1_set_Item_m0F86EE963CEFB634508EE5D050332DB67B206F82_RuntimeMethod_var);
		PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5 L_37 = V_1;
		int32_t L_38 = L_37.___numSubSystems_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		goto IL_00ba;
	}

IL_00ba:
	{
		int32_t L_39 = V_6;
		return L_39;
	}
}
// UnityEngine.LowLevel.PlayerLoopSystem UnityEngine.LowLevel.PlayerLoop::InternalToPlayerLoopSystem(UnityEngine.LowLevel.PlayerLoopSystemInternal[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F PlayerLoop_InternalToPlayerLoopSystem_m09E701EA9E0676D6CAA0B1FCACBF568E5F50A53B (PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2* ___0_internalSys, int32_t* ___1_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m20B47157F68B2A1C1C92F34C111874885F78607A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF1B4B099D6EC830C7AE856231485FF238F2985E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFEECC8D3F82BB0A022FC84C60FE2CE3F0C456172_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	bool V_4 = false;
	List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* V_5 = NULL;
	bool V_6 = false;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		il2cpp_codegen_initobj((&V_2), sizeof(PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F));
		PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2* L_0 = ___0_internalSys;
		int32_t* L_1 = ___1_offset;
		int32_t L_2 = *((int32_t*)L_1);
		NullCheck(L_0);
		Type_t* L_3 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->___type_0;
		(&V_2)->___type_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___type_0), (void*)L_3);
		PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2* L_4 = ___0_internalSys;
		int32_t* L_5 = ___1_offset;
		int32_t L_6 = *((int32_t*)L_5);
		NullCheck(L_4);
		UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* L_7 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___updateDelegate_1;
		(&V_2)->___updateDelegate_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___updateDelegate_2), (void*)L_7);
		PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2* L_8 = ___0_internalSys;
		int32_t* L_9 = ___1_offset;
		int32_t L_10 = *((int32_t*)L_9);
		NullCheck(L_8);
		intptr_t L_11 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___updateFunction_2;
		(&V_2)->___updateFunction_3 = L_11;
		PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2* L_12 = ___0_internalSys;
		int32_t* L_13 = ___1_offset;
		int32_t L_14 = *((int32_t*)L_13);
		NullCheck(L_12);
		intptr_t L_15 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___loopConditionFunction_3;
		(&V_2)->___loopConditionFunction_4 = L_15;
		(&V_2)->___subSystemList_1 = (PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___subSystemList_1), (void*)(PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D*)NULL);
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_16 = V_2;
		V_0 = L_16;
		int32_t* L_17 = ___1_offset;
		int32_t* L_18 = ___1_offset;
		int32_t L_19 = *((int32_t*)L_18);
		V_3 = L_19;
		int32_t L_20 = V_3;
		*((int32_t*)L_17) = (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = V_3;
		V_1 = L_21;
		PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2* L_22 = ___0_internalSys;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___numSubSystems_4;
		V_4 = (bool)((((int32_t)L_24) > ((int32_t)0))? 1 : 0);
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00c5;
		}
	}
	{
		List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* L_26 = (List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52*)il2cpp_codegen_object_new(List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		List_1__ctor_mFEECC8D3F82BB0A022FC84C60FE2CE3F0C456172(L_26, List_1__ctor_mFEECC8D3F82BB0A022FC84C60FE2CE3F0C456172_RuntimeMethod_var);
		V_5 = L_26;
		goto IL_009b;
	}

IL_008c:
	{
		List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* L_27 = V_5;
		PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2* L_28 = ___0_internalSys;
		int32_t* L_29 = ___1_offset;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_30;
		L_30 = PlayerLoop_InternalToPlayerLoopSystem_m09E701EA9E0676D6CAA0B1FCACBF568E5F50A53B(L_28, L_29, NULL);
		NullCheck(L_27);
		List_1_Add_m20B47157F68B2A1C1C92F34C111874885F78607A_inline(L_27, L_30, List_1_Add_m20B47157F68B2A1C1C92F34C111874885F78607A_RuntimeMethod_var);
	}

IL_009b:
	{
		int32_t* L_31 = ___1_offset;
		int32_t L_32 = *((int32_t*)L_31);
		int32_t L_33 = V_1;
		PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2* L_34 = ___0_internalSys;
		int32_t L_35 = V_1;
		NullCheck(L_34);
		int32_t L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___numSubSystems_4;
		V_6 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)((int32_t)il2cpp_codegen_add(L_33, L_36))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_6;
		if (L_37)
		{
			goto IL_008c;
		}
	}
	{
		List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* L_38 = V_5;
		NullCheck(L_38);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_39;
		L_39 = List_1_ToArray_mF1B4B099D6EC830C7AE856231485FF238F2985E3(L_38, List_1_ToArray_mF1B4B099D6EC830C7AE856231485FF238F2985E3_RuntimeMethod_var);
		(&V_0)->___subSystemList_1 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___subSystemList_1), (void*)L_39);
	}

IL_00c5:
	{
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_40 = V_0;
		V_7 = L_40;
		goto IL_00ca;
	}

IL_00ca:
	{
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_41 = V_7;
		return L_41;
	}
}
// UnityEngine.LowLevel.PlayerLoopSystemInternal[] UnityEngine.LowLevel.PlayerLoop::GetCurrentPlayerLoopInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2* PlayerLoop_GetCurrentPlayerLoopInternal_mED0E545AD7C15B7B47AC2379908B4F8A972F17D9 (const RuntimeMethod* method) 
{
	typedef PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2* (*PlayerLoop_GetCurrentPlayerLoopInternal_mED0E545AD7C15B7B47AC2379908B4F8A972F17D9_ftn) ();
	static PlayerLoop_GetCurrentPlayerLoopInternal_mED0E545AD7C15B7B47AC2379908B4F8A972F17D9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerLoop_GetCurrentPlayerLoopInternal_mED0E545AD7C15B7B47AC2379908B4F8A972F17D9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LowLevel.PlayerLoop::GetCurrentPlayerLoopInternal()");
	PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.LowLevel.PlayerLoop::SetPlayerLoopInternal(UnityEngine.LowLevel.PlayerLoopSystemInternal[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoop_SetPlayerLoopInternal_m1643DAD5D8AF68D99B793D34A5F66C60C45BE5FA (PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2* ___0_loop, const RuntimeMethod* method) 
{
	typedef void (*PlayerLoop_SetPlayerLoopInternal_m1643DAD5D8AF68D99B793D34A5F66C60C45BE5FA_ftn) (PlayerLoopSystemInternalU5BU5D_t6C9774968F967497DF539D2DAE757A59E972F5B2*);
	static PlayerLoop_SetPlayerLoopInternal_m1643DAD5D8AF68D99B793D34A5F66C60C45BE5FA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerLoop_SetPlayerLoopInternal_m1643DAD5D8AF68D99B793D34A5F66C60C45BE5FA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LowLevel.PlayerLoop::SetPlayerLoopInternal(UnityEngine.LowLevel.PlayerLoopSystemInternal[])");
	_il2cpp_icall_func(___0_loop);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->____size_2;
		V_0 = L_2;
		__this->____size_2 = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}

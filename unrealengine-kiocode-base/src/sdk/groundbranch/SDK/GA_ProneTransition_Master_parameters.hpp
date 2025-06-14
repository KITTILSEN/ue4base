﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ProneTransition_Master

#include "Basic.hpp"


namespace SDK::Params
{

// Function GA_ProneTransition_Master.GA_ProneTransition_Master_C.ExecuteUbergraph_GA_ProneTransition_Master
// 0x0098 (0x0098 - 0x0000)
struct GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBCharacter*                           K2Node_DynamicCast_AsGBCharacter;                  // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UAnimInstance>              CallFunc_GetCurrentAnimLayerClass_ReturnValue;     // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UGBCharAnimInstance*                    K2Node_DynamicCast_AsGBChar_Anim_Instance;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_GetMontageFromLinkedLayer_ReturnValue;    // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master) == 0x000008, "Wrong alignment on GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master");
static_assert(sizeof(GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master) == 0x000098, "Wrong size on GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master");
static_assert(offsetof(GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master, EntryPoint) == 0x000000, "Member 'GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000048, "Member 'GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master, K2Node_DynamicCast_AsGBCharacter) == 0x000050, "Member 'GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master::K2Node_DynamicCast_AsGBCharacter' has a wrong offset!");
static_assert(offsetof(GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master, CallFunc_GetAnimInstance_ReturnValue) == 0x000060, "Member 'GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master, CallFunc_GetCurrentAnimLayerClass_ReturnValue) == 0x000068, "Member 'GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master::CallFunc_GetCurrentAnimLayerClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master, K2Node_DynamicCast_AsGBChar_Anim_Instance) == 0x000070, "Member 'GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master::K2Node_DynamicCast_AsGBChar_Anim_Instance' has a wrong offset!");
static_assert(offsetof(GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master, CallFunc_GetMontageFromLinkedLayer_ReturnValue) == 0x000080, "Member 'GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master::CallFunc_GetMontageFromLinkedLayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000088, "Member 'GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'GA_ProneTransition_Master_C_ExecuteUbergraph_GA_ProneTransition_Master::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Explosion_BreachingCharge

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Explosion_BreachingCharge.BP_Explosion_BreachingCharge_C.ExecuteUbergraph_BP_Explosion_BreachingCharge
// 0x0100 (0x0100 - 0x0000)
struct BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable; // 0x0004(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGBPlayerCameraManager*                 K2Node_DynamicCast_AsGBPlayer_Camera_Manager;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0xF];                                       // 0x0041(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_Conv_VectorToTransform_ReturnValue;       // 0x0050(0x0030)(IsPlainOldData, NoDestructor)
	class FName                                   CallFunc_GetCameraStyle_ReturnValue;               // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_StunEffect_SoundOnly_C*             CallFunc_FinishSpawningActor_ReturnValue;          // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           K2Node_CustomEvent_Target;                         // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetSpatialAudioVolumeTag_ReturnValue;     // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge) == 0x000010, "Wrong alignment on BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge");
static_assert(sizeof(BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge) == 0x000100, "Wrong size on BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge");
static_assert(offsetof(BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge, EntryPoint) == 0x000000, "Member 'BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge, Temp_delegate_Variable) == 0x000004, "Member 'BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000014, "Member 'BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000020, "Member 'BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge, CallFunc_Add_VectorVector_ReturnValue) == 0x000028, "Member 'BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge, K2Node_DynamicCast_AsGBPlayer_Camera_Manager) == 0x000038, "Member 'BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge::K2Node_DynamicCast_AsGBPlayer_Camera_Manager' has a wrong offset!");
static_assert(offsetof(BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge, CallFunc_Conv_VectorToTransform_ReturnValue) == 0x000050, "Member 'BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge::CallFunc_Conv_VectorToTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge, CallFunc_GetCameraStyle_ReturnValue) == 0x000080, "Member 'BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge::CallFunc_GetCameraStyle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000088, "Member 'BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000090, "Member 'BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge, CallFunc_FinishSpawningActor_ReturnValue) == 0x000098, "Member 'BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0000A0, "Member 'BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000AC, "Member 'BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x0000B8, "Member 'BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge, K2Node_CustomEvent_Target) == 0x0000C0, "Member 'BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge::K2Node_CustomEvent_Target' has a wrong offset!");
static_assert(offsetof(BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0000C8, "Member 'BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge, CallFunc_PostAkEvent_ReturnValue) == 0x0000D4, "Member 'BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge, CallFunc_GetSpatialAudioVolumeTag_ReturnValue) == 0x0000D8, "Member 'BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge::CallFunc_GetSpatialAudioVolumeTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge, CallFunc_Conv_NameToString_ReturnValue) == 0x0000E0, "Member 'BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge, CallFunc_IsDedicatedServer_ReturnValue) == 0x0000F0, "Member 'BP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");

// Function BP_Explosion_BreachingCharge.BP_Explosion_BreachingCharge_C.PlayExplosionSoundOnComponent
// 0x0008 (0x0008 - 0x0000)
struct BP_Explosion_BreachingCharge_C_PlayExplosionSoundOnComponent final
{
public:
	class UAkComponent*                           Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Explosion_BreachingCharge_C_PlayExplosionSoundOnComponent) == 0x000008, "Wrong alignment on BP_Explosion_BreachingCharge_C_PlayExplosionSoundOnComponent");
static_assert(sizeof(BP_Explosion_BreachingCharge_C_PlayExplosionSoundOnComponent) == 0x000008, "Wrong size on BP_Explosion_BreachingCharge_C_PlayExplosionSoundOnComponent");
static_assert(offsetof(BP_Explosion_BreachingCharge_C_PlayExplosionSoundOnComponent, Target) == 0x000000, "Member 'BP_Explosion_BreachingCharge_C_PlayExplosionSoundOnComponent::Target' has a wrong offset!");

}


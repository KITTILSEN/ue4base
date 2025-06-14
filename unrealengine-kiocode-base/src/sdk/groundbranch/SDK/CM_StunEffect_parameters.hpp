﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_StunEffect

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function CM_StunEffect.CM_StunEffect_C.ExecuteUbergraph_CM_StunEffect
// 0x0038 (0x0038 - 0x0000)
struct CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGBPlayerCameraManager*                 K2Node_Event_GBPlayerCameraManager;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RemoveCameraModifier_ReturnValue;         // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AGBPlayerCameraManager*                 K2Node_Event_GBPlayerCameraManager_1;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveCameraModifier_ReturnValue_1;       // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect) == 0x000008, "Wrong alignment on CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect");
static_assert(sizeof(CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect) == 0x000038, "Wrong size on CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect");
static_assert(offsetof(CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect, EntryPoint) == 0x000000, "Member 'CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect::EntryPoint' has a wrong offset!");
static_assert(offsetof(CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect, K2Node_Event_GBPlayerCameraManager) == 0x000008, "Member 'CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect::K2Node_Event_GBPlayerCameraManager' has a wrong offset!");
static_assert(offsetof(CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect, CallFunc_GetViewTarget_ReturnValue) == 0x000010, "Member 'CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect::CallFunc_GetViewTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect, CallFunc_GetViewTarget_ReturnValue_1) == 0x000018, "Member 'CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect::CallFunc_GetViewTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000021, "Member 'CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect, CallFunc_RemoveCameraModifier_ReturnValue) == 0x000022, "Member 'CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect::CallFunc_RemoveCameraModifier_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect, K2Node_Event_GBPlayerCameraManager_1) == 0x000028, "Member 'CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect::K2Node_Event_GBPlayerCameraManager_1' has a wrong offset!");
static_assert(offsetof(CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect, K2Node_Event_DeltaTime) == 0x000030, "Member 'CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect, CallFunc_RemoveCameraModifier_ReturnValue_1) == 0x000034, "Member 'CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect::CallFunc_RemoveCameraModifier_ReturnValue_1' has a wrong offset!");

// Function CM_StunEffect.CM_StunEffect_C.BlueprintAddedToCamera
// 0x0008 (0x0008 - 0x0000)
struct CM_StunEffect_C_BlueprintAddedToCamera final
{
public:
	class AGBPlayerCameraManager*                 GBPlayerCameraManager;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CM_StunEffect_C_BlueprintAddedToCamera) == 0x000008, "Wrong alignment on CM_StunEffect_C_BlueprintAddedToCamera");
static_assert(sizeof(CM_StunEffect_C_BlueprintAddedToCamera) == 0x000008, "Wrong size on CM_StunEffect_C_BlueprintAddedToCamera");
static_assert(offsetof(CM_StunEffect_C_BlueprintAddedToCamera, GBPlayerCameraManager) == 0x000000, "Member 'CM_StunEffect_C_BlueprintAddedToCamera::GBPlayerCameraManager' has a wrong offset!");

// Function CM_StunEffect.CM_StunEffect_C.BlueprintPreApplyCameraModifier
// 0x0010 (0x0010 - 0x0000)
struct CM_StunEffect_C_BlueprintPreApplyCameraModifier final
{
public:
	class AGBPlayerCameraManager*                 GBPlayerCameraManager;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaTime;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CM_StunEffect_C_BlueprintPreApplyCameraModifier) == 0x000008, "Wrong alignment on CM_StunEffect_C_BlueprintPreApplyCameraModifier");
static_assert(sizeof(CM_StunEffect_C_BlueprintPreApplyCameraModifier) == 0x000010, "Wrong size on CM_StunEffect_C_BlueprintPreApplyCameraModifier");
static_assert(offsetof(CM_StunEffect_C_BlueprintPreApplyCameraModifier, GBPlayerCameraManager) == 0x000000, "Member 'CM_StunEffect_C_BlueprintPreApplyCameraModifier::GBPlayerCameraManager' has a wrong offset!");
static_assert(offsetof(CM_StunEffect_C_BlueprintPreApplyCameraModifier, DeltaTime) == 0x000008, "Member 'CM_StunEffect_C_BlueprintPreApplyCameraModifier::DeltaTime' has a wrong offset!");

// Function CM_StunEffect.CM_StunEffect_C.BlueprintModifyPostProcess
// 0x0AF0 (0x0AF0 - 0x0000)
struct CM_StunEffect_C_BlueprintModifyPostProcess final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PostProcessBlendWeight;                            // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   PostProcessSettings;                               // 0x0010(0x0560)(Parm, OutParm)
	TArray<struct FWeightedBlendable>             K2Node_MakeArray_Array;                            // 0x0570(0x0010)(ReferenceParm)
	struct FWeightedBlendables                    K2Node_MakeStruct_WeightedBlendables;              // 0x0580(0x0010)()
	struct FPostProcessSettings                   K2Node_MakeStruct_PostProcessSettings;             // 0x0590(0x0560)()
};
static_assert(alignof(CM_StunEffect_C_BlueprintModifyPostProcess) == 0x000010, "Wrong alignment on CM_StunEffect_C_BlueprintModifyPostProcess");
static_assert(sizeof(CM_StunEffect_C_BlueprintModifyPostProcess) == 0x000AF0, "Wrong size on CM_StunEffect_C_BlueprintModifyPostProcess");
static_assert(offsetof(CM_StunEffect_C_BlueprintModifyPostProcess, DeltaTime) == 0x000000, "Member 'CM_StunEffect_C_BlueprintModifyPostProcess::DeltaTime' has a wrong offset!");
static_assert(offsetof(CM_StunEffect_C_BlueprintModifyPostProcess, PostProcessBlendWeight) == 0x000004, "Member 'CM_StunEffect_C_BlueprintModifyPostProcess::PostProcessBlendWeight' has a wrong offset!");
static_assert(offsetof(CM_StunEffect_C_BlueprintModifyPostProcess, PostProcessSettings) == 0x000010, "Member 'CM_StunEffect_C_BlueprintModifyPostProcess::PostProcessSettings' has a wrong offset!");
static_assert(offsetof(CM_StunEffect_C_BlueprintModifyPostProcess, K2Node_MakeArray_Array) == 0x000570, "Member 'CM_StunEffect_C_BlueprintModifyPostProcess::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CM_StunEffect_C_BlueprintModifyPostProcess, K2Node_MakeStruct_WeightedBlendables) == 0x000580, "Member 'CM_StunEffect_C_BlueprintModifyPostProcess::K2Node_MakeStruct_WeightedBlendables' has a wrong offset!");
static_assert(offsetof(CM_StunEffect_C_BlueprintModifyPostProcess, K2Node_MakeStruct_PostProcessSettings) == 0x000590, "Member 'CM_StunEffect_C_BlueprintModifyPostProcess::K2Node_MakeStruct_PostProcessSettings' has a wrong offset!");

}


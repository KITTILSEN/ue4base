﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_GrenadeBlinkEffect

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function CM_GrenadeBlinkEffect.CM_GrenadeBlinkEffect_C.BlueprintModifyPostProcess
// 0x0AF0 (0x0AF0 - 0x0000)
struct CM_GrenadeBlinkEffect_C_BlueprintModifyPostProcess final
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
static_assert(alignof(CM_GrenadeBlinkEffect_C_BlueprintModifyPostProcess) == 0x000010, "Wrong alignment on CM_GrenadeBlinkEffect_C_BlueprintModifyPostProcess");
static_assert(sizeof(CM_GrenadeBlinkEffect_C_BlueprintModifyPostProcess) == 0x000AF0, "Wrong size on CM_GrenadeBlinkEffect_C_BlueprintModifyPostProcess");
static_assert(offsetof(CM_GrenadeBlinkEffect_C_BlueprintModifyPostProcess, DeltaTime) == 0x000000, "Member 'CM_GrenadeBlinkEffect_C_BlueprintModifyPostProcess::DeltaTime' has a wrong offset!");
static_assert(offsetof(CM_GrenadeBlinkEffect_C_BlueprintModifyPostProcess, PostProcessBlendWeight) == 0x000004, "Member 'CM_GrenadeBlinkEffect_C_BlueprintModifyPostProcess::PostProcessBlendWeight' has a wrong offset!");
static_assert(offsetof(CM_GrenadeBlinkEffect_C_BlueprintModifyPostProcess, PostProcessSettings) == 0x000010, "Member 'CM_GrenadeBlinkEffect_C_BlueprintModifyPostProcess::PostProcessSettings' has a wrong offset!");
static_assert(offsetof(CM_GrenadeBlinkEffect_C_BlueprintModifyPostProcess, K2Node_MakeArray_Array) == 0x000570, "Member 'CM_GrenadeBlinkEffect_C_BlueprintModifyPostProcess::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CM_GrenadeBlinkEffect_C_BlueprintModifyPostProcess, K2Node_MakeStruct_WeightedBlendables) == 0x000580, "Member 'CM_GrenadeBlinkEffect_C_BlueprintModifyPostProcess::K2Node_MakeStruct_WeightedBlendables' has a wrong offset!");
static_assert(offsetof(CM_GrenadeBlinkEffect_C_BlueprintModifyPostProcess, K2Node_MakeStruct_PostProcessSettings) == 0x000590, "Member 'CM_GrenadeBlinkEffect_C_BlueprintModifyPostProcess::K2Node_MakeStruct_PostProcessSettings' has a wrong offset!");

}


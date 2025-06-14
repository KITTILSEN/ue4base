﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Jimmy_CJ20

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Jimmy_CJ20.BP_Jimmy_CJ20_C.ExecuteUbergraph_BP_Jimmy_CJ20
// 0x0004 (0x0004 - 0x0000)
struct BP_Jimmy_CJ20_C_ExecuteUbergraph_BP_Jimmy_CJ20 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Jimmy_CJ20_C_ExecuteUbergraph_BP_Jimmy_CJ20) == 0x000004, "Wrong alignment on BP_Jimmy_CJ20_C_ExecuteUbergraph_BP_Jimmy_CJ20");
static_assert(sizeof(BP_Jimmy_CJ20_C_ExecuteUbergraph_BP_Jimmy_CJ20) == 0x000004, "Wrong size on BP_Jimmy_CJ20_C_ExecuteUbergraph_BP_Jimmy_CJ20");
static_assert(offsetof(BP_Jimmy_CJ20_C_ExecuteUbergraph_BP_Jimmy_CJ20, EntryPoint) == 0x000000, "Member 'BP_Jimmy_CJ20_C_ExecuteUbergraph_BP_Jimmy_CJ20::EntryPoint' has a wrong offset!");

// Function BP_Jimmy_CJ20.BP_Jimmy_CJ20_C.UserConstructionScript
// 0x0170 (0x0170 - 0x0000)
struct BP_Jimmy_CJ20_C_UserConstructionScript final
{
public:
	class FName                                   Temp_name_Variable;                                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default;                             // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_Select_Default_1;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x004C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult_1;     // 0x00E4(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_Jimmy_CJ20_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_Jimmy_CJ20_C_UserConstructionScript");
static_assert(sizeof(BP_Jimmy_CJ20_C_UserConstructionScript) == 0x000170, "Wrong size on BP_Jimmy_CJ20_C_UserConstructionScript");
static_assert(offsetof(BP_Jimmy_CJ20_C_UserConstructionScript, Temp_name_Variable) == 0x000000, "Member 'BP_Jimmy_CJ20_C_UserConstructionScript::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_Jimmy_CJ20_C_UserConstructionScript, Temp_bool_Variable) == 0x000008, "Member 'BP_Jimmy_CJ20_C_UserConstructionScript::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_Jimmy_CJ20_C_UserConstructionScript, Temp_object_Variable) == 0x000010, "Member 'BP_Jimmy_CJ20_C_UserConstructionScript::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_Jimmy_CJ20_C_UserConstructionScript, Temp_object_Variable_1) == 0x000018, "Member 'BP_Jimmy_CJ20_C_UserConstructionScript::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Jimmy_CJ20_C_UserConstructionScript, Temp_name_Variable_1) == 0x000020, "Member 'BP_Jimmy_CJ20_C_UserConstructionScript::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Jimmy_CJ20_C_UserConstructionScript, Temp_bool_Variable_1) == 0x000028, "Member 'BP_Jimmy_CJ20_C_UserConstructionScript::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Jimmy_CJ20_C_UserConstructionScript, K2Node_Select_Default) == 0x00002C, "Member 'BP_Jimmy_CJ20_C_UserConstructionScript::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_Jimmy_CJ20_C_UserConstructionScript, K2Node_Select_Default_1) == 0x000038, "Member 'BP_Jimmy_CJ20_C_UserConstructionScript::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_Jimmy_CJ20_C_UserConstructionScript, CallFunc_MakeRotator_ReturnValue) == 0x000040, "Member 'BP_Jimmy_CJ20_C_UserConstructionScript::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Jimmy_CJ20_C_UserConstructionScript, CallFunc_K2_AddLocalRotation_SweepHitResult) == 0x00004C, "Member 'BP_Jimmy_CJ20_C_UserConstructionScript::CallFunc_K2_AddLocalRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Jimmy_CJ20_C_UserConstructionScript, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000D4, "Member 'BP_Jimmy_CJ20_C_UserConstructionScript::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Jimmy_CJ20_C_UserConstructionScript, CallFunc_MakeRotator_ReturnValue_1) == 0x0000D8, "Member 'BP_Jimmy_CJ20_C_UserConstructionScript::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Jimmy_CJ20_C_UserConstructionScript, CallFunc_K2_AddLocalRotation_SweepHitResult_1) == 0x0000E4, "Member 'BP_Jimmy_CJ20_C_UserConstructionScript::CallFunc_K2_AddLocalRotation_SweepHitResult_1' has a wrong offset!");

}


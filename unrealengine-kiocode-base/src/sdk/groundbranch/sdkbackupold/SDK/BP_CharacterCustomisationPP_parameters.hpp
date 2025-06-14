﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharacterCustomisationPP

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_CharacterCustomisationPP.BP_CharacterCustomisationPP_C.ExecuteUbergraph_BP_CharacterCustomisationPP
// 0x0018 (0x0018 - 0x0000)
struct BP_CharacterCustomisationPP_C_ExecuteUbergraph_BP_CharacterCustomisationPP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_GBSkyActor_C*                       CallFunc_GetActorOfClass_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bNewEnabled;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CharacterCustomisationPP_C_ExecuteUbergraph_BP_CharacterCustomisationPP) == 0x000008, "Wrong alignment on BP_CharacterCustomisationPP_C_ExecuteUbergraph_BP_CharacterCustomisationPP");
static_assert(sizeof(BP_CharacterCustomisationPP_C_ExecuteUbergraph_BP_CharacterCustomisationPP) == 0x000018, "Wrong size on BP_CharacterCustomisationPP_C_ExecuteUbergraph_BP_CharacterCustomisationPP");
static_assert(offsetof(BP_CharacterCustomisationPP_C_ExecuteUbergraph_BP_CharacterCustomisationPP, EntryPoint) == 0x000000, "Member 'BP_CharacterCustomisationPP_C_ExecuteUbergraph_BP_CharacterCustomisationPP::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CharacterCustomisationPP_C_ExecuteUbergraph_BP_CharacterCustomisationPP, CallFunc_GetActorOfClass_ReturnValue) == 0x000008, "Member 'BP_CharacterCustomisationPP_C_ExecuteUbergraph_BP_CharacterCustomisationPP::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterCustomisationPP_C_ExecuteUbergraph_BP_CharacterCustomisationPP, K2Node_CustomEvent_bNewEnabled) == 0x000010, "Member 'BP_CharacterCustomisationPP_C_ExecuteUbergraph_BP_CharacterCustomisationPP::K2Node_CustomEvent_bNewEnabled' has a wrong offset!");
static_assert(offsetof(BP_CharacterCustomisationPP_C_ExecuteUbergraph_BP_CharacterCustomisationPP, CallFunc_Not_PreBool_ReturnValue) == 0x000011, "Member 'BP_CharacterCustomisationPP_C_ExecuteUbergraph_BP_CharacterCustomisationPP::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_CharacterCustomisationPP.BP_CharacterCustomisationPP_C.SwitchCharacterCustomisationPostProcess
// 0x0001 (0x0001 - 0x0000)
struct BP_CharacterCustomisationPP_C_SwitchCharacterCustomisationPostProcess final
{
public:
	bool                                          bNewEnabled;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CharacterCustomisationPP_C_SwitchCharacterCustomisationPostProcess) == 0x000001, "Wrong alignment on BP_CharacterCustomisationPP_C_SwitchCharacterCustomisationPostProcess");
static_assert(sizeof(BP_CharacterCustomisationPP_C_SwitchCharacterCustomisationPostProcess) == 0x000001, "Wrong size on BP_CharacterCustomisationPP_C_SwitchCharacterCustomisationPostProcess");
static_assert(offsetof(BP_CharacterCustomisationPP_C_SwitchCharacterCustomisationPostProcess, bNewEnabled) == 0x000000, "Member 'BP_CharacterCustomisationPP_C_SwitchCharacterCustomisationPostProcess::bNewEnabled' has a wrong offset!");

}


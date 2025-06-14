﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_SpawnAreaWarning

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCN_SpawnAreaWarning.GCN_SpawnAreaWarning_C.WhileActive
// 0x00E8 (0x00E8 - 0x0000)
struct GCN_SpawnAreaWarning_C_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00C0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CA[0x6];                                       // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_SpawnProtectionWarning_C*          CallFunc_Create_ReturnValue;                       // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_SpawnProtectionWarning_C*          CallFunc_GetFirstWidgetOfClass_ReturnValue;        // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCN_SpawnAreaWarning_C_WhileActive) == 0x000008, "Wrong alignment on GCN_SpawnAreaWarning_C_WhileActive");
static_assert(sizeof(GCN_SpawnAreaWarning_C_WhileActive) == 0x0000E8, "Wrong size on GCN_SpawnAreaWarning_C_WhileActive");
static_assert(offsetof(GCN_SpawnAreaWarning_C_WhileActive, MyTarget) == 0x000000, "Member 'GCN_SpawnAreaWarning_C_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_SpawnAreaWarning_C_WhileActive, Parameters) == 0x000008, "Member 'GCN_SpawnAreaWarning_C_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_SpawnAreaWarning_C_WhileActive, ReturnValue) == 0x0000C8, "Member 'GCN_SpawnAreaWarning_C_WhileActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_SpawnAreaWarning_C_WhileActive, CallFunc_IsValid_ReturnValue) == 0x0000C9, "Member 'GCN_SpawnAreaWarning_C_WhileActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_SpawnAreaWarning_C_WhileActive, CallFunc_Create_ReturnValue) == 0x0000D0, "Member 'GCN_SpawnAreaWarning_C_WhileActive::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_SpawnAreaWarning_C_WhileActive, CallFunc_GetFirstWidgetOfClass_ReturnValue) == 0x0000D8, "Member 'GCN_SpawnAreaWarning_C_WhileActive::CallFunc_GetFirstWidgetOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_SpawnAreaWarning_C_WhileActive, CallFunc_IsValid_ReturnValue_1) == 0x0000E0, "Member 'GCN_SpawnAreaWarning_C_WhileActive::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_SpawnAreaWarning_C_WhileActive, CallFunc_Not_PreBool_ReturnValue) == 0x0000E1, "Member 'GCN_SpawnAreaWarning_C_WhileActive::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function GCN_SpawnAreaWarning.GCN_SpawnAreaWarning_C.OnRemove
// 0x00D0 (0x00D0 - 0x0000)
struct GCN_SpawnAreaWarning_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00C0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCN_SpawnAreaWarning_C_OnRemove) == 0x000008, "Wrong alignment on GCN_SpawnAreaWarning_C_OnRemove");
static_assert(sizeof(GCN_SpawnAreaWarning_C_OnRemove) == 0x0000D0, "Wrong size on GCN_SpawnAreaWarning_C_OnRemove");
static_assert(offsetof(GCN_SpawnAreaWarning_C_OnRemove, MyTarget) == 0x000000, "Member 'GCN_SpawnAreaWarning_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_SpawnAreaWarning_C_OnRemove, Parameters) == 0x000008, "Member 'GCN_SpawnAreaWarning_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_SpawnAreaWarning_C_OnRemove, ReturnValue) == 0x0000C8, "Member 'GCN_SpawnAreaWarning_C_OnRemove::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_SpawnAreaWarning_C_OnRemove, CallFunc_IsValid_ReturnValue) == 0x0000C9, "Member 'GCN_SpawnAreaWarning_C_OnRemove::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}


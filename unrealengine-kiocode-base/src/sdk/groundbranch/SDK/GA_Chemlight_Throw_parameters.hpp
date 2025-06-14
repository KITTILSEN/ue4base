﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Chemlight_Throw

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Chemlight_Throw.GA_Chemlight_Throw_C.ExecuteUbergraph_GA_Chemlight_Throw
// 0x0198 (0x0198 - 0x0000)
struct GA_Chemlight_Throw_C_ExecuteUbergraph_GA_Chemlight_Throw final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Chemlight_C*                        K2Node_DynamicCast_AsBP_Chemlight;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;  // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0028(0x00B0)()
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00D8(0x00B0)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Chemlight_Throw_C_ExecuteUbergraph_GA_Chemlight_Throw) == 0x000008, "Wrong alignment on GA_Chemlight_Throw_C_ExecuteUbergraph_GA_Chemlight_Throw");
static_assert(sizeof(GA_Chemlight_Throw_C_ExecuteUbergraph_GA_Chemlight_Throw) == 0x000198, "Wrong size on GA_Chemlight_Throw_C_ExecuteUbergraph_GA_Chemlight_Throw");
static_assert(offsetof(GA_Chemlight_Throw_C_ExecuteUbergraph_GA_Chemlight_Throw, EntryPoint) == 0x000000, "Member 'GA_Chemlight_Throw_C_ExecuteUbergraph_GA_Chemlight_Throw::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Chemlight_Throw_C_ExecuteUbergraph_GA_Chemlight_Throw, K2Node_DynamicCast_AsBP_Chemlight) == 0x000008, "Member 'GA_Chemlight_Throw_C_ExecuteUbergraph_GA_Chemlight_Throw::K2Node_DynamicCast_AsBP_Chemlight' has a wrong offset!");
static_assert(offsetof(GA_Chemlight_Throw_C_ExecuteUbergraph_GA_Chemlight_Throw, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'GA_Chemlight_Throw_C_ExecuteUbergraph_GA_Chemlight_Throw::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Chemlight_Throw_C_ExecuteUbergraph_GA_Chemlight_Throw, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'GA_Chemlight_Throw_C_ExecuteUbergraph_GA_Chemlight_Throw::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Chemlight_Throw_C_ExecuteUbergraph_GA_Chemlight_Throw, K2Node_CustomEvent_Payload) == 0x000028, "Member 'GA_Chemlight_Throw_C_ExecuteUbergraph_GA_Chemlight_Throw::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_Chemlight_Throw_C_ExecuteUbergraph_GA_Chemlight_Throw, Temp_struct_Variable) == 0x0000D8, "Member 'GA_Chemlight_Throw_C_ExecuteUbergraph_GA_Chemlight_Throw::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Chemlight_Throw_C_ExecuteUbergraph_GA_Chemlight_Throw, CallFunc_WaitGameplayEvent_ReturnValue) == 0x000188, "Member 'GA_Chemlight_Throw_C_ExecuteUbergraph_GA_Chemlight_Throw::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Chemlight_Throw_C_ExecuteUbergraph_GA_Chemlight_Throw, CallFunc_IsValid_ReturnValue) == 0x000190, "Member 'GA_Chemlight_Throw_C_ExecuteUbergraph_GA_Chemlight_Throw::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function GA_Chemlight_Throw.GA_Chemlight_Throw_C.EventReceived_26F8B4649CAC44DABDA5DBB270258AE4
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Chemlight_Throw_C_EventReceived_26F8B4649CAC44DABDA5DBB270258AE4 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Chemlight_Throw_C_EventReceived_26F8B4649CAC44DABDA5DBB270258AE4) == 0x000008, "Wrong alignment on GA_Chemlight_Throw_C_EventReceived_26F8B4649CAC44DABDA5DBB270258AE4");
static_assert(sizeof(GA_Chemlight_Throw_C_EventReceived_26F8B4649CAC44DABDA5DBB270258AE4) == 0x0000B0, "Wrong size on GA_Chemlight_Throw_C_EventReceived_26F8B4649CAC44DABDA5DBB270258AE4");
static_assert(offsetof(GA_Chemlight_Throw_C_EventReceived_26F8B4649CAC44DABDA5DBB270258AE4, Payload) == 0x000000, "Member 'GA_Chemlight_Throw_C_EventReceived_26F8B4649CAC44DABDA5DBB270258AE4::Payload' has a wrong offset!");

// Function GA_Chemlight_Throw.GA_Chemlight_Throw_C.GetLaunchVelocity
// 0x0028 (0x0028 - 0x0000)
struct GA_Chemlight_Throw_C_GetLaunchVelocity final
{
public:
	struct FVector                                OutVelocity;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGBCharacter*                           CallFunc_GetCharacter_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Chemlight_Throw_C_GetLaunchVelocity) == 0x000008, "Wrong alignment on GA_Chemlight_Throw_C_GetLaunchVelocity");
static_assert(sizeof(GA_Chemlight_Throw_C_GetLaunchVelocity) == 0x000028, "Wrong size on GA_Chemlight_Throw_C_GetLaunchVelocity");
static_assert(offsetof(GA_Chemlight_Throw_C_GetLaunchVelocity, OutVelocity) == 0x000000, "Member 'GA_Chemlight_Throw_C_GetLaunchVelocity::OutVelocity' has a wrong offset!");
static_assert(offsetof(GA_Chemlight_Throw_C_GetLaunchVelocity, CallFunc_GetCharacter_ReturnValue) == 0x000010, "Member 'GA_Chemlight_Throw_C_GetLaunchVelocity::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Chemlight_Throw_C_GetLaunchVelocity, CallFunc_GetVelocity_ReturnValue) == 0x000018, "Member 'GA_Chemlight_Throw_C_GetLaunchVelocity::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");

// Function GA_Chemlight_Throw.GA_Chemlight_Throw_C.GetDesiredSpawnLocation
// 0x0018 (0x0018 - 0x0000)
struct GA_Chemlight_Throw_C_GetDesiredSpawnLocation final
{
public:
	struct FVector                                OutDesiredSpawnLocation;                           // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Chemlight_Throw_C_GetDesiredSpawnLocation) == 0x000004, "Wrong alignment on GA_Chemlight_Throw_C_GetDesiredSpawnLocation");
static_assert(sizeof(GA_Chemlight_Throw_C_GetDesiredSpawnLocation) == 0x000018, "Wrong size on GA_Chemlight_Throw_C_GetDesiredSpawnLocation");
static_assert(offsetof(GA_Chemlight_Throw_C_GetDesiredSpawnLocation, OutDesiredSpawnLocation) == 0x000000, "Member 'GA_Chemlight_Throw_C_GetDesiredSpawnLocation::OutDesiredSpawnLocation' has a wrong offset!");
static_assert(offsetof(GA_Chemlight_Throw_C_GetDesiredSpawnLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00000C, "Member 'GA_Chemlight_Throw_C_GetDesiredSpawnLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

}


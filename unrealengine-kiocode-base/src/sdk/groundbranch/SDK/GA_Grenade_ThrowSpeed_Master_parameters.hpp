﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Grenade_ThrowSpeed_Master

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GA_Grenade_ThrowSpeed_Master.GA_Grenade_ThrowSpeed_Master_C.ExecuteUbergraph_GA_Grenade_ThrowSpeed_Master
// 0x0038 (0x0038 - 0x0000)
struct GA_Grenade_ThrowSpeed_Master_C_ExecuteUbergraph_GA_Grenade_ThrowSpeed_Master final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGBCharacter*                           CallFunc_GetCharacter_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBInvItem*                             CallFunc_GetEquipped_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBGrenade*                             K2Node_DynamicCast_AsGBGrenade;                    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_GrenadeArc_C*                       CallFunc_GetGrenadeArc_OutGrenadeArc;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlledPlayer_ReturnValue;    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Grenade_ThrowSpeed_Master_C_ExecuteUbergraph_GA_Grenade_ThrowSpeed_Master) == 0x000008, "Wrong alignment on GA_Grenade_ThrowSpeed_Master_C_ExecuteUbergraph_GA_Grenade_ThrowSpeed_Master");
static_assert(sizeof(GA_Grenade_ThrowSpeed_Master_C_ExecuteUbergraph_GA_Grenade_ThrowSpeed_Master) == 0x000038, "Wrong size on GA_Grenade_ThrowSpeed_Master_C_ExecuteUbergraph_GA_Grenade_ThrowSpeed_Master");
static_assert(offsetof(GA_Grenade_ThrowSpeed_Master_C_ExecuteUbergraph_GA_Grenade_ThrowSpeed_Master, EntryPoint) == 0x000000, "Member 'GA_Grenade_ThrowSpeed_Master_C_ExecuteUbergraph_GA_Grenade_ThrowSpeed_Master::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Grenade_ThrowSpeed_Master_C_ExecuteUbergraph_GA_Grenade_ThrowSpeed_Master, CallFunc_GetCharacter_ReturnValue) == 0x000008, "Member 'GA_Grenade_ThrowSpeed_Master_C_ExecuteUbergraph_GA_Grenade_ThrowSpeed_Master::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Grenade_ThrowSpeed_Master_C_ExecuteUbergraph_GA_Grenade_ThrowSpeed_Master, CallFunc_GetEquipped_ReturnValue) == 0x000010, "Member 'GA_Grenade_ThrowSpeed_Master_C_ExecuteUbergraph_GA_Grenade_ThrowSpeed_Master::CallFunc_GetEquipped_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Grenade_ThrowSpeed_Master_C_ExecuteUbergraph_GA_Grenade_ThrowSpeed_Master, K2Node_DynamicCast_AsGBGrenade) == 0x000018, "Member 'GA_Grenade_ThrowSpeed_Master_C_ExecuteUbergraph_GA_Grenade_ThrowSpeed_Master::K2Node_DynamicCast_AsGBGrenade' has a wrong offset!");
static_assert(offsetof(GA_Grenade_ThrowSpeed_Master_C_ExecuteUbergraph_GA_Grenade_ThrowSpeed_Master, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'GA_Grenade_ThrowSpeed_Master_C_ExecuteUbergraph_GA_Grenade_ThrowSpeed_Master::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Grenade_ThrowSpeed_Master_C_ExecuteUbergraph_GA_Grenade_ThrowSpeed_Master, CallFunc_GetGrenadeArc_OutGrenadeArc) == 0x000028, "Member 'GA_Grenade_ThrowSpeed_Master_C_ExecuteUbergraph_GA_Grenade_ThrowSpeed_Master::CallFunc_GetGrenadeArc_OutGrenadeArc' has a wrong offset!");
static_assert(offsetof(GA_Grenade_ThrowSpeed_Master_C_ExecuteUbergraph_GA_Grenade_ThrowSpeed_Master, CallFunc_IsLocallyControlledPlayer_ReturnValue) == 0x000030, "Member 'GA_Grenade_ThrowSpeed_Master_C_ExecuteUbergraph_GA_Grenade_ThrowSpeed_Master::CallFunc_IsLocallyControlledPlayer_ReturnValue' has a wrong offset!");

// Function GA_Grenade_ThrowSpeed_Master.GA_Grenade_ThrowSpeed_Master_C.GetGrenadeArc
// 0x0060 (0x0060 - 0x0000)
struct GA_Grenade_ThrowSpeed_Master_C_GetGrenadeArc final
{
public:
	class ABP_GrenadeArc_C*                       OutGrenadeArc;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	class ABP_GrenadeArc_C*                       CallFunc_GetActorOfClass_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GrenadeArc_C*                       CallFunc_FinishSpawningActor_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Grenade_ThrowSpeed_Master_C_GetGrenadeArc) == 0x000010, "Wrong alignment on GA_Grenade_ThrowSpeed_Master_C_GetGrenadeArc");
static_assert(sizeof(GA_Grenade_ThrowSpeed_Master_C_GetGrenadeArc) == 0x000060, "Wrong size on GA_Grenade_ThrowSpeed_Master_C_GetGrenadeArc");
static_assert(offsetof(GA_Grenade_ThrowSpeed_Master_C_GetGrenadeArc, OutGrenadeArc) == 0x000000, "Member 'GA_Grenade_ThrowSpeed_Master_C_GetGrenadeArc::OutGrenadeArc' has a wrong offset!");
static_assert(offsetof(GA_Grenade_ThrowSpeed_Master_C_GetGrenadeArc, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'GA_Grenade_ThrowSpeed_Master_C_GetGrenadeArc::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Grenade_ThrowSpeed_Master_C_GetGrenadeArc, CallFunc_GetActorOfClass_ReturnValue) == 0x000040, "Member 'GA_Grenade_ThrowSpeed_Master_C_GetGrenadeArc::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Grenade_ThrowSpeed_Master_C_GetGrenadeArc, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000048, "Member 'GA_Grenade_ThrowSpeed_Master_C_GetGrenadeArc::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Grenade_ThrowSpeed_Master_C_GetGrenadeArc, CallFunc_FinishSpawningActor_ReturnValue) == 0x000050, "Member 'GA_Grenade_ThrowSpeed_Master_C_GetGrenadeArc::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Grenade_ThrowSpeed_Master_C_GetGrenadeArc, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'GA_Grenade_ThrowSpeed_Master_C_GetGrenadeArc::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Sight_DecreaseMag_Instant_Master

#include "Basic.hpp"

#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function GA_Sight_DecreaseMag_Instant_Master.GA_Sight_DecreaseMag_Instant_Master_C.ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master
// 0x0078 (0x0078 - 0x0000)
struct GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable; // 0x0004(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMagnificationLevel_ReturnValue;        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Array_Get_Item;                           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGBCharacter*                           CallFunc_GetCharacter_ReturnValue;                 // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBCharacter*                           CallFunc_GetCharacter_ReturnValue_1;               // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBPlayerController*                    CallFunc_GetLocallyViewingPlayerController_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBInvItem*                             CallFunc_GetEquipped_ReturnValue;                  // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGBSightComponent*                      CallFunc_GetCurrentSight_ReturnValue;              // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFirstPerson_ReturnValue;                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master) == 0x000008, "Wrong alignment on GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master");
static_assert(sizeof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master) == 0x000078, "Wrong size on GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master, EntryPoint) == 0x000000, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master, Temp_delegate_Variable) == 0x000004, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master, Temp_int_Array_Index_Variable) == 0x000014, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master, CallFunc_GetMagnificationLevel_ReturnValue) == 0x000018, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master::CallFunc_GetMagnificationLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master, CallFunc_Array_Get_Item) == 0x000020, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000028, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000030, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000034, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master, CallFunc_Max_ReturnValue) == 0x000038, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master, CallFunc_GetCharacter_ReturnValue) == 0x000040, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master, CallFunc_GetCharacter_ReturnValue_1) == 0x000048, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master::CallFunc_GetCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master, CallFunc_GetLocallyViewingPlayerController_ReturnValue) == 0x000050, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master::CallFunc_GetLocallyViewingPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master, CallFunc_GetEquipped_ReturnValue) == 0x000058, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master::CallFunc_GetEquipped_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master, CallFunc_PostEvent_ReturnValue) == 0x000060, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master, CallFunc_GetCurrentSight_ReturnValue) == 0x000068, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master::CallFunc_GetCurrentSight_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master, CallFunc_IsFirstPerson_ReturnValue) == 0x000070, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master::CallFunc_IsFirstPerson_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master, CallFunc_IsValid_ReturnValue) == 0x000071, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master, Temp_bool_True_if_break_was_hit_Variable) == 0x000072, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master, CallFunc_Not_PreBool_ReturnValue) == 0x000073, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master, CallFunc_BooleanAND_ReturnValue) == 0x000074, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_ExecuteUbergraph_GA_Sight_DecreaseMag_Instant_Master::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function GA_Sight_DecreaseMag_Instant_Master.GA_Sight_DecreaseMag_Instant_Master_C.CanChangeMagnificationLevel
// 0x0018 (0x0018 - 0x0000)
struct GA_Sight_DecreaseMag_Instant_Master_C_CanChangeMagnificationLevel final
{
public:
	class UGBSightComponent*                      InSightComp;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOutCanChange;                                     // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMagnificationLevel_ReturnValue;        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Sight_DecreaseMag_Instant_Master_C_CanChangeMagnificationLevel) == 0x000008, "Wrong alignment on GA_Sight_DecreaseMag_Instant_Master_C_CanChangeMagnificationLevel");
static_assert(sizeof(GA_Sight_DecreaseMag_Instant_Master_C_CanChangeMagnificationLevel) == 0x000018, "Wrong size on GA_Sight_DecreaseMag_Instant_Master_C_CanChangeMagnificationLevel");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_CanChangeMagnificationLevel, InSightComp) == 0x000000, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_CanChangeMagnificationLevel::InSightComp' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_CanChangeMagnificationLevel, bOutCanChange) == 0x000008, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_CanChangeMagnificationLevel::bOutCanChange' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_CanChangeMagnificationLevel, CallFunc_GetMagnificationLevel_ReturnValue) == 0x00000C, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_CanChangeMagnificationLevel::CallFunc_GetMagnificationLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Sight_DecreaseMag_Instant_Master_C_CanChangeMagnificationLevel, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000010, "Member 'GA_Sight_DecreaseMag_Instant_Master_C_CanChangeMagnificationLevel::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

}


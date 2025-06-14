﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GrenadeBlinkEffect

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.ExecuteUbergraph_BP_GrenadeBlinkEffect
// 0x00F8 (0x00F8 - 0x0000)
struct BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGBCharacter*                           K2Node_CustomEvent_Character;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AGBPlayerState* PlayerState)> K2Node_CreateDelegate_OutputDelegate;         // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class AGBPlayerState*                         K2Node_DynamicCast_AsGBPlayer_State;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBPlayerController*                    K2Node_DynamicCast_AsGBPlayer_Controller;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBPlayerController*                    K2Node_DynamicCast_AsGBPlayer_Controller_1;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGBCharacter*                           CallFunc_GetGBCharacter_ReturnValue;               // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBPlayerState*                         K2Node_CustomEvent_PlayerState;                    // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_NewTime;                        // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_OldState;                       // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NewState;                       // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraModifier*                        CallFunc_AddNewCameraModifier_ReturnValue;         // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedBlendable                     K2Node_MakeStruct_WeightedBlendable;               // 0x00A8(0x0010)(NoDestructor)
	class UCM_GrenadeBlinkEffect_C*               K2Node_DynamicCast_AsCM_Grenade_Blink_Effect;      // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue_1;     // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AGBCharacter* Character)> K2Node_CreateDelegate_OutputDelegate_1;           // 0x00D4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RemoveCameraModifier_ReturnValue;         // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E6[0x2];                                       // 0x00E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName OldState, class FName NewState)> K2Node_CreateDelegate_OutputDelegate_2; // 0x00E8(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect) == 0x000008, "Wrong alignment on BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect");
static_assert(sizeof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect) == 0x0000F8, "Wrong size on BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, EntryPoint) == 0x000000, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, K2Node_CustomEvent_Character) == 0x000008, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::K2Node_CustomEvent_Character' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, K2Node_DynamicCast_AsGBPlayer_State) == 0x000028, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::K2Node_DynamicCast_AsGBPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, CallFunc_GetPlayerController_ReturnValue_1) == 0x000038, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, K2Node_DynamicCast_AsGBPlayer_Controller) == 0x000040, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::K2Node_DynamicCast_AsGBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, CallFunc_GetPlayerController_ReturnValue_2) == 0x000050, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, K2Node_DynamicCast_AsGBPlayer_Controller_1) == 0x000058, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::K2Node_DynamicCast_AsGBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, K2Node_DynamicCast_bSuccess_2) == 0x000060, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, CallFunc_GetGBCharacter_ReturnValue) == 0x000068, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::CallFunc_GetGBCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000070, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, K2Node_CustomEvent_PlayerState) == 0x000078, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::K2Node_CustomEvent_PlayerState' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, K2Node_CustomEvent_NewTime) == 0x000080, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::K2Node_CustomEvent_NewTime' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, K2Node_Event_EndPlayReason) == 0x000084, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, K2Node_CustomEvent_OldState) == 0x000088, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::K2Node_CustomEvent_OldState' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, K2Node_CustomEvent_NewState) == 0x000090, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::K2Node_CustomEvent_NewState' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000098, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, CallFunc_AddNewCameraModifier_ReturnValue) == 0x0000A0, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::CallFunc_AddNewCameraModifier_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, K2Node_MakeStruct_WeightedBlendable) == 0x0000A8, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::K2Node_MakeStruct_WeightedBlendable' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, K2Node_DynamicCast_AsCM_Grenade_Blink_Effect) == 0x0000B8, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::K2Node_DynamicCast_AsCM_Grenade_Blink_Effect' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, K2Node_DynamicCast_bSuccess_3) == 0x0000C0, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, CallFunc_GetPlayerCameraManager_ReturnValue_1) == 0x0000C8, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::CallFunc_GetPlayerCameraManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, CallFunc_IsValid_ReturnValue) == 0x0000D0, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000D4, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, CallFunc_IsValid_ReturnValue_1) == 0x0000E4, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, CallFunc_RemoveCameraModifier_ReturnValue) == 0x0000E5, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::CallFunc_RemoveCameraModifier_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000E8, "Member 'BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.OnDeathStarted_Event_0
// 0x0008 (0x0008 - 0x0000)
struct BP_GrenadeBlinkEffect_C_OnDeathStarted_Event_0 final
{
public:
	class AGBCharacter*                           Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeBlinkEffect_C_OnDeathStarted_Event_0) == 0x000008, "Wrong alignment on BP_GrenadeBlinkEffect_C_OnDeathStarted_Event_0");
static_assert(sizeof(BP_GrenadeBlinkEffect_C_OnDeathStarted_Event_0) == 0x000008, "Wrong size on BP_GrenadeBlinkEffect_C_OnDeathStarted_Event_0");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_OnDeathStarted_Event_0, Character) == 0x000000, "Member 'BP_GrenadeBlinkEffect_C_OnDeathStarted_Event_0::Character' has a wrong offset!");

// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.OnPlayerControllerStateChanged_Event_0
// 0x0010 (0x0010 - 0x0000)
struct BP_GrenadeBlinkEffect_C_OnPlayerControllerStateChanged_Event_0 final
{
public:
	class FName                                   OldState;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NewState;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeBlinkEffect_C_OnPlayerControllerStateChanged_Event_0) == 0x000004, "Wrong alignment on BP_GrenadeBlinkEffect_C_OnPlayerControllerStateChanged_Event_0");
static_assert(sizeof(BP_GrenadeBlinkEffect_C_OnPlayerControllerStateChanged_Event_0) == 0x000010, "Wrong size on BP_GrenadeBlinkEffect_C_OnPlayerControllerStateChanged_Event_0");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_OnPlayerControllerStateChanged_Event_0, OldState) == 0x000000, "Member 'BP_GrenadeBlinkEffect_C_OnPlayerControllerStateChanged_Event_0::OldState' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_OnPlayerControllerStateChanged_Event_0, NewState) == 0x000008, "Member 'BP_GrenadeBlinkEffect_C_OnPlayerControllerStateChanged_Event_0::NewState' has a wrong offset!");

// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_GrenadeBlinkEffect_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeBlinkEffect_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_GrenadeBlinkEffect_C_ReceiveEndPlay");
static_assert(sizeof(BP_GrenadeBlinkEffect_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_GrenadeBlinkEffect_C_ReceiveEndPlay");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_GrenadeBlinkEffect_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.SetMateriallUpdateTimelineNewTime
// 0x0004 (0x0004 - 0x0000)
struct BP_GrenadeBlinkEffect_C_SetMateriallUpdateTimelineNewTime final
{
public:
	float                                         NewTime;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeBlinkEffect_C_SetMateriallUpdateTimelineNewTime) == 0x000004, "Wrong alignment on BP_GrenadeBlinkEffect_C_SetMateriallUpdateTimelineNewTime");
static_assert(sizeof(BP_GrenadeBlinkEffect_C_SetMateriallUpdateTimelineNewTime) == 0x000004, "Wrong size on BP_GrenadeBlinkEffect_C_SetMateriallUpdateTimelineNewTime");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_SetMateriallUpdateTimelineNewTime, NewTime) == 0x000000, "Member 'BP_GrenadeBlinkEffect_C_SetMateriallUpdateTimelineNewTime::NewTime' has a wrong offset!");

// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.OnPlayerReadyRoomStatusChanged_Event_0
// 0x0008 (0x0008 - 0x0000)
struct BP_GrenadeBlinkEffect_C_OnPlayerReadyRoomStatusChanged_Event_0 final
{
public:
	class AGBPlayerState*                         PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeBlinkEffect_C_OnPlayerReadyRoomStatusChanged_Event_0) == 0x000008, "Wrong alignment on BP_GrenadeBlinkEffect_C_OnPlayerReadyRoomStatusChanged_Event_0");
static_assert(sizeof(BP_GrenadeBlinkEffect_C_OnPlayerReadyRoomStatusChanged_Event_0) == 0x000008, "Wrong size on BP_GrenadeBlinkEffect_C_OnPlayerReadyRoomStatusChanged_Event_0");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_OnPlayerReadyRoomStatusChanged_Event_0, PlayerState) == 0x000000, "Member 'BP_GrenadeBlinkEffect_C_OnPlayerReadyRoomStatusChanged_Event_0::PlayerState' has a wrong offset!");

// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.AddStunAlpha
// 0x0024 (0x0024 - 0x0000)
struct BP_GrenadeBlinkEffect_C_AddStunAlpha final
{
public:
	float                                         InAlpha;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalCurrentAlpha;                                 // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalNewTimelinePosition;                          // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetPlaybackPosition_ReturnValue;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTimelineLength_ReturnValue;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrenadeBlinkEffect_C_AddStunAlpha) == 0x000004, "Wrong alignment on BP_GrenadeBlinkEffect_C_AddStunAlpha");
static_assert(sizeof(BP_GrenadeBlinkEffect_C_AddStunAlpha) == 0x000024, "Wrong size on BP_GrenadeBlinkEffect_C_AddStunAlpha");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_AddStunAlpha, InAlpha) == 0x000000, "Member 'BP_GrenadeBlinkEffect_C_AddStunAlpha::InAlpha' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_AddStunAlpha, LocalCurrentAlpha) == 0x000004, "Member 'BP_GrenadeBlinkEffect_C_AddStunAlpha::LocalCurrentAlpha' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_AddStunAlpha, LocalNewTimelinePosition) == 0x000008, "Member 'BP_GrenadeBlinkEffect_C_AddStunAlpha::LocalNewTimelinePosition' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_AddStunAlpha, CallFunc_FClamp_ReturnValue) == 0x00000C, "Member 'BP_GrenadeBlinkEffect_C_AddStunAlpha::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_AddStunAlpha, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000010, "Member 'BP_GrenadeBlinkEffect_C_AddStunAlpha::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_AddStunAlpha, CallFunc_GetPlaybackPosition_ReturnValue) == 0x000014, "Member 'BP_GrenadeBlinkEffect_C_AddStunAlpha::CallFunc_GetPlaybackPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_AddStunAlpha, CallFunc_Less_FloatFloat_ReturnValue) == 0x000018, "Member 'BP_GrenadeBlinkEffect_C_AddStunAlpha::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_AddStunAlpha, CallFunc_GetTimelineLength_ReturnValue) == 0x00001C, "Member 'BP_GrenadeBlinkEffect_C_AddStunAlpha::CallFunc_GetTimelineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrenadeBlinkEffect_C_AddStunAlpha, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000020, "Member 'BP_GrenadeBlinkEffect_C_AddStunAlpha::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");

}


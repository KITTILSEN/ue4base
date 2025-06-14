﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InGameMap_PlayerBlip

#include "Basic.hpp"

#include "Slate_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "GroundBranch_structs.hpp"


namespace SDK::Params
{

// Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.ExecuteUbergraph_WBP_InGameMap_PlayerBlip
// 0x0110 (0x0110 - 0x0000)
struct WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EReadyRoomStatus                              CallFunc_GetReadyRoomStatus_ReturnValue;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B[0x1];                                       // 0x005B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetPlayerLocation_ReturnValue;            // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetGenericTeamId_ReturnValue;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetPlayerRotation_ReturnValue;            // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetLives_ReturnValue;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_ByteByte_ReturnValue;             // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Get2dPosition_OutCanvasPosition;          // 0x0084(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0094(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x00AC(0x0010)(NoDestructor)
	struct FVector                                CallFunc_GetPlayerLocation_ReturnValue_1;          // 0x00BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetIconForTeammate_NewParam;              // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;               // 0x00DC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ETeamElement                                  CallFunc_GetTeamElement_ReturnValue;               // 0x00F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00F6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ETeamElement                                  CallFunc_GetTeamElement_ReturnValue_1;             // 0x00F7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Map_Find_Value;                           // 0x00F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip) == 0x000008, "Wrong alignment on WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip");
static_assert(sizeof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip) == 0x000110, "Wrong size on WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, EntryPoint) == 0x000000, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, K2Node_Event_MyGeometry) == 0x000008, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, K2Node_Event_InDeltaTime) == 0x000040, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, Temp_bool_Variable) == 0x000044, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000048, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000050, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_GetReadyRoomStatus_ReturnValue) == 0x000058, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_GetReadyRoomStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_Not_PreBool_ReturnValue) == 0x000059, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00005A, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_GetPlayerLocation_ReturnValue) == 0x00005C, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_GetPlayerLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_GetGenericTeamId_ReturnValue) == 0x000068, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_GetGenericTeamId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_GetPlayerRotation_ReturnValue) == 0x00006C, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_GetPlayerRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_GetLives_ReturnValue) == 0x000070, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_GetLives_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_Greater_ByteByte_ReturnValue) == 0x000071, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_Greater_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_GetVisibility_ReturnValue) == 0x000072, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000073, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, K2Node_Select_Default) == 0x000078, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000080, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_Get2dPosition_OutCanvasPosition) == 0x000084, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_Get2dPosition_OutCanvasPosition' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_BreakVector2D_X) == 0x00008C, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_BreakVector2D_Y) == 0x000090, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_MakeVector2D_ReturnValue) == 0x000094, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_SelectFloat_ReturnValue) == 0x00009C, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_MakeVector2D_ReturnValue_1) == 0x0000A0, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000A8, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, K2Node_MakeStruct_Anchors) == 0x0000AC, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::K2Node_MakeStruct_Anchors' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_GetPlayerLocation_ReturnValue_1) == 0x0000BC, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_GetPlayerLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000C8, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_GetIconForTeammate_NewParam) == 0x0000D0, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_GetIconForTeammate_NewParam' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_BooleanOR_ReturnValue) == 0x0000D8, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_BooleanAND_ReturnValue) == 0x0000D9, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_BooleanAND_ReturnValue_1) == 0x0000DA, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_BooleanAND_ReturnValue_2) == 0x0000DB, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_MakeVector2D_ReturnValue_2) == 0x0000DC, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_MakeVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000E4, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_PlayAnimation_ReturnValue) == 0x0000E8, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x0000F0, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_Not_PreBool_ReturnValue_2) == 0x0000F1, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_GetTeamElement_ReturnValue) == 0x0000F2, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_GetTeamElement_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_IsValid_ReturnValue_1) == 0x0000F3, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x0000F4, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_IsValid_ReturnValue_2) == 0x0000F5, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_IsValid_ReturnValue_3) == 0x0000F6, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_GetTeamElement_ReturnValue_1) == 0x0000F7, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_GetTeamElement_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_Map_Find_Value) == 0x0000F8, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip, CallFunc_Map_Find_ReturnValue) == 0x000108, "Member 'WBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.Tick
// 0x003C (0x003C - 0x0000)
struct WBP_InGameMap_PlayerBlip_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InGameMap_PlayerBlip_C_Tick) == 0x000004, "Wrong alignment on WBP_InGameMap_PlayerBlip_C_Tick");
static_assert(sizeof(WBP_InGameMap_PlayerBlip_C_Tick) == 0x00003C, "Wrong size on WBP_InGameMap_PlayerBlip_C_Tick");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_InGameMap_PlayerBlip_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_Tick, InDeltaTime) == 0x000038, "Member 'WBP_InGameMap_PlayerBlip_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.OnMouseButtonDown
// 0x02F0 (0x02F0 - 0x0000)
struct WBP_InGameMap_PlayerBlip_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBSpectatorPawn*                       K2Node_DynamicCast_AsGBSpectator_Pawn;             // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_179[0x7];                                      // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0180(0x00B8)()
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0238(0x00B8)()
};
static_assert(alignof(WBP_InGameMap_PlayerBlip_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on WBP_InGameMap_PlayerBlip_C_OnMouseButtonDown");
static_assert(sizeof(WBP_InGameMap_PlayerBlip_C_OnMouseButtonDown) == 0x0002F0, "Wrong size on WBP_InGameMap_PlayerBlip_C_OnMouseButtonDown");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'WBP_InGameMap_PlayerBlip_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'WBP_InGameMap_PlayerBlip_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_OnMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'WBP_InGameMap_PlayerBlip_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_OnMouseButtonDown, CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue) == 0x000160, "Member 'WBP_InGameMap_PlayerBlip_C_OnMouseButtonDown::CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_OnMouseButtonDown, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000168, "Member 'WBP_InGameMap_PlayerBlip_C_OnMouseButtonDown::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_OnMouseButtonDown, K2Node_DynamicCast_AsGBSpectator_Pawn) == 0x000170, "Member 'WBP_InGameMap_PlayerBlip_C_OnMouseButtonDown::K2Node_DynamicCast_AsGBSpectator_Pawn' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_OnMouseButtonDown, K2Node_DynamicCast_bSuccess) == 0x000178, "Member 'WBP_InGameMap_PlayerBlip_C_OnMouseButtonDown::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_OnMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x000180, "Member 'WBP_InGameMap_PlayerBlip_C_OnMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_OnMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000238, "Member 'WBP_InGameMap_PlayerBlip_C_OnMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.GetIconForTeammate
// 0x0068 (0x0068 - 0x0000)
struct WBP_InGameMap_PlayerBlip_C_GetIconForTeammate final
{
public:
	struct FVector                                TeammateLocation;                                  // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             NewParam;                                          // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56[0x2];                                       // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Select_Default_1;                           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InGameMap_PlayerBlip_C_GetIconForTeammate) == 0x000008, "Wrong alignment on WBP_InGameMap_PlayerBlip_C_GetIconForTeammate");
static_assert(sizeof(WBP_InGameMap_PlayerBlip_C_GetIconForTeammate) == 0x000068, "Wrong size on WBP_InGameMap_PlayerBlip_C_GetIconForTeammate");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_GetIconForTeammate, TeammateLocation) == 0x000000, "Member 'WBP_InGameMap_PlayerBlip_C_GetIconForTeammate::TeammateLocation' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_GetIconForTeammate, NewParam) == 0x000010, "Member 'WBP_InGameMap_PlayerBlip_C_GetIconForTeammate::NewParam' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_GetIconForTeammate, Temp_bool_Variable) == 0x000018, "Member 'WBP_InGameMap_PlayerBlip_C_GetIconForTeammate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_GetIconForTeammate, Temp_bool_Variable_1) == 0x000019, "Member 'WBP_InGameMap_PlayerBlip_C_GetIconForTeammate::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_GetIconForTeammate, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000020, "Member 'WBP_InGameMap_PlayerBlip_C_GetIconForTeammate::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_GetIconForTeammate, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000028, "Member 'WBP_InGameMap_PlayerBlip_C_GetIconForTeammate::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_GetIconForTeammate, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00002C, "Member 'WBP_InGameMap_PlayerBlip_C_GetIconForTeammate::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_GetIconForTeammate, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000038, "Member 'WBP_InGameMap_PlayerBlip_C_GetIconForTeammate::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_GetIconForTeammate, CallFunc_Subtract_VectorVector_ReturnValue) == 0x00003C, "Member 'WBP_InGameMap_PlayerBlip_C_GetIconForTeammate::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_GetIconForTeammate, CallFunc_BreakVector_X) == 0x000048, "Member 'WBP_InGameMap_PlayerBlip_C_GetIconForTeammate::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_GetIconForTeammate, CallFunc_BreakVector_Y) == 0x00004C, "Member 'WBP_InGameMap_PlayerBlip_C_GetIconForTeammate::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_GetIconForTeammate, CallFunc_BreakVector_Z) == 0x000050, "Member 'WBP_InGameMap_PlayerBlip_C_GetIconForTeammate::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_GetIconForTeammate, CallFunc_Less_FloatFloat_ReturnValue) == 0x000054, "Member 'WBP_InGameMap_PlayerBlip_C_GetIconForTeammate::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_GetIconForTeammate, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000055, "Member 'WBP_InGameMap_PlayerBlip_C_GetIconForTeammate::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_GetIconForTeammate, K2Node_Select_Default) == 0x000058, "Member 'WBP_InGameMap_PlayerBlip_C_GetIconForTeammate::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InGameMap_PlayerBlip_C_GetIconForTeammate, K2Node_Select_Default_1) == 0x000060, "Member 'WBP_InGameMap_PlayerBlip_C_GetIconForTeammate::K2Node_Select_Default_1' has a wrong offset!");

}


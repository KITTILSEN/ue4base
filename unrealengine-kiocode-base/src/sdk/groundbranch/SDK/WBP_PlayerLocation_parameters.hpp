﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerLocation

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Slate_structs.hpp"
#include "GroundBranch_structs.hpp"


namespace SDK::Params
{

// Function WBP_PlayerLocation.WBP_PlayerLocation_C.ExecuteUbergraph_WBP_PlayerLocation
// 0x00F0 (0x00F0 - 0x0000)
struct WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0018(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetPlayerLocation_ReturnValue;            // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetPlayerRotation_ReturnValue;            // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               CallFunc_CalcPosition_OutAnchors;                  // 0x00A8(0x0010)(NoDestructor)
	class AGBGameState*                           K2Node_DynamicCast_AsGBGame_State;                 // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EGBGameModeType                               CallFunc_GetGameModeType_ReturnValue;              // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C5[0x3];                                       // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00C8(0x0028)()
};
static_assert(alignof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation) == 0x000008, "Wrong alignment on WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation");
static_assert(sizeof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation) == 0x0000F0, "Wrong size on WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation");
static_assert(offsetof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation, EntryPoint) == 0x000000, "Member 'WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation, CallFunc_MakeVector2D_ReturnValue) == 0x000004, "Member 'WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation, K2Node_Event_MyGeometry) == 0x000018, "Member 'WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation, K2Node_Event_InDeltaTime) == 0x000050, "Member 'WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation, CallFunc_IsValid_ReturnValue) == 0x000054, "Member 'WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation, CallFunc_GetPlayerLocation_ReturnValue) == 0x000058, "Member 'WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation::CallFunc_GetPlayerLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000068, "Member 'WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation, CallFunc_GetPlayerRotation_ReturnValue) == 0x000070, "Member 'WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation::CallFunc_GetPlayerRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation, CallFunc_Add_FloatFloat_ReturnValue) == 0x000074, "Member 'WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000078, "Member 'WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation, CallFunc_Add_VectorVector_ReturnValue) == 0x000084, "Member 'WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000090, "Member 'WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation, CallFunc_GetGameState_ReturnValue) == 0x0000A0, "Member 'WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation, CallFunc_CalcPosition_OutAnchors) == 0x0000A8, "Member 'WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation::CallFunc_CalcPosition_OutAnchors' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation, K2Node_DynamicCast_AsGBGame_State) == 0x0000B8, "Member 'WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation::K2Node_DynamicCast_AsGBGame_State' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation, CallFunc_GetGameModeType_ReturnValue) == 0x0000C1, "Member 'WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation::CallFunc_GetGameModeType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C2, "Member 'WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000C3, "Member 'WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation, CallFunc_BooleanOR_ReturnValue) == 0x0000C4, "Member 'WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation, K2Node_MakeStruct_SlateColor) == 0x0000C8, "Member 'WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function WBP_PlayerLocation.WBP_PlayerLocation_C.Tick
// 0x003C (0x003C - 0x0000)
struct WBP_PlayerLocation_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerLocation_C_Tick) == 0x000004, "Wrong alignment on WBP_PlayerLocation_C_Tick");
static_assert(sizeof(WBP_PlayerLocation_C_Tick) == 0x00003C, "Wrong size on WBP_PlayerLocation_C_Tick");
static_assert(offsetof(WBP_PlayerLocation_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_PlayerLocation_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_Tick, InDeltaTime) == 0x000038, "Member 'WBP_PlayerLocation_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_PlayerLocation.WBP_PlayerLocation_C.CalcPosition
// 0x00B8 (0x00B8 - 0x0000)
struct WBP_PlayerLocation_C_CalcPosition final
{
public:
	struct FVector                                InLocation;                                        // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               OutAnchors;                                        // 0x000C(0x0010)(Parm, OutParm, NoDestructor)
	struct FVector                                LocationFromOrigin;                                // 0x001C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_NegateFloat_ReturnValue;                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;               // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x0070(0x0010)(NoDestructor)
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue_1;       // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue_1;       // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_3;               // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_4;               // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               K2Node_MakeStruct_Anchors_1;                       // 0x00A8(0x0010)(NoDestructor)
};
static_assert(alignof(WBP_PlayerLocation_C_CalcPosition) == 0x000004, "Wrong alignment on WBP_PlayerLocation_C_CalcPosition");
static_assert(sizeof(WBP_PlayerLocation_C_CalcPosition) == 0x0000B8, "Wrong size on WBP_PlayerLocation_C_CalcPosition");
static_assert(offsetof(WBP_PlayerLocation_C_CalcPosition, InLocation) == 0x000000, "Member 'WBP_PlayerLocation_C_CalcPosition::InLocation' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_CalcPosition, OutAnchors) == 0x00000C, "Member 'WBP_PlayerLocation_C_CalcPosition::OutAnchors' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_CalcPosition, LocationFromOrigin) == 0x00001C, "Member 'WBP_PlayerLocation_C_CalcPosition::LocationFromOrigin' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_CalcPosition, CallFunc_BreakVector_X) == 0x000028, "Member 'WBP_PlayerLocation_C_CalcPosition::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_CalcPosition, CallFunc_BreakVector_Y) == 0x00002C, "Member 'WBP_PlayerLocation_C_CalcPosition::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_CalcPosition, CallFunc_BreakVector_Z) == 0x000030, "Member 'WBP_PlayerLocation_C_CalcPosition::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_CalcPosition, CallFunc_NegateFloat_ReturnValue) == 0x000034, "Member 'WBP_PlayerLocation_C_CalcPosition::CallFunc_NegateFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_CalcPosition, CallFunc_MakeVector2D_ReturnValue) == 0x000038, "Member 'WBP_PlayerLocation_C_CalcPosition::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_CalcPosition, CallFunc_Divide_Vector2DFloat_ReturnValue) == 0x000040, "Member 'WBP_PlayerLocation_C_CalcPosition::CallFunc_Divide_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_CalcPosition, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x000048, "Member 'WBP_PlayerLocation_C_CalcPosition::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_CalcPosition, CallFunc_BreakVector2D_X) == 0x000050, "Member 'WBP_PlayerLocation_C_CalcPosition::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_CalcPosition, CallFunc_BreakVector2D_Y) == 0x000054, "Member 'WBP_PlayerLocation_C_CalcPosition::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_CalcPosition, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x000058, "Member 'WBP_PlayerLocation_C_CalcPosition::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_CalcPosition, CallFunc_MakeVector2D_ReturnValue_1) == 0x000060, "Member 'WBP_PlayerLocation_C_CalcPosition::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_CalcPosition, CallFunc_MakeVector2D_ReturnValue_2) == 0x000068, "Member 'WBP_PlayerLocation_C_CalcPosition::CallFunc_MakeVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_CalcPosition, K2Node_MakeStruct_Anchors) == 0x000070, "Member 'WBP_PlayerLocation_C_CalcPosition::K2Node_MakeStruct_Anchors' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_CalcPosition, CallFunc_Divide_Vector2DFloat_ReturnValue_1) == 0x000080, "Member 'WBP_PlayerLocation_C_CalcPosition::CallFunc_Divide_Vector2DFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_CalcPosition, CallFunc_Add_Vector2DVector2D_ReturnValue_1) == 0x000088, "Member 'WBP_PlayerLocation_C_CalcPosition::CallFunc_Add_Vector2DVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_CalcPosition, CallFunc_BreakVector2D_X_1) == 0x000090, "Member 'WBP_PlayerLocation_C_CalcPosition::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_CalcPosition, CallFunc_BreakVector2D_Y_1) == 0x000094, "Member 'WBP_PlayerLocation_C_CalcPosition::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_CalcPosition, CallFunc_MakeVector2D_ReturnValue_3) == 0x000098, "Member 'WBP_PlayerLocation_C_CalcPosition::CallFunc_MakeVector2D_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_CalcPosition, CallFunc_MakeVector2D_ReturnValue_4) == 0x0000A0, "Member 'WBP_PlayerLocation_C_CalcPosition::CallFunc_MakeVector2D_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_PlayerLocation_C_CalcPosition, K2Node_MakeStruct_Anchors_1) == 0x0000A8, "Member 'WBP_PlayerLocation_C_CalcPosition::K2Node_MakeStruct_Anchors_1' has a wrong offset!");

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GameInfo_PlayerList

#include "Basic.hpp"

#include "GroundBranch_structs.hpp"


namespace SDK::Params
{

// Function WBP_GameInfo_PlayerList.WBP_GameInfo_PlayerList_C.ExecuteUbergraph_WBP_GameInfo_PlayerList
// 0x0108 (0x0108 - 0x0000)
struct WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBGameState*                           K2Node_DynamicCast_AsGBGame_State;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGBTeamInfo                            CallFunc_GetPlayerTeamInfo_ReturnValue;            // 0x002C(0x0018)(NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_ToUpper_ReturnValue;                      // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_GameInfo_Player_C*>         CallFunc_GetChildWidgetsOfClass_ChildWidgets;      // 0x0070(0x0010)(ReferenceParm, ContainsInstancedReference)
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0080(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0098(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_1;               // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBGameState*                           K2Node_DynamicCast_AsGBGame_State_1;               // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetVolunteersAllowed_ReturnValue;         // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CA[0x6];                                       // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AGBPlayerState*>                 CallFunc_GetPlayerList_ReturnValue;                // 0x00D0(0x0010)(ReferenceParm)
	class AGBPlayerState*                         CallFunc_Array_Get_Item;                           // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_GameInfo_Player_C*                 CallFunc_Array_Get_Item_1;                         // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_GameInfo_Player_C*                 CallFunc_FindOrCreatePlayerEntry_OutPlayerInfo;    // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList) == 0x000008, "Wrong alignment on WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList");
static_assert(sizeof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList) == 0x000108, "Wrong size on WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, EntryPoint) == 0x000000, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, Temp_bool_Variable) == 0x000004, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, Temp_int_Array_Index_Variable) == 0x000010, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, Temp_int_Array_Index_Variable_1) == 0x000014, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, CallFunc_GetGameState_ReturnValue) == 0x000018, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, K2Node_DynamicCast_AsGBGame_State) == 0x000020, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::K2Node_DynamicCast_AsGBGame_State' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000029, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, CallFunc_GetPlayerTeamInfo_ReturnValue) == 0x00002C, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::CallFunc_GetPlayerTeamInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000044, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, CallFunc_Conv_NameToString_ReturnValue) == 0x000048, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, CallFunc_ToUpper_ReturnValue) == 0x000058, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::CallFunc_ToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, CallFunc_Conv_StringToName_ReturnValue) == 0x000068, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, CallFunc_GetChildWidgetsOfClass_ChildWidgets) == 0x000070, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::CallFunc_GetChildWidgetsOfClass_ChildWidgets' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, CallFunc_Conv_NameToText_ReturnValue) == 0x000080, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, K2Node_Select_Default) == 0x000098, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, Temp_int_Loop_Counter_Variable_1) == 0x0000B0, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000B4, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, CallFunc_GetGameState_ReturnValue_1) == 0x0000B8, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::CallFunc_GetGameState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, K2Node_DynamicCast_AsGBGame_State_1) == 0x0000C0, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::K2Node_DynamicCast_AsGBGame_State_1' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, K2Node_DynamicCast_bSuccess_1) == 0x0000C8, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, CallFunc_GetVolunteersAllowed_ReturnValue) == 0x0000C9, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::CallFunc_GetVolunteersAllowed_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, CallFunc_GetPlayerList_ReturnValue) == 0x0000D0, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::CallFunc_GetPlayerList_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, CallFunc_Array_Get_Item) == 0x0000E0, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, CallFunc_Array_Get_Item_1) == 0x0000E8, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, CallFunc_FindOrCreatePlayerEntry_OutPlayerInfo) == 0x0000F0, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::CallFunc_FindOrCreatePlayerEntry_OutPlayerInfo' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, CallFunc_Array_Length_ReturnValue) == 0x0000F8, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, CallFunc_Array_Length_ReturnValue_1) == 0x0000FC, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, CallFunc_Less_IntInt_ReturnValue) == 0x000100, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList, CallFunc_Less_IntInt_ReturnValue_1) == 0x000101, "Member 'WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function WBP_GameInfo_PlayerList.WBP_GameInfo_PlayerList_C.FindOrCreatePlayerEntry
// 0x0068 (0x0068 - 0x0000)
struct WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry final
{
public:
	class AGBPlayerState*                         GBPlayerState;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bVolunteersAllowed;                                // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_GameInfo_Player_C*                 OutPlayerInfo;                                     // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_GameInfo_Player_C*                 LocalPlayerEntry;                                  // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_GameInfo_Player_C*                 CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_GameInfo_Player_C*                 CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F[0x1];                                       // 0x004F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry) == 0x000008, "Wrong alignment on WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry");
static_assert(sizeof(WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry) == 0x000068, "Wrong size on WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry, GBPlayerState) == 0x000000, "Member 'WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry::GBPlayerState' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry, bVolunteersAllowed) == 0x000008, "Member 'WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry::bVolunteersAllowed' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry, OutPlayerInfo) == 0x000010, "Member 'WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry::OutPlayerInfo' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry, LocalPlayerEntry) == 0x000018, "Member 'WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry::LocalPlayerEntry' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry, Temp_bool_True_if_break_was_hit_Variable) == 0x000020, "Member 'WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry, Temp_int_Array_Index_Variable) == 0x000024, "Member 'WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry, CallFunc_Not_PreBool_ReturnValue) == 0x000028, "Member 'WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry, CallFunc_Create_ReturnValue) == 0x000038, "Member 'WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry, CallFunc_Array_Get_Item) == 0x000040, "Member 'WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry, CallFunc_BooleanAND_ReturnValue) == 0x00004D, "Member 'WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00004E, "Member 'WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry, CallFunc_GetChildrenCount_ReturnValue) == 0x000050, "Member 'WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry, CallFunc_AddChild_ReturnValue) == 0x000058, "Member 'WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry, CallFunc_Not_PreBool_ReturnValue_1) == 0x000061, "Member 'WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

}


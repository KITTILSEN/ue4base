﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SpectatorButton_PlayerNamePlates

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_SpectatorButton_PlayerNamePlates.WBP_SpectatorButton_PlayerNamePlates_C.Get_TextBlock_1_Text_0
// 0x0038 (0x0038 - 0x0000)
struct WBP_SpectatorButton_PlayerNamePlates_C_Get_TextBlock_1_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0020(0x0018)()
};
static_assert(alignof(WBP_SpectatorButton_PlayerNamePlates_C_Get_TextBlock_1_Text_0) == 0x000008, "Wrong alignment on WBP_SpectatorButton_PlayerNamePlates_C_Get_TextBlock_1_Text_0");
static_assert(sizeof(WBP_SpectatorButton_PlayerNamePlates_C_Get_TextBlock_1_Text_0) == 0x000038, "Wrong size on WBP_SpectatorButton_PlayerNamePlates_C_Get_TextBlock_1_Text_0");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_Get_TextBlock_1_Text_0, ReturnValue) == 0x000000, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_Get_TextBlock_1_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_Get_TextBlock_1_Text_0, Temp_bool_Variable) == 0x000018, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_Get_TextBlock_1_Text_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_Get_TextBlock_1_Text_0, K2Node_Select_Default) == 0x000020, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_Get_TextBlock_1_Text_0::K2Node_Select_Default' has a wrong offset!");

// Function WBP_SpectatorButton_PlayerNamePlates.WBP_SpectatorButton_PlayerNamePlates_C.OnUpdate_Event_0
// 0x0008 (0x0008 - 0x0000)
struct WBP_SpectatorButton_PlayerNamePlates_C_OnUpdate_Event_0 final
{
public:
	class UWBP_Spectator_Overlay_C*               SpectatorOverlay;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SpectatorButton_PlayerNamePlates_C_OnUpdate_Event_0) == 0x000008, "Wrong alignment on WBP_SpectatorButton_PlayerNamePlates_C_OnUpdate_Event_0");
static_assert(sizeof(WBP_SpectatorButton_PlayerNamePlates_C_OnUpdate_Event_0) == 0x000008, "Wrong size on WBP_SpectatorButton_PlayerNamePlates_C_OnUpdate_Event_0");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_OnUpdate_Event_0, SpectatorOverlay) == 0x000000, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_OnUpdate_Event_0::SpectatorOverlay' has a wrong offset!");

// Function WBP_SpectatorButton_PlayerNamePlates.WBP_SpectatorButton_PlayerNamePlates_C.ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates
// 0x0120 (0x0120 - 0x0000)
struct WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Spectator_Overlay_C*               CallFunc_GetParentWidgetOfClass_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_Spectator_PlayerNamePlate_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets;      // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Spectator_PlayerNamePlate_C*       CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGBPlayerState*                         CallFunc_Array_Get_Item_1;                         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;                // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_DynamicCast_AsPawn;                         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGBPlayerState*                         K2Node_DynamicCast_AsGBPlayer_State;               // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_AA[0x6];                                       // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AGBPlayerState*                         K2Node_DynamicCast_AsGBPlayer_State_1;             // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_Spectator_PlayerNamePlate_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;    // 0x00C0(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue_1;           // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Spectator_PlayerNamePlate_C*       CallFunc_Array_Get_Item_2;                         // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue_1;                        // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue_2;           // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_EE[0x2];                                       // 0x00EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Spectator_Overlay_C*               K2Node_CustomEvent_SpectatorOverlay;               // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Config_GetBool_bValid;                    // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Config_GetBool_ReturnValue;               // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x00FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FD[0x3];                                       // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UWBP_Spectator_Overlay_C* SpectatorOverlay)> K2Node_CreateDelegate_OutputDelegate; // 0x0100(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Spectator_PlayerNamePlate_C*       CallFunc_Create_ReturnValue;                       // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates) == 0x000008, "Wrong alignment on WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates");
static_assert(sizeof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates) == 0x000120, "Wrong size on WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, EntryPoint) == 0x000000, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_GetParentWidgetOfClass_ReturnValue) == 0x000008, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_GetParentWidgetOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, Temp_int_Array_Index_Variable) == 0x000010, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, Temp_int_Array_Index_Variable_1) == 0x00001C, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, Temp_int_Loop_Counter_Variable_1) == 0x000020, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000028, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, Temp_int_Array_Index_Variable_2) == 0x00002C, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000030, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_Not_PreBool_ReturnValue) == 0x000040, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_Array_Get_Item) == 0x000048, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000054, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_Max_ReturnValue) == 0x000058, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_Array_Get_Item_1) == 0x000060, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_Array_Length_ReturnValue_1) == 0x000068, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_Less_IntInt_ReturnValue) == 0x00006C, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, Temp_int_Loop_Counter_Variable_2) == 0x000070, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x000074, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000078, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_GetPlayerController_ReturnValue) == 0x000080, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_GetViewTarget_ReturnValue) == 0x000088, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_GetViewTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, K2Node_DynamicCast_AsPawn) == 0x000090, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::K2Node_DynamicCast_AsPawn' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, K2Node_DynamicCast_AsGBPlayer_State) == 0x0000A0, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::K2Node_DynamicCast_AsGBPlayer_State' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, K2Node_DynamicCast_bSuccess_1) == 0x0000A8, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_Array_RemoveItem_ReturnValue) == 0x0000A9, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, K2Node_DynamicCast_AsGBPlayer_State_1) == 0x0000B0, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::K2Node_DynamicCast_AsGBPlayer_State_1' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, K2Node_DynamicCast_bSuccess_2) == 0x0000B8, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_GetAllWidgetsOfClass_FoundWidgets_1) == 0x0000C0, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_GetAllWidgetsOfClass_FoundWidgets_1' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_Array_RemoveItem_ReturnValue_1) == 0x0000D0, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_Array_RemoveItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_Array_Get_Item_2) == 0x0000D8, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_Array_Length_ReturnValue_2) == 0x0000E0, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_Subtract_IntInt_ReturnValue_3) == 0x0000E4, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_Subtract_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_Max_ReturnValue_1) == 0x0000E8, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_Max_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_Array_RemoveItem_ReturnValue_2) == 0x0000EC, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_Array_RemoveItem_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_Array_Contains_ReturnValue) == 0x0000ED, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, K2Node_CustomEvent_SpectatorOverlay) == 0x0000F0, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::K2Node_CustomEvent_SpectatorOverlay' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000F8, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_Config_GetBool_bValid) == 0x0000F9, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_Config_GetBool_bValid' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_Config_GetBool_ReturnValue) == 0x0000FA, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_Config_GetBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, Temp_bool_Variable) == 0x0000FB, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, Temp_bool_Variable_1) == 0x0000FC, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, K2Node_CreateDelegate_OutputDelegate) == 0x000100, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, K2Node_Select_Default) == 0x000110, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates, CallFunc_Create_ReturnValue) == 0x000118, "Member 'WBP_SpectatorButton_PlayerNamePlates_C_ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates::CallFunc_Create_ReturnValue' has a wrong offset!");

}


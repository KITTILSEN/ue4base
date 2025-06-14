﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PrepAreaSign

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PrepAreaSign.WBP_PrepAreaSign_C
// 0x0058 (0x02B8 - 0x0260)
class UWBP_PrepAreaSign_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             TextBlock_0;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                         TeamId;                                            // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_271[0x7];                                      // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   TeamPrepArea;                                      // 0x0278(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   MissionPrepArea;                                   // 0x0290(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Width;                                             // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScrollWidth;                                       // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Scroll;                                            // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UpdateTime;                                        // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_PrepAreaSign(int32 EntryPoint);
	void UpdateText(const class FText& InText);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Update();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PrepAreaSign_C">();
	}
	static class UWBP_PrepAreaSign_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PrepAreaSign_C>();
	}
};
static_assert(alignof(UWBP_PrepAreaSign_C) == 0x000008, "Wrong alignment on UWBP_PrepAreaSign_C");
static_assert(sizeof(UWBP_PrepAreaSign_C) == 0x0002B8, "Wrong size on UWBP_PrepAreaSign_C");
static_assert(offsetof(UWBP_PrepAreaSign_C, UberGraphFrame) == 0x000260, "Member 'UWBP_PrepAreaSign_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PrepAreaSign_C, TextBlock_0) == 0x000268, "Member 'UWBP_PrepAreaSign_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UWBP_PrepAreaSign_C, TeamId) == 0x000270, "Member 'UWBP_PrepAreaSign_C::TeamId' has a wrong offset!");
static_assert(offsetof(UWBP_PrepAreaSign_C, TeamPrepArea) == 0x000278, "Member 'UWBP_PrepAreaSign_C::TeamPrepArea' has a wrong offset!");
static_assert(offsetof(UWBP_PrepAreaSign_C, MissionPrepArea) == 0x000290, "Member 'UWBP_PrepAreaSign_C::MissionPrepArea' has a wrong offset!");
static_assert(offsetof(UWBP_PrepAreaSign_C, Width) == 0x0002A8, "Member 'UWBP_PrepAreaSign_C::Width' has a wrong offset!");
static_assert(offsetof(UWBP_PrepAreaSign_C, ScrollWidth) == 0x0002AC, "Member 'UWBP_PrepAreaSign_C::ScrollWidth' has a wrong offset!");
static_assert(offsetof(UWBP_PrepAreaSign_C, Scroll) == 0x0002B0, "Member 'UWBP_PrepAreaSign_C::Scroll' has a wrong offset!");
static_assert(offsetof(UWBP_PrepAreaSign_C, UpdateTime) == 0x0002B4, "Member 'UWBP_PrepAreaSign_C::UpdateTime' has a wrong offset!");

}


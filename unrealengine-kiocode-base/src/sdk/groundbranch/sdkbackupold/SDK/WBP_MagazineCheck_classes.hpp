﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MagazineCheck

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MagazineCheck.WBP_MagazineCheck_C
// 0x0078 (0x02D8 - 0x0260)
class UWBP_MagazineCheck_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Ammo;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AGBMagazine*                            MagazineRef;                                       // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Fraction;                                          // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27C[0x4];                                      // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<float, TSoftObjectPtr<class UTexture2D>> FractionImageMap;                                  // 0x0280(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bInHand;                                           // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_MagazineCheck(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MagazineCheck_C">();
	}
	static class UWBP_MagazineCheck_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MagazineCheck_C>();
	}
};
static_assert(alignof(UWBP_MagazineCheck_C) == 0x000008, "Wrong alignment on UWBP_MagazineCheck_C");
static_assert(sizeof(UWBP_MagazineCheck_C) == 0x0002D8, "Wrong size on UWBP_MagazineCheck_C");
static_assert(offsetof(UWBP_MagazineCheck_C, UberGraphFrame) == 0x000260, "Member 'UWBP_MagazineCheck_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MagazineCheck_C, Image_Ammo) == 0x000268, "Member 'UWBP_MagazineCheck_C::Image_Ammo' has a wrong offset!");
static_assert(offsetof(UWBP_MagazineCheck_C, MagazineRef) == 0x000270, "Member 'UWBP_MagazineCheck_C::MagazineRef' has a wrong offset!");
static_assert(offsetof(UWBP_MagazineCheck_C, Fraction) == 0x000278, "Member 'UWBP_MagazineCheck_C::Fraction' has a wrong offset!");
static_assert(offsetof(UWBP_MagazineCheck_C, FractionImageMap) == 0x000280, "Member 'UWBP_MagazineCheck_C::FractionImageMap' has a wrong offset!");
static_assert(offsetof(UWBP_MagazineCheck_C, bInHand) == 0x0002D0, "Member 'UWBP_MagazineCheck_C::bInHand' has a wrong offset!");

}


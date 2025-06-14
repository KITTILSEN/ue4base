﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheCurviestCurve

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "TheCurviestCurve_structs.hpp"


namespace SDK
{

// Class TheCurviestCurve.CurveCurviestBlueprintUtils
// 0x0000 (0x0028 - 0x0028)
class UCurveCurviestBlueprintUtils final : public UBlueprintFunctionLibrary
{
public:
	static float GetValueFromCurve(class UCurveBase* Curve, class FName Name_0, float InTime);
	static float GetValueFromTaggedCurve(class UCurveCurviest* Curve, const struct FGameplayTag& Tag, float InTime, bool bAllowParamLookup);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CurveCurviestBlueprintUtils">();
	}
	static class UCurveCurviestBlueprintUtils* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurveCurviestBlueprintUtils>();
	}
};
static_assert(alignof(UCurveCurviestBlueprintUtils) == 0x000008, "Wrong alignment on UCurveCurviestBlueprintUtils");
static_assert(sizeof(UCurveCurviestBlueprintUtils) == 0x000028, "Wrong size on UCurveCurviestBlueprintUtils");

// Class TheCurviestCurve.CurveCurviest
// 0x0128 (0x0158 - 0x0030)
class UCurveCurviest final : public UCurveBase
{
public:
	class UCurveCurviest*                         Parent;                                            // 0x0030(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCurviestCurveData>             CurveData;                                         // 0x0038(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCurviestCurveFloatParam>       Params_0;                                          // 0x0048(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_58[0x100];                                     // 0x0058(0x0100)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetFloatValue(class FName Name_0, float InTime) const;
	bool GetFloatValueFromNamedCurve(class FName Name_0, float InTime, float* ValueOut) const;
	bool GetFloatValueFromTaggedCurve(const struct FGameplayTag& IdentifierTag, float InTime, float* ValueOut, bool bAllowParamLookup) const;
	bool GetFloatValueFromTaggedParam(const struct FGameplayTag& IdentifierTag, float* ValueOut) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CurveCurviest">();
	}
	static class UCurveCurviest* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurveCurviest>();
	}
};
static_assert(alignof(UCurveCurviest) == 0x000008, "Wrong alignment on UCurveCurviest");
static_assert(sizeof(UCurveCurviest) == 0x000158, "Wrong size on UCurveCurviest");
static_assert(offsetof(UCurveCurviest, Parent) == 0x000030, "Member 'UCurveCurviest::Parent' has a wrong offset!");
static_assert(offsetof(UCurveCurviest, CurveData) == 0x000038, "Member 'UCurveCurviest::CurveData' has a wrong offset!");
static_assert(offsetof(UCurveCurviest, Params_0) == 0x000048, "Member 'UCurveCurviest::Params_0' has a wrong offset!");

}


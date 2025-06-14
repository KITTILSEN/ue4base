﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GamepadPlugin

#include "Basic.hpp"


namespace SDK
{

// Enum GamepadPlugin.EPlayerInputType
// NumValues: 0x0005
enum class EPlayerInputType : uint8
{
	MouseAndKeyboard                         = 0,
	Gamepad                                  = 1,
	Touch                                    = 2,
	Count                                    = 3,
	EPlayerInputType_MAX                     = 4,
};

// ScriptStruct GamepadPlugin.AimAssistTargetOptions
// 0x0010 (0x0010 - 0x0000)
struct FAimAssistTargetOptions final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bIsActive : 1;                                     // 0x0008(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AimAssistModifier;                                 // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAimAssistTargetOptions) == 0x000004, "Wrong alignment on FAimAssistTargetOptions");
static_assert(sizeof(FAimAssistTargetOptions) == 0x000010, "Wrong size on FAimAssistTargetOptions");
static_assert(offsetof(FAimAssistTargetOptions, AimAssistModifier) == 0x00000C, "Member 'FAimAssistTargetOptions::AimAssistModifier' has a wrong offset!");

// ScriptStruct GamepadPlugin.LyraAimAssistTarget
// 0x0058 (0x0058 - 0x0000)
struct alignas(0x08) FLyraAimAssistTarget final
{
public:
	uint8                                         Pad_0[0x58];                                       // 0x0000(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLyraAimAssistTarget) == 0x000008, "Wrong alignment on FLyraAimAssistTarget");
static_assert(sizeof(FLyraAimAssistTarget) == 0x000058, "Wrong size on FLyraAimAssistTarget");

}


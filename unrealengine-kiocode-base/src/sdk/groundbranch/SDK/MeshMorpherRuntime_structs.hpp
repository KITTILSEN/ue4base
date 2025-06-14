﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MeshMorpherRuntime

#include "Basic.hpp"


namespace SDK
{

// Enum MeshMorpherRuntime.EMeshMorpherBakeBranches
// NumValues: 0x0003
enum class EMeshMorpherBakeBranches : uint8
{
	OnStart                                  = 0,
	OnComplete                               = 1,
	EMeshMorpherBakeBranches_MAX             = 2,
};

// ScriptStruct MeshMorpherRuntime.MeshMorpherWorkerRef
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FMeshMorpherWorkerRef final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMeshMorpherWorkerRef) == 0x000008, "Wrong alignment on FMeshMorpherWorkerRef");
static_assert(sizeof(FMeshMorpherWorkerRef) == 0x000010, "Wrong size on FMeshMorpherWorkerRef");

}


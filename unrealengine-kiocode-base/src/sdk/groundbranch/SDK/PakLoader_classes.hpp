﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PakLoader

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class PakLoader.AsyncPakDownloader
// 0x0040 (0x0070 - 0x0030)
class UAsyncPakDownloader final : public UBlueprintAsyncActionBase
{
public:
	TMulticastInlineDelegate<void(int32 HttpResponseCode, int32 ContentLength, const class FString& SavePath, int32 BytesReceived)> OnSuccess; // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(int32 HttpResponseCode, int32 ContentLength, const class FString& SavePath, int32 BytesReceived)> OnFail; // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(int32 HttpResponseCode, int32 ContentLength, const class FString& SavePath, int32 BytesReceived)> OnProgress; // 0x0050(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x10];                                      // 0x0060(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UAsyncPakDownloader* DownloadPak(const class FString& URL, const class FString& SavePath);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AsyncPakDownloader">();
	}
	static class UAsyncPakDownloader* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncPakDownloader>();
	}
};
static_assert(alignof(UAsyncPakDownloader) == 0x000008, "Wrong alignment on UAsyncPakDownloader");
static_assert(sizeof(UAsyncPakDownloader) == 0x000070, "Wrong size on UAsyncPakDownloader");
static_assert(offsetof(UAsyncPakDownloader, OnSuccess) == 0x000030, "Member 'UAsyncPakDownloader::OnSuccess' has a wrong offset!");
static_assert(offsetof(UAsyncPakDownloader, OnFail) == 0x000040, "Member 'UAsyncPakDownloader::OnFail' has a wrong offset!");
static_assert(offsetof(UAsyncPakDownloader, OnProgress) == 0x000050, "Member 'UAsyncPakDownloader::OnProgress' has a wrong offset!");

// Class PakLoader.PakLoaderLibrary
// 0x0000 (0x0028 - 0x0028)
class UPakLoaderLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool DoesPakDirectoryExist(const class FString& PakDirectory);
	static void EnableRuntimeLog(bool bEnable, const class FString& NewLogPath);
	static TArray<class FString> GetFilesInPak(const class FString& PakFilename, bool bUAssetOnly);
	static TArray<class FString> GetFilesInPakDirectory(const class FString& PakDirectory, bool bRecursively);
	static TArray<class FString> GetMountedPakFilenames();
	static class UAnimSequence* GetPakFileAnimSequence(const class FString& Filename);
	static class UClass* GetPakFileClass(const class FString& Filename);
	static class UMaterial* GetPakFileMaterial(const class FString& Filename);
	static class UMaterialInstanceConstant* GetPakFileMaterialInstanceConstant(const class FString& Filename);
	static class UObject* GetPakFileObject(const class FString& Filename);
	static class USkeletalMesh* GetPakFileSkeletalMesh(const class FString& Filename);
	static class USoundBase* GetPakFileSound(const class FString& Filename);
	static class UStaticMesh* GetPakFileStaticMesh(const class FString& Filename);
	static bool GetPakFileText(const class FString& Filename, class FString* String);
	static class UTexture2D* GetPakFileTexture2D(const class FString& Filename);
	static class FString GetProjectName();
	static class FString GetShortName(const class FString& LongName);
	static bool IsPackagedBuild();
	static bool IsValidPakFile(const class FString& PakFilename, int64* PakSize);
	static void LoadPakAssetRegistryFile(const class FString& AssetRegistryFile);
	static bool MountPakFile(const class FString& PakFilename, const class FString& MountPath);
	static bool MountPakFileEasy(const class FString& PakFilename);
	static class FString ProjectPersistentDownloadDir();
	static bool RegisterEncryptionKey(const class FString& Guid, const class FString& AesKey);
	static void RegisterMountPoint(const class FString& RootPath, const class FString& ContentPath);
	static void RuntimeLog(const class FString& Text);
	static class FString SHA1SUM(const class FString& Filename);
	static bool TryConvertFilenameToLongPackageName(const class FString& Filename, class FString* PackageName);
	static bool UnmountPakFile(const class FString& PakFilename);
	static void UnRegisterMountPoint(const class FString& RootPath, const class FString& ContentPath);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PakLoaderLibrary">();
	}
	static class UPakLoaderLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPakLoaderLibrary>();
	}
};
static_assert(alignof(UPakLoaderLibrary) == 0x000008, "Wrong alignment on UPakLoaderLibrary");
static_assert(sizeof(UPakLoaderLibrary) == 0x000028, "Wrong size on UPakLoaderLibrary");

}


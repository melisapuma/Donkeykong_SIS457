// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Donkeykong_SIS457/Donkeykong_SIS457GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonkeykong_SIS457GameMode() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ADonkeykong_SIS457GameMode_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ADonkeykong_SIS457GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Donkeykong_SIS457();
// End Cross Module References
	void ADonkeykong_SIS457GameMode::StaticRegisterNativesADonkeykong_SIS457GameMode()
	{
	}
	UClass* Z_Construct_UClass_ADonkeykong_SIS457GameMode_NoRegister()
	{
		return ADonkeykong_SIS457GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADonkeykong_SIS457GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADonkeykong_SIS457GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Donkeykong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeykong_SIS457GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Donkeykong_SIS457GameMode.h" },
		{ "ModuleRelativePath", "Donkeykong_SIS457GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADonkeykong_SIS457GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADonkeykong_SIS457GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADonkeykong_SIS457GameMode_Statics::ClassParams = {
		&ADonkeykong_SIS457GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADonkeykong_SIS457GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeykong_SIS457GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADonkeykong_SIS457GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADonkeykong_SIS457GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADonkeykong_SIS457GameMode, 3420080614);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<ADonkeykong_SIS457GameMode>()
	{
		return ADonkeykong_SIS457GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADonkeykong_SIS457GameMode(Z_Construct_UClass_ADonkeykong_SIS457GameMode, &ADonkeykong_SIS457GameMode::StaticClass, TEXT("/Script/Donkeykong_SIS457"), TEXT("ADonkeykong_SIS457GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADonkeykong_SIS457GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

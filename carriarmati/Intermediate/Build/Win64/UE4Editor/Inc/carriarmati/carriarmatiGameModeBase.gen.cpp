// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CarriArmatiGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarriArmatiGameModeBase() {}
// Cross Module References
	CARRIARMATI_API UClass* Z_Construct_UClass_ACarriArmatiGameModeBase_NoRegister();
	CARRIARMATI_API UClass* Z_Construct_UClass_ACarriArmatiGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CarriArmati();
// End Cross Module References
	void ACarriArmatiGameModeBase::StaticRegisterNativesACarriArmatiGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACarriArmatiGameModeBase_NoRegister()
	{
		return ACarriArmatiGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ACarriArmatiGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_CarriArmati,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "CarriArmatiGameModeBase.h" },
				{ "ModuleRelativePath", "CarriArmatiGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACarriArmatiGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACarriArmatiGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACarriArmatiGameModeBase, 872779751);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACarriArmatiGameModeBase(Z_Construct_UClass_ACarriArmatiGameModeBase, &ACarriArmatiGameModeBase::StaticClass, TEXT("/Script/CarriArmati"), TEXT("ACarriArmatiGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACarriArmatiGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

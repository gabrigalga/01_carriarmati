// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "carriarmatiGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecarriarmatiGameModeBase() {}
// Cross Module References
	CARRIARMATI_API UClass* Z_Construct_UClass_AcarriarmatiGameModeBase_NoRegister();
	CARRIARMATI_API UClass* Z_Construct_UClass_AcarriarmatiGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_carriarmati();
// End Cross Module References
	void AcarriarmatiGameModeBase::StaticRegisterNativesAcarriarmatiGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AcarriarmatiGameModeBase_NoRegister()
	{
		return AcarriarmatiGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AcarriarmatiGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_carriarmati,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "carriarmatiGameModeBase.h" },
				{ "ModuleRelativePath", "carriarmatiGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AcarriarmatiGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AcarriarmatiGameModeBase::StaticClass,
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
	IMPLEMENT_CLASS(AcarriarmatiGameModeBase, 3011100226);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AcarriarmatiGameModeBase(Z_Construct_UClass_AcarriarmatiGameModeBase, &AcarriarmatiGameModeBase::StaticClass, TEXT("/Script/carriarmati"), TEXT("AcarriarmatiGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AcarriarmatiGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

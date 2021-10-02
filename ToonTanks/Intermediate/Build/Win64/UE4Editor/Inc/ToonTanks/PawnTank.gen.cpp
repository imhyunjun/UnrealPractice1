// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/Pawn/PawnTank.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnTank() {}
// Cross Module References
	TOONTANKS_API UClass* Z_Construct_UClass_APawnTank_NoRegister();
	TOONTANKS_API UClass* Z_Construct_UClass_APawnTank();
	TOONTANKS_API UClass* Z_Construct_UClass_APawnBase();
	UPackage* Z_Construct_UPackage__Script_ToonTanks();
// End Cross Module References
	void APawnTank::StaticRegisterNativesAPawnTank()
	{
	}
	UClass* Z_Construct_UClass_APawnTank_NoRegister()
	{
		return APawnTank::StaticClass();
	}
	struct Z_Construct_UClass_APawnTank_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APawnTank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawnBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnTank_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawn/PawnTank.h" },
		{ "ModuleRelativePath", "Pawn/PawnTank.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APawnTank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APawnTank>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APawnTank_Statics::ClassParams = {
		&APawnTank::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APawnTank_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APawnTank_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APawnTank()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APawnTank_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APawnTank, 2491275643);
	template<> TOONTANKS_API UClass* StaticClass<APawnTank>()
	{
		return APawnTank::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APawnTank(Z_Construct_UClass_APawnTank, &APawnTank::StaticClass, TEXT("/Script/ToonTanks"), TEXT("APawnTank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APawnTank);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

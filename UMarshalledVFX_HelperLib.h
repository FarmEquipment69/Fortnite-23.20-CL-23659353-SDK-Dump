// Class /Script/FortniteGame.MarshalledVFX_HelperLib
// Size: 0x28
class UMarshalledVFX_HelperLib : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.MarshalledVFX_HelperLib.SetVectorParam (Underlying native function: SetVectorParam 0x8865758)
	static void SetVectorParam(class UObject*& Context, struct FGameplayTagContainer& WithMatching, struct FName& Name, struct FVector& Value); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.MarshalledVFX_HelperLib.SetupDependentVFX (Underlying native function: SetupDependentVFX 0x88660cc)
	static void SetupDependentVFX(class UObject*& Context, bool& bPointersAreSafeToRetain); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.MarshalledVFX_HelperLib.SetMaterialParam (Underlying native function: SetMaterialParam 0x8864ea8)
	static void SetMaterialParam(class UObject*& Context, struct FGameplayTagContainer& WithMatching, struct FName& Name, class UMaterialInterface*& Value); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.MarshalledVFX_HelperLib.SetIntParam (Underlying native function: SetIntParam 0x8864cb4)
	static void SetIntParam(class UObject*& Context, struct FGameplayTagContainer& WithMatching, struct FName& Name, int& Value); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.MarshalledVFX_HelperLib.SetFloatParam (Underlying native function: SetFloatParam 0x8864684)
	static void SetFloatParam(class UObject*& Context, struct FGameplayTagContainer& WithMatching, struct FName& Name, float& Value); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.MarshalledVFX_HelperLib.SetColorParam (Underlying native function: SetColorParam 0x8864434)
	static void SetColorParam(class UObject*& Context, struct FGameplayTagContainer& WithMatching, struct FName& Name, struct FLinearColor& Value); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.MarshalledVFX_HelperLib.SetBoolParam (Underlying native function: SetBoolParam 0x88642c8)
	static void SetBoolParam(class UObject*& Context, struct FGameplayTagContainer& WithMatching, struct FName& Name, bool& Value); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.MarshalledVFX_HelperLib.SetBaseForSystems (Underlying native function: SetBaseForSystems 0x8863b14)
	static void SetBaseForSystems(class UObject*& Context, class USceneComponent*& Base); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.MarshalledVFX_HelperLib.SetActorParam (Underlying native function: SetActorParam 0x8863880)
	static void SetActorParam(class UObject*& Context, struct FGameplayTagContainer& WithMatching, struct FName& Name, class AActor*& Value); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.MarshalledVFX_HelperLib.MapParticleInstanceParamNames (Underlying native function: MapParticleInstanceParamNames 0x8862a54)
	static struct TArray<struct FParticleSysParam> MapParticleInstanceParamNames(struct TMap<struct FName, struct FParameterNameMapping*>& Mappings, struct TArray<struct FParticleSysParam>& Params, class UFXSystemComponent*& ForComponent); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.MarshalledVFX_HelperLib.GetMatchingSystemComponentsAs (Underlying native function: GetMatchingSystemComponentsAs 0x8860e14)
	static struct TArray<class UFXSystemComponent*> GetMatchingSystemComponentsAs(class UObject*& Context, struct FGameplayTagContainer& WithMatching, class UClass*& Class); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.MarshalledVFX_HelperLib.GetMatchingSystemComponents (Underlying native function: GetMatchingSystemComponents 0x8860cd8)
	static struct TArray<class UFXSystemComponent*> GetMatchingSystemComponents(class UObject*& Context, struct FGameplayTagContainer& WithMatching); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.MarshalledVFX_HelperLib.DeactivateMatching (Underlying native function: DeactivateMatching 0x886062c)
	static void DeactivateMatching(class UObject*& Context, struct FGameplayTagContainer& Tags); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.MarshalledVFX_HelperLib.CleanupDependentVFX (Underlying native function: CleanupDependentVFX 0x8860430)
	static void CleanupDependentVFX(class UObject*& Context); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.MarshalledVFX_HelperLib.ActivateMatching (Underlying native function: ActivateMatching 0x885d44c)
	static void ActivateMatching(class UObject*& Context, struct FGameplayTagContainer& Tags, bool& bReset); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)
};


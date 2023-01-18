// Class /Script/CRDBossRuntime.BossRuntimeBlueprintFunctionlibrary
// Size: 0x28
class UBossRuntimeBlueprintFunctionlibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/CRDBossRuntime.BossRuntimeBlueprintFunctionlibrary.MakeFortItemEntryFromVariantHandle (Underlying native function: MakeFortItemEntryFromVariantHandle 0x5599510)
	static struct FFortItemEntry MakeFortItemEntryFromVariantHandle(struct FItemVariantHandle& InVariantHandle); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/CRDBossRuntime.BossRuntimeBlueprintFunctionlibrary.GetExportPath (Underlying native function: GetExportPath 0x5599430)
	static struct FString GetExportPath(class UObject*& InObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/CRDBossRuntime.BossRuntimeBlueprintFunctionlibrary.GetBossAbilityRegistryScope (Underlying native function: GetBossAbilityRegistryScope 0x5598fb0)
	static struct TArray<struct FName> GetBossAbilityRegistryScope(class UFortGameplayAbility*& InAbility); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/CRDBossRuntime.BossRuntimeBlueprintFunctionlibrary.GetActorNavAgentLocation (Underlying native function: GetActorNavAgentLocation 0x5598d90)
	static bool GetActorNavAgentLocation(class AActor*& InActor, struct FVector& OutVector); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/CRDBossRuntime.BossRuntimeBlueprintFunctionlibrary.DoAbilityRotationChecksPass (Underlying native function: DoAbilityRotationChecksPass 0x55989d0)
	static bool DoAbilityRotationChecksPass(class AFortPawn*& OwningPawn, class UFortGameplayAbility*& FortGameplayAbility, class AActor*& TargetActor); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/CRDBossRuntime.BossRuntimeBlueprintFunctionlibrary.DoAbilityDistanceChecksPass (Underlying native function: DoAbilityDistanceChecksPass 0x5598770)
	static bool DoAbilityDistanceChecksPass(class AFortPawn*& OwningPawn, class UFortGameplayAbility*& FortGameplayAbility, class AActor*& TargetActor, struct FGameplayTagContainer& MinRange, struct FGameplayTagContainer& MaxRange); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/CRDBossRuntime.BossRuntimeBlueprintFunctionlibrary.DoAbilityActivationChecksPass (Underlying native function: DoAbilityActivationChecksPass 0x5598630)
	static bool DoAbilityActivationChecksPass(class AFortPawn*& OwningPawn, class UFortGameplayAbility*& FortGameplayAbility); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/CRDBossRuntime.BossRuntimeBlueprintFunctionlibrary.AddNewValueToIntMap (Underlying native function: AddNewValueToIntMap 0x5598320)
	static void AddNewValueToIntMap(struct FDelegate& OnOldValueFoundDelegate, struct TMap<struct FGameplayTag, int>& InMap, struct FGameplayTag& InKey, int& NewValue); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CRDBossRuntime.BossRuntimeBlueprintFunctionlibrary.AddNewValueToFloatMap (Underlying native function: AddNewValueToFloatMap 0x5598130)
	static void AddNewValueToFloatMap(struct FDelegate& OnOldValueFoundDelegate, struct TMap<struct FGameplayTag, double>& InMap, struct FGameplayTag& InKey, float& NewValue); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CRDBossRuntime.BossRuntimeBlueprintFunctionlibrary.AddNewValueToBoolMap (Underlying native function: AddNewValueToBoolMap 0x5597f40)
	static void AddNewValueToBoolMap(struct FDelegate& OnOldValueFoundDelegate, struct TMap<struct FGameplayTag, bool>& InMap, struct FGameplayTag& InKey, bool& NewValue); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};


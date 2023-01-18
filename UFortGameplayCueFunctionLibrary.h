// Class /Script/FortniteGame.FortGameplayCueFunctionLibrary
// Size: 0x28
class UFortGameplayCueFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.RemoveGameplayCueLocal (Underlying native function: RemoveGameplayCueLocal 0x24f7c1c)
	static void RemoveGameplayCueLocal(class AActor*& Target, struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& CueParameters, bool& bOnlyNotifies); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.RemoveGameplayCue (Underlying native function: RemoveGameplayCue 0x2a1452c)
	static void RemoveGameplayCue(class AActor*& TargetActor, struct FGameplayTag& GameplayCueTag); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.PlayBurstEffect (Underlying native function: PlayBurstEffect 0x8141e58)
	static void PlayBurstEffect(struct FFortBurstEffectData& BurstEffect, class AActor*& Target, struct FGameplayCueParameters& CueParameters, struct FFortGameplayCueSpawnResult& outResult); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.ExecuteGameplayCueLocal (Underlying native function: ExecuteGameplayCueLocal 0x22cfb14)
	static void ExecuteGameplayCueLocal(class AActor*& Target, struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& CueParameters, bool& bOnlyNotifies); // (Final | 0x00000002 | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.ExecuteGameplayCue (Underlying native function: ExecuteGameplayCue 0x8140774)
	static void ExecuteGameplayCue(class AActor*& TargetActor, struct FGameplayTag& GameplayCueTag, struct FGameplayEffectContextHandle& Context); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.CheckSpawnConditionForSource (Underlying native function: CheckSpawnConditionForSource 0x813f458)
	static bool CheckSpawnConditionForSource(class AActor*& Target, class AActor*& SourceActor, struct FFortGameplayCueSpawnCondition& Condition); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.CheckSpawnConditionForHitResult (Underlying native function: CheckSpawnConditionForHitResult 0x813f290)
	static bool CheckSpawnConditionForHitResult(class AActor*& Target, class AActor*& SourceActor, struct FHitResult& HitResult, struct FFortGameplayCueSpawnCondition& Condition); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.CheckSpawnConditionForCueParameters (Underlying native function: CheckSpawnConditionForCueParameters 0x813f0fc)
	static bool CheckSpawnConditionForCueParameters(class AActor*& Target, struct FGameplayCueParameters& CueParameters, struct FFortGameplayCueSpawnCondition& Condition); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.BuildCueParametersFromSource (Underlying native function: BuildCueParametersFromSource 0x813f018)
	static void BuildCueParametersFromSource(class AActor*& SourceActor, struct FGameplayCueParameters& OutCueParameters); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.BuildCueParametersFromHitResult (Underlying native function: BuildCueParametersFromHitResult 0x813eecc)
	static void BuildCueParametersFromHitResult(class AActor*& SourceActor, struct FHitResult& HitResult, struct FGameplayCueParameters& OutCueParameters); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.AddGameplayCueLocal (Underlying native function: AddGameplayCueLocal 0x2658f28)
	static void AddGameplayCueLocal(class AActor*& Target, struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& CueParameters, bool& bOnlyNotifies); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.AddGameplayCue (Underlying native function: AddGameplayCue 0x813e608)
	static void AddGameplayCue(class AActor*& TargetActor, struct FGameplayTag& GameplayCueTag, struct FGameplayEffectContextHandle& Context); // (Final | Native | Static | Public | BlueprintCallable)
};


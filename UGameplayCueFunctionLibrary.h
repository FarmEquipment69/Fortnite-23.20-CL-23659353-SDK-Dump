// Class /Script/GameplayAbilities.GameplayCueFunctionLibrary
// Size: 0x28
class UGameplayCueFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/GameplayAbilities.GameplayCueFunctionLibrary.RemoveGameplayCueOnActor (Underlying native function: RemoveGameplayCueOnActor 0x6b13ddc)
	static void RemoveGameplayCueOnActor(class AActor*& Target, struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& Parameters); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayCueFunctionLibrary.MakeGameplayCueParametersFromHitResult (Underlying native function: MakeGameplayCueParametersFromHitResult 0x6b13cd0)
	static struct FGameplayCueParameters MakeGameplayCueParametersFromHitResult(struct FHitResult& HitResult); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.GameplayCueFunctionLibrary.ExecuteGameplayCueOnActor (Underlying native function: ExecuteGameplayCueOnActor 0x25fa410)
	static void ExecuteGameplayCueOnActor(class AActor*& Target, struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& Parameters); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayCueFunctionLibrary.AddGameplayCueOnActor (Underlying native function: AddGameplayCueOnActor 0x6b13b38)
	static void AddGameplayCueOnActor(class AActor*& Target, struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& Parameters); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};


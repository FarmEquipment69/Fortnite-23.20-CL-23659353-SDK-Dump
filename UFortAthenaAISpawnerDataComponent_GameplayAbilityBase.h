// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase
// Size: 0x70
class UFortAthenaAISpawnerDataComponent_GameplayAbilityBase : public UFortAthenaAISpawnerDataComponent
{
	struct TArray<struct FInitialGameplayEffectInfo> InitialGameplayEffect; // 0x30 (0x10)
	struct TArray<class UFortAbilitySet*> InitialGameplayAbilitiesSet; // 0x40 (0x10)
	struct FGameplayTagContainer LooseTagsToApplyToPawn; // 0x50 (0x20)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase.SetLooseTagsToApplyToPawn (Underlying native function: SetLooseTagsToApplyToPawn 0xa3ad6e4)
	void SetLooseTagsToApplyToPawn(struct FGameplayTagContainer& InGameplayTagContainer); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase.GetLooseTagsToApplyToPawn (Underlying native function: GetLooseTagsToApplyToPawn 0xa3ac578)
	struct FGameplayTagContainer GetLooseTagsToApplyToPawn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase.GetInitialGameplayEffects (Underlying native function: GetInitialGameplayEffects 0xa3ac364)
	void GetInitialGameplayEffects(struct TArray<struct FInitialGameplayEffectInfo>& OutGEs); // (Native | Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase.GetInitialGameplayAbilities (Underlying native function: GetInitialGameplayAbilities 0xa3ac2c4)
	void GetInitialGameplayAbilities(struct TArray<class UFortAbilitySet*>& OutGASets); // (Native | Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};


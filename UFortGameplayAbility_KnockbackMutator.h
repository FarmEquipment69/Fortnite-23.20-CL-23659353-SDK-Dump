// Class /Script/KnockbackRuntime.FortGameplayAbility_KnockbackMutator
// Size: 0xb30
class UFortGameplayAbility_KnockbackMutator : public UFortGameplayAbility
{
	class AFortAthenaMutator_Knockback* CachedMutator; // 0xb20 (0x8)
	class UClass* MutatorClassToGet; // 0xb28 (0x8)

	/* Functions */

	// Function /Script/KnockbackRuntime.FortGameplayAbility_KnockbackMutator.SaveKnockbackData (Underlying native function: SaveKnockbackData 0x747c100)
	void SaveKnockbackData(struct FKnockbackMutatorData& InKnockbackData); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/KnockbackRuntime.FortGameplayAbility_KnockbackMutator.GetCachedMutator (Underlying native function: GetCachedMutator 0x747bf68)
	class AFortAthenaMutator_Knockback* GetCachedMutator(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure)
};


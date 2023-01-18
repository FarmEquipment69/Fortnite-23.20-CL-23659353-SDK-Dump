// Class /Script/FortniteGame.FortGameplayModifierItemDefinition
// Size: 0x498
class UFortGameplayModifierItemDefinition : public UFortAccountItemDefinition
{
	struct TArray<struct FFortGameplayEffectDeliveryInfo> PersistentGameplayEffects; // 0x420 (0x10)
	struct TArray<struct FFortAbilitySetDeliveryInfo> PersistentAbilitySets; // 0x430 (0x10)
	struct TArray<struct TWeakObjectPtr<class UClass>> Mutators; // 0x440 (0x10)
	bool bHiddenInUI; // 0x450 (0x1)
	unsigned char unreflected_451[0x7]; // 0x451 (0x7) 
	struct FGameplayTagContainer DisallowedPlaylistNameTags; // 0x458 (0x20)
	struct FGameplayTagContainer DynamicPlaylistNameTags; // 0x478 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayModifierItemDefinition.IsHiddenInUI (Underlying native function: IsHiddenInUI 0x8a65118)
	bool IsHiddenInUI(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};


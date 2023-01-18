// Class /Script/FortniteGame.FortHardcoreModifierItemDefinition
// Size: 0x400
class UFortHardcoreModifierItemDefinition : public UFortPersistableItemDefinition
{
	struct TWeakObjectPtr<class UFortAbilitySet> ModifierAbilitySet; // 0x3a8 (0x28)
	struct FGameplayTagContainer AdditionalSourceTagsToAdd; // 0x3d0 (0x20)
	struct TArray<struct TWeakObjectPtr<class UFortAccoladeItemDefinition>> TierAccolades; // 0x3f0 (0x10)
};


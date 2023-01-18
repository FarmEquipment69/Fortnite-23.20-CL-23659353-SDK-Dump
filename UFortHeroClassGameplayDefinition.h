// Class /Script/FortniteGame.FortHeroClassGameplayDefinition
// Size: 0x98
class UFortHeroClassGameplayDefinition : public UDataAsset
{
	struct TWeakObjectPtr<class UClass> OverridePawnClass; // 0x30 (0x28)
	struct FGameplayTagContainer HeroClassTags; // 0x58 (0x20)
	struct FDataTableRowHandle LegacyStatHandle; // 0x78 (0x10)
	struct TArray<struct TWeakObjectPtr<class UFortAbilityKit>> ClassAbilityKits; // 0x88 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortHeroClassGameplayDefinition.GetAbilityKitsForClassPerks (Underlying native function: GetAbilityKitsForClassPerks 0x8ecee50)
	static struct TArray<class UFortAbilityKit*> GetAbilityKitsForClassPerks(class UFortHeroType*& HeroDefinition); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)
};


// Class /Script/FortniteGame.FortExpeditionItemDefinition
// Size: 0x458
class UFortExpeditionItemDefinition : public UFortAccountItemDefinition
{
	struct FString CriteriaRequirementsLootTier; // 0x420 (0x10)
	float ExpeditionDurationMinutes; // 0x430 (0x4)
	float ExpeditionExpirationDurationMinutes; // 0x434 (0x4)
	int BaseTargetPowerRating; // 0x438 (0x4)
	int TierFactor; // 0x43c (0x4)
	int MaxTargetPowerClamp; // 0x440 (0x4)
	unsigned char unreflected_444[0x4]; // 0x444 (0x4) 
	struct FDataTableRowHandle ExpeditionRules; // 0x448 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortExpeditionItemDefinition.GetRequiredTags (Underlying native function: GetRequiredTags 0x8eaa7ec)
	struct FGameplayTagContainer GetRequiredTags(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortExpeditionItemDefinition.GetExpeditionCosts (Underlying native function: GetExpeditionCosts 0x8ea9f78)
	void GetExpeditionCosts(struct TArray<struct FItemAndCount>& OutExpeditionCosts); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortExpeditionItemDefinition.GetAllRewards (Underlying native function: GetAllRewards 0x8ea9a18)
	void GetAllRewards(struct TArray<class UFortCardPackItemDefinition*>& OutRewards); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};


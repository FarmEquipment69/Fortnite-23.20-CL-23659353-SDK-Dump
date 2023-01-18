// Class /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButton
// Size: 0x1470
class UFortSurvivorSquadSelectorButton : public UFortSquadSelectorButton
{
	struct TArray<struct FGameplayAttribute> FortStatAttributes; // 0x1448 (0x10)
	struct TArray<struct FGameplayAttribute> FortTeamStatAttributes; // 0x1458 (0x10)
	unsigned char padding_1468[0x8]; // 0x1468 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButton.TryGetSummaryStats (Underlying native function: TryGetSummaryStats 0x75c3974)
	bool TryGetSummaryStats(struct FFortSurvivorSquadSelectorButtonSummaryStats& OutSummaryStats); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButton.TryGetSquadMembers (Underlying native function: TryGetSquadMembers 0x75c3480)
	bool TryGetSquadMembers(struct TArray<class UFortWorker*>& OutSquadMembers); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButton.TryGetPersonalityMatches (Underlying native function: TryGetPersonalityMatches 0x75c3168)
	bool TryGetPersonalityMatches(struct FFortSurvivorSquadSelectorButtonPersonalityMatches& OutPersonalityMatches); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};


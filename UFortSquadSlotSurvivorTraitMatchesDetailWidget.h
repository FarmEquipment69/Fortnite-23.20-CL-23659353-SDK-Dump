// Class /Script/SaveTheWorldUI.FortSquadSlotSurvivorTraitMatchesDetailWidget
// Size: 0x330
class UFortSquadSlotSurvivorTraitMatchesDetailWidget : public UFortSquadSlotItemDetailElementWidget
{
	bool IsSquadLeaderSlot; // 0x308 (0x1)
	bool LeaderMatchesSquadType; // 0x309 (0x1)
	unsigned char unreflected_30a[0x2]; // 0x30a (0x2) 
	int SubordinatePersonalityMatchCount; // 0x30c (0x4)
	bool MatchesLeaderPersonality; // 0x310 (0x1)
	unsigned char unreflected_311[0x3]; // 0x311 (0x3) 
	int MatchingSetBonusCount; // 0x314 (0x4)
	int SetBonusSize; // 0x318 (0x4)
	unsigned char padding_31c[0x14]; // 0x31c (0x14)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortSquadSlotSurvivorTraitMatchesDetailWidget.HandleTraitValuesUpdatedBP (Has no native function)
	void HandleTraitValuesUpdatedBP(); // (Event | Protected | BlueprintEvent)
};


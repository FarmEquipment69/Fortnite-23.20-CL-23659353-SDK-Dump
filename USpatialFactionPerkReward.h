// Class /Script/FortniteUI.SpatialFactionPerkReward
// Size: 0x1460
class USpatialFactionPerkReward : public UCommonButtonLegacy
{
	bool bIsTopRow; // 0x1430 (0x1)
	unsigned char unreflected_1431[0x7]; // 0x1431 (0x7) 
	class UFortPlayerPerksItemDefinition* Faction1PerksItemDef; // 0x1438 (0x8)
	class UFortPlayerPerksItemDefinition* Faction2PerksItemDef; // 0x1440 (0x8)
	unsigned char padding_1448[0x18]; // 0x1448 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.SpatialFactionPerkReward.OnInitializePerkReward (Has no native function)
	void OnInitializePerkReward(int& FactionNumber, int& PerkLevel, struct TWeakObjectPtr<class UTexture2D>& RewardTexture, bool& bIsRevealed, bool& bIsEarned, bool& bIsCurrentFaction, bool& bShowBang); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.SpatialFactionPerkReward.OnFactionSet (Has no native function)
	void OnFactionSet(bool& bIsCurrentFaction); // (Event | Protected | BlueprintEvent)
};


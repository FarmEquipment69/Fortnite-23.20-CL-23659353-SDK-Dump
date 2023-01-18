// Class /Script/FortniteUI.SpatialFactionPerkTier
// Size: 0x290
class USpatialFactionPerkTier : public UUserWidget
{
	class USpatialFactionPerkReward* RewardFaction1; // 0x268 (0x8)
	class USpatialFactionPerkProgress* ProgressFaction1; // 0x270 (0x8)
	class USpatialFactionPerkReward* RewardFaction2; // 0x278 (0x8)
	class USpatialFactionPerkProgress* ProgressFaction2; // 0x280 (0x8)
	unsigned char padding_288[0x8]; // 0x288 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.SpatialFactionPerkTier.OnInitializePerkTier (Has no native function)
	void OnInitializePerkTier(int& PerkLevel, bool& bIsRevealed, int& PerkIndex); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.SpatialFactionPerkTier.OnFactionSet (Has no native function)
	void OnFactionSet(bool& bIsCurrentFactionEarned, bool& bIsRevealed, int& FactionNumber); // (Event | Protected | BlueprintEvent)
};


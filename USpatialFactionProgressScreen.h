// Class /Script/FortniteUI.SpatialFactionProgressScreen
// Size: 0x430
class USpatialFactionProgressScreen : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x30]; // 0x3a8 (0x30) 
	class UFortPlayerPerksItemDefinition* Faction1PerksItemDef; // 0x3d8 (0x8)
	class UFortPlayerPerksItemDefinition* Faction2PerksItemDef; // 0x3e0 (0x8)
	class UCommonButtonGroupLegacy* ButtonGroupFactionPerks; // 0x3e8 (0x8)
	class UCommonButtonLegacy* ButtonSwapFaction; // 0x3f0 (0x8)
	class UCommonButtonLegacy* SpatialFactionShadowButton; // 0x3f8 (0x8)
	class UCommonButtonLegacy* SpatialFactionGhostButton; // 0x400 (0x8)
	class UDynamicEntryBox* EntryBoxFactionPerkTiers; // 0x408 (0x8)
	class UScrollBox* ScrollBoxPerkItems; // 0x410 (0x8)
	class UFortSocialAvatarIcon* IconPlayerImage; // 0x418 (0x8)
	class UTextBlock* TextPlayerName; // 0x420 (0x8)
	unsigned char padding_428[0x8]; // 0x428 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.SpatialFactionProgressScreen.OnPerkSelected (Has no native function)
	void OnPerkSelected(class UFortSpyTechItemDefinition*& PerkItemDef, int& PerkLevel, int& PerkFaction, bool& bIsRevealed, bool& bIsEarned, bool& bIsCurrentFaction); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.SpatialFactionProgressScreen.OnFactionSet (Has no native function)
	void OnFactionSet(int& PlayerFaction); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.SpatialFactionProgressScreen.HandlePerkSelected (Underlying native function: HandlePerkSelected 0xa7c346c)
	void HandlePerkSelected(class UCommonButtonLegacy*& AssociatedButton, int& Index); // (Final | Native | Private)
};


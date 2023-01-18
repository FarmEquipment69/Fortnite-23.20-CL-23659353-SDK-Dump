// Class /Script/SaveTheWorldUI.FortCommandScreen
// Size: 0x3d0
class UFortCommandScreen : public UCommonActivatableWidget
{
	struct FDataTableRowHandle ShowAllStatsActionData; // 0x3a8 (0x10)
	struct FDataTableRowHandle InspectHeroActionData; // 0x3b8 (0x10)
	unsigned char padding_3c8[0x8]; // 0x3c8 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCommandScreen.PushItemInspectionScreen (Underlying native function: PushItemInspectionScreen 0x7572264)
	void PushItemInspectionScreen(class UFortItem*& ItemToInspect, enum EFortItemInspectionMode& Mode, class UFortItemTileView*& CycleTileView, bool& bReadOnly, bool& bAllowFavoriting, bool& bIsTemporaryItem, bool& bAllowRarityUpgrading); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortCommandScreen.PushHeroLoadoutScreen (Underlying native function: PushHeroLoadoutScreen 0x7572170)
	void PushHeroLoadoutScreen(class UFortCampaignHeroLoadoutItem*& HeroLoadout); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortCommandScreen.HandleUpgradeInspectHero (Has no native function)
	void HandleUpgradeInspectHero(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCommandScreen.HandleShowAllStats (Has no native function)
	void HandleShowAllStats(); // (Event | Protected | BlueprintEvent)
};


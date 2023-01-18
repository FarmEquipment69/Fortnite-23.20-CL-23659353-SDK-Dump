// Class /Script/SaveTheWorldUI.FortArmoryScreen
// Size: 0x3a8
class UFortArmoryScreen : public UCommonActivatableWidget
{

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortArmoryScreen.PushItemManagementScreen (Underlying native function: PushItemManagementScreen 0x757248c)
	void PushItemManagementScreen(enum EFortFrontendInventoryFilter& ItemManagementFilter, class UFortItem*& ItemToSelect, bool& bShowAutoMulch); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortArmoryScreen.PushItemInspectionScreen (Underlying native function: PushItemInspectionScreen 0x7572264)
	void PushItemInspectionScreen(class UFortItem*& ItemToInspect, enum EFortItemInspectionMode& Mode, class UFortItemTileView*& CycleTileView, bool& bReadOnly, bool& bAllowFavoriting, bool& bIsTemporaryItem, bool& bAllowRarityUpgrading); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortArmoryScreen.PushHeroLoadoutScreen (Underlying native function: PushHeroLoadoutScreen 0x7572170)
	void PushHeroLoadoutScreen(class UFortCampaignHeroLoadoutItem*& HeroLoadout); // (Final | Native | Protected | BlueprintCallable)
};


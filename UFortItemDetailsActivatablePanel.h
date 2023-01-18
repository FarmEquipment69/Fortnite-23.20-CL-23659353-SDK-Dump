// Class /Script/FortniteUI.FortItemDetailsActivatablePanel
// Size: 0x528
class UFortItemDetailsActivatablePanel : public UCommonActivatablePanelLegacy
{
	struct TWeakObjectPtr<class UFortItem> ItemToDetail; // 0x4e0 (0x8)
	struct TWeakObjectPtr<class UFortItem> ItemToCompareWith; // 0x4e8 (0x8)
	struct TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen; // 0x4f0 (0x8)
	unsigned char unreflected_4f8[0x20]; // 0x4f8 (0x20) 
	class UFortTooltipLoadingWrapper* ItemToDetailLoadingWrapper; // 0x518 (0x8)
	class UCommonLoadGuard* ItemToDetailLoadGuard; // 0x520 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortItemDetailsActivatablePanel.HandleItemToDetailTooltipAssetsLoaded (Underlying native function: HandleItemToDetailTooltipAssetsLoaded 0xa826140)
	void HandleItemToDetailTooltipAssetsLoaded(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortItemDetailsActivatablePanel.HandleDifferentItemToDetailSetBP (Has no native function)
	void HandleDifferentItemToDetailSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemDetailsActivatablePanel.HandleDifferentItemToCompareSetBP (Has no native function)
	void HandleDifferentItemToCompareSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemDetailsActivatablePanel.HandleConsumeItemProgressChangedBP (Has no native function)
	void HandleConsumeItemProgressChangedBP(); // (Event | Protected | BlueprintEvent)
};


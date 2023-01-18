// Class /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW
// Size: 0x3f0
class UFortItemDetailsActivatablePanel_STW : public UCommonActivatableWidget
{
	struct TWeakObjectPtr<class UFortItem> ItemToDetail; // 0x3a8 (0x8)
	struct TWeakObjectPtr<class UFortItem> ItemToCompareWith; // 0x3b0 (0x8)
	struct TWeakObjectPtr<class UFortItemManagementScreen_STW> HostItemManagementScreen; // 0x3b8 (0x8)
	unsigned char unreflected_3c0[0x20]; // 0x3c0 (0x20) 
	class UFortTooltipLoadingWrapper* ItemToDetailLoadingWrapper; // 0x3e0 (0x8)
	class UCommonLoadGuard* ItemToDetailLoadGuard; // 0x3e8 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleItemToDetailTooltipAssetsLoaded (Underlying native function: HandleItemToDetailTooltipAssetsLoaded 0x756f44c)
	void HandleItemToDetailTooltipAssetsLoaded(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleDifferentItemToDetailSetBP (Has no native function)
	void HandleDifferentItemToDetailSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleDifferentItemToCompareSetBP (Has no native function)
	void HandleDifferentItemToCompareSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleConsumeItemProgressChangedBP (Has no native function)
	void HandleConsumeItemProgressChangedBP(); // (Event | Protected | BlueprintEvent)
};


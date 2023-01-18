// Class /Script/FortniteUI.AthenaCollectionScreenContainer
// Size: 0x500
class UAthenaCollectionScreenContainer : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x20]; // 0x3a8 (0x20) 
	struct FAthenaMapScreenContainerTabInfo MapTabInfo; // 0x3c8 (0x50)
	class UCommonVisibilitySwitcher* VisibilitySwitcherContent; // 0x418 (0x8)
	class UCommonButtonLegacy* MobileCloseButton; // 0x420 (0x8)
	struct TArray<struct FAthenaCollectionScreenContainerTabInfo> TabInfos; // 0x428 (0x10)
	struct FDataTableRowHandle NextTabInputAction; // 0x438 (0x10)
	struct FDataTableRowHandle PreviousTabInputAction; // 0x448 (0x10)
	class UDynamicEntryBox* EntryBoxTabButtons; // 0x458 (0x8)
	class UCommonTextBlock* TextTabTitle; // 0x460 (0x8)
	struct TArray<struct FAthenaCollectionScreenContainerTabInfo> ActiveTabInfos; // 0x468 (0x10)
	unsigned char padding_478[0x88]; // 0x478 (0x88)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCollectionScreenContainer.EnableTabActions (Underlying native function: EnableTabActions 0xa46fe30)
	void EnableTabActions(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCollectionScreenContainer.DisableTabActions (Underlying native function: DisableTabActions 0xa46fdfc)
	void DisableTabActions(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCollectionScreenContainer.BP_OnShowTabsSet (Has no native function)
	void BPOnShowTabsSet(bool& bShowTabs); // (Event | Protected | BlueprintEvent)
};


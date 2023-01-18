// Class /Script/FortniteUI.FortItemPresentationScreen
// Size: 0x898
class UFortItemPresentationScreen : public UFortItemPreviewScreen
{
	class UClass* ItemCardClass; // 0x668 (0x8)
	struct TArray<struct FFortReceivedItemLootInfo> ItemDefs; // 0x670 (0x10)
	struct TArray<struct FFortReceivedItemLootInfo> PaidBattlePassItemDefs; // 0x680 (0x10)
	class UFortItem* CurrentItemSelected; // 0x690 (0x8)
	class UCommonButtonGroupLegacy* EntryBoxButtonGroup; // 0x698 (0x8)
	struct TArray<struct FText> BackgroundMessageTexts; // 0x6a0 (0x10)
	struct TArray<class UClass*> GiftboxCustomLeftsideContentWidgetClasses; // 0x6b0 (0x10)
	int MaxItemsInView; // 0x6c0 (0x4)
	float HotItemDisplayTime; // 0x6c4 (0x4)
	class UImage* FakeHackGradient; // 0x6c8 (0x8)
	struct FString SpecialCollectionTabID; // 0x6d0 (0x10)
	unsigned char unreflected_6e0[0x18]; // 0x6e0 (0x18) 
	struct FText MultipleItemPurchaseHeaderTitle; // 0x6f8 (0x18)
	struct FText SingleItemPurchaseHeaderTitle; // 0x710 (0x18)
	struct FText PurchaseHeaderBody; // 0x728 (0x18)
	struct TWeakObjectPtr<class UClass> LockerConfirmationModalClass; // 0x740 (0x28)
	unsigned char unreflected_768[0x8]; // 0x768 (0x8) 
	bool bShowingBattlePassItems; // 0x770 (0x1)
	unsigned char unreflected_771[0x7]; // 0x771 (0x7) 
	struct FDataTableRowHandle HoldToCloseScreen; // 0x778 (0x10)
	class UCommonButtonBase* ButtonEquip; // 0x788 (0x8)
	class UCommonButtonBase* ButtonNext; // 0x790 (0x8)
	class UCommonButtonBase* ButtonBattlePassRewards; // 0x798 (0x8)
	class UCommonButtonBase* ButtonBattlePassCustomization; // 0x7a0 (0x8)
	class UCommonButtonBase* ButtonSpecialCollection; // 0x7a8 (0x8)
	class UTextBlock* TextItemsCollected; // 0x7b0 (0x8)
	class UFortItemInfoPresentationWidget* ItemInfoPresentationWidget; // 0x7b8 (0x8)
	class UFortItemReceivedHeaderBase* ItemHeaderWidget; // 0x7c0 (0x8)
	class UAthenaBattlePassTracker* BattlePassTracker; // 0x7c8 (0x8)
	class UCommonRichTextBlock* TextUnownedBaseItemMessage; // 0x7d0 (0x8)
	class UImage* ImageLock; // 0x7d8 (0x8)
	class UDynamicEntryBox* DynamicEntryBoxItems; // 0x7e0 (0x8)
	class UCommonListView* ListViewItems; // 0x7e8 (0x8)
	class UCommonListView* ListViewPaidItems; // 0x7f0 (0x8)
	class UCommonBorder* BorderInputBlocker; // 0x7f8 (0x8)
	class UCommonButtonLegacy* ButtonLeftScrollArrow; // 0x800 (0x8)
	class UCommonButtonLegacy* ButtonRightScrollArrow; // 0x808 (0x8)
	class UAthenaExclusiveRewardBanner* BannerTokenDescription; // 0x810 (0x8)
	class UNamedSlot* CustomContent; // 0x818 (0x8)
	unsigned char padding_820[0x78]; // 0x820 (0x78)

	/* Functions */

	// Function /Script/FortniteUI.FortItemPresentationScreen.SetGiftBoxItem (Underlying native function: SetGiftBoxItem 0xa7e800c)
	void SetGiftBoxItem(class UFortGiftBoxItem*& GiftBoxItem); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemPresentationScreen.OnUpdateOwnedItemText (Has no native function)
	void OnUpdateOwnedItemText(bool& bShowText); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPresentationScreen.OnUpdateNextButtonText (Has no native function)
	void OnUpdateNextButtonText(bool& bShowNext); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPresentationScreen.OnUpdateItemInformation (Has no native function)
	void OnUpdateItemInformation(class UFortItem*& FortItem); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPresentationScreen.OnUpdateItemEquipped (Has no native function)
	void OnUpdateItemEquipped(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPresentationScreen.OnUpdateItemContextAction (Has no native function)
	void OnUpdateItemContextAction(enum EItemContextAction& ItemContextAction); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPresentationScreen.OnUpdateHeaderInformation (Has no native function)
	void OnUpdateHeaderInformation(struct FFortItemHeaderInformation& HeaderInformation); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPresentationScreen.OnSwitchToPaidItems (Has no native function)
	void OnSwitchToPaidItems(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPresentationScreen.OnSwitchLeftsideContent (Has no native function)
	void OnSwitchLeftsideContent(bool& bInDefaultContent); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPresentationScreen.OnLeftsideContentUpdated (Has no native function)
	void OnLeftsideContentUpdated(class UWidget*& LeftSideWidget, struct FCurrencyDataWithGiftBox& OutDataWithGiftBox); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPresentationScreen.OnInitialIconAnimation (Has no native function)
	void OnInitialIconAnimation(bool& bUsingListView); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPresentationScreen.OnFinishDisplayingHotItems (Has no native function)
	void OnFinishDisplayingHotItems(bool& bShowOtherRewards); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPresentationScreen.OnDisplayItemsCollectedText (Has no native function)
	void OnDisplayItemsCollectedText(bool& bCloseScreen); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPresentationScreen.OnDisplayEquipButton (Has no native function)
	void OnDisplayEquipButton(bool& bCanEquip); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPresentationScreen.OnCloseScreenWithoutAnimations (Has no native function)
	void OnCloseScreenWithoutAnimations(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPresentationScreen.OnCloseScreen (Has no native function)
	void OnCloseScreen(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPresentationScreen.HandleHoldToClose (Underlying native function: HandleHoldToClose 0xa7e6258)
	void HandleHoldToClose(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortItemPresentationScreen.HandleExitBattlePassPurchaseFlow (Underlying native function: HandleExitBattlePassPurchaseFlow 0xa7e61c4)
	void HandleExitBattlePassPurchaseFlow(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortItemPresentationScreen.HandleBack (Underlying native function: HandleBack 0x1bb0548)
	void HandleBack(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemPresentationScreen.FinishSwitchingToPaidItems (Underlying native function: FinishSwitchingToPaidItems 0xa7e5214)
	void FinishSwitchingToPaidItems(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemPresentationScreen.EnableUserControlOnPaidItems (Underlying native function: EnableUserControlOnPaidItems 0xa7e4ef0)
	void EnableUserControlOnPaidItems(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemPresentationScreen.ClearItemPreview (Underlying native function: ClearItemPreview 0x47ab1e0)
	void ClearItemPreview(); // (Final | Native | Protected | BlueprintCallable)
};


// Class /Script/FortniteUI.AthenaItemShopCarousel
// Size: 0x430
class UAthenaItemShopCarousel : public UCommonUserWidget
{
	unsigned char unreflected_290[0x98]; // 0x290 (0x98) 
	struct TWeakObjectPtr<class UClass> CarouselTileClass; // 0x328 (0x28)
	class UOverlay* ContainerCurrentTile; // 0x350 (0x8)
	class UOverlay* ContainerNextTileToShow; // 0x358 (0x8)
	class UFortClickThroughButton* MobileClickThroughButton; // 0x360 (0x8)
	class UPanelWidget* HBoxNavigationButtons; // 0x368 (0x8)
	class UCommonTextBlock* TextNextItem; // 0x370 (0x8)
	class UCommonTextBlock* TextPreviousItem; // 0x378 (0x8)
	class UImage* ImageAutoScrollProgress; // 0x380 (0x8)
	class UDynamicEntryBox* EntryBoxPips; // 0x388 (0x8)
	class UFortSwipePanel* SwipePanelItemsNavigation; // 0x390 (0x8)
	class UCommonButtonGroupLegacy* ButtonGroupPips; // 0x398 (0x8)
	struct TArray<class UAthenaItemShopCarouselTile*> Tiles; // 0x3a0 (0x10)
	struct FTimerHandle* TileSeenTimerHandle; // 0x3b0 (0x8)
	int SelectedItemIndex; // 0x3b8 (0x4)
	unsigned char unreflected_3bc[0x4]; // 0x3bc (0x4) 
	class UAthenaItemShopCarouselTile* NextTileToShow; // 0x3c0 (0x8)
	class UAthenaItemShopCarouselTile* CurrentTile; // 0x3c8 (0x8)
	unsigned char padding_3d0[0x60]; // 0x3d0 (0x60)

	/* Functions */

	// Function /Script/FortniteUI.AthenaItemShopCarousel.SelectPrevItem (Underlying native function: SelectPrevItem 0xa55709c)
	void SelectPrevItem(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopCarousel.SelectNextItem (Underlying native function: SelectNextItem 0xa557088)
	void SelectNextItem(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopCarousel.SelectItemAtIndex (Underlying native function: SelectItemAtIndex 0xa557008)
	void SelectItemAtIndex(int& ItemIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopCarousel.OnTransitionToPreviousTile (Has no native function)
	void OnTransitionToPreviousTile(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopCarousel.OnTransitionToNextTile (Has no native function)
	void OnTransitionToNextTile(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopCarousel.OnTransitionCompleted (Underlying native function: OnTransitionCompleted 0xa556b50)
	void OnTransitionCompleted(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopCarousel.OnSelectionChanged (Has no native function)
	void OnSelectionChanged(bool& bInIsSelected); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopCarousel.OnIntroAnim (Has no native function)
	void OnIntroAnim(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopCarousel.GetSelectedIndex (Underlying native function: GetSelectedIndex 0x2d011a4)
	int GetSelectedIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};


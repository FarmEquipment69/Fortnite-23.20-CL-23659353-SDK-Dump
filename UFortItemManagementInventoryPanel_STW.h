// Class /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW
// Size: 0x468
class UFortItemManagementInventoryPanel_STW : public UCommonUserWidget
{
	unsigned char unreflected_290[0x50]; // 0x290 (0x50) 
	struct FName CurrentFilterName; // 0x2e0 (0x4)
	enum EInventoryContentSortType CurrentSortType; // 0x2e4 (0x1)
	unsigned char unreflected_2e5[0x3]; // 0x2e5 (0x3) 
	class UClass* FilterTabButtonType; // 0x2e8 (0x8)
	class UClass* FilterTabButtonStyle; // 0x2f0 (0x8)
	struct TArray<struct FFortItemManagementInventoryFilterTabLabelInfo> FilterTabLabelInfoArray; // 0x2f8 (0x10)
	class UFortTabListWidgetBase* FilterTabList; // 0x308 (0x8)
	class UCommonLoadGuard* TileViewLoadGuard; // 0x310 (0x8)
	class UFortItemTileView* TileView; // 0x318 (0x8)
	class UPanelWidget* CraftingPanel; // 0x320 (0x8)
	class UCommonLoadGuard* CraftingTileViewLoadGuard; // 0x328 (0x8)
	class UFortItemTileView* CraftingTileView; // 0x330 (0x8)
	class UPanelWidget* StoragePanel; // 0x338 (0x8)
	class UCommonLoadGuard* StorageTileViewLoadGuard; // 0x340 (0x8)
	class UFortItemTileView* StorageTileView; // 0x348 (0x8)
	class UCommonTextBlock* MulchRestrictionReasonText; // 0x350 (0x8)
	enum EFortItemCardSize SmallTileSize; // 0x358 (0x1)
	enum EFortItemCardSize LargeTileSize; // 0x359 (0x1)
	unsigned char unreflected_35a[0x2]; // 0x35a (0x2) 
	struct TWeakObjectPtr<class UFortItemManagementScreen_STW> HostItemManagementScreen; // 0x35c (0x8)
	bool bCanDragItems; // 0x364 (0x1)
	unsigned char unreflected_365[0x3]; // 0x365 (0x3) 
	struct TArray<struct FQuickbarEquipSlotIndicesConfig> DefaultQuickbarEquipSlotIndicesConfigs; // 0x368 (0x10)
	struct TMap<struct FName, int> QuickbarEquipSlotIndices; // 0x378 (0x50)
	unsigned char unreflected_3c8[0x90]; // 0x3c8 (0x90) 
	class UFortInventoryContext* InventoryContext; // 0x458 (0x8)
	class UWidget* WidgetToCenter; // 0x460 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.UpdateSchematicTiles (Underlying native function: UpdateSchematicTiles 0x75743e4)
	void UpdateSchematicTiles(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.ToggleTileSize (Underlying native function: ToggleTileSize 0x7574180)
	void ToggleTileSize(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.TogglePrioritizeFavorites (Underlying native function: TogglePrioritizeFavorites 0x7574128)
	void TogglePrioritizeFavorites(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.SwitchPanelFocus (Underlying native function: SwitchPanelFocus 0x7573fe8)
	void SwitchPanelFocus(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.SetSortType (Underlying native function: SetSortType 0x7573e3c)
	void SetSortType(enum EInventoryContentSortType& SortType); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.SetFilter (Underlying native function: SetFilter 0x75738d8)
	void SetFilter(struct FName& FilterName); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.RequestFocusEquipSlots (Underlying native function: RequestFocusEquipSlots 0x7572b88)
	void RequestFocusEquipSlots(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.RefreshCraftingSort (Underlying native function: RefreshCraftingSort 0x7572588)
	void RefreshCraftingSort(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.OnMulchRestrictionTextShown (Has no native function)
	void OnMulchRestrictionTextShown(bool& bShown); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.MarkAllItemsAsSeen (Underlying native function: MarkAllItemsAsSeen 0x7570508)
	void MarkAllItemsAsSeen(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.IsSwitchPanelAvailable (Underlying native function: IsSwitchPanelAvailable 0x7570474)
	bool IsSwitchPanelAvailable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.IsSelectedItem (Underlying native function: IsSelectedItem 0x7570288)
	bool IsSelectedItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HasUnlockedStorageSlots (Underlying native function: HasUnlockedStorageSlots 0x756fefc)
	bool HasUnlockedStorageSlots(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleSetOfItemsToMulchChangedBP (Has no native function)
	void HandleSetOfItemsToMulchChangedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleQuickBarChangedBP (Has no native function)
	void HandleQuickBarChangedBP(enum EFortQuickBars& QuickBarType); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleItemBeginDrag (Underlying native function: HandleItemBeginDrag 0x756f3cc)
	void HandleItemBeginDrag(class UObject*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleInventoryUpdatedEvent (Underlying native function: HandleInventoryUpdatedEvent 0x756f3b8)
	void HandleInventoryUpdatedEvent(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleFocusEquipSlotsBP (Has no native function)
	void HandleFocusEquipSlotsBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleFilterTabSelected (Underlying native function: HandleFilterTabSelected 0x756f338)
	void HandleFilterTabSelected(struct FName& TabNameID); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleFilterTabButtonCreated (Underlying native function: HandleFilterTabButtonCreated 0x756f278)
	void HandleFilterTabButtonCreated(struct FName& TabNameID, class UCommonButtonBase*& TabButton); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentSortTypeSetBP (Has no native function)
	void HandleDifferentSortTypeSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentItemManagementModeSetBP (Has no native function)
	void HandleDifferentItemManagementModeSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentFrontendInventoryFilterSetBP (Has no native function)
	void HandleDifferentFrontendInventoryFilterSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentFilterSetBP (Has no native function)
	void HandleDifferentFilterSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCustomInventoryFilterChanged (Underlying native function: HandleCustomInventoryFilterChanged 0x756efac)
	void HandleCustomInventoryFilterChanged(); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCursorModeChangedBP (Has no native function)
	void HandleCursorModeChangedBP(bool& bCursorModeEnabled, struct FName& ActionName, class UUserWidget*& CursorModeContentWidget); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCursorModeChanged (Underlying native function: HandleCursorModeChanged 0x756eea4)
	void HandleCursorModeChanged(bool& bCursorModeEnabled, struct FName& ActionName, class UUserWidget*& CursorModeContentWidget); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCraftItemStarted (Underlying native function: HandleCraftItemStarted 0x756ee80)
	void HandleCraftItemStarted(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetUpgradeItemDefinitionsForCurrentInventory (Underlying native function: GetUpgradeItemDefinitionsForCurrentInventory 0x756e7b4)
	struct TArray<class UFortItemDefinition*> GetUpgradeItemDefinitionsForCurrentInventory(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetSupportedSortTypesForCurrentInventory (Underlying native function: GetSupportedSortTypesForCurrentInventory 0x756e324)
	struct TArray<enum EInventoryContentSortType> GetSupportedSortTypesForCurrentInventory(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetShouldPrioritizeFavorites (Underlying native function: GetShouldPrioritizeFavorites 0x756e1dc)
	bool GetShouldPrioritizeFavorites(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetQualifiedFilterDisplayName (Underlying native function: GetQualifiedFilterDisplayName 0x756dff4)
	struct FText GetQualifiedFilterDisplayName(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.CycleSortType (Underlying native function: CycleSortType 0x756d714)
	void CycleSortType(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.CanDragItems (Underlying native function: CanDragItems 0x756d570)
	bool CanDragItems(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.AdvanceSelection (Underlying native function: AdvanceSelection 0x756cf3c)
	void AdvanceSelection(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.AddItemStackToMulch (Underlying native function: AddItemStackToMulch 0x756cde8)
	void AddItemStackToMulch(class UFortItem*& Item, int& Count); // (Final | Native | Protected | BlueprintCallable)
};


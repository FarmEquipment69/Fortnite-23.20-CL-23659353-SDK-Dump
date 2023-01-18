// Class /Script/FortniteUI.FortItemManagementInventoryPanel
// Size: 0x468
class UFortItemManagementInventoryPanel : public UCommonUserWidget
{
	unsigned char unreflected_290[0x50]; // 0x290 (0x50) 
	struct FName CurrentFilterName; // 0x2e0 (0x4)
	enum EInventoryContentSortType CurrentSortType; // 0x2e4 (0x1)
	unsigned char unreflected_2e5[0x3]; // 0x2e5 (0x3) 
	class UClass* FilterTabButtonType; // 0x2e8 (0x8)
	class UClass* FilterTabButtonStyle; // 0x2f0 (0x8)
	struct TArray<struct FFortItemManagementInventoryFilterTabLabelInfo> FilterTabLabelInfoArray; // 0x2f8 (0x10)
	class UFortTabListWidgetBase_Legacy* FilterTabList; // 0x308 (0x8)
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
	struct TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen; // 0x35c (0x8)
	bool bCanDragItems; // 0x364 (0x1)
	unsigned char unreflected_365[0x3]; // 0x365 (0x3) 
	struct TArray<struct FQuickbarEquipSlotIndicesConfig> DefaultQuickbarEquipSlotIndicesConfigs; // 0x368 (0x10)
	struct TMap<struct FName, int> QuickbarEquipSlotIndices; // 0x378 (0x50)
	unsigned char unreflected_3c8[0x90]; // 0x3c8 (0x90) 
	class UFortInventoryContext* InventoryContext; // 0x458 (0x8)
	class UWidget* WidgetToCenter; // 0x460 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.UpdateSchematicTiles (Underlying native function: UpdateSchematicTiles 0xa7e8d34)
	void UpdateSchematicTiles(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.ToggleTileSize (Underlying native function: ToggleTileSize 0xa7e8bb0)
	void ToggleTileSize(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.TogglePrioritizeFavorites (Underlying native function: TogglePrioritizeFavorites 0xa7e8b00)
	void TogglePrioritizeFavorites(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.SwitchPanelFocus (Underlying native function: SwitchPanelFocus 0xa7e8a6c)
	void SwitchPanelFocus(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.SetSortType (Underlying native function: SetSortType 0xa7e8828)
	void SetSortType(enum EInventoryContentSortType& SortType); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.SetFilter (Underlying native function: SetFilter 0xa7e7da8)
	void SetFilter(struct FName& FilterName); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.RequestFocusEquipSlots (Underlying native function: RequestFocusEquipSlots 0xa7e784c)
	void RequestFocusEquipSlots(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.RefreshCraftingSort (Underlying native function: RefreshCraftingSort 0xa7e7838)
	void RefreshCraftingSort(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.OnMulchRestrictionTextShown (Has no native function)
	void OnMulchRestrictionTextShown(bool& bShown); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.MarkAllItemsAsSeen (Underlying native function: MarkAllItemsAsSeen 0xa7e748c)
	void MarkAllItemsAsSeen(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.IsSwitchPanelAvailable (Underlying native function: IsSwitchPanelAvailable 0xa7e7378)
	bool IsSwitchPanelAvailable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.IsSelectedItem (Underlying native function: IsSelectedItem 0xa7e72c4)
	bool IsSelectedItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.HasUnlockedStorageSlots (Underlying native function: HasUnlockedStorageSlots 0x756fefc)
	bool HasUnlockedStorageSlots(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.HandleSetOfItemsToMulchChangedBP (Has no native function)
	void HandleSetOfItemsToMulchChangedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.HandleQuickBarChangedBP (Has no native function)
	void HandleQuickBarChangedBP(enum EFortQuickBars& QuickBarType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.HandleItemBeginDrag (Underlying native function: HandleItemBeginDrag 0xa7e62f8)
	void HandleItemBeginDrag(class UObject*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.HandleInventoryUpdatedEvent (Underlying native function: HandleInventoryUpdatedEvent 0xa7e62e4)
	void HandleInventoryUpdatedEvent(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.HandleFocusEquipSlotsBP (Has no native function)
	void HandleFocusEquipSlotsBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.HandleFilterTabSelected (Underlying native function: HandleFilterTabSelected 0xa7e61d8)
	void HandleFilterTabSelected(struct FName& TabNameID); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.HandleFilterTabButtonCreated (Underlying native function: HandleFilterTabButtonCreated 0x756f278)
	void HandleFilterTabButtonCreated(struct FName& TabNameID, class UCommonButtonBase*& TabButton); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.HandleDifferentSortTypeSetBP (Has no native function)
	void HandleDifferentSortTypeSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.HandleDifferentItemManagementModeSetBP (Has no native function)
	void HandleDifferentItemManagementModeSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.HandleDifferentFrontendInventoryFilterSetBP (Has no native function)
	void HandleDifferentFrontendInventoryFilterSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.HandleDifferentFilterSetBP (Has no native function)
	void HandleDifferentFilterSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.HandleCustomInventoryFilterChanged (Underlying native function: HandleCustomInventoryFilterChanged 0xa7e61b0)
	void HandleCustomInventoryFilterChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.HandleCursorModeChangedBP (Has no native function)
	void HandleCursorModeChangedBP(bool& bCursorModeEnabled, struct FName& ActionName, class UUserWidget*& CursorModeContentWidget); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.HandleCursorModeChanged (Underlying native function: HandleCursorModeChanged 0xa7e60a8)
	void HandleCursorModeChanged(bool& bCursorModeEnabled, struct FName& ActionName, class UUserWidget*& CursorModeContentWidget); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.HandleCraftItemStarted (Underlying native function: HandleCraftItemStarted 0xa7e6084)
	void HandleCraftItemStarted(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.GetUpgradeItemDefinitionsForCurrentInventory (Underlying native function: GetUpgradeItemDefinitionsForCurrentInventory 0xa7e5fd8)
	struct TArray<class UFortItemDefinition*> GetUpgradeItemDefinitionsForCurrentInventory(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.GetSupportedSortTypesForCurrentInventory (Underlying native function: GetSupportedSortTypesForCurrentInventory 0xa7e5b64)
	struct TArray<enum EInventoryContentSortType> GetSupportedSortTypesForCurrentInventory(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.GetShouldPrioritizeFavorites (Underlying native function: GetShouldPrioritizeFavorites 0x756e1dc)
	bool GetShouldPrioritizeFavorites(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.GetQualifiedFilterDisplayName (Underlying native function: GetQualifiedFilterDisplayName 0xa7e59f4)
	struct FText GetQualifiedFilterDisplayName(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.CycleSortType (Underlying native function: CycleSortType 0xa7e4d70)
	void CycleSortType(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.CanDragItems (Underlying native function: CanDragItems 0x756d570)
	bool CanDragItems(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.AdvanceSelection (Underlying native function: AdvanceSelection 0xa7e47b0)
	void AdvanceSelection(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementInventoryPanel.AddItemStackToMulch (Underlying native function: AddItemStackToMulch 0x756cde8)
	void AddItemStackToMulch(class UFortItem*& Item, int& Count); // (Final | Native | Protected | BlueprintCallable)
};


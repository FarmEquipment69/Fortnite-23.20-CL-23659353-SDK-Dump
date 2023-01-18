// Class /Script/FortniteUI.FortItemManagementScreen
// Size: 0x670
class UFortItemManagementScreen : public UFortActivatablePanel
{
	unsigned char unreflected_518[0x8]; // 0x518 (0x8) 
	struct FMulticastInlineDelegate OnItemViewRefreshed; // 0x520 (0x10)
	unsigned char unreflected_530[0xc0]; // 0x530 (0xc0) 
	enum EFortItemManagementMode Mode; // 0x5f0 (0x1)
	enum EFortFrontendInventoryFilter FrontendInventoryFilter; // 0x5f1 (0x1)
	bool bReadOnlyModeWIFE; // 0x5f2 (0x1)
	bool ConsumeItemRequestInProgress; // 0x5f3 (0x1)
	unsigned char unreflected_5f4[0x4]; // 0x5f4 (0x4) 
	class UFortItemManagementInventoryPanel* InventoryPanel; // 0x5f8 (0x8)
	class UFortItemManagementModeDetailsPanel* ModeDetailsPanel; // 0x600 (0x8)
	struct TWeakObjectPtr<class UFortItem> ItemToDetail; // 0x608 (0x8)
	unsigned char unreflected_610[0x8]; // 0x610 (0x8) 
	class UClass* MulchConfirmationModalClass; // 0x618 (0x8)
	class UClass* CustomFilterModalClass; // 0x620 (0x8)
	unsigned char unreflected_628[0x18]; // 0x628 (0x18) 
	class UFortMulchConfirmationModalWidget* MulchConfirmationModal; // 0x640 (0x8)
	class UFortItemManagementCustomFilterModalWidget* CustomFilterModal; // 0x648 (0x8)
	unsigned char unreflected_650[0x8]; // 0x650 (0x8) 
	class UFortInventoryContext* InventoryContext; // 0x658 (0x8)
	unsigned char padding_660[0x10]; // 0x660 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortItemManagementScreen.TransferItem (Underlying native function: TransferItem 0xa7e8bc4)
	void TransferItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.ToggleShowRefundIndicator (Underlying native function: ToggleShowRefundIndicator 0xa7e8b84)
	void ToggleShowRefundIndicator(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.ToggleShowCollectionBookIndicator (Underlying native function: ToggleShowCollectionBookIndicator 0xa7e8b58)
	void ToggleShowCollectionBookIndicator(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.ShowWarningReadOnlyWIFE (Has no native function)
	void ShowWarningReadOnlyWIFE(bool& Force); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementScreen.ShowMulchConfirmationModal (Underlying native function: ShowMulchConfirmationModal 0xa7e8a14)
	void ShowMulchConfirmationModal(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.ShowCustomFilterModal (Underlying native function: ShowCustomFilterModal 0xa7e8a00)
	void ShowCustomFilterModal(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.SetFrontendInventoryFilter (Underlying native function: SetFrontendInventoryFilter 0xa7e7f8c)
	void SetFrontendInventoryFilter(enum EFortFrontendInventoryFilter& FrontendInventoryFilter); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.SetConsumeItemRequestInProgress (Underlying native function: SetConsumeItemRequestInProgress 0xa7e7b8c)
	void SetConsumeItemRequestInProgress(bool& InProgress); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.RequestPopupMenuForSelectedItem (Underlying native function: RequestPopupMenuForSelectedItem 0xa7e7890)
	void RequestPopupMenuForSelectedItem(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.OpenCraftingOptions (Underlying native function: OpenCraftingOptions 0xa7e7780)
	void OpenCraftingOptions(class UFortSchematicItem*& SchematicItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.OpenAutoMulchOptions (Underlying native function: OpenAutoMulchOptions 0xa7e7738)
	void OpenAutoMulchOptions(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.NotifyPanelDeactivated (Underlying native function: NotifyPanelDeactivated 0xa7e74f8)
	void NotifyPanelDeactivated(); // (Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.NotifyPanelActivated (Underlying native function: NotifyPanelActivated 0xa7e74dc)
	void NotifyPanelActivated(); // (Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.MarkAllItemsAsSeen (Underlying native function: MarkAllItemsAsSeen 0xa7e74a0)
	void MarkAllItemsAsSeen(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.IsScreenWIFE (Underlying native function: IsScreenWIFE 0xa7e72a0)
	bool IsScreenWIFE(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemManagementScreen.InspectItem (Underlying native function: InspectItem 0xa7e71d8)
	void InspectItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.HideMulchConfirmationModal (Underlying native function: HideMulchConfirmationModal 0xa7e71a8)
	void HideMulchConfirmationModal(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.HideCustomFilterModal (Underlying native function: HideCustomFilterModal 0xa7e7164)
	void HideCustomFilterModal(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.HasItemBeenSeen (Underlying native function: HasItemBeenSeen 0x7598b50)
	bool HasItemBeenSeen(class UFortAccountItem*& AccountItem); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemManagementScreen.HasDefaultItemsToMulch (Underlying native function: HasDefaultItemsToMulch 0xa7e7138)
	bool HasDefaultItemsToMulch(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemManagementScreen.HandleTransferItemBP (Has no native function)
	void HandleTransferItemBP(class UFortItem*& Item); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementScreen.HandleOpenCraftingOptionsBP (Has no native function)
	void HandleOpenCraftingOptionsBP(class UFortSchematicItem*& SchematicItem); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementScreen.HandleOpenAutoMulchOptionsBP (Has no native function)
	void HandleOpenAutoMulchOptionsBP(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementScreen.HandleMulchQuantitySelection (Has no native function)
	void HandleMulchQuantitySelection(class UFortItem*& Item); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementScreen.HandleItemToDetailChanged (Underlying native function: HandleItemToDetailChanged 0xa7e6e6c)
	void HandleItemToDetailChanged(bool& bItemChanged, bool& bAmmoChanged, bool& bIngredientsChanged); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortItemManagementScreen.HandleItemToCompareWithChanged (Underlying native function: HandleItemToCompareWithChanged 0xa7e6d80)
	void HandleItemToCompareWithChanged(bool& bItemChanged, bool& bAmmoChanged, bool& bIngredientsChanged); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortItemManagementScreen.HandleInspectItemBP (Has no native function)
	void HandleInspectItemBP(class UFortItem*& Item); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementScreen.HandleEquipItemBP (Has no native function)
	void HandleEquipItemBP(class UFortItem*& Item); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementScreen.HandleDropItemBP (Has no native function)
	void HandleDropItemBP(class UFortItem*& Item); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementScreen.HandleDifferentItemManagementModeSetBP (Has no native function)
	void HandleDifferentItemManagementModeSetBP(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementScreen.HandleCraftItemBP (Has no native function)
	void HandleCraftItemBP(class UFortSchematicItem*& SchematicItem, enum EFortItemTier& RequestedTier, int& CraftCount); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementScreen.HandleCraftAndSlotItemBP (Has no native function)
	void HandleCraftAndSlotItemBP(class UFortSchematicItem*& SchematicItem, enum EFortItemTier& RequestedTier, int& CraftCount); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementScreen.HandleConsumeItemBP (Has no native function)
	void HandleConsumeItemBP(class UFortConsumableAccountItem*& ConsumableItem); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementScreen.GuardActionForReadOnlyWIFE (Underlying native function: GuardActionForReadOnlyWIFE 0xa7e604c)
	bool GuardActionForReadOnlyWIFE(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.GetShouldShowRefundIndicator (Underlying native function: GetShouldShowRefundIndicator 0xa7e5aac)
	bool GetShouldShowRefundIndicator(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemManagementScreen.GetShouldShowCollectionBookIndicator (Underlying native function: GetShouldShowCollectionBookIndicator 0xa7e5a94)
	bool GetShouldShowCollectionBookIndicator(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemManagementScreen.GetItemToDetail (Underlying native function: GetItemToDetail 0xa7e5880)
	class UFortItem* GetItemToDetail(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemManagementScreen.GetItemToCompareDetailsWith (Underlying native function: GetItemToCompareDetailsWith 0xa7e5814)
	class UFortItem* GetItemToCompareDetailsWith(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemManagementScreen.EquipItem (Underlying native function: EquipItem 0xa7e5170)
	void EquipItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.EnterMulchModeForAutoMulch (Underlying native function: EnterMulchModeForAutoMulch 0xa7e515c)
	void EnterMulchModeForAutoMulch(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.EnterMulchMode (Underlying native function: EnterMulchMode 0xa7e5004)
	void EnterMulchMode(class UFortItem*& ItemToMulch); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.EnterDetailsMode (Underlying native function: EnterDetailsMode 0xa7e4f84)
	void EnterDetailsMode(class UFortItem*& ItemToDetail); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.EnterComparisonMode (Underlying native function: EnterComparisonMode 0xa7e4f04)
	void EnterComparisonMode(class UFortItem*& ItemToCompareDetailsWith); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.DropItem (Underlying native function: DropItem 0xa7e4de4)
	void DropItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.CycleSortType (Underlying native function: CycleSortType 0xa7e4d84)
	void CycleSortType(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.CraftItem (Underlying native function: CraftItem 0xa7e4c54)
	void CraftItem(class UFortSchematicItem*& SchematicItem, enum EFortItemTier& RequestedTier, int& CraftCount); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.CraftAndSlotItem (Underlying native function: CraftAndSlotItem 0xa7e4b38)
	void CraftAndSlotItem(class UFortSchematicItem*& SchematicItem, enum EFortItemTier& RequestedTier, int& CraftCount); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.ConsumeItem (Underlying native function: ConsumeItem 0xa7e4a00)
	void ConsumeItem(class UFortConsumableAccountItem*& ConsumableItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.CanRequestPopupMenuForSelectedItem (Underlying native function: CanRequestPopupMenuForSelectedItem 0xa7e4854)
	bool CanRequestPopupMenuForSelectedItem(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementScreen.CanEquipItem (Underlying native function: CanEquipItem 0x7595334)
	bool CanEquipItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemManagementScreen.CancelInventoryPanelTileViewRefresh (Underlying native function: CancelInventoryPanelTileViewRefresh 0xa7e4874)
	void CancelInventoryPanelTileViewRefresh(); // (Final | Native | Protected | BlueprintCallable)
};


// Class /Script/SaveTheWorldUI.FortItemManagementScreen_STW
// Size: 0x500
class UFortItemManagementScreen_STW : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	struct FMulticastInlineDelegate OnItemViewRefreshed; // 0x3b0 (0x10)
	unsigned char unreflected_3c0[0xc0]; // 0x3c0 (0xc0) 
	enum EFortItemManagementMode Mode; // 0x480 (0x1)
	enum EFortFrontendInventoryFilter FrontendInventoryFilter; // 0x481 (0x1)
	bool bReadOnlyModeWIFE; // 0x482 (0x1)
	bool ConsumeItemRequestInProgress; // 0x483 (0x1)
	unsigned char unreflected_484[0x4]; // 0x484 (0x4) 
	class UFortItemManagementInventoryPanel_STW* InventoryPanel; // 0x488 (0x8)
	class UFortItemManagementModeDetailsPanel_STW* ModeDetailsPanel; // 0x490 (0x8)
	struct TWeakObjectPtr<class UFortItem> ItemToDetail; // 0x498 (0x8)
	unsigned char unreflected_4a0[0x8]; // 0x4a0 (0x8) 
	class UClass* MulchConfirmationModalClass; // 0x4a8 (0x8)
	class UClass* CustomFilterModalClass; // 0x4b0 (0x8)
	unsigned char unreflected_4b8[0x18]; // 0x4b8 (0x18) 
	class UFortMulchConfirmationModalWidget* MulchConfirmationModal; // 0x4d0 (0x8)
	class UFortItemManagementCustomFilterModalWidget_STW* CustomFilterModal; // 0x4d8 (0x8)
	unsigned char unreflected_4e0[0x8]; // 0x4e0 (0x8) 
	class UFortInventoryContext* InventoryContext; // 0x4e8 (0x8)
	unsigned char padding_4f0[0x10]; // 0x4f0 (0x10)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.TransferItem (Underlying native function: TransferItem 0x759b37c)
	void TransferItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ToggleShowRefundIndicator (Underlying native function: ToggleShowRefundIndicator 0x759b350)
	void ToggleShowRefundIndicator(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ToggleShowCollectionBookIndicator (Underlying native function: ToggleShowCollectionBookIndicator 0x759b324)
	void ToggleShowCollectionBookIndicator(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ShowWarningReadOnlyWIFE (Has no native function)
	void ShowWarningReadOnlyWIFE(bool& Force); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ShowMulchConfirmationModal (Underlying native function: ShowMulchConfirmationModal 0x759b138)
	void ShowMulchConfirmationModal(); // (Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ShowCustomFilterModal (Underlying native function: ShowCustomFilterModal 0x759b124)
	void ShowCustomFilterModal(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.SetFrontendInventoryFilter (Underlying native function: SetFrontendInventoryFilter 0x759a258)
	void SetFrontendInventoryFilter(enum EFortFrontendInventoryFilter& FrontendInventoryFilter); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.SetConsumeItemRequestInProgress (Underlying native function: SetConsumeItemRequestInProgress 0x759a144)
	void SetConsumeItemRequestInProgress(bool& InProgress); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.RequestPopupMenuForSelectedItem (Underlying native function: RequestPopupMenuForSelectedItem 0x7599d44)
	void RequestPopupMenuForSelectedItem(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.OpenCraftingOptions (Underlying native function: OpenCraftingOptions 0x75997c0)
	void OpenCraftingOptions(class UFortSchematicItem*& SchematicItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.OpenAutoMulchOptions (Underlying native function: OpenAutoMulchOptions 0x7599778)
	void OpenAutoMulchOptions(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.NotifyPanelDeactivated (Underlying native function: NotifyPanelDeactivated 0x75995c4)
	void NotifyPanelDeactivated(); // (Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.NotifyPanelActivated (Underlying native function: NotifyPanelActivated 0x759958c)
	void NotifyPanelActivated(); // (Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.MarkAllItemsAsSeen (Underlying native function: MarkAllItemsAsSeen 0x759953c)
	void MarkAllItemsAsSeen(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.IsScreenWIFE (Underlying native function: IsScreenWIFE 0x759922c)
	bool IsScreenWIFE(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.InspectItem (Underlying native function: InspectItem 0x7598cf4)
	void InspectItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HideMulchConfirmationModal (Underlying native function: HideMulchConfirmationModal 0x7598ca8)
	void HideMulchConfirmationModal(); // (Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HideCustomFilterModal (Underlying native function: HideCustomFilterModal 0x7598c64)
	void HideCustomFilterModal(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HasItemBeenSeen (Underlying native function: HasItemBeenSeen 0x7598b50)
	bool HasItemBeenSeen(class UFortAccountItem*& AccountItem); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HasDefaultItemsToMulch (Underlying native function: HasDefaultItemsToMulch 0x7598b24)
	bool HasDefaultItemsToMulch(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleTransferItemBP (Has no native function)
	void HandleTransferItemBP(class UFortItem*& Item); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleOpenCraftingOptionsBP (Has no native function)
	void HandleOpenCraftingOptionsBP(class UFortSchematicItem*& SchematicItem); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleOpenAutoMulchOptionsBP (Has no native function)
	void HandleOpenAutoMulchOptionsBP(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleMulchQuantitySelection (Has no native function)
	void HandleMulchQuantitySelection(class UFortItem*& Item); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleItemToDetailChanged (Underlying native function: HandleItemToDetailChanged 0x7598174)
	void HandleItemToDetailChanged(bool& bItemChanged, bool& bAmmoChanged, bool& bIngredientsChanged); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleItemToCompareWithChanged (Underlying native function: HandleItemToCompareWithChanged 0x7598088)
	void HandleItemToCompareWithChanged(bool& bItemChanged, bool& bAmmoChanged, bool& bIngredientsChanged); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleInspectItemBP (Has no native function)
	void HandleInspectItemBP(class UFortItem*& Item); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleEquipItemBP (Has no native function)
	void HandleEquipItemBP(class UFortItem*& Item); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleDropItemBP (Has no native function)
	void HandleDropItemBP(class UFortItem*& Item); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleDifferentItemManagementModeSetBP (Has no native function)
	void HandleDifferentItemManagementModeSetBP(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleCraftItemBP (Has no native function)
	void HandleCraftItemBP(class UFortSchematicItem*& SchematicItem, enum EFortItemTier& RequestedTier, int& CraftCount); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleCraftAndSlotItemBP (Has no native function)
	void HandleCraftAndSlotItemBP(class UFortSchematicItem*& SchematicItem, enum EFortItemTier& RequestedTier, int& CraftCount); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleConsumeItemBP (Has no native function)
	void HandleConsumeItemBP(class UFortConsumableAccountItem*& ConsumableItem); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GuardActionForReadOnlyWIFE (Underlying native function: GuardActionForReadOnlyWIFE 0x7597cac)
	bool GuardActionForReadOnlyWIFE(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GetShouldShowRefundIndicator (Underlying native function: GetShouldShowRefundIndicator 0x7597834)
	bool GetShouldShowRefundIndicator(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GetShouldShowCollectionBookIndicator (Underlying native function: GetShouldShowCollectionBookIndicator 0x759781c)
	bool GetShouldShowCollectionBookIndicator(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GetItemToDetail (Underlying native function: GetItemToDetail 0x7596ef0)
	class UFortItem* GetItemToDetail(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GetItemToCompareDetailsWith (Underlying native function: GetItemToCompareDetailsWith 0x7596e84)
	class UFortItem* GetItemToCompareDetailsWith(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EquipItem (Underlying native function: EquipItem 0x7596080)
	void EquipItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EnterMulchModeForAutoMulch (Underlying native function: EnterMulchModeForAutoMulch 0x759606c)
	void EnterMulchModeForAutoMulch(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EnterMulchMode (Underlying native function: EnterMulchMode 0x7595f14)
	void EnterMulchMode(class UFortItem*& ItemToMulch); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EnterDetailsMode (Underlying native function: EnterDetailsMode 0x7595e94)
	void EnterDetailsMode(class UFortItem*& ItemToDetail); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EnterComparisonMode (Underlying native function: EnterComparisonMode 0x7595d78)
	void EnterComparisonMode(class UFortItem*& ItemToCompareDetailsWith); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.DropItem (Underlying native function: DropItem 0x7595cd4)
	void DropItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CycleSortType (Underlying native function: CycleSortType 0x7595aa0)
	void CycleSortType(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CraftItem (Underlying native function: CraftItem 0x7595984)
	void CraftItem(class UFortSchematicItem*& SchematicItem, enum EFortItemTier& RequestedTier, int& CraftCount); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CraftAndSlotItem (Underlying native function: CraftAndSlotItem 0x7595868)
	void CraftAndSlotItem(class UFortSchematicItem*& SchematicItem, enum EFortItemTier& RequestedTier, int& CraftCount); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ConsumeItem (Underlying native function: ConsumeItem 0x75957b0)
	void ConsumeItem(class UFortConsumableAccountItem*& ConsumableItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CanRequestPopupMenuForSelectedItem (Underlying native function: CanRequestPopupMenuForSelectedItem 0x7595578)
	bool CanRequestPopupMenuForSelectedItem(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CanEquipItem (Underlying native function: CanEquipItem 0x7595334)
	bool CanEquipItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CancelInventoryPanelTileViewRefresh (Underlying native function: CancelInventoryPanelTileViewRefresh 0x7595654)
	void CancelInventoryPanelTileViewRefresh(); // (Final | Native | Protected | BlueprintCallable)
};


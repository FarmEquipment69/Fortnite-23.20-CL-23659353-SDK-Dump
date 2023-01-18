// Class /Script/FortniteUI.FortItemListViewInterface
// Size: 0x28
class IFortItemListViewInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteUI.FortItemListViewInterface.ShowNullItemListEntry (Underlying native function: ShowNullItemListEntry 0xa7e8a30)
	void ShowNullItemListEntry(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemListViewInterface.SetSorter (Underlying native function: SetSorter 0xa7e88a8)
	void SetSorter(struct FFortItemSorterDefinition& Sorter); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemListViewInterface.SetItemViewContext (Underlying native function: SetItemViewContext 0xa7e8568)
	void SetItemViewContext(struct TScriptInterface<class IFortItemViewContextInterface>& ItemViewContext); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemListViewInterface.SetFilterAndSorter (Underlying native function: SetFilterAndSorter 0xa7e7e28)
	void SetFilterAndSorter(struct FFortItemFilterDefinition& Filter, struct FFortItemSorterDefinition& Sorter); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemListViewInterface.SetFilter (Underlying native function: SetFilter 0xa7e7cc0)
	void SetFilter(struct FFortItemFilterDefinition& Filter); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemListViewInterface.SetCustomItemList (Underlying native function: SetCustomItemList 0xa7e7c20)
	void SetCustomItemList(struct TArray<class UFortItem*>& ItemList); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemListViewInterface.SetConfig (Underlying native function: SetConfig 0xa7e7a74)
	void SetConfig(struct FFortItemListViewConfig& Config); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemListViewInterface.RefreshSort (Underlying native function: RefreshSort 0x7238a20)
	void RefreshSort(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemListViewInterface.RefreshFilterAndSort (Underlying native function: RefreshFilterAndSort 0x24fe6c4)
	void RefreshFilterAndSort(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemListViewInterface.HideNullItemListEntry (Underlying native function: HideNullItemListEntry 0xa7e71c4)
	void HideNullItemListEntry(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemListViewInterface.HandleItemRefundCompleted (Underlying native function: HandleItemRefundCompleted 0xa7e6b80)
	void HandleItemRefundCompleted(bool& bWasSuccessful, struct FString& OriginalItemInstanceId, struct TArray<struct FFortItemInstanceQuantityPair>& ItemQuantities); // (Native | Public | HasOutParms)

	// Function /Script/FortniteUI.FortItemListViewInterface.HandleItemRefundBegun (Underlying native function: HandleItemRefundBegun 0xa7e6a28)
	void HandleItemRefundBegun(struct FString& OriginalItemInstanceId); // (Native | Public)

	// Function /Script/FortniteUI.FortItemListViewInterface.HandleItemRarityUpgradeCompleted (Underlying native function: HandleItemRarityUpgradeCompleted 0xa7e6828)
	void HandleItemRarityUpgradeCompleted(bool& bWasSuccessful, struct FString& OriginalItemInstanceId, struct TArray<struct FFortItemInstanceQuantityPair>& ItemQuantities); // (Native | Public | HasOutParms)

	// Function /Script/FortniteUI.FortItemListViewInterface.HandleItemRarityUpgradeBegun (Underlying native function: HandleItemRarityUpgradeBegun 0xa7e66d0)
	void HandleItemRarityUpgradeBegun(struct FString& OriginalItemInstanceId); // (Native | Public)

	// Function /Script/FortniteUI.FortItemListViewInterface.HandleItemEvolutionCompleted (Underlying native function: HandleItemEvolutionCompleted 0xa7e64d0)
	void HandleItemEvolutionCompleted(bool& bWasSuccessful, struct FString& OriginalItemInstanceId, struct TArray<struct FFortItemInstanceQuantityPair>& ItemQuantities); // (Native | Public | HasOutParms)

	// Function /Script/FortniteUI.FortItemListViewInterface.HandleItemEvolutionBegun (Underlying native function: HandleItemEvolutionBegun 0xa7e6378)
	void HandleItemEvolutionBegun(struct FString& OriginalItemInstanceId); // (Native | Public)

	// Function /Script/FortniteUI.FortItemListViewInterface.GetSorter (Underlying native function: GetSorter 0xa7e5ac4)
	struct FFortItemSorterDefinition GetSorter(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemListViewInterface.GetFilter (Underlying native function: GetFilter 0xa7e545c)
	struct FFortItemFilterDefinition GetFilter(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemListViewInterface.GetConfig (Underlying native function: GetConfig 0xa7e53ac)
	struct FFortItemListViewConfig GetConfig(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemListViewInterface.ContainsItem (Underlying native function: ContainsItem 0xa7e4aa4)
	bool ContainsItem(class UFortItem*& Item); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemListViewInterface.ClearCustomItemList (Underlying native function: ClearCustomItemList 0xa7e4900)
	void ClearCustomItemList(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemListViewInterface.CenterSelectedItemListEntryWidget (Underlying native function: CenterSelectedItemListEntryWidget 0x2620534)
	void CenterSelectedItemListEntryWidget(); // (Native | Public | BlueprintCallable)
};


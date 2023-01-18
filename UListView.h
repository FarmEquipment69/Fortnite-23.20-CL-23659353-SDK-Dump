// Class /Script/UMG.ListView
// Size: 0xb90
class UListView : public UListViewBase
{
	unsigned char unreflected_260[0xe0]; // 0x260 (0xe0) 
	struct FTableViewStyle WidgetStyle; // 0x340 (0xd0)
	struct FScrollBarStyle ScrollBarStyle; // 0x410 (0x6e0)
	struct TEnumAsByte<EOrientation> Orientation; // 0xaf0 (0x1)
	struct TEnumAsByte<ESelectionMode> SelectionMode; // 0xaf1 (0x1)
	enum EConsumeMouseWheel ConsumeMouseWheel; // 0xaf2 (0x1)
	bool bClearSelectionOnClick; // 0xaf3 (0x1)
	bool bIsFocusable; // 0xaf4 (0x1)
	unsigned char unreflected_af5[0x3]; // 0xaf5 (0x3) 
	float EntrySpacing; // 0xaf8 (0x4)
	bool bReturnFocusToSelection; // 0xafc (0x1)
	unsigned char unreflected_afd[0x3]; // 0xafd (0x3) 
	struct TArray<class UObject*> ListItems; // 0xb00 (0x10)
	unsigned char unreflected_b10[0x10]; // 0xb10 (0x10) 
	struct FMulticastInlineDelegate BPOnEntryInitialized; // 0xb20 (0x10)
	struct FMulticastInlineDelegate BPOnItemClicked; // 0xb30 (0x10)
	struct FMulticastInlineDelegate BPOnItemDoubleClicked; // 0xb40 (0x10)
	struct FMulticastInlineDelegate BPOnItemIsHoveredChanged; // 0xb50 (0x10)
	struct FMulticastInlineDelegate BPOnItemSelectionChanged; // 0xb60 (0x10)
	struct FMulticastInlineDelegate BPOnItemScrolledIntoView; // 0xb70 (0x10)
	struct FMulticastInlineDelegate BPOnListViewScrolled; // 0xb80 (0x10)

	/* Functions */

	// Function /Script/UMG.ListView.SetSelectionMode (Underlying native function: SetSelectionMode 0x9b110d8)
	void SetSelectionMode(struct TEnumAsByte<ESelectionMode>& SelectionMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ListView.SetSelectedIndex (Underlying native function: SetSelectedIndex 0x9b10f40)
	void SetSelectedIndex(int& Index); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ListView.ScrollIndexIntoView (Underlying native function: ScrollIndexIntoView 0x9b0c5a8)
	void ScrollIndexIntoView(int& Index); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ListView.RemoveItem (Underlying native function: RemoveItem 0x9b0c3cc)
	void RemoveItem(class UObject*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ListView.OnListItemOuterEndPlayed (Underlying native function: OnListItemOuterEndPlayed 0x9b0bd08)
	void OnListItemOuterEndPlayed(class AActor*& ItemOuter, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Protected)

	// Function /Script/UMG.ListView.OnListItemEndPlayed (Underlying native function: OnListItemEndPlayed 0x9b0bc48)
	void OnListItemEndPlayed(class AActor*& Item, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Protected)

	// Function /Script/UMG.ListView.NavigateToIndex (Underlying native function: NavigateToIndex 0x9b0bbb4)
	void NavigateToIndex(int& Index); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ListView.IsRefreshPending (Underlying native function: IsRefreshPending 0x9b0b860)
	bool IsRefreshPending(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ListView.GetNumItems (Underlying native function: GetNumItems 0x2b41e9c)
	int GetNumItems(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ListView.GetListItems (Underlying native function: GetListItems 0x9b0ada4)
	struct TArray<class UObject*> GetListItems(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ListView.GetItemAt (Underlying native function: GetItemAt 0x9b0ac7c)
	class UObject* GetItemAt(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ListView.GetIndexForItem (Underlying native function: GetIndexForItem 0x9b0ab58)
	int GetIndexForItem(class UObject*& Item); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ListView.ClearListItems (Underlying native function: ClearListItems 0x9b0a1f0)
	void ClearListItems(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ListView.BP_SetSelectedItem (Underlying native function: BP_SetSelectedItem 0x9b0a134)
	void BPSetSelectedItem(class UObject*& Item); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/UMG.ListView.BP_SetListItems (Underlying native function: BP_SetListItems 0x9b0a098)
	void BPSetListItems(struct TArray<class UObject*>& InListItems); // (Final | Native | Private | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.ListView.BP_SetItemSelection (Underlying native function: BP_SetItemSelection 0x9b09fd4)
	void BPSetItemSelection(class UObject*& Item, bool& bSelected); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/UMG.ListView.BP_ScrollItemIntoView (Underlying native function: BP_ScrollItemIntoView 0x9b09f48)
	void BPScrollItemIntoView(class UObject*& Item); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/UMG.ListView.BP_NavigateToItem (Underlying native function: BP_NavigateToItem 0x9b09ebc)
	void BPNavigateToItem(class UObject*& Item); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/UMG.ListView.BP_IsItemVisible (Underlying native function: BP_IsItemVisible 0x9b09e30)
	bool BPIsItemVisible(class UObject*& Item); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ListView.BP_GetSelectedItems (Underlying native function: BP_GetSelectedItems 0x9b09d7c)
	bool BPGetSelectedItems(struct TArray<class UObject*>& Items); // (Final | Native | Private | HasOutParms | BlueprintCallable | Const)

	// Function /Script/UMG.ListView.BP_GetSelectedItem (Underlying native function: BP_GetSelectedItem 0x9b09d30)
	class UObject* BPGetSelectedItem(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ListView.BP_GetNumItemsSelected (Underlying native function: BP_GetNumItemsSelected 0x9b09d04)
	int BPGetNumItemsSelected(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ListView.BP_ClearSelection (Underlying native function: BP_ClearSelection 0x9b09ce8)
	void BPClearSelection(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/UMG.ListView.BP_CancelScrollIntoView (Underlying native function: BP_CancelScrollIntoView 0x9b09cb4)
	void BPCancelScrollIntoView(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/UMG.ListView.AddItem (Underlying native function: AddItem 0x9b09c34)
	void AddItem(class UObject*& Item); // (Final | Native | Public | BlueprintCallable)
};


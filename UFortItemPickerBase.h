// Class /Script/FortniteUI.FortItemPickerBase
// Size: 0x3d0
class UFortItemPickerBase : public UCommonUserWidget
{
	struct FMulticastInlineDelegate OnSelectionChangedEvent; // 0x290 (0x10)
	unsigned char unreflected_2a0[0x18]; // 0x2a0 (0x18) 
	struct FMulticastInlineDelegate OnSelectionCommittedEvent; // 0x2b8 (0x10)
	unsigned char unreflected_2c8[0x48]; // 0x2c8 (0x48) 
	struct FMulticastInlineDelegate OnItemHoveredEvent; // 0x310 (0x10)
	unsigned char unreflected_320[0x18]; // 0x320 (0x18) 
	struct FMulticastInlineDelegate OnItemUnhovered; // 0x338 (0x10)
	unsigned char unreflected_348[0x18]; // 0x348 (0x18) 
	class UFortItemTileView* PickerTileView; // 0x360 (0x8)
	class UListView* ItemListViewWidget; // 0x368 (0x8)
	unsigned char unreflected_370[0x10]; // 0x370 (0x10) 
	bool bConfirmSelectionIfAlreadySelectedAfterOneClick; // 0x380 (0x1)
	unsigned char unreflected_381[0x7]; // 0x381 (0x7) 
	class UObject* CurrentSelectedItem; // 0x388 (0x8)
	struct TScriptInterface<class IFortItemViewContextInterface> ItemViewContext; // 0x390 (0x10)
	unsigned char padding_3a0[0x30]; // 0x3a0 (0x30)

	/* Functions */

	// Function /Script/FortniteUI.FortItemPickerBase.TryCommitSelectedItem (Underlying native function: TryCommitSelectedItem 0xa7e8c68)
	bool TryCommitSelectedItem(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemPickerBase.SetSelectedItem (Underlying native function: SetSelectedItem 0xa7e87a8)
	void SetSelectedItem(class UFortItem*& ItemToSelect); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemPickerBase.SetSelectedIndex (Underlying native function: SetSelectedIndex 0xa7e871c)
	bool SetSelectedIndex(int& Index); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.FortItemPickerBase.OnItemSelectionScriptDelegate__DelegateSignature (Has no native function)
	void OnItemSelectionScriptDelegateDelegateSignature(class UFortItem*& SelectedItem); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortItemPickerBase.IsNullItemExplicitlySelected (Underlying native function: IsNullItemExplicitlySelected 0xa7e727c)
	bool IsNullItemExplicitlySelected(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemPickerBase.GetSelectedItem (Underlying native function: GetSelectedItem 0xa7e5a70)
	class UFortItem* GetSelectedItem(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemPickerBase.GetListViewInterface (Underlying native function: GetListViewInterface 0xa7e58ec)
	struct TScriptInterface<class IFortItemListViewInterface> GetListViewInterface(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemPickerBase.GetIndexForItem (Underlying native function: GetIndexForItem 0xa7e56ac)
	int GetIndexForItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemPickerBase.ClearSelection (Underlying native function: ClearSelection 0xa7e4914)
	void ClearSelection(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemPickerBase.CenterSelectedItemTileWidget (Underlying native function: CenterSelectedItemTileWidget 0xa7e48d8)
	void CenterSelectedItemTileWidget(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemPickerBase.CanItemBeComitted (Underlying native function: CanItemBeComitted 0xa7e47c4)
	bool CanItemBeComitted(class UFortItem*& ItemToCommit); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};


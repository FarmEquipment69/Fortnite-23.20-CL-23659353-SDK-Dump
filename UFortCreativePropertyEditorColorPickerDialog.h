// Class /Script/FortniteUI.FortCreativePropertyEditorColorPickerDialog
// Size: 0x438
class UFortCreativePropertyEditorColorPickerDialog : public UFortCreativePropertyEditorDialogBase
{
	class UCommonTileView* TileViewSwatches; // 0x3f8 (0x8)
	class UEditableTextBox* EditableTextSearch; // 0x400 (0x8)
	struct FDataTableRowHandle SearchInputRowHandle; // 0x408 (0x10)
	struct TArray<class UObject*> UnfilteredListItems; // 0x418 (0x10)
	unsigned char padding_428[0x10]; // 0x428 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativePropertyEditorColorPickerDialog.OnSearchInput (Has no native function)
	void OnSearchInput(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePropertyEditorColorPickerDialog.HandleSearchTextChanged (Underlying native function: HandleSearchTextChanged 0xa692870)
	void HandleSearchTextChanged(struct FText& SearchText); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortCreativePropertyEditorColorPickerDialog.GetItemIndexFromUnfilteredItemList (Underlying native function: GetItemIndexFromUnfilteredItemList 0xa691a90)
	int GetItemIndexFromUnfilteredItemList(class UObject*& Item); // (Final | Native | Protected | BlueprintCallable | BlueprintPure)
};


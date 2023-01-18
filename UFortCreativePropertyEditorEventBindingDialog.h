// Class /Script/FortniteUI.FortCreativePropertyEditorEventBindingDialog
// Size: 0x500
class UFortCreativePropertyEditorEventBindingDialog : public UFortCreativePropertyEditorDialogBase
{
	class UCommonListView* ListViewEntries; // 0x3f8 (0x8)
	class UEditableTextBox* EditableTextSearch; // 0x400 (0x8)
	struct FDataTableRowHandle BackInputRowHandle; // 0x408 (0x10)
	struct FDataTableRowHandle SearchInputRowHandle; // 0x418 (0x10)
	struct FText SearchHintTextDevices; // 0x428 (0x18)
	struct FText SearchHintTextEvents; // 0x440 (0x18)
	struct FText SearchHintTextFunctions; // 0x458 (0x18)
	struct TArray<class UObject*> UnfilteredListItems; // 0x470 (0x10)
	struct TArray<struct FBasicDeviceTrackingInfo> FullTrackingInfoList; // 0x480 (0x10)
	unsigned char unreflected_490[0x8]; // 0x490 (0x8) 
	class UFortCreativePropertyEditorEventBindingDialogListItemProxy* SelectedItemProxy; // 0x498 (0x8)
	unsigned char padding_4a0[0x60]; // 0x4a0 (0x60)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativePropertyEditorEventBindingDialog.OnUnfilteredListItemsSet (Has no native function)
	void OnUnfilteredListItemsSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePropertyEditorEventBindingDialog.OnSearchInput (Has no native function)
	void OnSearchInput(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePropertyEditorEventBindingDialog.IsSearchEnabled (Underlying native function: IsSearchEnabled 0xa692e4c)
	static bool IsSearchEnabled(); // (Final | Native | Static | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortCreativePropertyEditorEventBindingDialog.HandleSearchTextChanged (Underlying native function: HandleSearchTextChanged 0xa69291c)
	void HandleSearchTextChanged(struct FText& SearchText); // (Final | Native | Private | HasOutParms)
};


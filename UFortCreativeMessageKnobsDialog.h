// Class /Script/FortniteUI.FortCreativeMessageKnobsDialog
// Size: 0x938
class UFortCreativeMessageKnobsDialog : public UFortMatchmakingKnobsModal
{
	struct FDataTableRowHandle MainMenuInputRowHandle; // 0x6a8 (0x10)
	class UFortCreativePropertyEditorDialogBase* CurrentDialog; // 0x6b8 (0x8)
	unsigned char unreflected_6c0[0x68]; // 0x6c0 (0x68) 
	class UClass* LegacyEntryWidgetClass; // 0x728 (0x8)
	class UClass* AdvancedEntryWidgetClass; // 0x730 (0x8)
	unsigned char unreflected_738[0xd0]; // 0x738 (0xd0) 
	struct TArray<struct FFortItemListOptionBucket> ItemListBuckets; // 0x808 (0x10)
	struct FMulticastInlineDelegate OnFilterListCompleted; // 0x818 (0x10)
	class UCanvasPanel* CanvasPanelOptionsDialog; // 0x828 (0x8)
	unsigned char unreflected_830[0x8]; // 0x830 (0x8) 
	class UBackgroundBlur* BackgroundBlurConfirmDialog; // 0x838 (0x8)
	class UCommonActionWidget* ActionSelectedItemAdditionalAction; // 0x840 (0x8)
	class UCommonTextBlock* TextSelectedItemAdditionalAction; // 0x848 (0x8)
	class UClass* ConfirmationDialogClass; // 0x850 (0x8)
	class UAthenaConfirmationWindow* CachedConfirmationDialogWidget; // 0x858 (0x8)
	unsigned char padding_860[0xd8]; // 0x860 (0xd8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.SetOptionsButtonsEnabled (Has no native function)
	void SetOptionsButtonsEnabled(bool& bInButtonsEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.SetFocusToItem (Underlying native function: SetFocusToItem 0xa6db18c)
	void SetFocusToItem(class UObject*& Item); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.RemoveTagFilter (Underlying native function: RemoveTagFilter 0xa6dabb8)
	void RemoveTagFilter(bool& UpdateSelection); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.RemoveStringFilter (Underlying native function: RemoveStringFilter 0xa6dab34)
	void RemoveStringFilter(bool& UpdateSelection); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.RemoveIsModifiedFilter (Underlying native function: RemoveIsModifiedFilter 0xa6daa9c)
	void RemoveIsModifiedFilter(bool& UpdateSelection); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.RefreshUIOnDeviceButtonClicked (Underlying native function: RefreshUIOnDeviceButtonClicked 0x8d41e58)
	void RefreshUIOnDeviceButtonClicked(); // (Native | Public)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.RefreshTagFilterForGrantedContextTags (Underlying native function: RefreshTagFilterForGrantedContextTags 0xa6da97c)
	void RefreshTagFilterForGrantedContextTags(bool& bRefreshOnlyWhenChanged, bool& bUpdateSelectionForGamepad, bool& bUpdateSelectForMouse); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.OnShowLoadingSpinnerChanged (Has no native function)
	void OnShowLoadingSpinnerChanged(bool& bShowLoadingSpinner); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.OnEntryAdditionalActionChanged (Has no native function)
	void OnEntryAdditionalActionChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.OnDialogOpenStateChanged (Has no native function)
	void OnDialogOpenStateChanged(bool& bIsOpen); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.OnConfirmationDialogWidgetCreated (Has no native function)
	void OnConfirmationDialogWidgetCreated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.IsAnyFilterActive (Underlying native function: IsAnyFilterActive 0xa6d9bb8)
	bool IsAnyFilterActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.HasClearItemsConfirmation (Underlying native function: HasClearItemsConfirmation 0x9cf7808)
	bool HasClearItemsConfirmation(); // (Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.HandleMainMenuInput (Has no native function)
	void HandleMainMenuInput(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.HandleClearItemsClicked (Underlying native function: HandleClearItemsClicked 0x8d41eb8)
	void HandleClearItemsClicked(); // (Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.GetOptionsListScrollSpeed (Has no native function)
	float GetOptionsListScrollSpeed(); // (Event | Protected | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.GetItemCount (Underlying native function: GetItemCount 0xa6d89fc)
	int GetItemCount(); // (Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.GetConfirmationDialogWidget (Underlying native function: GetConfirmationDialogWidget 0xa6d7fe0)
	class UAthenaConfirmationWindow* GetConfirmationDialogWidget(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.GetClearItemsConfirmationText (Underlying native function: GetClearItemsConfirmationText 0xa6d7f60)
	struct FText GetClearItemsConfirmationText(); // (Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.GenerateFilteredEntries (Underlying native function: GenerateFilteredEntries 0xa6d7d48)
	void GenerateFilteredEntries(bool& bUpdateSelectionForGamepad, bool& bUpdateSelectionForMouse); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.FilterEntriesByTag (Underlying native function: FilterEntriesByTag 0xa6d7b78)
	void FilterEntriesByTag(struct FGameplayTagContainer& Tags, bool& UpdateSelection); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.FilterEntriesByString (Underlying native function: FilterEntriesByString 0xa6d7998)
	void FilterEntriesByString(struct FString& FilterString, bool& UpdateSelection); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.FilterEntriesByIsModified (Underlying native function: FilterEntriesByIsModified 0xa6d78c4)
	void FilterEntriesByIsModified(bool& bShowUnmodifiedEntries, bool& UpdateSelection); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.DisableFilters (Underlying native function: DisableFilters 0xa6d76b0)
	void DisableFilters(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.ContainsItem (Underlying native function: ContainsItem 0x8a47430)
	bool ContainsItem(); // (Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.CloseDialog (Underlying native function: CloseDialog 0xa6d7608)
	void CloseDialog(bool& bSetFocusToOptionsList); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.CheckDestructiveSettings (Underlying native function: CheckDestructiveSettings 0xa6d746c)
	bool CheckDestructiveSettings(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMessageKnobsDialog.BP_DialogConfirmed (Has no native function)
	void BPDialogConfirmed(); // (Event | Public | BlueprintEvent)
};


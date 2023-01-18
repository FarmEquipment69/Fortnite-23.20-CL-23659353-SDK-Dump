// Class /Script/FortniteUI.FortCreativeRichTextEditorWidget
// Size: 0x468
class UFortCreativeRichTextEditorWidget : public UCommonActivatableWidget
{
	class UMultiLineEditableText* EditableText; // 0x3a8 (0x8)
	class UWrapBox* WordButtonsWBox; // 0x3b0 (0x8)
	class UDynamicEntryBox* EntryBoxStyleButtons; // 0x3b8 (0x8)
	class UWidgetSwitcher* PanelSwitcher; // 0x3c0 (0x8)
	class UCommonButtonBase* RemoveStylesButton; // 0x3c8 (0x8)
	class UCommonTextBlock* TextCharCount; // 0x3d0 (0x8)
	class UBackgroundBlur* BackgroundBlurConfirmDialog; // 0x3d8 (0x8)
	class UOverlay* OverlayConfirmDialog; // 0x3e0 (0x8)
	class UCommonButtonGroupBase* WordsButtonGroup; // 0x3e8 (0x8)
	class UCommonButtonGroupBase* TabsButtonGroup; // 0x3f0 (0x8)
	bool bIsLineBreakAllowed; // 0x3f8 (0x1)
	unsigned char unreflected_3f9[0x3]; // 0x3f9 (0x3) 
	int EntryCharLimit; // 0x3fc (0x4)
	struct TArray<struct FStyleButtonReference> StyleButtonReferences; // 0x400 (0x10)
	class UClass* WordButtonClass; // 0x410 (0x8)
	class UClass* StyleButtonClass; // 0x418 (0x8)
	class UClass* DefaultButtonStyleClass; // 0x420 (0x8)
	class UClass* SelectedButtonStyleClass; // 0x428 (0x8)
	class UClass* ConfirmationDialogClass; // 0x430 (0x8)
	class UAthenaConfirmationWindow* CachedConfirmationDialogWidget; // 0x438 (0x8)
	class UDataTable* RichTextStylesTable; // 0x440 (0x8)
	struct FText SampleText; // 0x448 (0x18)
	unsigned char padding_460[0x8]; // 0x460 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeRichTextEditorWidget.ShowConfirmationDialog (Underlying native function: ShowConfirmationDialog 0xa693ae4)
	void ShowConfirmationDialog(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeRichTextEditorWidget.SetEntryCharLimit (Underlying native function: SetEntryCharLimit 0xa6936a0)
	void SetEntryCharLimit(int& InCharLimit); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeRichTextEditorWidget.SetAllowStyleEditing (Underlying native function: SetAllowStyleEditing 0xa35c6dc)
	void SetAllowStyleEditing(bool& InAllowStyleEditing); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeRichTextEditorWidget.SetAllowLineBreaks (Underlying native function: SetAllowLineBreaks 0xa6935a0)
	void SetAllowLineBreaks(bool& InAllowLineBreaks); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeRichTextEditorWidget.OnUpdateCommitCancelState (Has no native function)
	void OnUpdateCommitCancelState(bool& Enabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeRichTextEditorWidget.OnStyleButtonCreated (Has no native function)
	void OnStyleButtonCreated(class UCommonButtonBase*& Button, struct FString& Label, class URichTextBlock*& SampleFormattedText); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeRichTextEditorWidget.OnInitializedFinished (Has no native function)
	void OnInitializedFinished(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeRichTextEditorWidget.OnFormatError (Has no native function)
	void OnFormatError(struct FText& Description); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeRichTextEditorWidget.OnConfirmationDialogWidgetCreated (Has no native function)
	void OnConfirmationDialogWidgetCreated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeRichTextEditorWidget.OnCharLimitReached (Has no native function)
	void OnCharLimitReached(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeRichTextEditorWidget.IsStyleEditorEnabled (Underlying native function: IsStyleEditorEnabled 0xa692e88)
	static bool IsStyleEditorEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortCreativeRichTextEditorWidget.HandleWordButtonClicked (Underlying native function: HandleWordButtonClicked 0xa692c9c)
	void HandleWordButtonClicked(class UFortCreativeRichTextWordButton*& Button); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativeRichTextEditorWidget.HandleTextChanged (Underlying native function: HandleTextChanged 0xa692b60)
	void HandleTextChanged(struct FText& Text); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortCreativeRichTextEditorWidget.HandleTabButtonSelected (Underlying native function: HandleTabButtonSelected 0xa692a9c)
	void HandleTabButtonSelected(class UCommonButtonBase*& AssociatedButton, int& ButtonIndex); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativeRichTextEditorWidget.HandleStyleButtonClicked (Underlying native function: HandleStyleButtonClicked 0xa6929d8)
	void HandleStyleButtonClicked(class UCommonButtonBase*& Button, int& Index); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativeRichTextEditorWidget.GetConfirmationDialogWidget (Underlying native function: GetConfirmationDialogWidget 0xa6916d0)
	class UAthenaConfirmationWindow* GetConfirmationDialogWidget(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeRichTextEditorWidget.CanShowStyleEditor (Underlying native function: CanShowStyleEditor 0xa691340)
	bool CanShowStyleEditor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeRichTextEditorWidget.BP_DialogConfirmed (Has no native function)
	void BPDialogConfirmed(); // (Event | Protected | BlueprintEvent)
};


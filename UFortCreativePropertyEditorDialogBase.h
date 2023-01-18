// Class /Script/FortniteUI.FortCreativePropertyEditorDialogBase
// Size: 0x3f8
class UFortCreativePropertyEditorDialogBase : public UCommonActivatableWidget
{
	class UCanvasPanelSlot* PanelSlot; // 0x3a8 (0x8)
	unsigned char unreflected_3b0[0x18]; // 0x3b0 (0x18) 
	bool bIsOpen; // 0x3c8 (0x1)
	unsigned char unreflected_3c9[0x7]; // 0x3c9 (0x7) 
	class UWidgetAnimation* AnimIntroOutro; // 0x3d0 (0x8)
	unsigned char padding_3d8[0x20]; // 0x3d8 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativePropertyEditorDialogBase.Reset (Underlying native function: Reset 0x1d01d9c)
	void Reset(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativePropertyEditorDialogBase.Open (Underlying native function: Open 0xa6933f8)
	void Open(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativePropertyEditorDialogBase.OnShowLoadingSpinnerChanged (Has no native function)
	void OnShowLoadingSpinnerChanged(bool& bShowingLoadingSpinner); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePropertyEditorDialogBase.OnOutroAnimFinished (Has no native function)
	void OnOutroAnimFinished(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePropertyEditorDialogBase.OnOpen (Has no native function)
	void OnOpen(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePropertyEditorDialogBase.OnIntroAnimFinished (Has no native function)
	void OnIntroAnimFinished(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePropertyEditorDialogBase.OnInputMethodChanged (Has no native function)
	void OnInputMethodChanged(enum ECommonInputType& InputType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePropertyEditorDialogBase.OnClose (Has no native function)
	void OnClose(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePropertyEditorDialogBase.Close (Underlying native function: Close 0xa691394)
	void Close(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativePropertyEditorDialogBase.AddOption (Underlying native function: AddOption 0xa6912bc)
	void AddOption(class UObject*& Object); // (Native | Public | BlueprintCallable)
};


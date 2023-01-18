// Class /Script/UMG.ComboBoxString
// Size: 0x1bb0
class UComboBoxString : public UWidget
{
	struct TArray<struct FString> DefaultOptions; // 0x148 (0x10)
	struct FString SelectedOption; // 0x158 (0x10)
	unsigned char unreflected_168[0x8]; // 0x168 (0x8) 
	struct FComboBoxStyle WidgetStyle; // 0x170 (0x600)
	struct FTableRowStyle ItemStyle; // 0x770 (0xc50)
	struct FScrollBarStyle ScrollBarStyle; // 0x13c0 (0x6e0)
	struct FMargin ContentPadding; // 0x1aa0 (0x10)
	float MaxListHeight; // 0x1ab0 (0x4)
	bool HasDownArrow; // 0x1ab4 (0x1)
	bool EnableGamepadNavigationMode; // 0x1ab5 (0x1)
	unsigned char unreflected_1ab6[0x2]; // 0x1ab6 (0x2) 
	struct FSlateFontInfo Font; // 0x1ab8 (0x58)
	struct FSlateColor ForegroundColor; // 0x1b10 (0x14)
	bool bIsFocusable; // 0x1b24 (0x1)
	unsigned char unreflected_1b25[0x3]; // 0x1b25 (0x3) 
	struct FDelegate OnGenerateWidgetEvent; // 0x1b28 (0xc)
	unsigned char unreflected_1b34[0x4]; // 0x1b34 (0x4) 
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x1b38 (0x10)
	struct FMulticastInlineDelegate OnOpening; // 0x1b48 (0x10)
	unsigned char padding_1b58[0x58]; // 0x1b58 (0x58)

	/* Functions */

	// Function /Script/UMG.ComboBoxString.SetSelectedOption (Underlying native function: SetSelectedOption 0x9aef4c4)
	void SetSelectedOption(struct FString& Option); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ComboBoxString.SetSelectedIndex (Underlying native function: SetSelectedIndex 0x9aef39c)
	void SetSelectedIndex(int& Index); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ComboBoxString.RemoveOption (Underlying native function: RemoveOption 0x9aed5e0)
	bool RemoveOption(struct FString& Option); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ComboBoxString.RefreshOptions (Underlying native function: RefreshOptions 0x9aed1e8)
	void RefreshOptions(); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature (Has no native function)
	void OnSelectionChangedEventDelegateSignature(struct FString& SelectedItem, struct TEnumAsByte<ESelectInfo>& SelectionType); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/UMG.ComboBoxString.OnOpeningEvent__DelegateSignature (Has no native function)
	void OnOpeningEventDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/UMG.ComboBoxString.IsOpen (Underlying native function: IsOpen 0x9aecff8)
	bool IsOpen(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ComboBoxString.GetSelectedOption (Underlying native function: GetSelectedOption 0x27b71dc)
	struct FString GetSelectedOption(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ComboBoxString.GetSelectedIndex (Underlying native function: GetSelectedIndex 0x9aec9e8)
	int GetSelectedIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ComboBoxString.GetOptionCount (Underlying native function: GetOptionCount 0x9aec910)
	int GetOptionCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ComboBoxString.GetOptionAtIndex (Underlying native function: GetOptionAtIndex 0x9aec750)
	struct FString GetOptionAtIndex(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ComboBoxString.FindOptionIndex (Underlying native function: FindOptionIndex 0x9aec34c)
	int FindOptionIndex(struct FString& Option); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ComboBoxString.ClearSelection (Underlying native function: ClearSelection 0x9aebd28)
	void ClearSelection(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ComboBoxString.ClearOptions (Underlying native function: ClearOptions 0x9aebd00)
	void ClearOptions(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ComboBoxString.AddOption (Underlying native function: AddOption 0x9aeb6a4)
	void AddOption(struct FString& Option); // (Final | Native | Public | BlueprintCallable)
};


// Class /Script/UMG.ComboBoxKey
// Size: 0x1b20
class UComboBoxKey : public UWidget
{
	struct TArray<struct FName> Options; // 0x148 (0x10)
	struct FName SelectedOption; // 0x158 (0x4)
	unsigned char unreflected_15c[0x4]; // 0x15c (0x4) 
	struct FComboBoxStyle WidgetStyle; // 0x160 (0x600)
	struct FTableRowStyle ItemStyle; // 0x760 (0xc50)
	struct FScrollBarStyle ScrollBarStyle; // 0x13b0 (0x6e0)
	struct FSlateColor ForegroundColor; // 0x1a90 (0x14)
	struct FMargin ContentPadding; // 0x1aa4 (0x10)
	float MaxListHeight; // 0x1ab4 (0x4)
	bool bHasDownArrow; // 0x1ab8 (0x1)
	bool bEnableGamepadNavigationMode; // 0x1ab9 (0x1)
	bool bIsFocusable; // 0x1aba (0x1)
	unsigned char unreflected_1abb[0x1]; // 0x1abb (0x1) 
	struct FDelegate OnGenerateContentWidget; // 0x1abc (0xc)
	struct FDelegate OnGenerateItemWidget; // 0x1ac8 (0xc)
	unsigned char unreflected_1ad4[0x4]; // 0x1ad4 (0x4) 
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x1ad8 (0x10)
	struct FMulticastInlineDelegate OnOpening; // 0x1ae8 (0x10)
	unsigned char padding_1af8[0x28]; // 0x1af8 (0x28)

	/* Functions */

	// Function /Script/UMG.ComboBoxKey.SetSelectedOption (Underlying native function: SetSelectedOption 0x9aef41c)
	void SetSelectedOption(struct FName& Option); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ComboBoxKey.RemoveOption (Underlying native function: RemoveOption 0x9aed518)
	bool RemoveOption(struct FName& Option); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/UMG.ComboBoxKey.OnSelectionChangedEvent__DelegateSignature (Has no native function)
	void OnSelectionChangedEventDelegateSignature(struct FName& SelectedItem, struct TEnumAsByte<ESelectInfo>& SelectionType); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/UMG.ComboBoxKey.OnOpeningEvent__DelegateSignature (Has no native function)
	void OnOpeningEventDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/UMG.ComboBoxKey.IsOpen (Underlying native function: IsOpen 0x9aecfc0)
	bool IsOpen(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.ComboBoxKey.GetSelectedOption (Underlying native function: GetSelectedOption 0x76c2180)
	struct FName GetSelectedOption(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// DelegateFunction /Script/UMG.ComboBoxKey.GenerateWidgetEvent__DelegateSignature (Has no native function)
	class UWidget* GenerateWidgetEventDelegateSignature(struct FName& Item); // (Public | Delegate)

	// Function /Script/UMG.ComboBoxKey.ClearSelection (Underlying native function: ClearSelection 0x9aebd14)
	void ClearSelection(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ComboBoxKey.ClearOptions (Underlying native function: ClearOptions 0x9aebcb0)
	void ClearOptions(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ComboBoxKey.AddOption (Underlying native function: AddOption 0x9aeb624)
	void AddOption(struct FName& Option); // (Final | Native | Public | BlueprintCallable)
};


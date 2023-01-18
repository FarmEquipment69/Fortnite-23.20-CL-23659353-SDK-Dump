// Class /Script/UMG.CheckBox
// Size: 0xbb0
class UCheckBox : public UContentWidget
{
	enum ECheckBoxState CheckedState; // 0x160 (0x1)
	unsigned char unreflected_161[0x3]; // 0x161 (0x3) 
	struct FDelegate CheckedStateDelegate; // 0x164 (0xc)
	struct FCheckBoxStyle WidgetStyle; // 0x170 (0xa10)
	struct TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0xb80 (0x1)
	struct TEnumAsByte<EButtonClickMethod> ClickMethod; // 0xb81 (0x1)
	struct TEnumAsByte<EButtonTouchMethod> TouchMethod; // 0xb82 (0x1)
	struct TEnumAsByte<EButtonPressMethod> PressMethod; // 0xb83 (0x1)
	bool IsFocusable; // 0xb84 (0x1)
	unsigned char unreflected_b85[0x3]; // 0xb85 (0x3) 
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0xb88 (0x10)
	unsigned char padding_b98[0x18]; // 0xb98 (0x18)

	/* Functions */

	// Function /Script/UMG.CheckBox.SetTouchMethod (Underlying native function: SetTouchMethod 0x9aefaa4)
	void SetTouchMethod(struct TEnumAsByte<EButtonTouchMethod>& InTouchMethod); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.CheckBox.SetPressMethod (Underlying native function: SetPressMethod 0x9aef1f8)
	void SetPressMethod(struct TEnumAsByte<EButtonPressMethod>& InPressMethod); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.CheckBox.SetIsChecked (Underlying native function: SetIsChecked 0x9aee7e0)
	void SetIsChecked(bool& InIsChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.CheckBox.SetClickMethod (Underlying native function: SetClickMethod 0x9aedf48)
	void SetClickMethod(struct TEnumAsByte<EButtonClickMethod>& InClickMethod); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.CheckBox.SetCheckedState (Underlying native function: SetCheckedState 0x9aede48)
	void SetCheckedState(enum ECheckBoxState& InCheckedState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.CheckBox.IsPressed (Underlying native function: IsPressed 0x9aed064)
	bool IsPressed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.CheckBox.IsChecked (Underlying native function: IsChecked 0x9aecf0c)
	bool IsChecked(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.CheckBox.GetCheckedState (Underlying native function: GetCheckedState 0x9aec538)
	enum ECheckBoxState GetCheckedState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};


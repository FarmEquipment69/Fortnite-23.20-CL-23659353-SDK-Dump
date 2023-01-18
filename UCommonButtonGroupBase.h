// Class /Script/CommonUI.CommonButtonGroupBase
// Size: 0x110
class UCommonButtonGroupBase : public UCommonWidgetGroupBase
{
	struct FMulticastInlineDelegate OnSelectedButtonBaseChanged; // 0x28 (0x10)
	unsigned char unreflected_38[0x18]; // 0x38 (0x18) 
	struct FMulticastInlineDelegate OnHoveredButtonBaseChanged; // 0x50 (0x10)
	unsigned char unreflected_60[0x18]; // 0x60 (0x18) 
	struct FMulticastInlineDelegate OnButtonBaseClicked; // 0x78 (0x10)
	unsigned char unreflected_88[0x18]; // 0x88 (0x18) 
	struct FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0xa0 (0x10)
	unsigned char unreflected_b0[0x18]; // 0xb0 (0x18) 
	struct FMulticastInlineDelegate OnSelectionCleared; // 0xc8 (0x10)
	unsigned char unreflected_d8[0x18]; // 0xd8 (0x18) 
	bool bSelectionRequired; // 0xf0 (0x1)
	unsigned char padding_f1[0x1f]; // 0xf1 (0x1f)

	/* Functions */

	// Function /Script/CommonUI.CommonButtonGroupBase.SetSelectionRequired (Underlying native function: SetSelectionRequired 0x6a4e698)
	void SetSelectionRequired(bool& bRequireSelection); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonGroupBase.SelectPreviousButton (Underlying native function: SelectPreviousButton 0x6a4cc34)
	void SelectPreviousButton(bool& bAllowWrap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonGroupBase.SelectNextButton (Underlying native function: SelectNextButton 0x6a4cbb4)
	void SelectNextButton(bool& bAllowWrap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonGroupBase.SelectButtonAtIndex (Underlying native function: SelectButtonAtIndex 0x6a4caf0)
	void SelectButtonAtIndex(int& ButtonIndex, bool& bAllowSound); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase (Underlying native function: OnSelectionStateChangedBase 0x1510a90)
	void OnSelectionStateChangedBase(class UCommonButtonBase*& BaseButton, bool& bIsSelected); // (Native | Protected)

	// Function /Script/CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked (Underlying native function: OnHandleButtonBaseDoubleClicked 0x6a4c69c)
	void OnHandleButtonBaseDoubleClicked(class UCommonButtonBase*& BaseButton); // (Native | Protected)

	// Function /Script/CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked (Underlying native function: OnHandleButtonBaseClicked 0x1511d28)
	void OnHandleButtonBaseClicked(class UCommonButtonBase*& BaseButton); // (Native | Protected)

	// Function /Script/CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered (Underlying native function: OnButtonBaseUnhovered 0x15102f0)
	void OnButtonBaseUnhovered(class UCommonButtonBase*& BaseButton); // (Native | Protected)

	// Function /Script/CommonUI.CommonButtonGroupBase.OnButtonBaseHovered (Underlying native function: OnButtonBaseHovered 0x15103d4)
	void OnButtonBaseHovered(class UCommonButtonBase*& BaseButton); // (Native | Protected)

	// Function /Script/CommonUI.CommonButtonGroupBase.HasAnyButtons (Underlying native function: HasAnyButtons 0x6a4c220)
	bool HasAnyButtons(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex (Underlying native function: GetSelectedButtonIndex 0x6a4b83c)
	int GetSelectedButtonIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonGroupBase.GetSelectedButtonBase (Underlying native function: GetSelectedButtonBase 0x6a4b814)
	class UCommonButtonBase* GetSelectedButtonBase(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex (Underlying native function: GetHoveredButtonIndex 0x6a4b29c)
	int GetHoveredButtonIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonGroupBase.GetButtonCount (Underlying native function: GetButtonCount 0x6a4ad48)
	int GetButtonCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex (Underlying native function: GetButtonBaseAtIndex 0x6a4acbc)
	class UCommonButtonBase* GetButtonBaseAtIndex(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonGroupBase.FindButtonIndex (Underlying native function: FindButtonIndex 0x6a4a994)
	int FindButtonIndex(class UCommonButtonBase*& ButtonToFind); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonGroupBase.DeselectAll (Underlying native function: DeselectAll 0x6a4a7b0)
	void DeselectAll(); // (Final | Native | Public | BlueprintCallable)
};


// Class /Script/UMG.SpinBox
// Size: 0x7f0
class USpinBox : public UWidget
{
	float Value; // 0x148 (0x4)
	struct FDelegate ValueDelegate; // 0x14c (0xc)
	unsigned char unreflected_158[0x8]; // 0x158 (0x8) 
	struct FSpinBoxStyle WidgetStyle; // 0x160 (0x590)
	int MinFractionalDigits; // 0x6f0 (0x4)
	int MaxFractionalDigits; // 0x6f4 (0x4)
	bool bAlwaysUsesDeltaSnap; // 0x6f8 (0x1)
	bool bEnableSlider; // 0x6f9 (0x1)
	unsigned char unreflected_6fa[0x2]; // 0x6fa (0x2) 
	float Delta; // 0x6fc (0x4)
	float SliderExponent; // 0x700 (0x4)
	unsigned char unreflected_704[0x4]; // 0x704 (0x4) 
	struct FSlateFontInfo Font; // 0x708 (0x58)
	struct TEnumAsByte<ETextJustify> Justification; // 0x760 (0x1)
	unsigned char unreflected_761[0x3]; // 0x761 (0x3) 
	float MinDesiredWidth; // 0x764 (0x4)
	struct TEnumAsByte<EVirtualKeyboardType> KeyboardType; // 0x768 (0x1)
	bool ClearKeyboardFocusOnCommit; // 0x769 (0x1)
	bool SelectAllTextOnCommit; // 0x76a (0x1)
	unsigned char unreflected_76b[0x1]; // 0x76b (0x1) 
	struct FSlateColor ForegroundColor; // 0x76c (0x14)
	struct FMulticastInlineDelegate OnValueChanged; // 0x780 (0x10)
	struct FMulticastInlineDelegate OnValueCommitted; // 0x790 (0x10)
	struct FMulticastInlineDelegate OnBeginSliderMovement; // 0x7a0 (0x10)
	struct FMulticastInlineDelegate OnEndSliderMovement; // 0x7b0 (0x10)
	unsigned char bOverrideMinValue; // 0x7c0 (0x1)
	unsigned char bOverrideMaxValue; // 0x7c0 (0x1)
	unsigned char bOverrideMinSliderValue; // 0x7c0 (0x1)
	unsigned char bOverrideMaxSliderValue; // 0x7c0 (0x1)
	unsigned char unreflected_7c1[0x3]; // 0x7c1 (0x3) 
	float MinValue; // 0x7c4 (0x4)
	float MaxValue; // 0x7c8 (0x4)
	float MinSliderValue; // 0x7cc (0x4)
	float MaxSliderValue; // 0x7d0 (0x4)
	unsigned char padding_7d4[0x1c]; // 0x7d4 (0x1c)

	/* Functions */

	// Function /Script/UMG.SpinBox.SetValue (Underlying native function: SetValue 0x9b123e0)
	void SetValue(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.SpinBox.SetMinValue (Underlying native function: SetMinValue 0x9b0fb60)
	void SetMinValue(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.SpinBox.SetMinSliderValue (Underlying native function: SetMinSliderValue 0x9b0fa58)
	void SetMinSliderValue(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.SpinBox.SetMinFractionalDigits (Underlying native function: SetMinFractionalDigits 0x9b0f9d8)
	void SetMinFractionalDigits(int& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.SpinBox.SetMaxValue (Underlying native function: SetMaxValue 0x9b0f6c0)
	void SetMaxValue(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.SpinBox.SetMaxSliderValue (Underlying native function: SetMaxSliderValue 0x9b0f5b8)
	void SetMaxSliderValue(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.SpinBox.SetMaxFractionalDigits (Underlying native function: SetMaxFractionalDigits 0x9b0f538)
	void SetMaxFractionalDigits(int& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.SpinBox.SetForegroundColor (Underlying native function: SetForegroundColor 0x9b0e548)
	void SetForegroundColor(struct FSlateColor& InForegroundColor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.SpinBox.SetDelta (Underlying native function: SetDelta 0x9b0db48)
	void SetDelta(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.SpinBox.SetAlwaysUsesDeltaSnap (Underlying native function: SetAlwaysUsesDeltaSnap 0x9b0cd24)
	void SetAlwaysUsesDeltaSnap(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature (Has no native function)
	void OnSpinBoxValueCommittedEventDelegateSignature(float& InValue, struct TEnumAsByte<ETextCommit>& CommitMethod); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature (Has no native function)
	void OnSpinBoxValueChangedEventDelegateSignature(float& InValue); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature (Has no native function)
	void OnSpinBoxBeginSliderMovementDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/UMG.SpinBox.GetValue (Underlying native function: GetValue 0x9b0b274)
	float GetValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.SpinBox.GetMinValue (Underlying native function: GetMinValue 0x9b0af38)
	float GetMinValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.SpinBox.GetMinSliderValue (Underlying native function: GetMinSliderValue 0x9b0af10)
	float GetMinSliderValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.SpinBox.GetMinFractionalDigits (Underlying native function: GetMinFractionalDigits 0x9b0aed0)
	int GetMinFractionalDigits(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.SpinBox.GetMaxValue (Underlying native function: GetMaxValue 0x9b0ae68)
	float GetMaxValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.SpinBox.GetMaxSliderValue (Underlying native function: GetMaxSliderValue 0x9b0ae40)
	float GetMaxSliderValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.SpinBox.GetMaxFractionalDigits (Underlying native function: GetMaxFractionalDigits 0x9b0ae00)
	int GetMaxFractionalDigits(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.SpinBox.GetDelta (Underlying native function: GetDelta 0x9b0a88c)
	float GetDelta(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.SpinBox.GetAlwaysUsesDeltaSnap (Underlying native function: GetAlwaysUsesDeltaSnap 0x9b0a604)
	bool GetAlwaysUsesDeltaSnap(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.SpinBox.ClearMinValue (Underlying native function: ClearMinValue 0x9b0a2a4)
	void ClearMinValue(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.SpinBox.ClearMinSliderValue (Underlying native function: ClearMinSliderValue 0x9b0a290)
	void ClearMinSliderValue(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.SpinBox.ClearMaxValue (Underlying native function: ClearMaxValue 0x9b0a240)
	void ClearMaxValue(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.SpinBox.ClearMaxSliderValue (Underlying native function: ClearMaxSliderValue 0x9b0a22c)
	void ClearMaxSliderValue(); // (Final | Native | Public | BlueprintCallable)
};


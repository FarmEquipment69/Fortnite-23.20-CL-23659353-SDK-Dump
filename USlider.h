// Class /Script/UMG.Slider
// Size: 0x690
class USlider : public UWidget
{
	float Value; // 0x148 (0x4)
	struct FDelegate ValueDelegate; // 0x14c (0xc)
	float MinValue; // 0x158 (0x4)
	float MaxValue; // 0x15c (0x4)
	struct FSliderStyle WidgetStyle; // 0x160 (0x4a0)
	struct TEnumAsByte<EOrientation> Orientation; // 0x600 (0x1)
	unsigned char unreflected_601[0x3]; // 0x601 (0x3) 
	struct FLinearColor SliderBarColor; // 0x604 (0x10)
	struct FLinearColor SliderHandleColor; // 0x614 (0x10)
	bool IndentHandle; // 0x624 (0x1)
	bool Locked; // 0x625 (0x1)
	bool MouseUsesStep; // 0x626 (0x1)
	bool RequiresControllerLock; // 0x627 (0x1)
	float StepSize; // 0x628 (0x4)
	bool IsFocusable; // 0x62c (0x1)
	unsigned char unreflected_62d[0x3]; // 0x62d (0x3) 
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x630 (0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x640 (0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x650 (0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x660 (0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x670 (0x10)
	unsigned char padding_680[0x10]; // 0x680 (0x10)

	/* Functions */

	// Function /Script/UMG.Slider.SetValue (Underlying native function: SetValue 0x2205ef0)
	void SetValue(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Slider.SetStepSize (Underlying native function: SetStepSize 0x9b1177c)
	void SetStepSize(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Slider.SetSliderHandleColor (Underlying native function: SetSliderHandleColor 0x9b115a0)
	void SetSliderHandleColor(struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.Slider.SetSliderBarColor (Underlying native function: SetSliderBarColor 0x9b11518)
	void SetSliderBarColor(struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.Slider.SetMinValue (Underlying native function: SetMinValue 0x9b0fadc)
	void SetMinValue(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Slider.SetMaxValue (Underlying native function: SetMaxValue 0x9b0f63c)
	void SetMaxValue(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Slider.SetLocked (Underlying native function: SetLocked 0x9b0f330)
	void SetLocked(bool& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Slider.SetIndentHandle (Underlying native function: SetIndentHandle 0x9b0ed14)
	void SetIndentHandle(bool& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Slider.GetValue (Underlying native function: GetValue 0x9b0b254)
	float GetValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.Slider.GetNormalizedValue (Underlying native function: GetNormalizedValue 0x9b0af60)
	float GetNormalizedValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};


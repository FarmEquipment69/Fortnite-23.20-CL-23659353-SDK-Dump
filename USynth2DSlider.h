// Class /Script/Synthesis.Synth2DSlider
// Size: 0x5e0
class USynth2DSlider : public UWidget
{
	float ValueX; // 0x148 (0x4)
	float ValueY; // 0x14c (0x4)
	struct FDelegate ValueXDelegate; // 0x150 (0xc)
	struct FDelegate ValueYDelegate; // 0x15c (0xc)
	unsigned char unreflected_168[0x8]; // 0x168 (0x8) 
	struct FSynth2DSliderStyle WidgetStyle; // 0x170 (0x3e0)
	struct FLinearColor SliderHandleColor; // 0x550 (0x10)
	bool IndentHandle; // 0x560 (0x1)
	bool Locked; // 0x561 (0x1)
	unsigned char unreflected_562[0x2]; // 0x562 (0x2) 
	float StepSize; // 0x564 (0x4)
	bool IsFocusable; // 0x568 (0x1)
	unsigned char unreflected_569[0x7]; // 0x569 (0x7) 
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x570 (0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x580 (0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x590 (0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x5a0 (0x10)
	struct FMulticastInlineDelegate OnValueChangedX; // 0x5b0 (0x10)
	struct FMulticastInlineDelegate OnValueChangedY; // 0x5c0 (0x10)
	unsigned char padding_5d0[0x10]; // 0x5d0 (0x10)

	/* Functions */

	// Function /Script/Synthesis.Synth2DSlider.SetValue (Underlying native function: SetValue 0x71d7f34)
	void SetValue(struct FVector2D& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Synthesis.Synth2DSlider.SetStepSize (Underlying native function: SetStepSize 0x71d77a0)
	void SetStepSize(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.Synth2DSlider.SetSliderHandleColor (Underlying native function: SetSliderHandleColor 0x71d7368)
	void SetSliderHandleColor(struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Synthesis.Synth2DSlider.SetLocked (Underlying native function: SetLocked 0x71d4090)
	void SetLocked(bool& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.Synth2DSlider.SetIndentHandle (Underlying native function: SetIndentHandle 0x71d37c8)
	void SetIndentHandle(bool& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.Synth2DSlider.GetValue (Underlying native function: GetValue 0x71cffa8)
	struct FVector2D GetValue(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};


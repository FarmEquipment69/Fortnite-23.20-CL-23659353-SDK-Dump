// Class /Script/Synthesis.SynthKnob
// Size: 0x530
class USynthKnob : public UWidget
{
	float Value; // 0x148 (0x4)
	float StepSize; // 0x14c (0x4)
	float MouseSpeed; // 0x150 (0x4)
	float MouseFineTuneSpeed; // 0x154 (0x4)
	unsigned char ShowTooltipInfo; // 0x158 (0x1)
	unsigned char unreflected_159[0x7]; // 0x159 (0x7) 
	struct FText ParameterName; // 0x160 (0x18)
	struct FText ParameterUnits; // 0x178 (0x18)
	struct FDelegate ValueDelegate; // 0x190 (0xc)
	unsigned char unreflected_19c[0x4]; // 0x19c (0x4) 
	struct FSynthKnobStyle WidgetStyle; // 0x1a0 (0x320)
	bool Locked; // 0x4c0 (0x1)
	bool IsFocusable; // 0x4c1 (0x1)
	unsigned char unreflected_4c2[0x6]; // 0x4c2 (0x6) 
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x4c8 (0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x4d8 (0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x4e8 (0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x4f8 (0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x508 (0x10)
	unsigned char padding_518[0x18]; // 0x518 (0x18)

	/* Functions */

	// Function /Script/Synthesis.SynthKnob.SetValue (Underlying native function: SetValue 0x71d7fbc)
	void SetValue(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthKnob.SetStepSize (Underlying native function: SetStepSize 0x71d7824)
	void SetStepSize(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthKnob.SetLocked (Underlying native function: SetLocked 0x71d4144)
	void SetLocked(bool& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthKnob.GetValue (Underlying native function: GetValue 0x71d0034)
	float GetValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};


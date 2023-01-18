// Class /Script/AdvancedWidgets.RadialSlider
// Size: 0x770
class URadialSlider : public UWidget
{
	float Value; // 0x148 (0x4)
	struct FDelegate ValueDelegate; // 0x14c (0xc)
	bool bUseCustomDefaultValue; // 0x158 (0x1)
	unsigned char unreflected_159[0x3]; // 0x159 (0x3) 
	float CustomDefaultValue; // 0x15c (0x4)
	struct FRuntimeFloatCurve SliderRange; // 0x160 (0x88)
	struct TArray<float> ValueTags; // 0x1e8 (0x10)
	float SliderHandleStartAngle; // 0x1f8 (0x4)
	float SliderHandleEndAngle; // 0x1fc (0x4)
	float AngularOffset; // 0x200 (0x4)
	unsigned char unreflected_204[0x4]; // 0x204 (0x4) 
	struct FVector2D HandStartEndRatio; // 0x208 (0x10)
	unsigned char unreflected_218[0x8]; // 0x218 (0x8) 
	struct FSliderStyle WidgetStyle; // 0x220 (0x4a0)
	struct FLinearColor SliderBarColor; // 0x6c0 (0x10)
	struct FLinearColor SliderProgressColor; // 0x6d0 (0x10)
	struct FLinearColor SliderHandleColor; // 0x6e0 (0x10)
	struct FLinearColor CenterBackgroundColor; // 0x6f0 (0x10)
	bool Locked; // 0x700 (0x1)
	bool MouseUsesStep; // 0x701 (0x1)
	bool RequiresControllerLock; // 0x702 (0x1)
	unsigned char unreflected_703[0x1]; // 0x703 (0x1) 
	float StepSize; // 0x704 (0x4)
	bool IsFocusable; // 0x708 (0x1)
	bool UseVerticalDrag; // 0x709 (0x1)
	bool ShowSliderHandle; // 0x70a (0x1)
	bool ShowSliderHand; // 0x70b (0x1)
	unsigned char unreflected_70c[0x4]; // 0x70c (0x4) 
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x710 (0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x720 (0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x730 (0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x740 (0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x750 (0x10)
	unsigned char padding_760[0x10]; // 0x760 (0x10)

	/* Functions */

	// Function /Script/AdvancedWidgets.RadialSlider.SetValueTags (Underlying native function: SetValueTags 0xa96d540)
	void SetValueTags(struct TArray<float>& InValueTags); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AdvancedWidgets.RadialSlider.SetValue (Underlying native function: SetValue 0xa96d4bc)
	void SetValue(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AdvancedWidgets.RadialSlider.SetUseVerticalDrag (Underlying native function: SetUseVerticalDrag 0xa96d434)
	void SetUseVerticalDrag(bool& InUseVerticalDrag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AdvancedWidgets.RadialSlider.SetStepSize (Underlying native function: SetStepSize 0xa96d3b0)
	void SetStepSize(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderRange (Underlying native function: SetSliderRange 0xa96d270)
	void SetSliderRange(struct FRuntimeFloatCurve& InSliderRange); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderProgressColor (Underlying native function: SetSliderProgressColor 0xa96d1d4)
	void SetSliderProgressColor(struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleStartAngle (Underlying native function: SetSliderHandleStartAngle 0xa96d150)
	void SetSliderHandleStartAngle(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleEndAngle (Underlying native function: SetSliderHandleEndAngle 0xa96d0cc)
	void SetSliderHandleEndAngle(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleColor (Underlying native function: SetSliderHandleColor 0xa96d030)
	void SetSliderHandleColor(struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderBarColor (Underlying native function: SetSliderBarColor 0xa96cf94)
	void SetSliderBarColor(struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AdvancedWidgets.RadialSlider.SetShowSliderHandle (Underlying native function: SetShowSliderHandle 0xa96cf0c)
	void SetShowSliderHandle(bool& InShowSliderHandle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AdvancedWidgets.RadialSlider.SetShowSliderHand (Underlying native function: SetShowSliderHand 0xa96ce84)
	void SetShowSliderHand(bool& InShowSliderHand); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AdvancedWidgets.RadialSlider.SetLocked (Underlying native function: SetLocked 0xa96ce04)
	void SetLocked(bool& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AdvancedWidgets.RadialSlider.SetHandStartEndRatio (Underlying native function: SetHandStartEndRatio 0xa96cd78)
	void SetHandStartEndRatio(struct FVector2D& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AdvancedWidgets.RadialSlider.SetCustomDefaultValue (Underlying native function: SetCustomDefaultValue 0xa96ccf4)
	void SetCustomDefaultValue(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AdvancedWidgets.RadialSlider.SetCenterBackgroundColor (Underlying native function: SetCenterBackgroundColor 0xa96cc58)
	void SetCenterBackgroundColor(struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AdvancedWidgets.RadialSlider.SetAngularOffset (Underlying native function: SetAngularOffset 0xa96cbc8)
	void SetAngularOffset(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AdvancedWidgets.RadialSlider.GetValue (Underlying native function: GetValue 0xa96cba0)
	float GetValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AdvancedWidgets.RadialSlider.GetNormalizedSliderHandlePosition (Underlying native function: GetNormalizedSliderHandlePosition 0xa96cb68)
	float GetNormalizedSliderHandlePosition(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AdvancedWidgets.RadialSlider.GetCustomDefaultValue (Underlying native function: GetCustomDefaultValue 0xa96cb40)
	float GetCustomDefaultValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};


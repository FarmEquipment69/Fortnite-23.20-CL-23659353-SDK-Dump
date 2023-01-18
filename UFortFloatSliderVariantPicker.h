// Class /Script/FortniteUI.FortFloatSliderVariantPicker
// Size: 0x348
class UFortFloatSliderVariantPicker : public UFortVariantEditorWidgetBase
{
	float CommitDelay; // 0x318 (0x4)
	unsigned char unreflected_31c[0x4]; // 0x31c (0x4) 
	class UFortCosmeticFloatSliderVariant* FloatVariant; // 0x320 (0x8)
	class UCommonTextBlock* TextVariantName; // 0x328 (0x8)
	class UCommonTextBlock* TextValue; // 0x330 (0x8)
	class UAnalogSlider* SliderValue; // 0x338 (0x8)
	unsigned char padding_340[0x8]; // 0x340 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortFloatSliderVariantPicker.OnUpdateValue (Has no native function)
	void OnUpdateValue(float& NormalizedValue, bool& bIsLocked); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortFloatSliderVariantPicker.HandleSliderValueChanged (Underlying native function: HandleSliderValueChanged 0xa9545ac)
	void HandleSliderValueChanged(float& Value); // (Final | Native | Protected)
};


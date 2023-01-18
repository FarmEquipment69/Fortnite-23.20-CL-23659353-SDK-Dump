// Class /Script/FortniteUI.FortColorPickerComponent
// Size: 0x2c8
class UFortColorPickerComponent : public UCommonUserWidget
{
	class UCommonTextBlock* TextComponentName; // 0x290 (0x8)
	class UCommonTextBlock* TextCurrentValue; // 0x298 (0x8)
	class UFortColorPickerSlider* ColorSliderComponent; // 0x2a0 (0x8)
	unsigned char padding_2a8[0x20]; // 0x2a8 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.FortColorPickerComponent.HandleOnValueChanged (Underlying native function: HandleOnValueChanged 0xa73cc80)
	void HandleOnValueChanged(float& NormalizedNewValue); // (Final | Native | Private)
};


// Class /Script/FortniteUI.FortSettingsListEntrySetting_Scalar
// Size: 0x2f0
class UFortSettingsListEntrySetting_Scalar : public UFortSettingsListEntry_Setting
{
	class UFortSettingValueScalar* ScalarSetting; // 0x2d0 (0x8)
	class UPanelWidget* PanelValue; // 0x2d8 (0x8)
	class UAnalogSlider* SliderSettingValue; // 0x2e0 (0x8)
	class UCommonTextBlock* TextSettingValue; // 0x2e8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSettingsListEntrySetting_Scalar.OnValueChanged (Has no native function)
	void OnValueChanged(float& Value); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSettingsListEntrySetting_Scalar.OnDefaultValueChanged (Has no native function)
	void OnDefaultValueChanged(float& DefaultValue); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSettingsListEntrySetting_Scalar.HandleSliderValueChanged (Underlying native function: HandleSliderValueChanged 0xa8c3d28)
	void HandleSliderValueChanged(float& Value); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortSettingsListEntrySetting_Scalar.HandleSliderCaptureEnded (Underlying native function: HandleSliderCaptureEnded 0x26daa0c)
	void HandleSliderCaptureEnded(); // (Final | Native | Protected)
};


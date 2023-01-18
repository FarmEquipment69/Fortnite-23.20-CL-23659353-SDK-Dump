// Class /Script/FortniteUI.FortVoiceSettingsDisplay
// Size: 0x330
class UFortVoiceSettingsDisplay : public UCommonUserWidget
{
	unsigned char unreflected_290[0x38]; // 0x290 (0x38) 
	class UFortGameSettingRegistry* Registry; // 0x2c8 (0x8)
	class UCommonRichTextBlock* TextPTTOnOff; // 0x2d0 (0x8)
	class UCommonRichTextBlock* TextInputDeviceName; // 0x2d8 (0x8)
	class UCommonRichTextBlock* TextOutputDeviceName; // 0x2e0 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherVoiceEnabledView; // 0x2e8 (0x8)
	class UWidget* VoiceEnabledView; // 0x2f0 (0x8)
	class UWidget* VoiceDisabledView; // 0x2f8 (0x8)
	class UWidget* ParentalControlsNotificationVisOff; // 0x300 (0x8)
	class UCommonTextBlock* ParentalText; // 0x308 (0x8)
	class UHorizontalBox* HBoxPTTKeybind; // 0x310 (0x8)
	class UCommonButtonLegacy* ButtonOpenSettings; // 0x318 (0x8)
	class UCommonButtonLegacy* ButtonEnableVoiceChat; // 0x320 (0x8)
	class UFortSettingsListView* ListViewVoiceSettings; // 0x328 (0x8)
};


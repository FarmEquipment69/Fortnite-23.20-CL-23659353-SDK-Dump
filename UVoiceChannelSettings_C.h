// WidgetBlueprintGeneratedClass /Game/UI/SocialPanel/VoiceChannelSettings.VoiceChannelSettings_C
// Size: 0x3b0
class UVoiceChannelSettings_C : public UFortVoiceSettingsDisplay
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x330 (0x8)
	class UWidgetAnimation* GearHover; // 0x338 (0x8)
	class UCommonActionWidget* ActionWidgetInputDisplay; // 0x340 (0x8)
	class UImage* AlertIcon; // 0x348 (0x8)
	class UIconTextButton_C* ButtonNextInputDevice; // 0x350 (0x8)
	class UIconTextButton_C* ButtonNextOutputDevice; // 0x358 (0x8)
	class UIconTextButton_C* ButtonTogglePTT; // 0x360 (0x8)
	class UImage* GearIcon; // 0x368 (0x8)
	class UFortMobileImage* ImageTitleIcon; // 0x370 (0x8)
	class UCommonRichTextBlock* InputDevice; // 0x378 (0x8)
	class UCommonRichTextBlock* OutputDevice; // 0x380 (0x8)
	class UKeybindWidget_C* PTTKeybindWidget; // 0x388 (0x8)
	class UCommonRichTextBlock* PushToTalk; // 0x390 (0x8)
	class UCommonTextBlock* TextLowPowerMode; // 0x398 (0x8)
	class UImage* VoiceDisabledIcon; // 0x3a0 (0x8)
	class UCommonRichTextBlock* VoiceDisabledText; // 0x3a8 (0x8)

	/* Functions */

	// Function /Game/UI/SocialPanel/VoiceChannelSettings.VoiceChannelSettings_C.BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtButtonGearIconK2NodeComponentBoundEvent1CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/SocialPanel/VoiceChannelSettings.VoiceChannelSettings_C.BndEvt__Button_OpenSettings_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtButtonOpenSettingsK2NodeComponentBoundEvent2CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/SocialPanel/VoiceChannelSettings.VoiceChannelSettings_C.BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtButtonGearIconK2NodeComponentBoundEvent0CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/SocialPanel/VoiceChannelSettings.VoiceChannelSettings_C.ExecuteUbergraph_VoiceChannelSettings (Has no native function)
	void ExecuteUbergraphVoiceChannelSettings(int& EntryPoint, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton2, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1); // (Final | 0x00008000)
};


// WidgetBlueprintGeneratedClass /Game/UI/InGame/HUD/VoiceChannelChangePopup.VoiceChannelChangePopup_C
// Size: 0x41d
class UVoiceChannelChangePopup_C : public UFortVoiceChannelChangePopup
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x3b0 (0x8)
	class UWidgetAnimation* AmbientIconPulse; // 0x3b8 (0x8)
	class UHorizontalBox* GamepadKeybindWrapper; // 0x3c0 (0x8)
	class UImage* ImageMic; // 0x3c8 (0x8)
	class UHorizontalBox* KBKeybindWrapper; // 0x3d0 (0x8)
	class UImage* MicPulse; // 0x3d8 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherKeybindWidgets; // 0x3e0 (0x8)
	class UCommonRichTextBlock* TextHold; // 0x3e8 (0x8)
	struct FName MParamColorA; // 0x3f0 (0x4)
	struct FName MParamColorB; // 0x3f4 (0x4)
	struct FName MParamProgress; // 0x3f8 (0x4)
	struct FLinearColor ColorB; // 0x3fc (0x10)
	struct FLinearColor ColorA; // 0x40c (0x10)
	bool CollapseOnAnimationFinish; // 0x41c (0x1)

	/* Functions */

	// Function /Game/UI/InGame/HUD/VoiceChannelChangePopup.VoiceChannelChangePopup_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/InGame/HUD/VoiceChannelChangePopup.VoiceChannelChangePopup_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/InGame/HUD/VoiceChannelChangePopup.VoiceChannelChangePopup_C.Popup Animation Finished (Has no native function)
	void PopupAnimationFinished(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/InGame/HUD/VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayOpenAnimation (Has no native function)
	void OnPlayOpenAnimation(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/InGame/HUD/VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayCloseAnimation (Has no native function)
	void OnPlayCloseAnimation(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/InGame/HUD/VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnInputModeChanged (Has no native function)
	void OnInputModeChanged(enum ECommonInputType& NewInputType); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/InGame/HUD/VoiceChannelChangePopup.VoiceChannelChangePopup_C.ExecuteUbergraph_VoiceChannelChangePopup (Has no native function)
	void ExecuteUbergraphVoiceChannelChangePopup(int& EntryPoint, enum ECommonInputType& TempbyteVariable, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, bool& K2NodeEventIsDesignTime, enum ECommonInputType& K2NodeEventNewInputType, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue2, class UWidget*& K2NodeSelectDefault); // (Final | 0x00008000)
};


// Class /Script/FortniteUI.FortVoiceChannelChangePopup
// Size: 0x3b0
class UFortVoiceChannelChangePopup : public UFortToastWidget
{
	unsigned char unreflected_2b8[0x8]; // 0x2b8 (0x8) 
	bool bEnableVoiceChatNotifyEverySession; // 0x2c0 (0x1)
	bool bToastMode; // 0x2c1 (0x1)
	unsigned char unreflected_2c2[0x2]; // 0x2c2 (0x2) 
	float VisiblityInSeconds; // 0x2c4 (0x4)
	struct FText GameChannelText; // 0x2c8 (0x18)
	struct FText PartyChannelText; // 0x2e0 (0x18)
	struct FText JustJoinedChannelText; // 0x2f8 (0x18)
	struct FText StayedInChannelText; // 0x310 (0x18)
	unsigned char unreflected_328[0x38]; // 0x328 (0x38) 
	struct TWeakObjectPtr<class UInputComponent> CachedGameChannelRecommendationInputComponent; // 0x360 (0x8)
	class UWidgetAnimation* AnimSimplePopup; // 0x368 (0x8)
	class UCommonRichTextBlock* TextTopLine; // 0x370 (0x8)
	class UCommonRichTextBlock* TextMiddleLine; // 0x378 (0x8)
	class UCommonRichTextBlock* TextBottomLine; // 0x380 (0x8)
	class UCommonButtonLegacy* ActionButton; // 0x388 (0x8)
	class UCommonButtonLegacy* ButtonJoinGameChat; // 0x390 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherInputButtons; // 0x398 (0x8)
	class UFortKeybindWidget* HoldKeybindWidgetKeyboard; // 0x3a0 (0x8)
	class UFortKeybindWidget* HoldKeybindWidgetGamePad; // 0x3a8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortVoiceChannelChangePopup.OnInputModeChanged (Has no native function)
	void OnInputModeChanged(enum ECommonInputType& NewInputType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortVoiceChannelChangePopup.HandleOpenCloseAnimationFinished (Underlying native function: HandleOpenCloseAnimationFinished 0xa724db4)
	void HandleOpenCloseAnimationFinished(); // (Final | Native | Private)
};


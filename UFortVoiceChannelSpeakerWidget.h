// Class /Script/FortniteUI.FortVoiceChannelSpeakerWidget
// Size: 0x318
class UFortVoiceChannelSpeakerWidget : public UUserWidget
{
	unsigned char unreflected_268[0x50]; // 0x268 (0x50) 
	float ToleratedSilenceDelay; // 0x2b8 (0x4)
	unsigned char unreflected_2bc[0x14]; // 0x2bc (0x14) 
	float PerfUpdateIntervalInSecs; // 0x2d0 (0x4)
	float OpenCloseAnimProxyDuration; // 0x2d4 (0x4)
	bool bPerfCollapseHorizontal; // 0x2d8 (0x1)
	unsigned char unreflected_2d9[0x3]; // 0x2d9 (0x3) 
	float TalkingAnimProxyDuration; // 0x2dc (0x4)
	class UWidgetAnimation* AnimClose; // 0x2e0 (0x8)
	class UWidgetAnimation* AnimOpen; // 0x2e8 (0x8)
	class UCommonTextBlock* TextDisplayName; // 0x2f0 (0x8)
	class UCommonTextBlock* TextChannelName; // 0x2f8 (0x8)
	class UCommonBorder* BorderScaleBound; // 0x300 (0x8)
	class UFortSocialAvatarIcon* AvatarIcon; // 0x308 (0x8)
	class UImage* ImageActiveVoiceIcon; // 0x310 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortVoiceChannelSpeakerWidget.OnStyleAssigned (Has no native function)
	void OnStyleAssigned(enum EChannelSpeakerStyle& NewStyle); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortVoiceChannelSpeakerWidget.OnAnimateTalkingChanged (Has no native function)
	void OnAnimateTalkingChanged(bool& bIsNowTalking); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortVoiceChannelSpeakerWidget.HandleAnimationFinished (Underlying native function: HandleAnimationFinished 0xa872f24)
	void HandleAnimationFinished(); // (Final | Native | Private)
};


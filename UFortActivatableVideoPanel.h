// Class /Script/FortniteUI.FortActivatableVideoPanel
// Size: 0x5f8
class UFortActivatableVideoPanel : public UFortActivatablePanel
{
	struct FMulticastInlineDelegate OnSkipButtonClicked; // 0x518 (0x10)
	bool bOverwriteSkip; // 0x528 (0x1)
	unsigned char unreflected_529[0x7]; // 0x529 (0x7) 
	struct FMulticastInlineDelegate OnMediaPlayerEndReached; // 0x530 (0x10)
	struct FMulticastInlineDelegate OnMediaOpened; // 0x540 (0x10)
	struct FMulticastInlineDelegate OnMediaOpenFailed; // 0x550 (0x10)
	unsigned char unreflected_560[0x10]; // 0x560 (0x10) 
	bool AutomaticallyDismissPanel; // 0x570 (0x1)
	unsigned char unreflected_571[0x57]; // 0x571 (0x57) 
	bool bAutoPlayOnActivated; // 0x5c8 (0x1)
	bool bAllowSkipping; // 0x5c9 (0x1)
	bool ControlsVisible; // 0x5ca (0x1)
	unsigned char unreflected_5cb[0x1]; // 0x5cb (0x1) 
	float LastInteractionTime; // 0x5cc (0x4)
	class UFortVideoPlayerWidget* VideoPlayerWidget; // 0x5d0 (0x8)
	class UCommonButtonBase* ButtonSkip; // 0x5d8 (0x8)
	class UImage* ImageThrobberBackground; // 0x5e0 (0x8)
	class UImage* ImageThrobber; // 0x5e8 (0x8)
	class USoundMix* ActiveSoundMix; // 0x5f0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortActivatableVideoPanel.StreamVideoFromSource (Underlying native function: StreamVideoFromSource 0xa84c7fc)
	bool StreamVideoFromSource(class UStreamMediaSource*& StreamSource); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivatableVideoPanel.StreamVideo (Underlying native function: StreamVideo 0xa84c644)
	bool StreamVideo(struct FString& VideoURL); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivatableVideoPanel.StartVideo (Underlying native function: StartVideo 0xa84c584)
	void StartVideo(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivatableVideoPanel.ShowThrobber (Underlying native function: ShowThrobber 0xa84c570)
	void ShowThrobber(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivatableVideoPanel.ShowControls (Has no native function)
	void ShowControls(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivatableVideoPanel.ShouldAutoPlayVideo (Underlying native function: ShouldAutoPlayVideo 0xa84c3b8)
	bool ShouldAutoPlayVideo(struct FName& AssetName, bool& bAllowRecord); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortActivatableVideoPanel.MediaOpenFailed (Has no native function)
	void MediaOpenFailed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivatableVideoPanel.MediaOpened (Has no native function)
	void MediaOpened(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivatableVideoPanel.LoadVideo (Underlying native function: LoadVideo 0xa8489d8)
	bool LoadVideo(struct FName& VideoId, bool& bIsAutoPlay, bool& bForceDefaultAudioTrack, struct FName& VideoString); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivatableVideoPanel.HideControls (Has no native function)
	void HideControls(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivatableVideoPanel.GetMediaPlayer (Underlying native function: GetMediaPlayer 0xa847758)
	class UMediaPlayer* GetMediaPlayer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortActivatableVideoPanel.EnableSkipButton (Underlying native function: EnableSkipButton 0xa8468c0)
	void EnableSkipButton(bool& bAllowSkip); // (Final | Native | Public | BlueprintCallable)
};


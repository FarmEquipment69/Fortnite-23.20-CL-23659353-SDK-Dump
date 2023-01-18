// Class /Script/FortniteUI.FortVideoPlayerWidget
// Size: 0x370
class UFortVideoPlayerWidget : public UFortUserWidget
{
	bool bAutoPlayOnOpen; // 0x278 (0x1)
	bool bLoop; // 0x279 (0x1)
	bool bShowSubtitles; // 0x27a (0x1)
	bool bNoAudio; // 0x27b (0x1)
	unsigned char unreflected_27c[0x1]; // 0x27c (0x1) 
	bool bForceDefaultAudio; // 0x27d (0x1)
	unsigned char unreflected_27e[0x2]; // 0x27e (0x2) 
	class USoundClass* SoundClass; // 0x280 (0x8)
	unsigned char unreflected_288[0x90]; // 0x288 (0x90) 
	class UMediaPlayer* VideoPlayer; // 0x318 (0x8)
	class USoundSubmixBase* DefaultAudioSubmix; // 0x320 (0x8)
	class USoundSubmixBase* LicensedAudioSubmix; // 0x328 (0x8)
	class UFortMediaPlayerCtrl* MediaController; // 0x330 (0x8)
	class UMediaSoundComponent* SoundComponent; // 0x338 (0x8)
	class UFortMediaSubtitlesPlayer* SubtitlePlayer; // 0x340 (0x8)
	unsigned char unreflected_348[0x10]; // 0x348 (0x10) 
	class UImage* ImageVideoTexture; // 0x358 (0x8)
	class USubtitleDisplay* Subtitles; // 0x360 (0x8)
	unsigned char padding_368[0x8]; // 0x368 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortVideoPlayerWidget.SetupMediaController (Underlying native function: SetupMediaController 0xa84c334)
	void SetupMediaController(float& MediaStartTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortVideoPlayerWidget.SetSoundClass (Underlying native function: SetSoundClass 0xa84c2ac)
	void SetSoundClass(class USoundClass*& InSoundClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortVideoPlayerWidget.SetMediaMaterial (Underlying native function: SetMediaMaterial 0xa84abfc)
	void SetMediaMaterial(class UMaterialInterface*& VideoMaterial); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortVideoPlayerWidget.GetMediaPlayer (Underlying native function: GetMediaPlayer 0xa847778)
	class UMediaPlayer* GetMediaPlayer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortVideoPlayerWidget.DynamicHandleOnOpenMediaFailed (Underlying native function: DynamicHandleOnOpenMediaFailed 0xa846650)
	void DynamicHandleOnOpenMediaFailed(struct FString& FailedUrl); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortVideoPlayerWidget.DynamicHandleOnMediaOpened (Underlying native function: DynamicHandleOnMediaOpened 0xa8464f0)
	void DynamicHandleOnMediaOpened(struct FString& OpenedURL); // (Final | Native | Private)
};


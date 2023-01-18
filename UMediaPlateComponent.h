// Class /Script/MediaPlate.MediaPlateComponent
// Size: 0x148
class UMediaPlateComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	bool bPlayOnOpen; // 0xa8 (0x1)
	bool bAutoPlay; // 0xa9 (0x1)
	bool bEnableAudio; // 0xaa (0x1)
	unsigned char unreflected_ab[0x1]; // 0xab (0x1) 
	float StartTime; // 0xac (0x4)
	bool bIsAspectRatioAuto; // 0xb0 (0x1)
	unsigned char unreflected_b1[0x7]; // 0xb1 (0x7) 
	class UMediaSoundComponent* SoundComponent; // 0xb8 (0x8)
	class UStaticMeshComponent* StaticMeshComponent; // 0xc0 (0x8)
	struct TArray<class UStaticMeshComponent*> Letterboxes; // 0xc8 (0x10)
	class UMediaPlaylist* MediaPlaylist; // 0xd8 (0x8)
	int PlaylistIndex; // 0xe0 (0x4)
	struct FMediaSourceCacheSettings* CacheSettings; // 0xe4 (0x8)
	bool bIsMediaPlatePlaying; // 0xec (0x1)
	unsigned char unreflected_ed[0x7]; // 0xed (0x7) 
	bool bPlayOnlyWhenVisible; // 0xf4 (0x1)
	bool bLoop; // 0xf5 (0x1)
	enum EMediaTextureVisibleMipsTiles VisibleMipsTilesCalculations; // 0xf6 (0x1)
	unsigned char unreflected_f7[0x1]; // 0xf7 (0x1) 
	float MipMapBias; // 0xf8 (0x4)
	float LetterboxAspectRatio; // 0xfc (0x4)
	struct FVector2D MeshRange; // 0x100 (0x10)
	class UMediaTexture* MediaTexture; // 0x110 (0x8)
	class UMediaPlayer* MediaPlayer; // 0x118 (0x8)
	unsigned char padding_120[0x28]; // 0x120 (0x28)

	/* Functions */

	// Function /Script/MediaPlate.MediaPlateComponent.SetPlayOnlyWhenVisible (Underlying native function: SetPlayOnlyWhenVisible 0x8063754)
	void SetPlayOnlyWhenVisible(bool& bInPlayOnlyWhenVisible); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaPlate.MediaPlateComponent.SetMeshRange (Underlying native function: SetMeshRange 0x80636d0)
	void SetMeshRange(struct FVector2D& InMeshRange); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/MediaPlate.MediaPlateComponent.SetLoop (Underlying native function: SetLoop 0x8063640)
	void SetLoop(bool& bInLoop); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaPlate.MediaPlateComponent.SetLetterboxAspectRatio (Underlying native function: SetLetterboxAspectRatio 0x80635bc)
	void SetLetterboxAspectRatio(float& AspectRatio); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaPlate.MediaPlateComponent.Seek (Underlying native function: Seek 0x8063524)
	bool Seek(struct FTimespan*& Time); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/MediaPlate.MediaPlateComponent.Rewind (Underlying native function: Rewind 0x80634f4)
	bool Rewind(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaPlate.MediaPlateComponent.Play (Underlying native function: Play 0x80634bc)
	void Play(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaPlate.MediaPlateComponent.Pause (Underlying native function: Pause 0x8063488)
	void Pause(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaPlate.MediaPlateComponent.Open (Underlying native function: Open 0x8063474)
	void Open(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaPlate.MediaPlateComponent.OnMediaOpened (Underlying native function: OnMediaOpened 0x8063314)
	void OnMediaOpened(struct FString& DeviceUrl); // (Final | Native | Private)

	// Function /Script/MediaPlate.MediaPlateComponent.OnMediaEnd (Underlying native function: OnMediaEnd 0x80632bc)
	void OnMediaEnd(); // (Final | Native | Private)

	// Function /Script/MediaPlate.MediaPlateComponent.IsMediaPlatePlaying (Underlying native function: IsMediaPlatePlaying 0x80632a4)
	bool IsMediaPlatePlaying(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaPlate.MediaPlateComponent.GetMeshRange (Underlying native function: GetMeshRange 0x8063288)
	struct FVector2D GetMeshRange(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaPlate.MediaPlateComponent.GetMediaTexture (Underlying native function: GetMediaTexture 0x8063270)
	class UMediaTexture* GetMediaTexture(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaPlate.MediaPlateComponent.GetMediaPlayer (Underlying native function: GetMediaPlayer 0x7a9ce30)
	class UMediaPlayer* GetMediaPlayer(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaPlate.MediaPlateComponent.GetLoop (Underlying native function: GetLoop 0x8063258)
	bool GetLoop(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/MediaPlate.MediaPlateComponent.GetLetterboxAspectRatio (Underlying native function: GetLetterboxAspectRatio 0x8063240)
	float GetLetterboxAspectRatio(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaPlate.MediaPlateComponent.Close (Underlying native function: Close 0x80631e8)
	void Close(); // (Final | Native | Public | BlueprintCallable)
};


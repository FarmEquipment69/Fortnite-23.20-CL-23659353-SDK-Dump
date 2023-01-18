// ScriptStruct /Script/PictureInPictureDescriptors.PIPVideoPlayerAssetConfig
// Size: 0x88
struct FPIPVideoPlayerAssetConfig
{
	class UMediaTexture* VideoTexture; // 0x0 (0x8)
	class UMediaPlayer* VideoPlayer; // 0x8 (0x8)
	class UMaterialInterface* VideoMaterial; // 0x10 (0x8)
	class UMaterialInterface* ThumbnailMaterial; // 0x18 (0x8)
	struct FVector2D LoadingScreenSize; // 0x20 (0x10)
	struct FVector2D LoadingScreenPosition; // 0x30 (0x10)
	class UFortStreamMediaSource* MediaSource; // 0x40 (0x8)
	class UMediaSoundComponent* SoundComponent; // 0x48 (0x8)
	class USoundClass* SoundClass; // 0x50 (0x8)
	class USoundMix* ActiveSoundMix; // 0x58 (0x8)
	class USoundSubmixBase* DefaultSubmix; // 0x60 (0x8)
	class USoundSubmixBase* LicensedSubmix; // 0x68 (0x8)
	class UFortMediaSubtitlesPlayer* SubtitlePlayer; // 0x70 (0x8)
	class ULocalizedOverlays* SubtitleOverlays; // 0x78 (0x8)
	class USubtitleDisplayOptions* SubtitleDisplayOptions; // 0x80 (0x8)
};


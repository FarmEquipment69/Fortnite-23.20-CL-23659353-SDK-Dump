// ScriptStruct /Script/FortniteGame.FortMediaEventsStreamAssets
// Size: 0x60
struct FFortMediaEventsStreamAssets
{
	struct FString Name; // 0x0 (0x10)
	bool bAutoActivate; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	class UMediaTexture* VideoTexture; // 0x18 (0x8)
	class UMaterialInterface* VideoMaterial; // 0x20 (0x8)
	class USoundSourceBus* SoundSourceBus; // 0x28 (0x8)
	class USoundClass* SoundClass; // 0x30 (0x8)
	class USoundMix* ActiveSoundMix; // 0x38 (0x8)
	class USoundSubmixBase* DefaultSubmix; // 0x40 (0x8)
	class USoundSubmixBase* LicensedSubmix; // 0x48 (0x8)
	class UFortStreamMediaSource* MediaSource; // 0x50 (0x8)
	class UMediaPlayer* ExternalVideoPlayer; // 0x58 (0x8)
};


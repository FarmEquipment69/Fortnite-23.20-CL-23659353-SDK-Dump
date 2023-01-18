// Class /Script/AmbientAudio.AmbientAudioDataAsset
// Size: 0x58
class UAmbientAudioDataAsset : public UDataAsset
{
	struct TArray<struct FAmbientAudioLoop> LoopingSounds; // 0x30 (0x10)
	struct TArray<struct FAmbientAudioOneShot> OneShotSounds; // 0x40 (0x10)
	float TagCrossfadeTime; // 0x50 (0x4)
	unsigned char padding_54[0x4]; // 0x54 (0x4)
};


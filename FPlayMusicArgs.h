// ScriptStruct /Script/HmxAudio.PlayMusicArgs
// Size: 0xa8
struct FPlayMusicArgs : FPlayArgs
{
	struct TWeakObjectPtr<class UMusicAssetBase> playableAsset; // 0x40 (0x28)
	struct FMusicSyncConfig syncConfig; // 0x68 (0x28)
	struct FMusicSpeedConfig* speedConfig; // 0x90 (0x8)
	float PitchMultiplier; // 0x98 (0x4)
	int transposition; // 0x9c (0x4)
	enum FStretcherAlgorithm overridingStretchAlgorithm; // 0xa0 (0x1)
	enum FFormantHandling overridingFormantHandling; // 0xa1 (0x1)
	unsigned char padding_a2[0x6]; // 0xa2 (0x6)
};


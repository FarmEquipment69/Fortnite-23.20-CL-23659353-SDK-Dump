// Class /Script/Engine.SoundWave
// Size: 0x450
class USoundWave : public USoundBase
{
	unsigned char unreflected_168[0x10]; // 0x168 (0x10) 
	int CompressionQuality; // 0x178 (0x4)
	int StreamingPriority; // 0x17c (0x4)
	enum ESoundwaveSampleRateSettings SampleRateQuality; // 0x180 (0x1)
	unsigned char unreflected_181[0x1]; // 0x181 (0x1) 
	struct TEnumAsByte<ESoundGroup> SoundGroup; // 0x182 (0x1)
	unsigned char bLooping; // 0x183 (0x1)
	unsigned char bStreaming; // 0x183 (0x1)
	enum ESoundAssetCompressionType SoundAssetCompressionType; // 0x184 (0x1)
	unsigned char bSeekableStreaming; // 0x185 (0x1)
	unsigned char bUseBinkAudio; // 0x185 (0x1)
	unsigned char unreflected_186[0x1a]; // 0x186 (0x1a) 
	struct FSoundModulationDefaultRoutingSettings ModulationSettings; // 0x1a0 (0x188)
	struct TArray<float> FrequenciesToAnalyze; // 0x328 (0x10)
	struct TArray<struct FSoundWaveSpectralTimeData> CookedSpectralTimeData; // 0x338 (0x10)
	struct TArray<struct FSoundWaveEnvelopeTimeData*> CookedEnvelopeTimeData; // 0x348 (0x10)
	int InitialChunkSize; // 0x358 (0x4)
	unsigned char unreflected_35c[0x40]; // 0x35c (0x40) 
	unsigned char bMature; // 0x39c (0x1)
	unsigned char bManualWordWrap; // 0x39c (0x1)
	unsigned char bSingleLine; // 0x39c (0x1)
	unsigned char bIsAmbisonics; // 0x39d (0x1)
	enum ESoundWaveLoadingBehavior LoadingBehavior; // 0x39e (0x1)
	unsigned char unreflected_39f[0x1]; // 0x39f (0x1) 
	struct FString SpokenText; // 0x3a0 (0x10)
	float SubtitlePriority; // 0x3b0 (0x4)
	float Volume; // 0x3b4 (0x4)
	float Pitch; // 0x3b8 (0x4)
	int NumChannels; // 0x3bc (0x4)
	struct TArray<struct FSoundWaveCuePoint> CuePoints; // 0x3c0 (0x10)
	int SampleRate; // 0x3d0 (0x4)
	unsigned char unreflected_3d4[0xc]; // 0x3d4 (0xc) 
	struct TArray<struct FSubtitleCue> Subtitles; // 0x3e0 (0x10)
	class UCurveTable* Curves; // 0x3f0 (0x8)
	class UCurveTable* InternalCurves; // 0x3f8 (0x8)
	unsigned char padding_400[0x50]; // 0x400 (0x50)

	/* Functions */

	// Function /Script/Engine.SoundWave.SetSoundAssetCompressionType (Underlying native function: SetSoundAssetCompressionType 0x856e95c)
	void SetSoundAssetCompressionType(enum ESoundAssetCompressionType& InSoundAssetCompressionType, bool& bMarkDirty); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SoundWave.GetSoundAssetCompressionType (Underlying native function: GetSoundAssetCompressionType 0x9c1e304)
	enum ESoundAssetCompressionType GetSoundAssetCompressionType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};


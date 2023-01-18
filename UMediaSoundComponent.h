// Class /Script/MediaAssets.MediaSoundComponent
// Size: 0x870
class UMediaSoundComponent : public USynthComponent
{
	enum EMediaSoundChannels Channels; // 0x790 (0x4)
	bool DynamicRateAdjustment; // 0x794 (0x1)
	unsigned char unreflected_795[0x3]; // 0x795 (0x3) 
	float RateAdjustmentFactor; // 0x798 (0x4)
	struct FFloatRange RateAdjustmentRange; // 0x79c (0x10)
	unsigned char unreflected_7ac[0x4]; // 0x7ac (0x4) 
	class UMediaPlayer* MediaPlayer; // 0x7b0 (0x8)
	unsigned char padding_7b8[0xb8]; // 0x7b8 (0xb8)

	/* Functions */

	// Function /Script/MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings (Underlying native function: SetSpectralAnalysisSettings 0x9bcb2cc)
	void SetSpectralAnalysisSettings(struct TArray<float>& InFrequenciesToAnalyze, enum EMediaSoundComponentFFTSize& InFFTSize); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaSoundComponent.SetMediaPlayer (Underlying native function: SetMediaPlayer 0x9bcaf74)
	void SetMediaPlayer(class UMediaPlayer*& NewMediaPlayer); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings (Underlying native function: SetEnvelopeFollowingsettings 0x9bca7ac)
	void SetEnvelopeFollowingsettings(int& AttackTimeMsec, int& ReleaseTimeMsec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis (Underlying native function: SetEnableSpectralAnalysis 0x9bca6fc)
	void SetEnableSpectralAnalysis(bool& bInSpectralAnalysisEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing (Underlying native function: SetEnableEnvelopeFollowing 0x9bca644)
	void SetEnableEnvelopeFollowing(bool& bInEnvelopeFollowing); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaSoundComponent.GetSpectralData (Underlying native function: GetSpectralData 0x9bc88c4)
	struct TArray<struct FMediaSoundComponentSpectralData*> GetSpectralData(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaSoundComponent.GetNormalizedSpectralData (Underlying native function: GetNormalizedSpectralData 0x9bc833c)
	struct TArray<struct FMediaSoundComponentSpectralData*> GetNormalizedSpectralData(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaSoundComponent.GetMediaPlayer (Underlying native function: GetMediaPlayer 0x9bc81cc)
	class UMediaPlayer* GetMediaPlayer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaSoundComponent.GetEnvelopeValue (Underlying native function: GetEnvelopeValue 0x9bc80e0)
	float GetEnvelopeValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply (Underlying native function: BP_GetAttenuationSettingsToApply 0x9bc758c)
	bool BPGetAttenuationSettingsToApply(struct FSoundAttenuationSettings& OutAttenuationSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};


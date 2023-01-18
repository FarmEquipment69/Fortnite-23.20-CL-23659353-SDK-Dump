// Class /Script/TimeSynth.TimeSynthComponent
// Size: 0x1220
class UTimeSynthComponent : public USynthComponent
{
	struct FTimeSynthQuantizationSettings QuantizationSettings; // 0x790 (0x14)
	unsigned char bEnableSpectralAnalysis; // 0x7a4 (0x1)
	unsigned char unreflected_7a5[0x3]; // 0x7a5 (0x3) 
	struct TArray<float> FrequenciesToAnalyze; // 0x7a8 (0x10)
	enum ETimeSynthFFTSize FFTSize; // 0x7b8 (0x1)
	unsigned char unreflected_7b9[0x7]; // 0x7b9 (0x7) 
	struct FMulticastInlineDelegate OnPlaybackTime; // 0x7c0 (0x10)
	unsigned char bIsFilterAEnabled; // 0x7d0 (0x1)
	unsigned char bIsFilterBEnabled; // 0x7d0 (0x1)
	unsigned char unreflected_7d1[0x3]; // 0x7d1 (0x3) 
	struct FTimeSynthFilterSettings FilterASettings; // 0x7d4 (0xc)
	struct FTimeSynthFilterSettings FilterBSettings; // 0x7e0 (0xc)
	unsigned char bIsEnvelopeFollowerEnabled; // 0x7ec (0x1)
	unsigned char unreflected_7ed[0x3]; // 0x7ed (0x3) 
	struct FTimeSynthEnvelopeFollowerSettings EnvelopeFollowerSettings; // 0x7f0 (0xc)
	int MaxPoolSize; // 0x7fc (0x4)
	unsigned char padding_800[0xa20]; // 0x800 (0xa20)

	/* Functions */

	// Function /Script/TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroupWithFadeOverride (Underlying native function: StopSoundsOnVolumeGroupWithFadeOverride 0x7e4a85c)
	void StopSoundsOnVolumeGroupWithFadeOverride(class UTimeSynthVolumeGroup*& InVolumeGroup, enum ETimeSynthEventClipQuantization& EventQuantization, struct FTimeSynthTimeDef*& FadeTime); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroup (Underlying native function: StopSoundsOnVolumeGroup 0x7e4a798)
	void StopSoundsOnVolumeGroup(class UTimeSynthVolumeGroup*& InVolumeGroup, enum ETimeSynthEventClipQuantization& EventQuantization); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/TimeSynth.TimeSynthComponent.StopClipWithFadeOverride (Underlying native function: StopClipWithFadeOverride 0x7e4a688)
	void StopClipWithFadeOverride(struct FTimeSynthClipHandle*& InClipHandle, enum ETimeSynthEventClipQuantization& EventQuantization, struct FTimeSynthTimeDef*& FadeTime); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TimeSynth.TimeSynthComponent.StopClip (Underlying native function: StopClip 0x7e4a5c0)
	void StopClip(struct FTimeSynthClipHandle*& InClipHandle, enum ETimeSynthEventClipQuantization& EventQuantization); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/TimeSynth.TimeSynthComponent.SetVolumeGroup (Underlying native function: SetVolumeGroup 0x7e49fb4)
	void SetVolumeGroup(class UTimeSynthVolumeGroup*& InVolumeGroup, float& VolumeDb, float& FadeTimeSec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/TimeSynth.TimeSynthComponent.SetSeed (Underlying native function: SetSeed 0x7e49f30)
	void SetSeed(int& InSeed); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/TimeSynth.TimeSynthComponent.SetQuantizationSettings (Underlying native function: SetQuantizationSettings 0x7e49e80)
	void SetQuantizationSettings(struct FTimeSynthQuantizationSettings& InQuantizationSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TimeSynth.TimeSynthComponent.SetFilterSettings (Underlying native function: SetFilterSettings 0x7e49da8)
	void SetFilterSettings(enum ETimeSynthFilter& Filter, struct FTimeSynthFilterSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TimeSynth.TimeSynthComponent.SetFilterEnabled (Underlying native function: SetFilterEnabled 0x7e49c80)
	void SetFilterEnabled(enum ETimeSynthFilter& Filter, bool& bIsEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/TimeSynth.TimeSynthComponent.SetFFTSize (Underlying native function: SetFFTSize 0x7e49c00)
	void SetFFTSize(enum ETimeSynthFFTSize& InFFTSize); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/TimeSynth.TimeSynthComponent.SetEnvelopeFollowerSettings (Underlying native function: SetEnvelopeFollowerSettings 0x7e49b6c)
	void SetEnvelopeFollowerSettings(struct FTimeSynthEnvelopeFollowerSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TimeSynth.TimeSynthComponent.SetEnvelopeFollowerEnabled (Underlying native function: SetEnvelopeFollowerEnabled 0x7e49a7c)
	void SetEnvelopeFollowerEnabled(bool& bInIsEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/TimeSynth.TimeSynthComponent.SetBPM (Underlying native function: SetBPM 0x7e499f8)
	void SetBPM(float& BeatsPerMinute); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/TimeSynth.TimeSynthComponent.ResetSeed (Underlying native function: ResetSeed 0x7e499dc)
	void ResetSeed(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/TimeSynth.TimeSynthComponent.PlayClip (Underlying native function: PlayClip 0x7e49910)
	struct FTimeSynthClipHandle* PlayClip(class UTimeSynthClip*& InClip, class UTimeSynthVolumeGroup*& InVolumeGroup); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/TimeSynth.TimeSynthComponent.HasActiveClips (Underlying native function: HasActiveClips 0x7e498ec)
	bool HasActiveClips(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/TimeSynth.TimeSynthComponent.GetSpectralData (Underlying native function: GetSpectralData 0x7e4982c)
	struct TArray<struct FTimeSynthSpectralData*> GetSpectralData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/TimeSynth.TimeSynthComponent.GetMaxActiveClipLimit (Underlying native function: GetMaxActiveClipLimit 0x7e49814)
	int GetMaxActiveClipLimit(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/TimeSynth.TimeSynthComponent.GetEnvelopeFollowerValue (Underlying native function: GetEnvelopeFollowerValue 0x7e497fc)
	float GetEnvelopeFollowerValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/TimeSynth.TimeSynthComponent.GetBPM (Underlying native function: GetBPM 0x7e497e0)
	int GetBPM(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/TimeSynth.TimeSynthComponent.AddQuantizationEventDelegate (Underlying native function: AddQuantizationEventDelegate 0x7e496f4)
	void AddQuantizationEventDelegate(enum ETimeSynthEventQuantization& QuantizationType, struct FDelegate& OnQuantizationEvent); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};


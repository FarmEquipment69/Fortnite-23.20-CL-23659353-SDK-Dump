// Class /Script/Engine.SoundSubmix
// Size: 0x1c8
class USoundSubmix : public USoundSubmixWithParentBase
{
	unsigned char bMuteWhenBackgrounded; // 0x48 (0x1)
	unsigned char unreflected_49[0x7]; // 0x49 (0x7) 
	struct TArray<class USoundEffectSubmixPreset*> SubmixEffectChain; // 0x50 (0x10)
	class USoundfieldEncodingSettingsBase* AmbisonicsPluginSettings; // 0x60 (0x8)
	int EnvelopeFollowerAttackTime; // 0x68 (0x4)
	int EnvelopeFollowerReleaseTime; // 0x6c (0x4)
	float OutputVolume; // 0x70 (0x4)
	float WetLevel; // 0x74 (0x4)
	float DryLevel; // 0x78 (0x4)
	unsigned char unreflected_7c[0x4]; // 0x7c (0x4) 
	struct FSoundModulationDestinationSettings OutputVolumeModulation; // 0x80 (0x60)
	struct FSoundModulationDestinationSettings WetLevelModulation; // 0xe0 (0x60)
	struct FSoundModulationDestinationSettings DryLevelModulation; // 0x140 (0x60)
	unsigned char bSendToAudioLink; // 0x1a0 (0x1)
	unsigned char unreflected_1a1[0x7]; // 0x1a1 (0x7) 
	class UAudioLinkSettingsAbstract* AudioLinkSettings; // 0x1a8 (0x8)
	struct FMulticastInlineDelegate OnSubmixRecordedFileDone; // 0x1b0 (0x10)
	unsigned char padding_1c0[0x8]; // 0x1c0 (0x8)

	/* Functions */

	// Function /Script/Engine.SoundSubmix.StopSpectralAnalysis (Underlying native function: StopSpectralAnalysis 0x9f8670c)
	void StopSpectralAnalysis(class UObject*& WorldContextObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SoundSubmix.StopRecordingOutput (Underlying native function: StopRecordingOutput 0x9f863e0)
	void StopRecordingOutput(class UObject*& WorldContextObject, enum EAudioRecordingExportType& ExportType, struct FString& Name, struct FString& Path, class USoundWave*& ExistingSoundWaveToOverwrite); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SoundSubmix.StopEnvelopeFollowing (Underlying native function: StopEnvelopeFollowing 0x9f86360)
	void StopEnvelopeFollowing(class UObject*& WorldContextObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SoundSubmix.StartSpectralAnalysis (Underlying native function: StartSpectralAnalysis 0x9f86194)
	void StartSpectralAnalysis(class UObject*& WorldContextObject, enum EFFTSize& FFTSize, enum EFFTPeakInterpolationMethod& InterpolationMethod, enum EFFTWindowType& WindowType, float& HopSize, enum EAudioSpectrumType& SpectrumType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SoundSubmix.StartRecordingOutput (Underlying native function: StartRecordingOutput 0x9f860cc)
	void StartRecordingOutput(class UObject*& WorldContextObject, float& ExpectedDuration); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SoundSubmix.StartEnvelopeFollowing (Underlying native function: StartEnvelopeFollowing 0x9f8604c)
	void StartEnvelopeFollowing(class UObject*& WorldContextObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SoundSubmix.SetSubmixWetLevel (Underlying native function: SetSubmixWetLevel 0x9f85f84)
	void SetSubmixWetLevel(class UObject*& WorldContextObject, float& InWetLevel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SoundSubmix.SetSubmixOutputVolume (Underlying native function: SetSubmixOutputVolume 0x9f85ebc)
	void SetSubmixOutputVolume(class UObject*& WorldContextObject, float& InOutputVolume); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SoundSubmix.SetSubmixDryLevel (Underlying native function: SetSubmixDryLevel 0x9f85df4)
	void SetSubmixDryLevel(class UObject*& WorldContextObject, float& InDryLevel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SoundSubmix.RemoveSpectralAnalysisDelegate (Underlying native function: RemoveSpectralAnalysisDelegate 0x9f85ab0)
	void RemoveSpectralAnalysisDelegate(class UObject*& WorldContextObject, struct FDelegate& OnSubmixSpectralAnalysisBP); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.SoundSubmix.AddSpectralAnalysisDelegate (Underlying native function: AddSpectralAnalysisDelegate 0x9f84d64)
	void AddSpectralAnalysisDelegate(class UObject*& WorldContextObject, struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings>& InBandSettings, struct FDelegate& OnSubmixSpectralAnalysisBP, float& UpdateRate, float& DecibelNoiseFloor, bool& bDoNormalize, bool& bDoAutoRange, float& AutoRangeAttackTime, float& AutoRangeReleaseTime); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.SoundSubmix.AddEnvelopeFollowerDelegate (Underlying native function: AddEnvelopeFollowerDelegate 0x9f849d0)
	void AddEnvelopeFollowerDelegate(class UObject*& WorldContextObject, struct FDelegate& OnSubmixEnvelopeBP); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};


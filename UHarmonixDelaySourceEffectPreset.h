// Class /Script/HmxAudio.HarmonixDelaySourceEffectPreset
// Size: 0x120
class UHarmonixDelaySourceEffectPreset : public UTempoSyncedSourceEffectPresetBase
{
	unsigned char unreflected_80[0x64]; // 0x80 (0x64) 
	struct FHarmonixDelayEffectSettings Settings; // 0xe4 (0x3c)

	/* Functions */

	// Function /Script/HmxAudio.HarmonixDelaySourceEffectPreset.SetWetGain (Underlying native function: SetWetGain 0x545dd70)
	void SetWetGain(float& Gain); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDelaySourceEffectPreset.SetTimeSyncOption (Underlying native function: SetTimeSyncOption 0x545be50)
	void SetTimeSyncOption(enum ETempoListenerTimeSyncOption& Option); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDelaySourceEffectPreset.SetTempo (Underlying native function: SetTempo 0x545b940)
	void SetTempo(float& BPM); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDelaySourceEffectPreset.SetStereoType (Underlying native function: SetStereoType 0x545b650)
	void SetStereoType(enum EHarmonixDelayStereoType& Type); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDelaySourceEffectPreset.SetStereoSpreadRight (Underlying native function: SetStereoSpreadRight 0x545b580)
	void SetStereoSpreadRight(float& Spread); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDelaySourceEffectPreset.SetStereoSpreadLeft (Underlying native function: SetStereoSpreadLeft 0x545b4b0)
	void SetStereoSpreadLeft(float& Spread); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDelaySourceEffectPreset.SetSpeed (Underlying native function: SetSpeed 0x545ad10)
	void SetSpeed(float& Speed); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDelaySourceEffectPreset.SetSettings (Underlying native function: SetSettings 0x545a090)
	void SetSettings(struct FHarmonixDelayEffectSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDelaySourceEffectPreset.SetOutputGain (Underlying native function: SetOutputGain 0x54589d0)
	void SetOutputGain(float& Gain); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDelaySourceEffectPreset.SetLFOTimeSyncOption (Underlying native function: SetLFOTimeSyncOption 0x5456ca0)
	void SetLFOTimeSyncOption(enum ETempoListenerTimeSyncOption& Option); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDelaySourceEffectPreset.SetLFOFreq (Underlying native function: SetLFOFreq 0x54566f0)
	void SetLFOFreq(float& hz); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDelaySourceEffectPreset.SetLFOEnabled (Underlying native function: SetLFOEnabled 0x5456620)
	void SetLFOEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDelaySourceEffectPreset.SetLFODepth (Underlying native function: SetLFODepth 0x5456480)
	void SetLFODepth(float& Depth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDelaySourceEffectPreset.SetFilterType (Underlying native function: SetFilterType 0x54555c0)
	void SetFilterType(enum EHarmonixDelayFilterType& Type); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDelaySourceEffectPreset.SetFilterQ (Underlying native function: SetFilterQ 0x54554f0)
	void SetFilterQ(float& Q); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDelaySourceEffectPreset.SetFilterFreq (Underlying native function: SetFilterFreq 0x5455420)
	void SetFilterFreq(float& hz); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDelaySourceEffectPreset.SetFilterEnabled (Underlying native function: SetFilterEnabled 0x5455350)
	void SetFilterEnabled(bool& On); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDelaySourceEffectPreset.SetFeedbackGain (Underlying native function: SetFeedbackGain 0x5455280)
	void SetFeedbackGain(float& Gain); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDelaySourceEffectPreset.SetEnabled (Underlying native function: SetEnabled 0x5453be0)
	void SetEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDelaySourceEffectPreset.SetDryGain (Underlying native function: SetDryGain 0x54532b0)
	void SetDryGain(float& Gain); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDelaySourceEffectPreset.SetDelaySeconds (Underlying native function: SetDelaySeconds 0x5452dd0)
	void SetDelaySeconds(float& Time); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDelaySourceEffectPreset.CreateHarmonixDelayInstanceOnEmitter (Underlying native function: CreateHarmonixDelayInstanceOnEmitter 0x5446320)
	static class UHarmonixDelaySourceEffectPreset* CreateHarmonixDelayInstanceOnEmitter(class UMusicEmitterComponent*& Emitter, struct FHarmonixDelayEffectSettings& InSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};


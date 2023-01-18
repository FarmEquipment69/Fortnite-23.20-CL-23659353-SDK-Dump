// Class /Script/HmxAudio.HarmonixFlangerSourceEffectPreset
// Size: 0xf8
class UHarmonixFlangerSourceEffectPreset : public UTempoSyncedSourceEffectPresetBase
{
	unsigned char unreflected_80[0x50]; // 0x80 (0x50) 
	struct FHarmonixFlangerEffectSettings Settings; // 0xd0 (0x28)

	/* Functions */

	// Function /Script/HmxAudio.HarmonixFlangerSourceEffectPreset.SetTimeSyncOption (Underlying native function: SetTimeSyncOption 0x545bf10)
	void SetTimeSyncOption(enum ETempoListenerTimeSyncOption& Option, float& currentBeatFraction); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixFlangerSourceEffectPreset.SetSettings (Underlying native function: SetSettings 0x545a2a0)
	void SetSettings(struct FHarmonixFlangerEffectSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixFlangerSourceEffectPreset.SetModShape (Underlying native function: SetModShape 0x54579d0)
	void SetModShape(enum EHarmonixFlangerShapes& S); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixFlangerSourceEffectPreset.SetModFreq (Underlying native function: SetModFreq 0x54578d0)
	void SetModFreq(float& freq, bool& Force); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixFlangerSourceEffectPreset.SetInvert (Underlying native function: SetInvert 0x54562e0)
	void SetInvert(bool& Invert); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixFlangerSourceEffectPreset.SetFeedback (Underlying native function: SetFeedback 0x54550e0)
	void SetFeedback(float& fb); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixFlangerSourceEffectPreset.SetExcursion (Underlying native function: SetExcursion 0x54544a0)
	void SetExcursion(float& ex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixFlangerSourceEffectPreset.SetEnabled (Underlying native function: SetEnabled 0x5453d80)
	void SetEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixFlangerSourceEffectPreset.SetDepth (Underlying native function: SetDepth 0x5452f70)
	void SetDepth(float& Depth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixFlangerSourceEffectPreset.SetDelayTimeMs (Underlying native function: SetDelayTimeMs 0x5452ea0)
	void SetDelayTimeMs(float& ms); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixFlangerSourceEffectPreset.CreateHarmonixFlangerInstanceOnEmitter (Underlying native function: CreateHarmonixFlangerInstanceOnEmitter 0x5446800)
	static class UHarmonixFlangerSourceEffectPreset* CreateHarmonixFlangerInstanceOnEmitter(class UMusicEmitterComponent*& Emitter, struct FHarmonixFlangerEffectSettings& InSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};


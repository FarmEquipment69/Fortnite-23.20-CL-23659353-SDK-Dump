// Class /Script/HmxAudio.HarmonixFlangerSubmixEffectPreset
// Size: 0xf8
class UHarmonixFlangerSubmixEffectPreset : public UTempoSyncedSubmixEffectPresetBase
{
	unsigned char unreflected_80[0x50]; // 0x80 (0x50) 
	struct FHarmonixFlangerEffectSettings Settings; // 0xd0 (0x28)

	/* Functions */

	// Function /Script/HmxAudio.HarmonixFlangerSubmixEffectPreset.SetTimeSyncOption (Underlying native function: SetTimeSyncOption 0x545bf10)
	void SetTimeSyncOption(enum ETempoListenerTimeSyncOption& Option, float& currentBeatFraction); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixFlangerSubmixEffectPreset.SetSettings (Underlying native function: SetSettings 0x545a2a0)
	void SetSettings(struct FHarmonixFlangerEffectSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixFlangerSubmixEffectPreset.SetModShape (Underlying native function: SetModShape 0x54579d0)
	void SetModShape(enum EHarmonixFlangerShapes& S); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixFlangerSubmixEffectPreset.SetModFreq (Underlying native function: SetModFreq 0x54578d0)
	void SetModFreq(float& freq, bool& Force); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixFlangerSubmixEffectPreset.SetInvert (Underlying native function: SetInvert 0x54562e0)
	void SetInvert(bool& Invert); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixFlangerSubmixEffectPreset.SetFeedback (Underlying native function: SetFeedback 0x54550e0)
	void SetFeedback(float& fb); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixFlangerSubmixEffectPreset.SetExcursion (Underlying native function: SetExcursion 0x54544a0)
	void SetExcursion(float& ex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixFlangerSubmixEffectPreset.SetEnabled (Underlying native function: SetEnabled 0x5453d80)
	void SetEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixFlangerSubmixEffectPreset.SetDepth (Underlying native function: SetDepth 0x5452f70)
	void SetDepth(float& Depth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixFlangerSubmixEffectPreset.SetDelayTimeMs (Underlying native function: SetDelayTimeMs 0x5452ea0)
	void SetDelayTimeMs(float& ms); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixFlangerSubmixEffectPreset.CreateHarmonixFlangerInstanceOnSubmix (Underlying native function: CreateHarmonixFlangerInstanceOnSubmix 0x5446950)
	static class UHarmonixFlangerSubmixEffectPreset* CreateHarmonixFlangerInstanceOnSubmix(class UObject*& WorldContextObject, class USoundSubmix*& Submix, struct FHarmonixFlangerEffectSettings& InSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};


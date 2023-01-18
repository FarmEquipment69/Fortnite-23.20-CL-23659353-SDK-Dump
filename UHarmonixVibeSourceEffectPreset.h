// Class /Script/HmxAudio.HarmonixVibeSourceEffectPreset
// Size: 0x100
class UHarmonixVibeSourceEffectPreset : public UTempoSyncedSourceEffectPresetBase
{
	unsigned char unreflected_80[0x54]; // 0x80 (0x54) 
	struct FHarmonixVibeEffectSettings Settings; // 0xd4 (0x2c)

	/* Functions */

	// Function /Script/HmxAudio.HarmonixVibeSourceEffectPreset.SetWetMix (Underlying native function: SetWetMix 0x5455d00)
	void SetWetMix(float& wetMix); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixVibeSourceEffectPreset.SetTimeSyncOption (Underlying native function: SetTimeSyncOption 0x545c190)
	void SetTimeSyncOption(enum ETempoListenerTimeSyncOption& Option); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixVibeSourceEffectPreset.SetSettings (Underlying native function: SetSettings 0x545a790)
	void SetSettings(struct FHarmonixVibeEffectSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixVibeSourceEffectPreset.SetLFOShape (Underlying native function: SetLFOShape 0x5456b00)
	void SetLFOShape(float& Shape); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixVibeSourceEffectPreset.SetLFORate (Underlying native function: SetLFORate 0x5456890)
	void SetLFORate(float& Rate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixVibeSourceEffectPreset.SetLFODepth (Underlying native function: SetLFODepth 0x5456550)
	void SetLFODepth(float& Depth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixVibeSourceEffectPreset.SetGain (Underlying native function: SetGain 0x5455c30)
	void SetGain(float& Gain); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixVibeSourceEffectPreset.SetFreq (Underlying native function: SetFreq 0x5455680)
	void SetFreq(int& stageIdx, float& freq); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixVibeSourceEffectPreset.SetEnabled (Underlying native function: SetEnabled 0x5454190)
	void SetEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixVibeSourceEffectPreset.CreateHarmonixVibeInstanceOnEmitter (Underlying native function: CreateHarmonixVibeInstanceOnEmitter 0x5447500)
	static class UHarmonixVibeSourceEffectPreset* CreateHarmonixVibeInstanceOnEmitter(class UMusicEmitterComponent*& Emitter, struct FHarmonixVibeEffectSettings& InSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};


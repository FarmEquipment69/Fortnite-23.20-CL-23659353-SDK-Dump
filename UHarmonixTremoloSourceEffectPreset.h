// Class /Script/HmxAudio.HarmonixTremoloSourceEffectPreset
// Size: 0xd8
class UHarmonixTremoloSourceEffectPreset : public UTempoSyncedSourceEffectPresetBase
{
	unsigned char unreflected_80[0x40]; // 0x80 (0x40) 
	struct FHarmonixTremoloEffectSettings Settings; // 0xc0 (0x18)

	/* Functions */

	// Function /Script/HmxAudio.HarmonixTremoloSourceEffectPreset.SetTimeSyncOption (Underlying native function: SetTimeSyncOption 0x545c0d0)
	void SetTimeSyncOption(enum ETempoListenerTimeSyncOption& Option); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixTremoloSourceEffectPreset.SetShape (Underlying native function: SetShape 0x545aaa0)
	void SetShape(float& Shape); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixTremoloSourceEffectPreset.SetSettings (Underlying native function: SetSettings 0x545a6a0)
	void SetSettings(struct FHarmonixTremoloEffectSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixTremoloSourceEffectPreset.SetLFORate (Underlying native function: SetLFORate 0x54567c0)
	void SetLFORate(float& Rate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixTremoloSourceEffectPreset.SetInvertLFO (Underlying native function: SetInvertLFO 0x54563b0)
	void SetInvertLFO(bool& inv); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixTremoloSourceEffectPreset.SetEnabled (Underlying native function: SetEnabled 0x54540c0)
	void SetEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixTremoloSourceEffectPreset.SetDepth (Underlying native function: SetDepth 0x5453110)
	void SetDepth(float& Depth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixTremoloSourceEffectPreset.CreateHarmonixTremoloInstanceOnEmitter (Underlying native function: CreateHarmonixTremoloInstanceOnEmitter 0x5447280)
	static class UHarmonixTremoloSourceEffectPreset* CreateHarmonixTremoloInstanceOnEmitter(class UMusicEmitterComponent*& Emitter, struct FHarmonixTremoloEffectSettings& InSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};


// Class /Script/HmxAudio.HarmonixTremoloSubmixEffectPreset
// Size: 0xd8
class UHarmonixTremoloSubmixEffectPreset : public UTempoSyncedSubmixEffectPresetBase
{
	unsigned char unreflected_80[0x40]; // 0x80 (0x40) 
	struct FHarmonixTremoloEffectSettings Settings; // 0xc0 (0x18)

	/* Functions */

	// Function /Script/HmxAudio.HarmonixTremoloSubmixEffectPreset.SetTimeSyncOption (Underlying native function: SetTimeSyncOption 0x545c0d0)
	void SetTimeSyncOption(enum ETempoListenerTimeSyncOption& Option); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixTremoloSubmixEffectPreset.SetShape (Underlying native function: SetShape 0x545aaa0)
	void SetShape(float& Shape); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixTremoloSubmixEffectPreset.SetSettings (Underlying native function: SetSettings 0x545a6a0)
	void SetSettings(struct FHarmonixTremoloEffectSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixTremoloSubmixEffectPreset.SetLFORate (Underlying native function: SetLFORate 0x54567c0)
	void SetLFORate(float& Rate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixTremoloSubmixEffectPreset.SetInvertLFO (Underlying native function: SetInvertLFO 0x54563b0)
	void SetInvertLFO(bool& inv); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixTremoloSubmixEffectPreset.SetEnabled (Underlying native function: SetEnabled 0x54540c0)
	void SetEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixTremoloSubmixEffectPreset.SetDepth (Underlying native function: SetDepth 0x5453110)
	void SetDepth(float& Depth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixTremoloSubmixEffectPreset.CreateHarmonixTremoloInstanceOnSubmix (Underlying native function: CreateHarmonixTremoloInstanceOnSubmix 0x54473a0)
	static class UHarmonixTremoloSubmixEffectPreset* CreateHarmonixTremoloInstanceOnSubmix(class UObject*& WorldContextObject, class USoundSubmix*& Submix, struct FHarmonixTremoloEffectSettings& InSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};


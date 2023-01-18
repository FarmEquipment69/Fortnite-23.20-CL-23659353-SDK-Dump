// Class /Script/HmxAudio.HarmonixTapeStartStopSubmixEffectPreset
// Size: 0xc0
class UHarmonixTapeStartStopSubmixEffectPreset : public UTempoSyncedSubmixEffectPresetBase
{
	unsigned char unreflected_80[0x34]; // 0x80 (0x34) 
	struct FHarmonixTapeStartStopEffectSettings Settings; // 0xb4 (0xc)

	/* Functions */

	// Function /Script/HmxAudio.HarmonixTapeStartStopSubmixEffectPreset.SnapTransportState (Underlying native function: SnapTransportState 0x545e110)
	void SnapTransportState(enum EHarmonixTapeStartStopTransportState& Transport); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixTapeStartStopSubmixEffectPreset.SetTransportState (Underlying native function: SetTransportState 0x545cc90)
	void SetTransportState(enum EHarmonixTapeStartStopTransportState& Transport, float& Duration); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixTapeStartStopSubmixEffectPreset.SetSettings (Underlying native function: SetSettings 0x545a5c0)
	void SetSettings(struct FHarmonixTapeStartStopEffectSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixTapeStartStopSubmixEffectPreset.SetEnabled (Underlying native function: SetEnabled 0x5453ff0)
	void SetEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixTapeStartStopSubmixEffectPreset.CreateHarmonixTapeStartStopInstanceOnSubmix (Underlying native function: CreateHarmonixTapeStartStopInstanceOnSubmix 0x5447120)
	static class UHarmonixTapeStartStopSubmixEffectPreset* CreateHarmonixTapeStartStopInstanceOnSubmix(class UObject*& WorldContextObject, class USoundSubmix*& Submix, struct FHarmonixTapeStartStopEffectSettings& InSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};


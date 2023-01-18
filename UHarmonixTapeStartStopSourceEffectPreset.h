// Class /Script/HmxAudio.HarmonixTapeStartStopSourceEffectPreset
// Size: 0xc0
class UHarmonixTapeStartStopSourceEffectPreset : public UTempoSyncedSourceEffectPresetBase
{
	unsigned char unreflected_80[0x34]; // 0x80 (0x34) 
	struct FHarmonixTapeStartStopEffectSettings Settings; // 0xb4 (0xc)

	/* Functions */

	// Function /Script/HmxAudio.HarmonixTapeStartStopSourceEffectPreset.SnapTransportState (Underlying native function: SnapTransportState 0x545e110)
	void SnapTransportState(enum EHarmonixTapeStartStopTransportState& Transport); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixTapeStartStopSourceEffectPreset.SetTransportState (Underlying native function: SetTransportState 0x545cc90)
	void SetTransportState(enum EHarmonixTapeStartStopTransportState& Transport, float& Duration); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixTapeStartStopSourceEffectPreset.SetSettings (Underlying native function: SetSettings 0x545a5c0)
	void SetSettings(struct FHarmonixTapeStartStopEffectSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixTapeStartStopSourceEffectPreset.SetEnabled (Underlying native function: SetEnabled 0x5453ff0)
	void SetEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixTapeStartStopSourceEffectPreset.CreateHarmonixTapeStartStopInstanceOnEmitter (Underlying native function: CreateHarmonixTapeStartStopInstanceOnEmitter 0x5447010)
	static class UHarmonixTapeStartStopSourceEffectPreset* CreateHarmonixTapeStartStopInstanceOnEmitter(class UMusicEmitterComponent*& Emitter, struct FHarmonixTapeStartStopEffectSettings& InSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};


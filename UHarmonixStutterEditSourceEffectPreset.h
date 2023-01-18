// Class /Script/HmxAudio.HarmonixStutterEditSourceEffectPreset
// Size: 0xb0
class UHarmonixStutterEditSourceEffectPreset : public USoundEffectSourcePreset
{
	unsigned char unreflected_68[0x38]; // 0x68 (0x38) 
	struct FHarmonixStutterEditEffectSettings Settings; // 0xa0 (0x10)

	/* Functions */

	// Function /Script/HmxAudio.HarmonixStutterEditSourceEffectPreset.SetVarispeedForTempoChanges (Underlying native function: SetVarispeedForTempoChanges 0x545d4d0)
	void SetVarispeedForTempoChanges(bool& V); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixStutterEditSourceEffectPreset.SetSyncDriver (Underlying native function: SetSyncDriver 0x545b7b0)
	void SetSyncDriver(class UHarmonixHandle*& Handle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixStutterEditSourceEffectPreset.SetSilenceWhileScheduled (Underlying native function: SetSilenceWhileScheduled 0x545ac40)
	void SetSilenceWhileScheduled(bool& B); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixStutterEditSourceEffectPreset.SetSettings (Underlying native function: SetSettings 0x545a4e0)
	void SetSettings(struct FHarmonixStutterEditEffectSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixStutterEditSourceEffectPreset.SetFadeEnabled (Underlying native function: SetFadeEnabled 0x5455010)
	void SetFadeEnabled(bool& fade); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixStutterEditSourceEffectPreset.SetEnabled (Underlying native function: SetEnabled 0x5453f20)
	void SetEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixStutterEditSourceEffectPreset.SetAllowPassthrough (Underlying native function: SetAllowPassthrough 0x54515e0)
	void SetAllowPassthrough(bool& allow); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixStutterEditSourceEffectPreset.ScheduleStutter (Underlying native function: ScheduleStutter 0x5450fa0)
	void ScheduleStutter(int& Tick, int& lengthInTicks, bool& isReverse, int& offsetTicks); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixStutterEditSourceEffectPreset.EndStutter (Underlying native function: EndStutter 0x5447e40)
	void EndStutter(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixStutterEditSourceEffectPreset.CreateHarmonixStutterEditInstanceOnEmitter (Underlying native function: CreateHarmonixStutterEditInstanceOnEmitter 0x5446da0)
	static class UHarmonixStutterEditSourceEffectPreset* CreateHarmonixStutterEditInstanceOnEmitter(class UMusicEmitterComponent*& Emitter, struct FHarmonixStutterEditEffectSettings& InSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixStutterEditSourceEffectPreset.Capture (Underlying native function: Capture 0x54450e0)
	void Capture(int& fromTick, int& toTick); // (Final | Native | Public | BlueprintCallable)
};


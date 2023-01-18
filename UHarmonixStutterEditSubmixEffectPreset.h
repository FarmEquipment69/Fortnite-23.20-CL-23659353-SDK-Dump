// Class /Script/HmxAudio.HarmonixStutterEditSubmixEffectPreset
// Size: 0xb0
class UHarmonixStutterEditSubmixEffectPreset : public UHarmonixSubmixEffectBase
{
	unsigned char unreflected_68[0x38]; // 0x68 (0x38) 
	struct FHarmonixStutterEditEffectSettings Settings; // 0xa0 (0x10)

	/* Functions */

	// Function /Script/HmxAudio.HarmonixStutterEditSubmixEffectPreset.SetVarispeedForTempoChanges (Underlying native function: SetVarispeedForTempoChanges 0x545d4d0)
	void SetVarispeedForTempoChanges(bool& V); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixStutterEditSubmixEffectPreset.SetSyncDriver (Underlying native function: SetSyncDriver 0x545b7b0)
	void SetSyncDriver(class UHarmonixHandle*& Handle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixStutterEditSubmixEffectPreset.SetSilenceWhileScheduled (Underlying native function: SetSilenceWhileScheduled 0x545ac40)
	void SetSilenceWhileScheduled(bool& B); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixStutterEditSubmixEffectPreset.SetSettings (Underlying native function: SetSettings 0x545a4e0)
	void SetSettings(struct FHarmonixStutterEditEffectSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixStutterEditSubmixEffectPreset.SetFadeEnabled (Underlying native function: SetFadeEnabled 0x5455010)
	void SetFadeEnabled(bool& fade); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixStutterEditSubmixEffectPreset.SetEnabled (Underlying native function: SetEnabled 0x5453f20)
	void SetEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixStutterEditSubmixEffectPreset.SetAllowPassthrough (Underlying native function: SetAllowPassthrough 0x54515e0)
	void SetAllowPassthrough(bool& allow); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixStutterEditSubmixEffectPreset.ScheduleStutter (Underlying native function: ScheduleStutter 0x5450fa0)
	void ScheduleStutter(int& Tick, int& lengthInTicks, bool& isReverse, int& offsetTicks); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixStutterEditSubmixEffectPreset.EndStutter (Underlying native function: EndStutter 0x5447e40)
	void EndStutter(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixStutterEditSubmixEffectPreset.CreateHarmonixStutterEditInstanceOnSubmix (Underlying native function: CreateHarmonixStutterEditInstanceOnSubmix 0x5446eb0)
	static class UHarmonixStutterEditSubmixEffectPreset* CreateHarmonixStutterEditInstanceOnSubmix(class UObject*& WorldContextObject, class USoundSubmix*& Submix, struct FHarmonixStutterEditEffectSettings& InSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixStutterEditSubmixEffectPreset.Capture (Underlying native function: Capture 0x54450e0)
	void Capture(int& fromTick, int& toTick); // (Final | Native | Public | BlueprintCallable)
};


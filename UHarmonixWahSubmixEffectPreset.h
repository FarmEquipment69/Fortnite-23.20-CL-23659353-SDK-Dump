// Class /Script/HmxAudio.HarmonixWahSubmixEffectPreset
// Size: 0xf0
class UHarmonixWahSubmixEffectPreset : public UTempoSyncedSubmixEffectPresetBase
{
	unsigned char unreflected_80[0x4c]; // 0x80 (0x4c) 
	struct FHarmonixWahEffectSettings Settings; // 0xcc (0x24)

	/* Functions */

	// Function /Script/HmxAudio.HarmonixWahSubmixEffectPreset.SetTimeSyncOption (Underlying native function: SetTimeSyncOption 0x545c250)
	void SetTimeSyncOption(enum ETempoListenerTimeSyncOption& Option); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSubmixEffectPreset.SetSteepFilter (Underlying native function: SetSteepFilter 0x545b3e0)
	void SetSteepFilter(bool& steep); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSubmixEffectPreset.SetSettings (Underlying native function: SetSettings 0x545a8c0)
	void SetSettings(struct FHarmonixWahEffectSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSubmixEffectPreset.SetOpenQ (Underlying native function: SetOpenQ 0x5458800)
	void SetOpenQ(float& Q); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSubmixEffectPreset.SetOpenOnAttack (Underlying native function: SetOpenOnAttack 0x5458730)
	void SetOpenOnAttack(bool& Enable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSubmixEffectPreset.SetOpenFreq (Underlying native function: SetOpenFreq 0x5456b00)
	void SetOpenFreq(float& hz); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSubmixEffectPreset.SetLFOShape (Underlying native function: SetLFOShape 0x5456bd0)
	void SetLFOShape(float& Shape); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSubmixEffectPreset.SetLFORateScale (Underlying native function: SetLFORateScale 0x5456a30)
	void SetLFORateScale(float& Scale); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSubmixEffectPreset.SetLFORate (Underlying native function: SetLFORate 0x5456960)
	void SetLFORate(float& Rate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSubmixEffectPreset.SetGain (Underlying native function: SetGain 0x5455d00)
	void SetGain(float& Gain); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSubmixEffectPreset.SetEnabled (Underlying native function: SetEnabled 0x5454260)
	void SetEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSubmixEffectPreset.SetClosedQ (Underlying native function: SetClosedQ 0x5452410)
	void SetClosedQ(float& Q); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSubmixEffectPreset.SetClosedFreq (Underlying native function: SetClosedFreq 0x5452340)
	void SetClosedFreq(float& hz); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSubmixEffectPreset.SetAutoWahEnabled (Underlying native function: SetAutoWahEnabled 0x5451870)
	void SetAutoWahEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSubmixEffectPreset.NotifyNoteOn (Underlying native function: NotifyNoteOn 0x544f110)
	void NotifyNoteOn(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSubmixEffectPreset.CreateHarmonixWahInstanceOnSubmix (Underlying native function: CreateHarmonixWahInstanceOnSubmix 0x5447910)
	static class UHarmonixWahSubmixEffectPreset* CreateHarmonixWahInstanceOnSubmix(class UObject*& WorldContextObject, class USoundSubmix*& Submix, struct FHarmonixWahEffectSettings& InSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};


// Class /Script/HmxAudio.HarmonixWahSourceEffectPreset
// Size: 0xf0
class UHarmonixWahSourceEffectPreset : public UTempoSyncedSourceEffectPresetBase
{
	unsigned char unreflected_80[0x4c]; // 0x80 (0x4c) 
	struct FHarmonixWahEffectSettings Settings; // 0xcc (0x24)

	/* Functions */

	// Function /Script/HmxAudio.HarmonixWahSourceEffectPreset.SetTimeSyncOption (Underlying native function: SetTimeSyncOption 0x545c250)
	void SetTimeSyncOption(enum ETempoListenerTimeSyncOption& Option); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSourceEffectPreset.SetSteepFilter (Underlying native function: SetSteepFilter 0x545b3e0)
	void SetSteepFilter(bool& steep); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSourceEffectPreset.SetSettings (Underlying native function: SetSettings 0x545a8c0)
	void SetSettings(struct FHarmonixWahEffectSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSourceEffectPreset.SetOpenQ (Underlying native function: SetOpenQ 0x5458800)
	void SetOpenQ(float& Q); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSourceEffectPreset.SetOpenOnAttack (Underlying native function: SetOpenOnAttack 0x5458730)
	void SetOpenOnAttack(bool& Enable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSourceEffectPreset.SetOpenFreq (Underlying native function: SetOpenFreq 0x5456b00)
	void SetOpenFreq(float& hz); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSourceEffectPreset.SetLFOShape (Underlying native function: SetLFOShape 0x5456bd0)
	void SetLFOShape(float& Shape); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSourceEffectPreset.SetLFORateScale (Underlying native function: SetLFORateScale 0x5456a30)
	void SetLFORateScale(float& Scale); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSourceEffectPreset.SetLFORate (Underlying native function: SetLFORate 0x5456960)
	void SetLFORate(float& Rate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSourceEffectPreset.SetGain (Underlying native function: SetGain 0x5455d00)
	void SetGain(float& Gain); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSourceEffectPreset.SetEnabled (Underlying native function: SetEnabled 0x5454260)
	void SetEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSourceEffectPreset.SetClosedQ (Underlying native function: SetClosedQ 0x5452410)
	void SetClosedQ(float& Q); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSourceEffectPreset.SetClosedFreq (Underlying native function: SetClosedFreq 0x5452340)
	void SetClosedFreq(float& hz); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSourceEffectPreset.SetAutoWahEnabled (Underlying native function: SetAutoWahEnabled 0x5451870)
	void SetAutoWahEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSourceEffectPreset.NotifyNoteOn (Underlying native function: NotifyNoteOn 0x544f110)
	void NotifyNoteOn(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixWahSourceEffectPreset.CreateHarmonixWahInstanceOnEmitter (Underlying native function: CreateHarmonixWahInstanceOnEmitter 0x54477e0)
	static class UHarmonixWahSourceEffectPreset* CreateHarmonixWahInstanceOnEmitter(class UMusicEmitterComponent*& Emitter, struct FHarmonixWahEffectSettings& InSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};


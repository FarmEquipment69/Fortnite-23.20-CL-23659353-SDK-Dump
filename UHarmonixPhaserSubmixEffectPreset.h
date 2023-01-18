// Class /Script/HmxAudio.HarmonixPhaserSubmixEffectPreset
// Size: 0xf8
class UHarmonixPhaserSubmixEffectPreset : public UTempoSyncedSubmixEffectPresetBase
{
	unsigned char unreflected_80[0x50]; // 0x80 (0x50) 
	struct FHarmonixPhaserEffectSettings Settings; // 0xd0 (0x28)

	/* Functions */

	// Function /Script/HmxAudio.HarmonixPhaserSubmixEffectPreset.SetWetDry (Underlying native function: SetWetDry 0x545dca0)
	void SetWetDry(float& wetDry); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSubmixEffectPreset.SetTimeSyncOption (Underlying native function: SetTimeSyncOption 0x545c010)
	void SetTimeSyncOption(enum ETempoListenerTimeSyncOption& Option); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSubmixEffectPreset.SetShape (Underlying native function: SetShape 0x545a9e0)
	void SetShape(enum EHarmonixPhaserShapes& Shape); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSubmixEffectPreset.SetSettings (Underlying native function: SetSettings 0x545a3d0)
	void SetSettings(struct FHarmonixPhaserEffectSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSubmixEffectPreset.SetRate (Underlying native function: SetRate 0x54593e0)
	void SetRate(float& Rate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSubmixEffectPreset.SetPhase (Underlying native function: SetPhase 0x5459070)
	void SetPhase(float& Phase); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSubmixEffectPreset.SetNumPoles (Underlying native function: SetNumPoles 0x54584e0)
	void SetNumPoles(int& numPoles); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSubmixEffectPreset.SetFrequency (Underlying native function: SetFrequency 0x5455780)
	void SetFrequency(float& hz); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSubmixEffectPreset.SetFeedback (Underlying native function: SetFeedback 0x54551b0)
	void SetFeedback(float& fb); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSubmixEffectPreset.SetEnabled (Underlying native function: SetEnabled 0x5453e50)
	void SetEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSubmixEffectPreset.SetDepth (Underlying native function: SetDepth 0x5453040)
	void SetDepth(float& Depth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSubmixEffectPreset.SetColor (Underlying native function: SetColor 0x54524e0)
	void SetColor(float& Color); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSubmixEffectPreset.CreateHarmonixPhaserInstanceOnSubmix (Underlying native function: CreateHarmonixPhaserInstanceOnSubmix 0x5446c20)
	static class UHarmonixPhaserSubmixEffectPreset* CreateHarmonixPhaserInstanceOnSubmix(class UObject*& WorldContextObject, class USoundSubmix*& Submix, struct FHarmonixPhaserEffectSettings& InSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};


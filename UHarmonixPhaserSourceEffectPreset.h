// Class /Script/HmxAudio.HarmonixPhaserSourceEffectPreset
// Size: 0xf8
class UHarmonixPhaserSourceEffectPreset : public UTempoSyncedSourceEffectPresetBase
{
	unsigned char unreflected_80[0x50]; // 0x80 (0x50) 
	struct FHarmonixPhaserEffectSettings Settings; // 0xd0 (0x28)

	/* Functions */

	// Function /Script/HmxAudio.HarmonixPhaserSourceEffectPreset.SetWetDry (Underlying native function: SetWetDry 0x545dca0)
	void SetWetDry(float& wetDry); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSourceEffectPreset.SetTimeSyncOption (Underlying native function: SetTimeSyncOption 0x545c010)
	void SetTimeSyncOption(enum ETempoListenerTimeSyncOption& Option); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSourceEffectPreset.SetShape (Underlying native function: SetShape 0x545a9e0)
	void SetShape(enum EHarmonixPhaserShapes& Shape); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSourceEffectPreset.SetSettings (Underlying native function: SetSettings 0x545a3d0)
	void SetSettings(struct FHarmonixPhaserEffectSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSourceEffectPreset.SetRate (Underlying native function: SetRate 0x54593e0)
	void SetRate(float& Rate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSourceEffectPreset.SetPhase (Underlying native function: SetPhase 0x5459070)
	void SetPhase(float& Phase); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSourceEffectPreset.SetNumPoles (Underlying native function: SetNumPoles 0x54584e0)
	void SetNumPoles(int& numPoles); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSourceEffectPreset.SetFrequency (Underlying native function: SetFrequency 0x5455780)
	void SetFrequency(float& hz); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSourceEffectPreset.SetFeedback (Underlying native function: SetFeedback 0x54551b0)
	void SetFeedback(float& fb); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSourceEffectPreset.SetEnabled (Underlying native function: SetEnabled 0x5453e50)
	void SetEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSourceEffectPreset.SetDepth (Underlying native function: SetDepth 0x5453040)
	void SetDepth(float& Depth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSourceEffectPreset.SetColor (Underlying native function: SetColor 0x54524e0)
	void SetColor(float& Color); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPhaserSourceEffectPreset.CreateHarmonixPhaserInstanceOnEmitter (Underlying native function: CreateHarmonixPhaserInstanceOnEmitter 0x5446af0)
	static class UHarmonixPhaserSourceEffectPreset* CreateHarmonixPhaserInstanceOnEmitter(class UMusicEmitterComponent*& Emitter, struct FHarmonixPhaserEffectSettings& InSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};


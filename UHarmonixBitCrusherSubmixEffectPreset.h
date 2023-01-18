// Class /Script/HmxAudio.HarmonixBitCrusherSubmixEffectPreset
// Size: 0xc0
class UHarmonixBitCrusherSubmixEffectPreset : public UHarmonixSubmixEffectBase
{
	unsigned char unreflected_68[0x40]; // 0x68 (0x40) 
	struct FHarmonixBitCrusherEffectSettings Settings; // 0xa8 (0x18)

	/* Functions */

	// Function /Script/HmxAudio.HarmonixBitCrusherSubmixEffectPreset.SetWet (Underlying native function: SetWet 0x545dba0)
	void SetWet(float& wet, bool& Snap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBitCrusherSubmixEffectPreset.SetSettings (Underlying native function: SetSettings 0x5459ee0)
	void SetSettings(struct FHarmonixBitCrusherEffectSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBitCrusherSubmixEffectPreset.SetSampleHoldFactor (Underlying native function: SetSampleHoldFactor 0x5459880)
	void SetSampleHoldFactor(int& sampleHoldFactor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBitCrusherSubmixEffectPreset.SetOutputGain (Underlying native function: SetOutputGain 0x54588d0)
	void SetOutputGain(float& outGain, bool& Snap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBitCrusherSubmixEffectPreset.SetInputGain (Underlying native function: SetInputGain 0x54560e0)
	void SetInputGain(float& inGain, bool& Snap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBitCrusherSubmixEffectPreset.SetEnabled (Underlying native function: SetEnabled 0x5453a40)
	void SetEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBitCrusherSubmixEffectPreset.SetCrush (Underlying native function: SetCrush 0x5452850)
	void SetCrush(enum ECrushedBitDepth& crushLevel, bool& Snap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBitCrusherSubmixEffectPreset.CreateHarmonixBitCrusherInstanceOnSubmix (Underlying native function: CreateHarmonixBitCrusherInstanceOnSubmix 0x5445e80)
	static class UHarmonixBitCrusherSubmixEffectPreset* CreateHarmonixBitCrusherInstanceOnSubmix(class UObject*& WorldContextObject, class USoundSubmix*& Submix, struct FHarmonixBitCrusherEffectSettings& InSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};


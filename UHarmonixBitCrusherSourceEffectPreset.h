// Class /Script/HmxAudio.HarmonixBitCrusherSourceEffectPreset
// Size: 0xc0
class UHarmonixBitCrusherSourceEffectPreset : public USoundEffectSourcePreset
{
	unsigned char unreflected_68[0x40]; // 0x68 (0x40) 
	struct FHarmonixBitCrusherEffectSettings Settings; // 0xa8 (0x18)

	/* Functions */

	// Function /Script/HmxAudio.HarmonixBitCrusherSourceEffectPreset.SetWet (Underlying native function: SetWet 0x545dba0)
	void SetWet(float& wet, bool& Snap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBitCrusherSourceEffectPreset.SetSettings (Underlying native function: SetSettings 0x5459ee0)
	void SetSettings(struct FHarmonixBitCrusherEffectSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBitCrusherSourceEffectPreset.SetSampleHoldFactor (Underlying native function: SetSampleHoldFactor 0x5459880)
	void SetSampleHoldFactor(int& sampleHoldFactor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBitCrusherSourceEffectPreset.SetOutputGain (Underlying native function: SetOutputGain 0x54588d0)
	void SetOutputGain(float& outGain, bool& Snap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBitCrusherSourceEffectPreset.SetInputGain (Underlying native function: SetInputGain 0x54560e0)
	void SetInputGain(float& inGain, bool& Snap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBitCrusherSourceEffectPreset.SetEnabled (Underlying native function: SetEnabled 0x5453a40)
	void SetEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBitCrusherSourceEffectPreset.SetCrush (Underlying native function: SetCrush 0x5452850)
	void SetCrush(enum ECrushedBitDepth& crushLevel, bool& Snap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBitCrusherSourceEffectPreset.CreateHarmonixBitCrusherInstanceOnEmitter (Underlying native function: CreateHarmonixBitCrusherInstanceOnEmitter 0x5445d70)
	static class UHarmonixBitCrusherSourceEffectPreset* CreateHarmonixBitCrusherInstanceOnEmitter(class UMusicEmitterComponent*& Emitter, struct FHarmonixBitCrusherEffectSettings& InSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};


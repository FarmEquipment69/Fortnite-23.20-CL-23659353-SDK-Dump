// Class /Script/AudioMixer.SubmixEffectReverbPreset
// Size: 0x110
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
	unsigned char unreflected_68[0x68]; // 0x68 (0x68) 
	struct FSubmixEffectReverbSettings Settings; // 0xd0 (0x40)

	/* Functions */

	// Function /Script/AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect (Underlying native function: SetSettingsWithReverbEffect 0x9b52968)
	void SetSettingsWithReverbEffect(class UReverbEffect*& InReverbEffect, float& WetLevel, float& DryLevel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.SubmixEffectReverbPreset.SetSettings (Underlying native function: SetSettings 0x9b527ac)
	void SetSettings(struct FSubmixEffectReverbSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};


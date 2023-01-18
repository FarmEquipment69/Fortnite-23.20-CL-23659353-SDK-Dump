// Class /Script/AudioMixer.SubmixEffectSubmixEQPreset
// Size: 0xb0
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
	unsigned char unreflected_68[0x38]; // 0x68 (0x38) 
	struct FSubmixEffectSubmixEQSettings Settings; // 0xa0 (0x10)

	/* Functions */

	// Function /Script/AudioMixer.SubmixEffectSubmixEQPreset.SetSettings (Underlying native function: SetSettings 0x9b5288c)
	void SetSettings(struct FSubmixEffectSubmixEQSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};


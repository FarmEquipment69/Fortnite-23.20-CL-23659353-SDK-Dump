// Class /Script/Synthesis.SubmixEffectDelayPreset
// Size: 0xb8
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{
	unsigned char unreflected_68[0x34]; // 0x68 (0x34) 
	struct FSubmixEffectDelaySettings Settings; // 0x9c (0xc)
	struct FSubmixEffectDelaySettings DynamicSettings; // 0xa8 (0xc)
	unsigned char padding_b4[0x4]; // 0xb4 (0x4)

	/* Functions */

	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetSettings (Underlying native function: SetSettings 0x71d6ea4)
	void SetSettings(struct FSubmixEffectDelaySettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetInterpolationTime (Underlying native function: SetInterpolationTime 0x71d387c)
	void SetInterpolationTime(float& Time); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetDelay (Underlying native function: SetDelay 0x71d169c)
	void SetDelay(float& Length); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetDefaultSettings (Underlying native function: SetDefaultSettings 0x71d15ec)
	void SetDefaultSettings(struct FSubmixEffectDelaySettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds (Underlying native function: GetMaxDelayInMilliseconds 0x71cfd1c)
	float GetMaxDelayInMilliseconds(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};


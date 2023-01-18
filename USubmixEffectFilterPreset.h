// Class /Script/Synthesis.SubmixEffectFilterPreset
// Size: 0xa8
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{
	unsigned char unreflected_68[0x34]; // 0x68 (0x34) 
	struct FSubmixEffectFilterSettings Settings; // 0x9c (0xc)

	/* Functions */

	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetSettings (Underlying native function: SetSettings 0x71d6f68)
	void SetSettings(struct FSubmixEffectFilterSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterType (Underlying native function: SetFilterType 0x71d2c78)
	void SetFilterType(enum ESubmixFilterType& InType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQMod (Underlying native function: SetFilterQMod 0x71d2b3c)
	void SetFilterQMod(float& InQ); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQ (Underlying native function: SetFilterQ 0x71d2a34)
	void SetFilterQ(float& InQ); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod (Underlying native function: SetFilterCutoffFrequencyMod 0x71d2394)
	void SetFilterCutoffFrequencyMod(float& InFrequency); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency (Underlying native function: SetFilterCutoffFrequency 0x71d2310)
	void SetFilterCutoffFrequency(float& InFrequency); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm (Underlying native function: SetFilterAlgorithm 0x71d2274)
	void SetFilterAlgorithm(enum ESubmixFilterAlgorithm& InAlgorithm); // (Final | Native | Public | BlueprintCallable)
};


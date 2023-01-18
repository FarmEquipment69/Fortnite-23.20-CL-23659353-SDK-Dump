// Class /Script/Synthesis.SourceEffectPhaserPreset
// Size: 0xb0
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{
	unsigned char unreflected_68[0x38]; // 0x68 (0x38) 
	struct FSourceEffectPhaserSettings Settings; // 0xa0 (0x10)

	/* Functions */

	// Function /Script/Synthesis.SourceEffectPhaserPreset.SetSettings (Underlying native function: SetSettings 0x71d6a20)
	void SetSettings(struct FSourceEffectPhaserSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};


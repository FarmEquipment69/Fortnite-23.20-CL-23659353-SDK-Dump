// Class /Script/Synthesis.SourceEffectEQPreset
// Size: 0xb0
class USourceEffectEQPreset : public USoundEffectSourcePreset
{
	unsigned char unreflected_68[0x38]; // 0x68 (0x38) 
	struct FSourceEffectEQSettings Settings; // 0xa0 (0x10)

	/* Functions */

	// Function /Script/Synthesis.SourceEffectEQPreset.SetSettings (Underlying native function: SetSettings 0x71d6444)
	void SetSettings(struct FSourceEffectEQSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};


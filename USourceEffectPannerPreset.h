// Class /Script/Synthesis.SourceEffectPannerPreset
// Size: 0xa0
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{
	unsigned char unreflected_68[0x30]; // 0x68 (0x30) 
	struct FSourceEffectPannerSettings* Settings; // 0x98 (0x8)

	/* Functions */

	// Function /Script/Synthesis.SourceEffectPannerPreset.SetSettings (Underlying native function: SetSettings 0x71d6964)
	void SetSettings(struct FSourceEffectPannerSettings*& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};


// Class /Script/Synthesis.SourceEffectEnvelopeFollowerPreset
// Size: 0xa8
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{
	unsigned char unreflected_68[0x34]; // 0x68 (0x34) 
	struct FSourceEffectEnvelopeFollowerSettings Settings; // 0x9c (0xc)

	/* Functions */

	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener (Underlying native function: UnregisterEnvelopeFollowerListener 0x71d8358)
	void UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener*& EnvelopeFollowerListener); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings (Underlying native function: SetSettings 0x71d6520)
	void SetSettings(struct FSourceEffectEnvelopeFollowerSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener (Underlying native function: RegisterEnvelopeFollowerListener 0x71d0634)
	void RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener*& EnvelopeFollowerListener); // (Final | Native | Public | BlueprintCallable)
};


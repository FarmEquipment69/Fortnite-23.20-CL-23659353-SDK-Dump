// Class /Script/Synthesis.SubmixEffectMultibandCompressorPreset
// Size: 0x100
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{
	unsigned char unreflected_68[0x60]; // 0x68 (0x60) 
	struct FSubmixEffectMultibandCompressorSettings Settings; // 0xc8 (0x38)

	/* Functions */

	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings (Underlying native function: SetSettings 0x71d7128)
	void SetSettings(struct FSubmixEffectMultibandCompressorSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.SetExternalSubmix (Underlying native function: SetExternalSubmix 0x71d1f14)
	void SetExternalSubmix(class USoundSubmix*& Submix); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.SetAudioBus (Underlying native function: SetAudioBus 0x71d0df0)
	void SetAudioBus(class UAudioBus*& AudioBus); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.ResetKey (Underlying native function: ResetKey 0x71d0744)
	void ResetKey(); // (Final | Native | Public | BlueprintCallable)
};


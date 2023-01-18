// Class /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset
// Size: 0x150
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
	unsigned char unreflected_68[0x88]; // 0x68 (0x88) 
	struct FSubmixEffectDynamicsProcessorSettings Settings; // 0xf0 (0x60)

	/* Functions */

	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings (Underlying native function: SetSettings 0x9b52714)
	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings& Settings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix (Underlying native function: SetExternalSubmix 0x9b5209c)
	void SetExternalSubmix(class USoundSubmix*& Submix); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus (Underlying native function: SetAudioBus 0x9b51bc4)
	void SetAudioBus(class UAudioBus*& AudioBus); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.ResetKey (Underlying native function: ResetKey 0x9b5176c)
	void ResetKey(); // (Final | Native | Public | BlueprintCallable)
};


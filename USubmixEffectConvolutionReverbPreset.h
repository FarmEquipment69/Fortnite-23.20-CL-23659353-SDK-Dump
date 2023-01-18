// Class /Script/Synthesis.SubmixEffectConvolutionReverbPreset
// Size: 0x100
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{
	class UAudioImpulseResponse* ImpulseResponse; // 0x68 (0x8)
	struct FSubmixEffectConvolutionReverbSettings Settings; // 0x70 (0x30)
	enum ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0xa0 (0x1)
	bool bEnableHardwareAcceleration; // 0xa1 (0x1)
	unsigned char padding_a2[0x5e]; // 0xa2 (0x5e)

	/* Functions */

	// Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings (Underlying native function: SetSettings 0x71d6da8)
	void SetSettings(struct FSubmixEffectConvolutionReverbSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse (Underlying native function: SetImpulseResponse 0x71d3740)
	void SetImpulseResponse(class UAudioImpulseResponse*& InImpulseResponse); // (Final | Native | Public | BlueprintCallable)
};


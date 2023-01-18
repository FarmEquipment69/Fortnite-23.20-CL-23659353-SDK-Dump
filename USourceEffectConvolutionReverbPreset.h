// Class /Script/Synthesis.SourceEffectConvolutionReverbPreset
// Size: 0xc0
class USourceEffectConvolutionReverbPreset : public USoundEffectSourcePreset
{
	class UAudioImpulseResponse* ImpulseResponse; // 0x68 (0x8)
	struct FSourceEffectConvolutionReverbSettings Settings; // 0x70 (0x10)
	enum ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x80 (0x1)
	bool bEnableHardwareAcceleration; // 0x81 (0x1)
	unsigned char padding_82[0x3e]; // 0x82 (0x3e)

	/* Functions */

	// Function /Script/Synthesis.SourceEffectConvolutionReverbPreset.SetSettings (Underlying native function: SetSettings 0x71d6298)
	void SetSettings(struct FSourceEffectConvolutionReverbSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectConvolutionReverbPreset.SetImpulseResponse (Underlying native function: SetImpulseResponse 0x71d36b8)
	void SetImpulseResponse(class UAudioImpulseResponse*& InImpulseResponse); // (Final | Native | Public | BlueprintCallable)
};


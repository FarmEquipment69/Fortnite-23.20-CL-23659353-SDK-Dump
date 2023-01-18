// ScriptStruct /Script/Synthesis.SubmixEffectConvolutionReverbSettings
// Size: 0x30
struct FSubmixEffectConvolutionReverbSettings
{
	float NormalizationVolumeDb; // 0x0 (0x4)
	float WetVolumeDb; // 0x4 (0x4)
	float DryVolumeDb; // 0x8 (0x4)
	bool bBypass; // 0xc (0x1)
	bool bMixInputChannelFormatToImpulseResponseFormat; // 0xd (0x1)
	bool bMixReverbOutputToOutputChannelFormat; // 0xe (0x1)
	unsigned char unreflected_f[0x1]; // 0xf (0x1) 
	float SurroundRearChannelBleedDb; // 0x10 (0x4)
	bool bInvertRearChannelBleedPhase; // 0x14 (0x1)
	bool bSurroundRearChannelFlip; // 0x15 (0x1)
	unsigned char unreflected_16[0x2]; // 0x16 (0x2) 
	float SurroundRearChannelBleedAmount; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	class UAudioImpulseResponse* ImpulseResponse; // 0x20 (0x8)
	bool AllowHardwareAcceleration; // 0x28 (0x1)
	unsigned char padding_29[0x7]; // 0x29 (0x7)
};


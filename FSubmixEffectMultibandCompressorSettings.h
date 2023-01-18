// ScriptStruct /Script/Synthesis.SubmixEffectMultibandCompressorSettings
// Size: 0x38
struct FSubmixEffectMultibandCompressorSettings
{
	enum ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x0 (0x1)
	enum ESubmixEffectDynamicsPeakMode PeakMode; // 0x1 (0x1)
	enum ESubmixEffectDynamicsChannelLinkMode LinkMode; // 0x2 (0x1)
	unsigned char unreflected_3[0x1]; // 0x3 (0x1) 
	float LookAheadMsec; // 0x4 (0x4)
	bool bAnalogMode; // 0x8 (0x1)
	bool bFourPole; // 0x9 (0x1)
	bool bBypass; // 0xa (0x1)
	enum ESubmixEffectDynamicsKeySource KeySource; // 0xb (0x1)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class UAudioBus* ExternalAudioBus; // 0x10 (0x8)
	class USoundSubmix* ExternalSubmix; // 0x18 (0x8)
	float KeyGainDb; // 0x20 (0x4)
	bool bKeyAudition; // 0x24 (0x1)
	unsigned char unreflected_25[0x3]; // 0x25 (0x3) 
	struct TArray<struct FDynamicsBandSettings> Bands; // 0x28 (0x10)
};


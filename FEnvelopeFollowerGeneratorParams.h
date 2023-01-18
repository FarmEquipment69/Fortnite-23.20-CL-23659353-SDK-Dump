// ScriptStruct /Script/AudioModulation.EnvelopeFollowerGeneratorParams
// Size: 0x20
struct FEnvelopeFollowerGeneratorParams
{
	bool bBypass; // 0x0 (0x1)
	bool bInvert; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	class UAudioBus* AudioBus; // 0x8 (0x8)
	float Gain; // 0x10 (0x4)
	float AttackTime; // 0x14 (0x4)
	float ReleaseTime; // 0x18 (0x4)
	unsigned char padding_1c[0x4]; // 0x1c (0x4)
};


// ScriptStruct /Script/Synthesis.SourceEffectBitCrusherSettings
// Size: 0xd0
struct FSourceEffectBitCrusherSettings
{
	float CrushedSampleRate; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FSoundModulationDestinationSettings SampleRateModulation; // 0x8 (0x60)
	float CrushedBits; // 0x68 (0x4)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	struct FSoundModulationDestinationSettings BitModulation; // 0x70 (0x60)
};


// ScriptStruct /Script/Synthesis.SourceEffectMotionFilterSettings
// Size: 0x78
struct FSourceEffectMotionFilterSettings
{
	enum ESourceEffectMotionFilterTopology MotionFilterTopology; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float MotionFilterMix; // 0x4 (0x4)
	struct FSourceEffectIndividualFilterSettings FilterASettings; // 0x8 (0xc)
	struct FSourceEffectIndividualFilterSettings FilterBSettings; // 0x14 (0xc)
	struct TMap<enum ESourceEffectMotionFilterModDestination, struct FSourceEffectMotionFilterModulationSettings> ModulationMappings; // 0x20 (0x50)
	float DryVolumeDb; // 0x70 (0x4)
	unsigned char padding_74[0x4]; // 0x74 (0x4)
};


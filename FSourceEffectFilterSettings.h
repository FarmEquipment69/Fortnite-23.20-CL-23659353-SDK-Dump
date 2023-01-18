// ScriptStruct /Script/Synthesis.SourceEffectFilterSettings
// Size: 0x20
struct FSourceEffectFilterSettings
{
	enum ESourceEffectFilterCircuit FilterCircuit; // 0x0 (0x1)
	enum ESourceEffectFilterType FilterType; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	float CutoffFrequency; // 0x4 (0x4)
	float FilterQ; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct TArray<struct FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation; // 0x10 (0x10)
};


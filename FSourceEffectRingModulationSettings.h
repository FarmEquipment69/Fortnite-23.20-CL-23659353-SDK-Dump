// ScriptStruct /Script/Synthesis.SourceEffectRingModulationSettings
// Size: 0x20
struct FSourceEffectRingModulationSettings
{
	enum ERingModulatorTypeSourceEffect ModulatorType; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float Frequency; // 0x4 (0x4)
	float Depth; // 0x8 (0x4)
	float DryLevel; // 0xc (0x4)
	float WetLevel; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	class UAudioBus* AudioBusModulator; // 0x18 (0x8)
};


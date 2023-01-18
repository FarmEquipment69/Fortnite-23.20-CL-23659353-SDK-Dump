// ScriptStruct /Script/AudioModulation.SoundControlModulationPatch
// Size: 0x20
struct FSoundControlModulationPatch
{
	bool bBypass; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	class USoundModulationParameter* OutputParameter; // 0x8 (0x8)
	struct TArray<struct FSoundControlModulationInput> Inputs; // 0x10 (0x10)
};


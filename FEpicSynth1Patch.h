// ScriptStruct /Script/Synthesis.EpicSynth1Patch
// Size: 0x18
struct FEpicSynth1Patch
{
	enum ESynth1PatchSource PatchSource; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TArray<struct FSynth1PatchCable*> PatchCables; // 0x8 (0x10)
};


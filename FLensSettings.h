// ScriptStruct /Script/Engine.LensSettings
// Size: 0xe8
struct FLensSettings
{
	struct FLensBloomSettings Bloom; // 0x0 (0xc0)
	struct FLensImperfectionSettings Imperfections; // 0xc0 (0x20)
	float ChromaticAberration; // 0xe0 (0x4)
	unsigned char padding_e4[0x4]; // 0xe4 (0x4)
};


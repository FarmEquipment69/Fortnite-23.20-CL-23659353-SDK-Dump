// ScriptStruct /Script/Synthesis.SourceEffectPhaserSettings
// Size: 0x10
struct FSourceEffectPhaserSettings
{
	float WetLevel; // 0x0 (0x4)
	float Frequency; // 0x4 (0x4)
	float Feedback; // 0x8 (0x4)
	enum EPhaserLFOType LFOType; // 0xc (0x1)
	bool UseQuadraturePhase; // 0xd (0x1)
	unsigned char padding_e[0x2]; // 0xe (0x2)
};


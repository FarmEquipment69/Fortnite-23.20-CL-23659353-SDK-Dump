// ScriptStruct /Script/FortniteGame.SineWave
// Size: 0x14
struct FSineWave
{
	float PhaseOffset; // 0x0 (0x4)
	float FrequencyHz; // 0x4 (0x4)
	float Multiplier; // 0x8 (0x4)
	float Offset; // 0xc (0x4)
	bool bAbsoluteValue; // 0x10 (0x1)
	enum ESineWaveTarget MotionType; // 0x11 (0x1)
	unsigned char padding_12[0x2]; // 0x12 (0x2)
};


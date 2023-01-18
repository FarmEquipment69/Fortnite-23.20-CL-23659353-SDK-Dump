// ScriptStruct /Script/AudioModulation.SoundModulationLFOParams
// Size: 0x20
struct FSoundModulationLFOParams
{
	enum ESoundModulationLFOShape Shape; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float ExponentialFactor; // 0x4 (0x4)
	float Width; // 0x8 (0x4)
	float Amplitude; // 0xc (0x4)
	float Frequency; // 0x10 (0x4)
	float Offset; // 0x14 (0x4)
	float Phase; // 0x18 (0x4)
	bool bLooping; // 0x1c (0x1)
	bool bBypass; // 0x1d (0x1)
	unsigned char padding_1e[0x2]; // 0x1e (0x2)
};


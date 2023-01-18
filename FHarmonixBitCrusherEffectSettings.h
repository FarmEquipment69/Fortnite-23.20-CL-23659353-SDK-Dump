// ScriptStruct /Script/HmxAudio.HarmonixBitCrusherEffectSettings
// Size: 0x18
struct FHarmonixBitCrusherEffectSettings
{
	bool Enabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float InputVolumeDb; // 0x4 (0x4)
	enum ECrushedBitDepth Bits; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	int SampleAndHoldFactor; // 0xc (0x4)
	float Depth; // 0x10 (0x4)
	float OutputVolumeDb; // 0x14 (0x4)
};


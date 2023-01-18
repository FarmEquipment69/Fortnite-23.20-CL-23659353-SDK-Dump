// ScriptStruct /Script/HmxAudio.HarmonixDistortionBiquadSettings
// Size: 0x10
struct FHarmonixDistortionBiquadSettings
{
	bool Enabled; // 0x0 (0x1)
	enum EDistortionFilterType Shape; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	float Frequency; // 0x4 (0x4)
	float Q; // 0x8 (0x4)
	float GainDb; // 0xc (0x4)
};


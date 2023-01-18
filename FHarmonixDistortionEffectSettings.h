// ScriptStruct /Script/HmxAudio.HarmonixDistortionEffectSettings
// Size: 0x60
struct FHarmonixDistortionEffectSettings
{
	bool Enabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float InputVolumeDb; // 0x4 (0x4)
	float OutputVolumeDb; // 0x8 (0x4)
	float WetDryMix; // 0xc (0x4)
	float DCOffset; // 0x10 (0x4)
	enum EDistortionType Algorithm; // 0x14 (0x1)
	bool Oversample; // 0x15 (0x1)
	unsigned char unreflected_16[0x2]; // 0x16 (0x2) 
	struct FHarmonixDistortionFilterSettings Filter1; // 0x18 (0x18)
	struct FHarmonixDistortionFilterSettings Filter2; // 0x30 (0x18)
	struct FHarmonixDistortionFilterSettings Filter3; // 0x48 (0x18)
};


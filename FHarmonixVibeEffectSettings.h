// ScriptStruct /Script/HmxAudio.HarmonixVibeEffectSettings
// Size: 0x2c
struct FHarmonixVibeEffectSettings
{
	bool Enabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float VolumeDb; // 0x4 (0x4)
	float WetDryMix; // 0x8 (0x4)
	float QuadratureFrequency1; // 0xc (0x4)
	float QuadratureFrequency2; // 0x10 (0x4)
	float QuadratureFrequency3; // 0x14 (0x4)
	float QuadratureFrequency4; // 0x18 (0x4)
	enum ETempoListenerTimeSyncOption TimeSyncOption; // 0x1c (0x1)
	unsigned char unreflected_1d[0x3]; // 0x1d (0x3) 
	float LFORate; // 0x20 (0x4)
	float LfoShape; // 0x24 (0x4)
	float LFODepth; // 0x28 (0x4)
};


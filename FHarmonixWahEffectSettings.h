// ScriptStruct /Script/HmxAudio.HarmonixWahEffectSettings
// Size: 0x24
struct FHarmonixWahEffectSettings
{
	bool Enabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float VolumeDb; // 0x4 (0x4)
	float OpenFrequency; // 0x8 (0x4)
	float OpenQ; // 0xc (0x4)
	float ClosedFrequency; // 0x10 (0x4)
	float ClosedQ; // 0x14 (0x4)
	bool SteepFilters; // 0x18 (0x1)
	bool Auto; // 0x19 (0x1)
	enum ETempoListenerTimeSyncOption TimeSyncOption; // 0x1a (0x1)
	unsigned char unreflected_1b[0x1]; // 0x1b (0x1) 
	float LFORate; // 0x1c (0x4)
	float LfoShape; // 0x20 (0x4)
};


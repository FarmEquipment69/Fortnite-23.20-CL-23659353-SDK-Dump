// ScriptStruct /Script/HmxAudio.HarmonixTremoloEffectSettings
// Size: 0x18
struct FHarmonixTremoloEffectSettings
{
	bool Enabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float Depth; // 0x4 (0x4)
	enum ETempoListenerTimeSyncOption TimeSyncOption; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	float LFORate; // 0xc (0x4)
	float LfoShape; // 0x10 (0x4)
	bool InvertLfo; // 0x14 (0x1)
	unsigned char padding_15[0x3]; // 0x15 (0x3)
};


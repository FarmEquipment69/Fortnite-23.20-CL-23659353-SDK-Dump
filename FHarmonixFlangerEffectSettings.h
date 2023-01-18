// ScriptStruct /Script/HmxAudio.HarmonixFlangerEffectSettings
// Size: 0x28
struct FHarmonixFlangerEffectSettings
{
	bool Enabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float Depth; // 0x4 (0x4)
	float DelayTimeMs; // 0x8 (0x4)
	enum EHarmonixFlangerShapes Shape; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	float Rate; // 0x10 (0x4)
	float Feedback; // 0x14 (0x4)
	bool Invert; // 0x18 (0x1)
	unsigned char unreflected_19[0x3]; // 0x19 (0x3) 
	float Excursion; // 0x1c (0x4)
	enum ETempoListenerTimeSyncOption TimeSyncOption; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	float TempoSyncPhaseOffset; // 0x24 (0x4)
};


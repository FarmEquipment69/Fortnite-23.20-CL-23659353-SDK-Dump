// ScriptStruct /Script/HmxAudio.HarmonixPhaserEffectSettings
// Size: 0x28
struct FHarmonixPhaserEffectSettings
{
	bool Enabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float WetDryMix; // 0x4 (0x4)
	float OscDepth; // 0x8 (0x4)
	float Feedback; // 0xc (0x4)
	int Poles; // 0x10 (0x4)
	enum EHarmonixPhaserShapes Shape; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	float Rate; // 0x18 (0x4)
	enum ETempoListenerTimeSyncOption TimeSyncOption; // 0x1c (0x1)
	unsigned char unreflected_1d[0x3]; // 0x1d (0x3) 
	float Color; // 0x20 (0x4)
	float PhaseShift; // 0x24 (0x4)
};


// ScriptStruct /Script/HmxAudio.HarmonixDelayEffectSettings
// Size: 0x3c
struct FHarmonixDelayEffectSettings
{
	bool Enabled; // 0x0 (0x1)
	enum ETempoListenerTimeSyncOption TimeSyncOption; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	float TimeSeconds; // 0x4 (0x4)
	float Tempo; // 0x8 (0x4)
	float DryDb; // 0xc (0x4)
	float WetDb; // 0x10 (0x4)
	float FeedbackDb; // 0x14 (0x4)
	bool EQEnabled; // 0x18 (0x1)
	enum EHarmonixDelayFilterType EQType; // 0x19 (0x1)
	unsigned char unreflected_1a[0x2]; // 0x1a (0x2) 
	float EQFreq; // 0x1c (0x4)
	float EQQ; // 0x20 (0x4)
	bool LFOEnabled; // 0x24 (0x1)
	enum ETempoListenerTimeSyncOption LFOTimeSyncOption; // 0x25 (0x1)
	unsigned char unreflected_26[0x2]; // 0x26 (0x2) 
	float LFORate; // 0x28 (0x4)
	float LFODepth; // 0x2c (0x4)
	enum EHarmonixDelayStereoType StereoType; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	float PanLeft; // 0x34 (0x4)
	float PanRight; // 0x38 (0x4)
};

// ScriptStruct /Script/HmxAudio.HarmonixStutterEditEffectSettings
// Size: 0x10
struct FHarmonixStutterEditEffectSettings
{
	bool Enabled; // 0x0 (0x1)
	bool FadeEnabled; // 0x1 (0x1)
	bool AllowPassThrough; // 0x2 (0x1)
	bool SilenceWhileScheduled; // 0x3 (0x1)
	bool VarispeedForTempoChanges; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	float MaxCaptureSeconds; // 0x8 (0x4)
	struct FName InstanceName; // 0xc (0x4)
};


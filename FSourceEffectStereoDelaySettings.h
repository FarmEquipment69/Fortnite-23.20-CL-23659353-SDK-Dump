// ScriptStruct /Script/Synthesis.SourceEffectStereoDelaySettings
// Size: 0x24
struct FSourceEffectStereoDelaySettings
{
	enum EStereoDelaySourceEffect DelayMode; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float DelayTimeMsec; // 0x4 (0x4)
	float Feedback; // 0x8 (0x4)
	float DelayRatio; // 0xc (0x4)
	float WetLevel; // 0x10 (0x4)
	float DryLevel; // 0x14 (0x4)
	bool bFilterEnabled; // 0x18 (0x1)
	enum EStereoDelayFiltertype FilterType; // 0x19 (0x1)
	unsigned char unreflected_1a[0x2]; // 0x1a (0x2) 
	float FilterFrequency; // 0x1c (0x4)
	float FilterQ; // 0x20 (0x4)
};


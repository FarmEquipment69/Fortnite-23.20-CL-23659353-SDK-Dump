// ScriptStruct /Script/HmxAudio.HarmonixTapeStartStopEffectSettings
// Size: 0xc
struct FHarmonixTapeStartStopEffectSettings
{
	bool Enabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float TransitionDurationInBeats; // 0x4 (0x4)
	enum EHarmonixTapeStartStopTransportState Transport; // 0x8 (0x1)
	unsigned char padding_9[0x3]; // 0x9 (0x3)
};


// ScriptStruct /Script/TimeSynth.TimeSynthQuantizationSettings
// Size: 0x14
struct FTimeSynthQuantizationSettings
{
	float BeatsPerMinute; // 0x0 (0x4)
	int BeatsPerBar; // 0x4 (0x4)
	enum ETimeSynthBeatDivision BeatDivision; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	float EventDelaySeconds; // 0xc (0x4)
	enum ETimeSynthEventQuantization GlobalQuantization; // 0x10 (0x1)
	unsigned char padding_11[0x3]; // 0x11 (0x3)
};


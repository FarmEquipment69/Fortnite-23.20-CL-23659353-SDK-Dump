// ScriptStruct /Script/Synthesis.TapDelayInfo
// Size: 0x18
struct FTapDelayInfo
{
	enum ETapLineMode TapLineMode; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float DelayLength; // 0x4 (0x4)
	float Gain; // 0x8 (0x4)
	int OutputChannel; // 0xc (0x4)
	float PanInDegrees; // 0x10 (0x4)
	int TapId; // 0x14 (0x4)
};


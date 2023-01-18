// ScriptStruct /Script/Engine.TimelineFloatTrack
// Size: 0x38
struct FTimelineFloatTrack
{
	class UCurveFloat* FloatCurve; // 0x0 (0x8)
	struct FDelegate InterpFunc; // 0x8 (0xc)
	struct FName trackName; // 0x14 (0x4)
	struct FName FloatPropertyName; // 0x18 (0x4)
	unsigned char padding_1c[0x1c]; // 0x1c (0x1c)
};


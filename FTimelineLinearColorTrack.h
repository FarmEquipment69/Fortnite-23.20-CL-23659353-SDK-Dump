// ScriptStruct /Script/Engine.TimelineLinearColorTrack
// Size: 0x38
struct FTimelineLinearColorTrack
{
	class UCurveLinearColor* LinearColorCurve; // 0x0 (0x8)
	struct FDelegate InterpFunc; // 0x8 (0xc)
	struct FName trackName; // 0x14 (0x4)
	struct FName LinearColorPropertyName; // 0x18 (0x4)
	unsigned char padding_1c[0x1c]; // 0x1c (0x1c)
};


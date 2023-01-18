// ScriptStruct /Script/Engine.Timeline
// Size: 0x90
struct FTimeline
{
	struct TEnumAsByte<ETimelineLengthMode> LengthMode; // 0x0 (0x1)
	unsigned char bLooping; // 0x1 (0x1)
	unsigned char bReversePlayback; // 0x1 (0x1)
	unsigned char bPlaying; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	float Length; // 0x4 (0x4)
	float PlayRate; // 0x8 (0x4)
	float Position; // 0xc (0x4)
	struct TArray<struct FTimelineEventEntry> Events; // 0x10 (0x10)
	struct TArray<struct FTimelineVectorTrack> InterpVectors; // 0x20 (0x10)
	struct TArray<struct FTimelineFloatTrack> InterpFloats; // 0x30 (0x10)
	struct TArray<struct FTimelineLinearColorTrack> InterpLinearColors; // 0x40 (0x10)
	struct FDelegate TimelinePostUpdateFunc; // 0x50 (0xc)
	struct FDelegate TimelineFinishedFunc; // 0x5c (0xc)
	struct TWeakObjectPtr<class UObject> PropertySetObject; // 0x68 (0x8)
	struct FName DirectionPropertyName; // 0x70 (0x4)
	unsigned char padding_74[0x1c]; // 0x74 (0x1c)
};


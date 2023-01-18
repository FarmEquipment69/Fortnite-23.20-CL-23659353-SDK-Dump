// Class /Script/Engine.TimelineTemplate
// Size: 0xa8
class UTimelineTemplate : public UObject
{
	float TimelineLength; // 0x28 (0x4)
	struct TEnumAsByte<ETimelineLengthMode> LengthMode; // 0x2c (0x1)
	unsigned char bAutoPlay; // 0x2d (0x1)
	unsigned char bLoop; // 0x2d (0x1)
	unsigned char bReplicated; // 0x2d (0x1)
	unsigned char bIgnoreTimeDilation; // 0x2d (0x1)
	unsigned char unreflected_2e[0x2]; // 0x2e (0x2) 
	struct TArray<struct FTTEventTrack> EventTracks; // 0x30 (0x10)
	struct TArray<struct FTTFloatTrack> FloatTracks; // 0x40 (0x10)
	struct TArray<struct FTTVectorTrack> VectorTracks; // 0x50 (0x10)
	struct TArray<struct FTTLinearColorTrack> LinearColorTracks; // 0x60 (0x10)
	struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray; // 0x70 (0x10)
	struct FGuid TimelineGuid; // 0x80 (0x10)
	struct TEnumAsByte<ETickingGroup> TimelineTickGroup; // 0x90 (0x1)
	unsigned char unreflected_91[0x3]; // 0x91 (0x3) 
	struct FName VariableName; // 0x94 (0x4)
	struct FName DirectionPropertyName; // 0x98 (0x4)
	struct FName UpdateFunctionName; // 0x9c (0x4)
	struct FName FinishedFunctionName; // 0xa0 (0x4)
	unsigned char padding_a4[0x4]; // 0xa4 (0x4)
};


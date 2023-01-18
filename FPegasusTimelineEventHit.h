// ScriptStruct /Script/FortniteGame.PegasusTimelineEventHit
// Size: 0x68
struct FPegasusTimelineEventHit
{
	int PGSHitCount; // 0x0 (0x4)
	float PGSScalarValue; // 0x4 (0x4)
	float PGSReplayStartTimeStamp; // 0x8 (0x4)
	float PGSReplayEndTimeStamp; // 0xc (0x4)
	struct TMap<struct FString, struct FPegasusAdditionalTagInfo> PGSAdditionalTags; // 0x10 (0x50)
	float PGSClipRelativeStartTime; // 0x60 (0x4)
	float PGSClipRelativeEndTime; // 0x64 (0x4)
};


// ScriptStruct /Script/FortniteUI.FortBasicMissionInfo
// Size: 0x4f0
struct FFortBasicMissionInfo
{
	struct FText MissionName; // 0x0 (0x18)
	unsigned char unreflected_18[0x8]; // 0x18 (0x8) 
	struct FFortMultiSizeBrush MissionIcons; // 0x20 (0x480)
	struct FText TheaterName; // 0x4a0 (0x18)
	struct FText DifficultyName; // 0x4b8 (0x18)
	class UMediaSource* EndOfMissionMediaSource; // 0x4d0 (0x8)
	class UMediaSource* EndOfMissionMediaSourceStreamed; // 0x4d8 (0x8)
	bool bSkipEndOfMissionVideo; // 0x4e0 (0x1)
	bool bIsGroupContent; // 0x4e1 (0x1)
	unsigned char padding_4e2[0xe]; // 0x4e2 (0xe)
};


// ScriptStruct /Script/FortniteGame.FortMinigameStatCollection
// Size: 0x30
struct FFortMinigameStatCollection
{
	struct FFortMinigameGroupStats GroupStats; // 0x0 (0x10)
	struct TArray<struct FFortMinigamePlayerStats> PlayerStats; // 0x10 (0x10)
	struct TArray<struct FFortMinigamePlayerBucketStats> PlayerBucketStats; // 0x20 (0x10)
};


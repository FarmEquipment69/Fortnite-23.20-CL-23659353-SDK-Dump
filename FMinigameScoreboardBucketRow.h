// ScriptStruct /Script/FortniteGame.MinigameScoreboardBucketRow
// Size: 0x50
struct FMinigameScoreboardBucketRow : FMingiameScoreboardRow
{
	int Standing; // 0x38 (0x4)
	int BucketIndex; // 0x3c (0x4)
	struct TArray<struct FMinigameScoreboardPlayerRow> PlayerRows; // 0x40 (0x10)
};


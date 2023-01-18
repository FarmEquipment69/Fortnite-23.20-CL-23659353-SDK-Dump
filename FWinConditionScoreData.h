// ScriptStruct /Script/FortniteGame.WinConditionScoreData
// Size: 0x60
struct FWinConditionScoreData
{
	struct FScalableFloat GoalScore; // 0x0 (0x28)
	struct FScalableFloat BigScoreThreshold; // 0x28 (0x28)
	struct TArray<struct FAthenaScoreData> ScoreDataList; // 0x50 (0x10)
};


// ScriptStruct /Script/FortniteGame.MinigameScoreArray
// Size: 0x130
struct FMinigameScoreArray : FFastArraySerializer
{
	struct TArray<struct FMinigameScoreEntry> Scores; // 0x108 (0x10)
	struct TArray<struct FMinigameScoreEntry> HighScores; // 0x118 (0x10)
	class AActor* Owner; // 0x128 (0x8)
};


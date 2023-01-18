// ScriptStruct /Script/FortniteGame.MinigameScoreTracker
// Size: 0x28
struct FMinigameScoreTracker
{
	struct FMinigameScoreData GroupScore; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FMinigameTeamScoreData*> TeamScores; // 0x8 (0x10)
	struct TArray<struct FMinigameSoloScoreData> SoloScores; // 0x18 (0x10)
};


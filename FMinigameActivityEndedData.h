// ScriptStruct /Script/FortniteGame.MinigameActivityEndedData
// Size: 0x18
struct FMinigameActivityEndedData
{
	bool bSuccessfullyCompleted; // 0x0 (0x1)
	enum EMinigameActivityStat Stat; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	float FinalStatValue; // 0x4 (0x4)
	float FinalStatBestValue; // 0x8 (0x4)
	int FinalScore; // 0xc (0x4)
	int TotalScore; // 0x10 (0x4)
	int Rank; // 0x14 (0x4)
};


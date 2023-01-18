// ScriptStruct /Script/FortniteGame.MinigameTeam
// Size: 0x90
struct FMinigameTeam
{
	unsigned char TeamIndex; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString TeamName; // 0x8 (0x10)
	struct FString TeamDescription; // 0x18 (0x10)
	int TeamColorIndex; // 0x28 (0x4)
	int MaxInitTeamSize; // 0x2c (0x4)
	int InitTeamSizeWeight; // 0x30 (0x4)
	bool bHasBucketAvailable; // 0x34 (0x1)
	unsigned char EliminatedCount; // 0x35 (0x1)
	unsigned char TeamSize; // 0x36 (0x1)
	unsigned char unreflected_37[0x1]; // 0x37 (0x1) 
	struct FCreativeIconOption TeamIcon; // 0x38 (0x50)
	bool bUseTeamScore; // 0x88 (0x1)
	unsigned char padding_89[0x7]; // 0x89 (0x7)
};


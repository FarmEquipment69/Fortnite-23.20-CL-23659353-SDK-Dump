// ScriptStruct /Script/FortniteGame.MinigameStatRow
// Size: 0x48
struct FMinigameStatRow
{
	struct FText PlayerName; // 0x0 (0x18)
	int TeamColorIndex; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct TArray<struct FText> PlayerStats; // 0x20 (0x10)
	struct TArray<struct FText> CumulativePlayerStats; // 0x30 (0x10)
	bool bIsTeamRow; // 0x40 (0x1)
	unsigned char padding_41[0x7]; // 0x41 (0x7)
};


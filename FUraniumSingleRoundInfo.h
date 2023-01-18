// ScriptStruct /Script/FortniteGame.UraniumSingleRoundInfo
// Size: 0x30
struct FUraniumSingleRoundInfo
{
	unsigned char RoundTeamWinner; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FText RoundName; // 0x8 (0x18)
	class USoundBase* RoundSound; // 0x20 (0x8)
	int PointsForWinning; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};


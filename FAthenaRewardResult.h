// ScriptStruct /Script/FortniteGame.AthenaRewardResult
// Size: 0x40
struct FAthenaRewardResult
{
	int LevelsGained; // 0x0 (0x4)
	int BookLevelsGained; // 0x4 (0x4)
	int TotalSeasonXpGained; // 0x8 (0x4)
	int TotalBookXpGained; // 0xc (0x4)
	int PrePenaltySeasonXpGained; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct TArray<struct FAthenaMatchXpMultiplierGroup*> XpMultipliers; // 0x18 (0x10)
	struct TArray<struct FAthenaAwardGroup> Rewards; // 0x28 (0x10)
	float AntiAddictionMultiplier; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};


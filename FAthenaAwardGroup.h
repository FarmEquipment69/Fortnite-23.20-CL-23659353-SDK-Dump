// ScriptStruct /Script/FortniteGame.AthenaAwardGroup
// Size: 0x28
struct FAthenaAwardGroup
{
	enum ERewardSource RewardSource; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TArray<struct FMcpLootEntry> Items; // 0x8 (0x10)
	int Score; // 0x18 (0x4)
	float SeasonXp; // 0x1c (0x4)
	int BookXp; // 0x20 (0x4)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};


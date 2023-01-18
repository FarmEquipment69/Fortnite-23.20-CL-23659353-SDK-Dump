// Class /Script/FortniteGame.AthenaSeasonItemData_BattleStar
// Size: 0x170
class UAthenaSeasonItemData_BattleStar : public UAthenaSeasonItemData_BattlePass
{
	struct FAthenaSeasonLandingPageData LandingPageData; // 0x38 (0xc0)
	struct TArray<struct FAthenaSeasonPageGrid> PageList; // 0xf8 (0x10)
	struct TArray<struct FAthenaSeasonPageGrid> QuestPageList; // 0x108 (0x10)
	struct TArray<struct FAthenaSeasonPageGrid> BonusPageList; // 0x118 (0x10)
	struct TArray<struct FAthenaSeasonPageGrid> CustomizationPageList; // 0x128 (0x10)
	struct TArray<struct FAthenaSeasonPageGrid> WeeklyPageList; // 0x138 (0x10)
	unsigned char padding_148[0x28]; // 0x148 (0x28)
};


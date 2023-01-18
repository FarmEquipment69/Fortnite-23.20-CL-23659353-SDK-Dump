// ScriptStruct /Script/FortniteGame.BattlePassOfferSectionData
// Size: 0x28
struct FBattlePassOfferSectionData
{
	int CategoryIndex; // 0x0 (0x4)
	int SectionIndex; // 0x4 (0x4)
	int SectionRewardCount; // 0x8 (0x4)
	int CategoryRewardCount; // 0xc (0x4)
	int NumLevelsNeededForSectionUnlock; // 0x10 (0x4)
	int NumCategoryRewardsNeededForSectionUnlock; // 0x14 (0x4)
	struct TArray<struct FBattlePassOfferData> SectionOfferList; // 0x18 (0x10)
};


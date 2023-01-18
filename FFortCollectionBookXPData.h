// ScriptStruct /Script/FortniteGame.FortCollectionBookXPData
// Size: 0x48
struct FFortCollectionBookXPData : FTableRowBase
{
	int XpToNextLevel; // 0x8 (0x4)
	int TotalXpToGetToThisLevel; // 0xc (0x4)
	struct FFortRewardInfo Rewards; // 0x10 (0x30)
	bool bIsMajorReward; // 0x40 (0x1)
	bool bAutoOpenRewardCardPacks; // 0x41 (0x1)
	unsigned char padding_42[0x6]; // 0x42 (0x6)
};


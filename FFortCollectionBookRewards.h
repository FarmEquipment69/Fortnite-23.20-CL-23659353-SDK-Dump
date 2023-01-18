// ScriptStruct /Script/FortniteGame.FortCollectionBookRewards
// Size: 0x60
struct FFortCollectionBookRewards
{
	enum ECollectionBookRewardType RewardType; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FName PageId; // 0x4 (0x4)
	struct FName SectionId; // 0x8 (0x4)
	int XpRequired; // 0xc (0x4)
	struct FText Description; // 0x10 (0x18)
	bool bIsMajorReward; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct FFortRewardInfo Rewards; // 0x30 (0x30)
};


// ScriptStruct /Script/FortniteGame.FortPhoenixLevelRewardData
// Size: 0x40
struct FFortPhoenixLevelRewardData : FTableRowBase
{
	int TotalRequiredXP; // 0x8 (0x4)
	bool bIsMajorReward; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct TArray<struct FFortRewardQuantityPair> VisibleReward; // 0x10 (0x10)
	struct TArray<struct FFortRewardQuantityPair> HiddenRewards; // 0x20 (0x10)
	struct FString EventTag; // 0x30 (0x10)
};


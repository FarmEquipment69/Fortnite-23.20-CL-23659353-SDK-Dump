// ScriptStruct /Script/FortniteGame.FortPostMaxPhoenixLevelRewardData
// Size: 0x30
struct FFortPostMaxPhoenixLevelRewardData : FTableRowBase
{
	bool bIsMajorReward; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct TArray<struct FFortRewardQuantityPair> VisibleReward; // 0x10 (0x10)
	struct FString EventTag; // 0x20 (0x10)
};


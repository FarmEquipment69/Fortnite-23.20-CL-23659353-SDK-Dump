// ScriptStruct /Script/FortniteGame.BattlePassLevelReward
// Size: 0xb8
struct FBattlePassLevelReward
{
	struct FString OfferId; // 0x0 (0x10)
	bool bHideFromGiftBox; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	int GrantedOnLevel; // 0x14 (0x4)
	struct FAthenaRewardItemReference Reward; // 0x18 (0xa0)
};


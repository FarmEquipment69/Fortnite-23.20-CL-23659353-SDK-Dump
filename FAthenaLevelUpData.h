// ScriptStruct /Script/FortniteGame.AthenaLevelUpData
// Size: 0x28
struct FAthenaLevelUpData : FTableRowBase
{
	int Level; // 0x8 (0x4)
	int XpToNextLevel; // 0xc (0x4)
	int XpTotal; // 0x10 (0x4)
	int CurrencyReward; // 0x14 (0x4)
	struct FString ChaseRewardTemplateId; // 0x18 (0x10)
};


// ScriptStruct /Script/FortniteGame.EarnedBadgeEntry
// Size: 0x30
struct FEarnedBadgeEntry : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class UFortBadgeItemDefinition* Badge; // 0x10 (0x8)
	struct TArray<struct FEarnedBadgePlayerData> PlayerData; // 0x18 (0x10)
	struct TEnumAsByte<EFortRewardType> RewardType; // 0x28 (0x1)
	unsigned char padding_29[0x7]; // 0x29 (0x7)
};


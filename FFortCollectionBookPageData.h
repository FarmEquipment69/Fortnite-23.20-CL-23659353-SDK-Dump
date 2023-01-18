// ScriptStruct /Script/FortniteGame.FortCollectionBookPageData
// Size: 0x70
struct FFortCollectionBookPageData : FTableRowBase
{
	struct FText Name; // 0x8 (0x18)
	struct FName CategoryId; // 0x20 (0x4)
	int SortPriority; // 0x24 (0x4)
	struct FName ProfileId; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct TArray<struct FName> SectionRowNames; // 0x30 (0x10)
	struct FFortRewardInfo Rewards; // 0x40 (0x30)
};


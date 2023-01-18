// ScriptStruct /Script/FortniteGame.FortCollectionBookSectionData
// Size: 0x60
struct FFortCollectionBookSectionData : FTableRowBase
{
	struct FText Name; // 0x8 (0x18)
	struct TArray<struct FName> SlotRowNames; // 0x20 (0x10)
	struct FFortRewardInfo Rewards; // 0x30 (0x30)
};


// ScriptStruct /Script/FortniteGame.NPCGiftItemInventoryRow
// Size: 0x38
struct FNPCGiftItemInventoryRow : FTableRowBase
{
	struct FGameplayTag NPC; // 0x8 (0x4)
	struct FName LootTier; // 0xc (0x4)
	int LootLevel; // 0x10 (0x4)
	int OverrideNumDrops; // 0x14 (0x4)
	struct FGameplayTagContainer LootTags; // 0x18 (0x20)
};


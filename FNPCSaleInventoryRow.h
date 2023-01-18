// ScriptStruct /Script/FortniteGame.NPCSaleInventoryRow
// Size: 0x40
struct FNPCSaleInventoryRow : FTableRowBase
{
	struct FGameplayTag NPC; // 0x8 (0x4)
	struct FName LootTier; // 0xc (0x4)
	int LootLevel; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FGameplayTagContainer LootTags; // 0x18 (0x20)
	int Priority; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};


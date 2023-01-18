// ScriptStruct /Script/FortniteAI.FortAIBaseLootDropRow
// Size: 0x40
struct FFortAIBaseLootDropRow : FTableRowBase
{
	int Priority; // 0x8 (0x4)
	float ItemDropChance; // 0xc (0x4)
	struct FName WorldItemLootTierGroup; // 0x10 (0x4)
	struct FName WorldItemInstancedLootTierGroup; // 0x14 (0x4)
	struct FName AccountItemLootTierGroup; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct FGameplayTagContainer AITagsContainer; // 0x20 (0x20)
};


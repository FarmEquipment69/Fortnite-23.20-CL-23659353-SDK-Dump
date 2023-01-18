// ScriptStruct /Script/FortniteAI.FortAILootDropModifierRow
// Size: 0x38
struct FFortAILootDropModifierRow : FTableRowBase
{
	int Priority; // 0x8 (0x4)
	float ItemDropChanceMultiplier; // 0xc (0x4)
	struct FName WorldItemLootTierGroup; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FGameplayTagContainer AITagsContainer; // 0x18 (0x20)
};


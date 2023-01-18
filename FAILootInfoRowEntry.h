// ScriptStruct /Script/FortniteAI.AILootInfoRowEntry
// Size: 0x60
struct FAILootInfoRowEntry
{
	struct FGameplayTagQuery OptionalTagQuery; // 0x0 (0x48)
	unsigned char bShouldDropInventoryOnDeath; // 0x48 (0x1)
	unsigned char bShouldDropLootOnDeath; // 0x48 (0x1)
	unsigned char bShouldGrantLootOnSpawn; // 0x48 (0x1)
	unsigned char unreflected_49[0x7]; // 0x49 (0x7) 
	struct TArray<struct FName> LootTiers; // 0x50 (0x10)
};


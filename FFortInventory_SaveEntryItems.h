// ScriptStruct /Script/FortniteGame.FortInventory_SaveEntryItems
// Size: 0x28
struct FFortInventory_SaveEntryItems : FFortInventory_SaveEntryAttributeBase
{
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TArray<struct FFortItemEntry> FortItemEntries; // 0x8 (0x10)
	struct TArray<struct FFortInventory_SaveEntryItemStacked> StackedItems; // 0x18 (0x10)
};


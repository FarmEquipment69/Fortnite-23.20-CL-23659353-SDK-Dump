// ScriptStruct /Script/FortniteGame.FortInventory_SaveEntry
// Size: 0x110
struct FFortInventory_SaveEntry
{
	struct FDateTime* MostRecentUseTime; // 0x0 (0x8)
	struct FFortInventory_SaveEntryFloat* Health; // 0x8 (0x8)
	struct FFortInventory_SaveEntryFloat* Shield; // 0x10 (0x8)
	struct FFortInventory_SaveEntryUint8 ClassSlot; // 0x18 (0x2)
	struct FFortInventory_SaveEntryUint8 TeamIndex; // 0x1a (0x2)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct FFortInventory_SaveEntryItems Items; // 0x20 (0x28)
	struct FFortInventory_SaveEntryItems Resources; // 0x48 (0x28)
	struct FFortInventory_SaveEntryItems Gold; // 0x70 (0x28)
	struct FFortInventory_SaveEntryCheckpoints Checkpoints; // 0x98 (0x18)
	struct FFortInventory_SaveEntryTransform PlayerTransform; // 0xb0 (0x40)
	struct FFortInventory_MinigameStats MinigameStats; // 0xf0 (0x18)
	unsigned char padding_108[0x8]; // 0x108 (0x8)
};


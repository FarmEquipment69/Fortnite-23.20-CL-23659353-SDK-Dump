// ScriptStruct /Script/FortniteGame.MinigameClassSlot
// Size: 0x40
struct FMinigameClassSlot
{
	unsigned char ClassSlotIndex; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString ClassName; // 0x8 (0x10)
	struct FString ClassDescription; // 0x18 (0x10)
	bool bVisibleInUI; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct TArray<struct FItemAndCount> InventoryItems; // 0x30 (0x10)
};


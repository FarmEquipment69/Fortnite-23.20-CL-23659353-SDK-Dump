// ScriptStruct /Script/FortniteGame.QuickBarSlot
// Size: 0x28
struct FQuickBarSlot
{
	struct TArray<struct FGuid> Items; // 0x0 (0x10)
	unsigned char bEnabled; // 0x10 (0x1)
	unsigned char bIsDirty; // 0x10 (0x1)
	unsigned char bIsReserved; // 0x10 (0x1)
	unsigned char bIsOccupied; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	int UsedBySlotIndex; // 0x14 (0x4)
	struct FGuid UsedByItemGuid; // 0x18 (0x10)
};


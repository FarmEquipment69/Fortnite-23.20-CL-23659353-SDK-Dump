// ScriptStruct /Script/FortniteGame.PlayerLoudoutEntry
// Size: 0x88
struct FPlayerLoudoutEntry
{
	class UFortWorldItemDefinition* ItemToGrant; // 0x0 (0x8)
	struct FScalableFloat NumberOfItemsToGrant; // 0x8 (0x28)
	struct FScalableFloat RemoveItemOnNextSwap; // 0x30 (0x28)
	struct FScalableFloat RandomWeight; // 0x58 (0x28)
	int DesiredSlot; // 0x80 (0x4)
	unsigned char padding_84[0x4]; // 0x84 (0x4)
};


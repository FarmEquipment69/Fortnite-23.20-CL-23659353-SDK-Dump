// ScriptStruct /Script/FortniteGame.AvailableTierLayout
// Size: 0x30
struct FAvailableTierLayout
{
	class UFortTieredCollectionLayout* Layout; // 0x0 (0x8)
	struct TArray<struct FFortTierCollectionLayoutOutput> AvailableTiers; // 0x8 (0x10)
	struct TArray<struct FFortTierCollectionLayoutOutput> LockedTiers; // 0x18 (0x10)
	unsigned char bLocked; // 0x28 (0x1)
	unsigned char padding_29[0x7]; // 0x29 (0x7)
};


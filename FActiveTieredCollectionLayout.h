// ScriptStruct /Script/FortniteGame.ActiveTieredCollectionLayout
// Size: 0x20
struct FActiveTieredCollectionLayout : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class UFortTieredCollectionLayout* Layout; // 0x10 (0x8)
	int MaxTierUnlocked; // 0x18 (0x4)
	unsigned char bLocked; // 0x1c (0x1)
	unsigned char padding_1d[0x3]; // 0x1d (0x3)
};


// ScriptStruct /Script/FortniteGame.FortItemsConsumedInfo
// Size: 0x30
struct FFortItemsConsumedInfo
{
	class UFortWeaponItemDefinition* WeaponData; // 0x0 (0x8)
	struct FVector Location; // 0x8 (0x18)
	float Health; // 0x20 (0x4)
	float Shield; // 0x24 (0x4)
	int ItemQuantity; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};


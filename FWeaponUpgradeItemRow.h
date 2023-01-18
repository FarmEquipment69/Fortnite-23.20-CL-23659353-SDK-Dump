// ScriptStruct /Script/FortniteGame.WeaponUpgradeItemRow
// Size: 0x20
struct FWeaponUpgradeItemRow : FTableRowBase
{
	class UFortWeaponRangedItemDefinition* CurrentWeaponDef; // 0x8 (0x8)
	class UFortWeaponRangedItemDefinition* UpgradedWeaponDef; // 0x10 (0x8)
	enum EFortWeaponUpgradeCosts WoodCost; // 0x18 (0x1)
	enum EFortWeaponUpgradeCosts MetalCost; // 0x19 (0x1)
	enum EFortWeaponUpgradeCosts BrickCost; // 0x1a (0x1)
	enum EFortWeaponUpgradeDirection Direction; // 0x1b (0x1)
	unsigned char padding_1c[0x4]; // 0x1c (0x4)
};


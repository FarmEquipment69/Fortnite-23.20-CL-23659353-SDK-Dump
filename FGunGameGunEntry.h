// ScriptStruct /Script/FortniteGame.GunGameGunEntry
// Size: 0x68
struct FGunGameGunEntry
{
	class UFortWeaponItemDefinition* Weapon; // 0x0 (0x8)
	struct FPrimaryAssetId* WeaponAssetId; // 0x8 (0x8)
	struct FScalableFloat Enabled; // 0x10 (0x28)
	struct FScalableFloat AwardAtElim; // 0x38 (0x28)
	bool bShowHarvestingToolOnLadder; // 0x60 (0x1)
	unsigned char padding_61[0x7]; // 0x61 (0x7)
};


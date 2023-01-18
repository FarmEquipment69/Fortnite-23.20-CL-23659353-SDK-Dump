// Class /Script/FortniteGame.FortWeaponPickupSpawnAmmoData
// Size: 0x88
class UFortWeaponPickupSpawnAmmoData : public UDataAsset
{
	struct TArray<struct FWeaponPickupAmmoCountData> WeaponPickupAmmoCountArray; // 0x30 (0x10)
	struct FScalableFloat DefaultWeaponAmmoMultiplier; // 0x40 (0x28)
	struct TArray<struct FWeaponPickupAmmoMultiplierOverrideData> WeaponPickupAmmoMultiplierOverrideArray; // 0x68 (0x10)
	struct TArray<struct FSourceToAmmoMultiplierOverrideData> SourceToAmmoMultiplierOverrideArray; // 0x78 (0x10)
};


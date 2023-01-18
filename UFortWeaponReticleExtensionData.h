// Class /Script/FortniteGame.FortWeaponReticleExtensionData
// Size: 0xd8
class UFortWeaponReticleExtensionData : public UDataAsset
{
	struct TMap<struct FPrimaryAssetId*, struct TWeakObjectPtr<class UClass>> WeaponToReticleExtensionMap; // 0x30 (0x50)
	struct TMap<struct FGameplayTag, struct TWeakObjectPtr<class UClass>> TagToReticleExtensionMap; // 0x80 (0x50)
	bool bStartHidden; // 0xd0 (0x1)
	unsigned char padding_d1[0x7]; // 0xd1 (0x7)
};


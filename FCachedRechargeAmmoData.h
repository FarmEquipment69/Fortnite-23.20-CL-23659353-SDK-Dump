// ScriptStruct /Script/FortniteGame.CachedRechargeAmmoData
// Size: 0x50
struct FCachedRechargeAmmoData
{
	float ServerStartTime; // 0x0 (0x4)
	float ChargeRate; // 0x4 (0x4)
	int AmountToRecharge; // 0x8 (0x4)
	int ItemLevel; // 0xc (0x4)
	struct FGuid WeaponItemGuid; // 0x10 (0x10)
	struct TWeakObjectPtr<class UFortWorldItemDefinition> AmmoItemDefinition; // 0x20 (0x28)
	bool bShouldRechargeAmmoToClip; // 0x48 (0x1)
	unsigned char padding_49[0x7]; // 0x49 (0x7)
};


// Class /Script/FortniteAI.FortBTDecorator_WeaponStatus
// Size: 0x98
class UFortBTDecorator_WeaponStatus : public UBTDecorator
{
	float WeaponStatusUpdateRate; // 0x68 (0x4)
	unsigned char bTestIfCurrentWeaponIsValid; // 0x6c (0x1)
	unsigned char bCurrentWeaponShouldBeValid; // 0x6c (0x1)
	unsigned char bTestAllowedCurrentWeaponTags; // 0x6c (0x1)
	unsigned char unreflected_6d[0x3]; // 0x6d (0x3) 
	struct FGameplayTagContainer AllowedCurrentWeaponTags; // 0x70 (0x20)
	unsigned char bTestIfCurrentWeaponIsReloading; // 0x90 (0x1)
	unsigned char bCurrentWeaponShouldBeReloading; // 0x90 (0x1)
	unsigned char bTestIfCurrentWeaponHasAmmoInMagazine; // 0x90 (0x1)
	unsigned char bCurrentWeaponShouldHaveAmmoInMagazine; // 0x90 (0x1)
	unsigned char bTestIfCurrentWeaponHasExtraAmmo; // 0x90 (0x1)
	unsigned char bCurrentWeaponShouldHaveExtraAmmo; // 0x90 (0x1)
	unsigned char bAllInterestedTestsMustPass; // 0x90 (0x1)
	unsigned char padding_91[0x7]; // 0x91 (0x7)
};


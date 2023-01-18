// Class /Script/FortniteGame.FortGameplayAbility_RangedWeapon
// Size: 0xb58
class UFortGameplayAbility_RangedWeapon : public UFortGameplayAbility
{
	float FiringNoiseRange; // 0xb20 (0x4)
	float FlyByNoiseRange; // 0xb24 (0x4)
	class AFortWeaponRanged* CurrentWeapon; // 0xb28 (0x8)
	struct FGameplayTagContainer WeaponFireCue; // 0xb30 (0x20)
	unsigned char padding_b50[0x8]; // 0xb50 (0x8)
};


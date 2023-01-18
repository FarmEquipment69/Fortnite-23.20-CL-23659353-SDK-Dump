// Class /Script/FortniteGame.FortGameplayAbility_CeilingFallingTrap
// Size: 0xb60
class UFortGameplayAbility_CeilingFallingTrap : public UFortGameplayAbility
{
	class UClass* TrapProjectileClass; // 0xb20 (0x8)
	class UClass* TrapCostClass; // 0xb28 (0x8)
	struct FGameplayTag ActivateTrapTag; // 0xb30 (0x4)
	struct FGameplayTag DelayBeginTag; // 0xb34 (0x4)
	struct FGameplayTag ReloadBeginTag; // 0xb38 (0x4)
	float ProjectileSpawnDelay; // 0xb3c (0x4)
	unsigned char padding_b40[0x20]; // 0xb40 (0x20)
};


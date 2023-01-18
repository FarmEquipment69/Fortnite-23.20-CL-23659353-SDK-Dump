// ScriptStruct /Script/FortniteGame.FortPlayerDeathReport
// Size: 0x98
struct FFortPlayerDeathReport
{
	float ServerTimeForRespawn; // 0x0 (0x4)
	float ServerTimeForResurrect; // 0x4 (0x4)
	float LethalDamage; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class AFortPlayerState* KillerPlayerState; // 0x10 (0x8)
	struct TWeakObjectPtr<class AFortPawn> KillerPawn; // 0x18 (0x8)
	float KillerHealthPercent; // 0x20 (0x4)
	float KillerShieldPercent; // 0x24 (0x4)
	float KillerOvershieldPercent; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	class UFortWeaponItemDefinition* KillerWeapon; // 0x30 (0x8)
	struct TWeakObjectPtr<class AActor> DamageCauser; // 0x38 (0x8)
	unsigned char bDroppedBackpack; // 0x40 (0x1)
	unsigned char bNotifyUI; // 0x40 (0x1)
	unsigned char unreflected_41[0x7]; // 0x41 (0x7) 
	struct FGameplayTagContainer Tags; // 0x48 (0x20)
	struct FVector ViewLocationAtTimeOfDeath; // 0x68 (0x18)
	struct FRotator ViewRotationAtTimeOfDeath; // 0x80 (0x18)
};


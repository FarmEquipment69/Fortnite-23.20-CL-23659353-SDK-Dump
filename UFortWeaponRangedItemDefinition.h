// Class /Script/FortniteGame.FortWeaponRangedItemDefinition
// Size: 0xde0
class UFortWeaponRangedItemDefinition : public UFortWeaponItemDefinition
{
	struct TArray<class USoundLibrary*> ProjectileSoundLibraries; // 0xd58 (0x10)
	struct TWeakObjectPtr<class UClass> ProjectileTemplate; // 0xd68 (0x28)
	unsigned char bShowAmmoAsPercent; // 0xd90 (0x1)
	unsigned char unreflected_d91[0x7]; // 0xd91 (0x7) 
	struct TWeakObjectPtr<class UParticleSystem> BulletShellFXTemplate; // 0xd98 (0x28)
	unsigned char bUseNativeWeaponTrace; // 0xdc0 (0x1)
	unsigned char bTraceThroughPawns; // 0xdc0 (0x1)
	unsigned char bTraceThroughWorld; // 0xdc0 (0x1)
	unsigned char bShouldSpawnBulletShellFX; // 0xdc0 (0x1)
	unsigned char bShouldUsePerfectAimWhenTargetingMinSpread; // 0xdc0 (0x1)
	unsigned char bDoNotAllowDoublePump; // 0xdc0 (0x1)
	unsigned char bUseOnTouch; // 0xdc0 (0x1)
	unsigned char bCanAutofireWithMinimalCharge; // 0xdc0 (0x1)
	unsigned char bAllowADSInAir; // 0xdc1 (0x1)
	unsigned char bShowReticleHitNotifyAtImpactLocation; // 0xdc1 (0x1)
	unsigned char bForceProjectileTooltip; // 0xdc1 (0x1)
	unsigned char bPrimaryFireRequiresAmmo; // 0xdc1 (0x1)
	unsigned char bSecondaryFireRequiresAmmo; // 0xdc1 (0x1)
	unsigned char unreflected_dc2[0x6]; // 0xdc2 (0x6) 
	class UCurveFloat* ChargeToBurstRoundsCurve; // 0xdc8 (0x8)
	class UCurveFloat* ChargeToBurstFireRateCurve; // 0xdd0 (0x8)
	unsigned char padding_dd8[0x8]; // 0xdd8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponRangedItemDefinition.UseOnTouch (Underlying native function: UseOnTouch 0x90127e8)
	bool UseOnTouch(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRangedItemDefinition.ShouldUsePerfectAimWhenTargetingMinSpread (Underlying native function: ShouldUsePerfectAimWhenTargetingMinSpread 0x901265c)
	bool ShouldUsePerfectAimWhenTargetingMinSpread(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRangedItemDefinition.ShouldUseNativeWeaponTrace (Underlying native function: ShouldUseNativeWeaponTrace 0x9012640)
	bool ShouldUseNativeWeaponTrace(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRangedItemDefinition.ShouldTraceThroughWorld (Underlying native function: ShouldTraceThroughWorld 0x9012608)
	bool ShouldTraceThroughWorld(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRangedItemDefinition.ShouldTraceThroughPawns (Underlying native function: ShouldTraceThroughPawns 0x90125ec)
	bool ShouldTraceThroughPawns(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRangedItemDefinition.ShouldSpawnBulletShellFX (Underlying native function: ShouldSpawnBulletShellFX 0x90125d0)
	bool ShouldSpawnBulletShellFX(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRangedItemDefinition.ShouldShowReticleHitNotifyAtImpactLocation (Underlying native function: ShouldShowReticleHitNotifyAtImpactLocation 0x8a658ac)
	bool ShouldShowReticleHitNotifyAtImpactLocation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRangedItemDefinition.ShouldShowAmmoAsPercent (Underlying native function: ShouldShowAmmoAsPercent 0x90125b4)
	bool ShouldShowAmmoAsPercent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRangedItemDefinition.GetProjectileTemplate (Underlying native function: GetProjectileTemplate 0x900da90)
	class UClass* GetProjectileTemplate(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRangedItemDefinition.GetBulletShellFXTemplate (Underlying native function: GetBulletShellFXTemplate 0x900d4c4)
	class UParticleSystem* GetBulletShellFXTemplate(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRangedItemDefinition.ForceProjectileTooltip (Underlying native function: ForceProjectileTooltip 0x8a65804)
	bool ForceProjectileTooltip(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRangedItemDefinition.DoNotAllowDoublePump (Underlying native function: DoNotAllowDoublePump 0x900d2ac)
	bool DoNotAllowDoublePump(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};


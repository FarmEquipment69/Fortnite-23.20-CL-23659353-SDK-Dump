// Class /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile
// Size: 0xc30
class AFortExCaliberProjectile : public AFortProjectileAthena
{
	bool bSimulationRunning; // 0xba0 (0x1)
	unsigned char unreflected_ba1[0x7]; // 0xba1 (0x7) 
	struct FScalableFloat TimeToExplode; // 0xba8 (0x28)
	bool bHasStopped; // 0xbd0 (0x1)
	unsigned char unreflected_bd1[0x7]; // 0xbd1 (0x7) 
	struct FVector HitNormal; // 0xbd8 (0x18)
	struct TEnumAsByte<EPhysicalSurface> SurfaceType; // 0xbf0 (0x1)
	unsigned char unreflected_bf1[0x3]; // 0xbf1 (0x3) 
	struct FName SwordRevealMaterialParam; // 0xbf4 (0x4)
	struct FName EmissiveColorMaterialParam; // 0xbf8 (0x4)
	struct FName HDRMultiplierMaterialParam; // 0xbfc (0x4)
	struct FLinearColor EmissiveBlueColor; // 0xc00 (0x10)
	struct FLinearColor EmissivePurpleColor; // 0xc10 (0x10)
	float MinPitchForRotationAdjustment; // 0xc20 (0x4)
	float MaxPitchForRotationAdjustment; // 0xc24 (0x4)
	unsigned char padding_c28[0x8]; // 0xc28 (0x8)

	/* Functions */

	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.UnblockPawnCollision (Has no native function)
	void UnblockPawnCollision(); // (Event | Protected | BlueprintEvent)

	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.TriggerExplosion (Has no native function)
	void TriggerExplosion(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.SetupSwordRevealEffects (Underlying native function: SetupSwordRevealEffects 0x53320a0)
	void SetupSwordRevealEffects(class UStaticMeshComponent*& ProjectileMesh, float& SwordRevealAlpha, float& ColorChangeAlpha, float& HDRMultiplierAlpha); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.SetupProjectileHitAudio (Has no native function)
	void SetupProjectileHitAudio(struct FVector& ProjectileImpactLocation, class AActor*& HitActor); // (Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.SetFuseColorBasedOnTeam (Has no native function)
	void SetFuseColorBasedOnTeam(); // (Event | Protected | BlueprintEvent)

	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.RestartSimulating (Underlying native function: RestartSimulating 0x5332080)
	void RestartSimulating(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.PlayPreExplosionEfffects (Has no native function)
	void PlayPreExplosionEfffects(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.OnRep_bSimulationRunning (Underlying native function: OnRep_bSimulationRunning 0x5331ff0)
	void OnRepbSimulationRunning(); // (Final | Native | Protected)

	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.OnAttachedBuildingDestroyed (Underlying native function: OnAttachedBuildingDestroyed 0x5331cd0)
	void OnAttachedBuildingDestroyed(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Protected | HasDefaults)

	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.OnAttachedActorDestroyed (Underlying native function: OnAttachedActorDestroyed 0x5331bf0)
	void OnAttachedActorDestroyed(class AActor*& DestroyedActor); // (Final | Native | Protected)

	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.BP_OnProjectileStopped (Has no native function)
	void BPOnProjectileStopped(); // (Event | Protected | BlueprintEvent)
};


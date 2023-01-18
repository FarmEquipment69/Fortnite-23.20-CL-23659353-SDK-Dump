// Class /Script/FortniteGame.FortWeaponRanged
// Size: 0x1560
class AFortWeaponRanged : public AFortWeapon
{
	struct FMulticastInlineDelegate OnProjectileSpawned; // 0x1040 (0x10)
	unsigned char unreflected_1050[0x18]; // 0x1050 (0x18) 
	class UClass* TracerTemplate; // 0x1068 (0x8)
	bool bAllowAutomaticWeaponCatchup; // 0x1070 (0x1)
	unsigned char unreflected_1071[0x7]; // 0x1071 (0x7) 
	int CurrentNumBullets; // 0x1078 (0x4)
	unsigned char unreflected_107c[0x4]; // 0x107c (0x4) 
	struct FVector ScopeTargetingMuzzleOffset; // 0x1080 (0x18)
	struct FVector CurrentMuzzleBlockedLocation; // 0x1098 (0x18)
	enum EFortAbilityTargetingSource CurrentDamageStart; // 0x10b0 (0x1)
	unsigned char unreflected_10b1[0x7]; // 0x10b1 (0x7) 
	struct FRotator MaxTargetingAimAdjustment; // 0x10b8 (0x18)
	unsigned char bShouldDisplayAmmoCounter; // 0x10d0 (0x1)
	unsigned char bShouldDisplayReticleAmmoCounter; // 0x10d0 (0x1)
	unsigned char bHideAmmoCounterDuringTargeting; // 0x10d0 (0x1)
	unsigned char bShouldDisplayAmmoCounterDuringSecondaryFire; // 0x10d0 (0x1)
	unsigned char bShouldHideReserveAmmo; // 0x10d0 (0x1)
	unsigned char bShouldAimFromMuzzleAtCloseRange; // 0x10d0 (0x1)
	unsigned char bAlwaysAimFromMuzzle; // 0x10d0 (0x1)
	unsigned char bMaintainAimLocationDuringTargeting; // 0x10d0 (0x1)
	unsigned char bUseScopeTargeting; // 0x10d1 (0x1)
	unsigned char bUseFirstPersonTargeting; // 0x10d1 (0x1)
	unsigned char bPersistentFireFX; // 0x10d1 (0x1)
	unsigned char bUseBeamParticles; // 0x10d1 (0x1)
	unsigned char bActivateRangeAbilityPerBurstShot; // 0x10d1 (0x1)
	unsigned char bUseImpactFXForProjectiles; // 0x10d1 (0x1)
	unsigned char bUseImpactFXForProjectileOverlaps; // 0x10d1 (0x1)
	unsigned char bUseImpactDecals; // 0x10d1 (0x1)
	unsigned char bUsePersistentBeam; // 0x10d2 (0x1)
	unsigned char bUseShellsParticles; // 0x10d2 (0x1)
	unsigned char bUseTracers; // 0x10d2 (0x1)
	unsigned char bUseOverrideBaseSpread; // 0x10d2 (0x1)
	unsigned char bIsMuzzleTraceNearWall; // 0x10d2 (0x1)
	unsigned char unreflected_10d3[0x1]; // 0x10d3 (0x1) 
	float MaxMuzzleAimCameraAimHeadingAngleDifferenceDegrees; // 0x10d4 (0x4)
	float AimPitchMin; // 0x10d8 (0x4)
	float AimPitchMax; // 0x10dc (0x4)
	float MuzzleTraceNearWallThreshold; // 0x10e0 (0x4)
	unsigned char unreflected_10e4[0xc]; // 0x10e4 (0xc) 
	struct FFortEffectDistanceQuality BeamSignificance; // 0x10f0 (0x18)
	struct FFortEffectDistanceQuality ImpactSignificance; // 0x1108 (0x18)
	struct FFortEffectDistanceQuality DecalSignificance; // 0x1120 (0x18)
	float ScopeImpactEffectDistanceOffset; // 0x1138 (0x4)
	unsigned char unreflected_113c[0x4]; // 0x113c (0x4) 
	class UFXSystemComponent* MuzzlePSC; // 0x1140 (0x8)
	class UFXSystemComponent* ShellPSC; // 0x1148 (0x8)
	class UParticleSystem* BeamParticleSystem; // 0x1150 (0x8)
	struct TWeakObjectPtr<class UNiagaraSystem> BeamNiagaraSystemAsset; // 0x1158 (0x28)
	struct FName BeamSourceSocketName; // 0x1180 (0x4)
	unsigned char unreflected_1184[0x4]; // 0x1184 (0x4) 
	class USkeletalMesh* FortSpawnPropOverride; // 0x1188 (0x8)
	class UAnimationAsset* FortSpawnPropAnimOverride; // 0x1190 (0x8)
	struct FVector DecalSizeMin; // 0x1198 (0x18)
	struct FVector DecalSizeMax; // 0x11b0 (0x18)
	float DecalLifespanMin; // 0x11c8 (0x4)
	float DecalLifespanMax; // 0x11cc (0x4)
	struct FLinearColor DecalColorStart; // 0x11d0 (0x10)
	struct FLinearColor DecalColorEnd; // 0x11e0 (0x10)
	class UMaterialInterface* DecalMaterial; // 0x11f0 (0x8)
	class UTexture2D* DecalTexture; // 0x11f8 (0x8)
	struct TArray<struct TEnumAsByte<EPhysicalSurface>> SurfaceAcceptingDecals; // 0x1200 (0x10)
	unsigned char unreflected_1210[0x4]; // 0x1210 (0x4) 
	int ShellReloadCounter; // 0x1214 (0x4)
	unsigned char unreflected_1218[0x8]; // 0x1218 (0x8) 
	struct FRotator TargetingRotAdjustmentTotal; // 0x1220 (0x18)
	float LastTargetingRotAdjustmentWeight; // 0x1238 (0x4)
	unsigned char unreflected_123c[0x54]; // 0x123c (0x54) 
	struct FRotator MaxTargetingAimAdjustPerSecond; // 0x1290 (0x18)
	unsigned char unreflected_12a8[0x70]; // 0x12a8 (0x70) 
	bool ScopePostProcessEnabled; // 0x1318 (0x1)
	unsigned char unreflected_1319[0x3]; // 0x1319 (0x3) 
	float ScopePostProcessBlendWeight; // 0x131c (0x4)
	struct TArray<struct FWeightedBlendable> ScopePostProcessMaterial; // 0x1320 (0x10)
	unsigned char unreflected_1330[0x8]; // 0x1330 (0x8) 
	struct TArray<struct FFortBulletPatternEntry> BulletPattern; // 0x1338 (0x10)
	unsigned char unreflected_1348[0x30]; // 0x1348 (0x30) 
	class USoundBase* EnemyWarningWeaponImpactSFX; // 0x1378 (0x8)
	unsigned char unreflected_1380[0x28]; // 0x1380 (0x28) 
	class UNiagaraSystem* BeamNiagaraSystem; // 0x13a8 (0x8)
	unsigned char unreflected_13b0[0x5c]; // 0x13b0 (0x5c) 
	unsigned char bUseAthenaRecoil; // 0x140c (0x1)
	unsigned char bUseAthenaPerfectADSAim; // 0x140c (0x1)
	unsigned char bFirstShotAccuracyCheckVehicleMovement; // 0x140c (0x1)
	unsigned char unreflected_140d[0x3]; // 0x140d (0x3) 
	float FirstShotAccuracyMinWaitTime; // 0x1410 (0x4)
	int BulletCountForPerBulletRecoil; // 0x1414 (0x4)
	unsigned char unreflected_1418[0x30]; // 0x1418 (0x30) 
	class UAnimMontage* FireAnimation; // 0x1448 (0x8)
	class UAnimMontage* FireDownsightsAnimation; // 0x1450 (0x8)
	class UAnimMontage* FireFromCrouchWalkAnimation; // 0x1458 (0x8)
	class UAnimMontage* CockingAnimation; // 0x1460 (0x8)
	class UAnimMontage* WeaponFireMontage; // 0x1468 (0x8)
	class UAnimMontage* WeaponFireDownsightsMontage; // 0x1470 (0x8)
	class UAnimMontage* WeaponFireFromCrouchWalkMontage; // 0x1478 (0x8)
	class UAnimMontage* WeaponCockingMontage; // 0x1480 (0x8)
	class UFXSystemComponent* BeamPSC; // 0x1488 (0x8)
	bool bTracerFXSupportsMultipleSimultaneousTracers; // 0x1490 (0x1)
	bool bTracerFXSupportsMultipleSequentialTracers; // 0x1491 (0x1)
	unsigned char unreflected_1492[0x6]; // 0x1492 (0x6) 
	class UNiagaraComponent* TracerBeamFX; // 0x1498 (0x8)
	float CrouchWalkSpeedThreshold; // 0x14a0 (0x4)
	bool bEnableRecoilDelay; // 0x14a4 (0x1)
	unsigned char unreflected_14a5[0x3]; // 0x14a5 (0x3) 
	float ReticleSpreadZeroingDistanceFromMuzzle; // 0x14a8 (0x4)
	unsigned char unreflected_14ac[0x24]; // 0x14ac (0x24) 
	struct FMulticastInlineDelegate OnOverheatValueChanged; // 0x14d0 (0x10)
	enum EFortWeaponOverheatState OverheatState; // 0x14e0 (0x1)
	unsigned char unreflected_14e1[0x7]; // 0x14e1 (0x7) 
	class UAnimMontage* OverheatedAnimation; // 0x14e8 (0x8)
	class UAnimMontage* WeaponOverheatedAnimation; // 0x14f0 (0x8)
	bool bCooldownWhileOverheated; // 0x14f8 (0x1)
	bool bShouldDisplayReticleOverheatIndicator; // 0x14f9 (0x1)
	unsigned char unreflected_14fa[0x2]; // 0x14fa (0x2) 
	float OverheatValue; // 0x14fc (0x4)
	unsigned char unreflected_1500[0x4]; // 0x1500 (0x4) 
	float TimeHeatWasLastAdded; // 0x1504 (0x4)
	float TimeOverheatedBegan; // 0x1508 (0x4)
	bool bCacheAimPointOnFire; // 0x150c (0x1)
	unsigned char unreflected_150d[0x3]; // 0x150d (0x3) 
	struct FVector CachedAimPoint; // 0x1510 (0x18)
	unsigned char unreflected_1528[0x18]; // 0x1528 (0x18) 
	struct TScriptInterface<class IFortAthenaAILODSettings> CachedLODSettingsManager; // 0x1540 (0x10)
	unsigned char unreflected_1550[0x8]; // 0x1550 (0x8) 
	bool bUseTargetingBasedLOD; // 0x1558 (0x1)
	unsigned char padding_1559[0x7]; // 0x1559 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponRanged.UseScopeTargeting (Underlying native function: UseScopeTargeting 0x241a7f0)
	bool UseScopeTargeting(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.UseFirstPersonTargeting (Underlying native function: UseFirstPersonTargeting 0x905a150)
	bool UseFirstPersonTargeting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.TempHack_PlayOverheatedAnimation (Underlying native function: TempHack_PlayOverheatedAnimation 0x905a128)
	void TempHackPlayOverheatedAnimation(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortWeaponRanged.ShouldSpawnBulletShellFX (Underlying native function: ShouldSpawnBulletShellFX 0x905a0a4)
	bool ShouldSpawnBulletShellFX(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.ShouldPlayShellFX (Underlying native function: ShouldPlayShellFX 0x24df3ac)
	bool ShouldPlayShellFX(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.ShouldPlayReloadFX (Underlying native function: ShouldPlayReloadFX 0x2a81670)
	bool ShouldPlayReloadFX(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.ShouldPlayPersistentFireFX (Underlying native function: ShouldPlayPersistentFireFX 0x2f5d83c)
	bool ShouldPlayPersistentFireFX(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.ShouldHideReticleAmmoCounterWhileTargeting (Underlying native function: ShouldHideReticleAmmoCounterWhileTargeting 0x905a054)
	bool ShouldHideReticleAmmoCounterWhileTargeting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.ShouldDisplayReticleOverheatIndicator (Underlying native function: ShouldDisplayReticleOverheatIndicator 0x905a03c)
	bool ShouldDisplayReticleOverheatIndicator(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.ShouldDisplayReticleAmmoCounter (Underlying native function: ShouldDisplayReticleAmmoCounter 0x905a014)
	bool ShouldDisplayReticleAmmoCounter(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.ShouldDisplayAmmoCounterDuringSecondaryFire (Underlying native function: ShouldDisplayAmmoCounterDuringSecondaryFire 0x9059ff8)
	bool ShouldDisplayAmmoCounterDuringSecondaryFire(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.ShouldDisplayAmmoCounter (Underlying native function: ShouldDisplayAmmoCounter 0x9059fd0)
	bool ShouldDisplayAmmoCounter(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.SetUseTracers (Underlying native function: SetUseTracers 0x9059d28)
	void SetUseTracers(bool& bNewUseTracers); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.SetUseShellsParticles (Underlying native function: SetUseShellsParticles 0x9059c98)
	void SetUseShellsParticles(bool& bNewUseShellsParticles); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.SetUseOverrideBaseSpread (Underlying native function: SetUseOverrideBaseSpread 0x9059c18)
	void SetUseOverrideBaseSpread(bool& bUseOverride); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.SetUseImpactDecals (Underlying native function: SetUseImpactDecals 0x9059b88)
	void SetUseImpactDecals(bool& bNewUseImpactDecals); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.SetUseBeamParticles (Underlying native function: SetUseBeamParticles 0x9059af8)
	void SetUseBeamParticles(bool& bNewUseBeamParticles); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.SetShellReloadCounter (Underlying native function: SetShellReloadCounter 0x9059a7c)
	void SetShellReloadCounter(int& InputShellReloadCounter); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.SetHomingTarget (Underlying native function: SetHomingTarget 0x9059978)
	void SetHomingTarget(class AFortPawn*& PlayerPawn); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.SetDecalColorStart (Underlying native function: SetDecalColorStart 0x90598fc)
	void SetDecalColorStart(struct FLinearColor& InputDecalColorStart); // (Final | Native | Protected | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.SetDecalColorEnd (Underlying native function: SetDecalColorEnd 0x9059880)
	void SetDecalColorEnd(struct FLinearColor& InputDecalColorEnd); // (Final | Native | Protected | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.SetBeamParticleSystem (Underlying native function: SetBeamParticleSystem 0x90597f0)
	class UParticleSystem* SetBeamParticleSystem(class UParticleSystem*& InputBeamParticleSystem); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.SetBeamNiagaraSystem (Underlying native function: SetBeamNiagaraSystem 0x9059760)
	class UNiagaraSystem* SetBeamNiagaraSystem(class UNiagaraSystem*& InputBeamNiagaraSystem); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.ServerSetMuzzleTraceNearWall (Underlying native function: ServerSetMuzzleTraceNearWall 0x90596dc)
	void ServerSetMuzzleTraceNearWall(bool& bIsNearWall); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortWeaponRanged.ReleaseShellsFXNative (Underlying native function: ReleaseShellsFXNative 0x9059458)
	void ReleaseShellsFXNative(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.OnStartOverheated (Has no native function)
	void OnStartOverheated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged.OnStartHeating (Has no native function)
	void OnStartHeating(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged.OnStartCooling (Has no native function)
	void OnStartCooling(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged.OnSpawnProjectile (Has no native function)
	void OnSpawnProjectile(class AFortProjectileBase*& SpawnProjectile); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged.OnRep_OverheatState (Underlying native function: OnRep_OverheatState 0x9058fe8)
	void OnRepOverheatState(enum EFortWeaponOverheatState& PreviousOverheatState); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortWeaponRanged.OnLocalFailedToFireWhenOverheated (Has no native function)
	void OnLocalFailedToFireWhenOverheated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged.OnFinishedCooling (Has no native function)
	void OnFinishedCooling(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged.IsUsingScopeOrFirstPersonCamera (Underlying native function: IsUsingScopeOrFirstPersonCamera 0x905895c)
	bool IsUsingScopeOrFirstPersonCamera(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.IsUsingScope (Underlying native function: IsUsingScope 0x9058938)
	bool IsUsingScope(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.IsUsingFirstPersonCamera (Underlying native function: IsUsingFirstPersonCamera 0x90588cc)
	bool IsUsingFirstPersonCamera(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.IsOverheated (Underlying native function: IsOverheated 0x90588a8)
	bool IsOverheated(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.IsCachedIsProjectileWeapon (Underlying native function: IsCachedIsProjectileWeapon 0x224f27c)
	bool IsCachedIsProjectileWeapon(); // (Native | Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.InitUpdateOverheatingState (Underlying native function: InitUpdateOverheatingState 0x9058724)
	void InitUpdateOverheatingState(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.InitializeBeamFX (Underlying native function: InitializeBeamFX 0x90587bc)
	void InitializeBeamFX(class UFXSystemComponent*& InBeamPSC); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.GetWeaponFireMontage (Underlying native function: GetWeaponFireMontage 0x7597894)
	class UAnimMontage* GetWeaponFireMontage(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetWeaponFireDownsightsMontage (Underlying native function: GetWeaponFireDownsightsMontage 0x9058438)
	class UAnimMontage* GetWeaponFireDownsightsMontage(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetUseBeamParticles (Underlying native function: GetUseBeamParticles 0x2574a94)
	bool GetUseBeamParticles(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetUniqueMuzzleSocketNames (Underlying native function: GetUniqueMuzzleSocketNames 0xe57c40)
	void GetUniqueMuzzleSocketNames(struct TArray<struct FName>& Names); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetTracerTemplate (Underlying native function: GetTracerTemplate 0x8ea9960)
	class UClass* GetTracerTemplate(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetShellReloadCounter (Underlying native function: GetShellReloadCounter 0x9058354)
	int GetShellReloadCounter(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetScopePostProcessMaterial (Underlying native function: GetScopePostProcessMaterial 0x9058338)
	struct TArray<struct FWeightedBlendable> GetScopePostProcessMaterial(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetScopeParameters (Has no native function)
	void GetScopeParameters(class UStaticMeshComponent*& ScopeComponent, struct FVector2D& DepthOfFieldVignetteRange, struct FVector& WeaponSightsOffset); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged.GetOverheatState (Underlying native function: GetOverheatState 0x905828c)
	enum EFortWeaponOverheatState GetOverheatState(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetOverheatingMaxValue (Underlying native function: GetOverheatingMaxValue 0x90582a4)
	float GetOverheatingMaxValue(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetMaxAdditionalPatternSpreadDegrees (Underlying native function: GetMaxAdditionalPatternSpreadDegrees 0x90581f0)
	float GetMaxAdditionalPatternSpreadDegrees(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetFireDownsightsAnimation (Underlying native function: GetFireDownsightsAnimation 0x9058168)
	class UAnimMontage* GetFireDownsightsAnimation(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetFireAnimation (Underlying native function: GetFireAnimation 0x9058144)
	class UAnimMontage* GetFireAnimation(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetCurrentReticleSpreadMultiplier (Underlying native function: GetCurrentReticleSpreadMultiplier 0x905810c)
	float GetCurrentReticleSpreadMultiplier(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetCurrentOverheatValue (Underlying native function: GetCurrentOverheatValue 0x90580f4)
	float GetCurrentOverheatValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetCalculatedReticleSpread (Underlying native function: GetCalculatedReticleSpread 0x90580cc)
	float GetCalculatedReticleSpread(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetBeamPSC (Underlying native function: GetBeamPSC 0x9058044)
	class UParticleSystemComponent* GetBeamPSC(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetBeamParticleSystem (Underlying native function: GetBeamParticleSystem 0x90580b4)
	class UParticleSystem* GetBeamParticleSystem(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetBeamNiagaraSystem (Underlying native function: GetBeamNiagaraSystem 0x905802c)
	class UNiagaraSystem* GetBeamNiagaraSystem(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetBeamNiagaraComponent (Underlying native function: GetBeamNiagaraComponent 0x9057fbc)
	class UNiagaraComponent* GetBeamNiagaraComponent(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetADSTransitionOutTime (Underlying native function: GetADSTransitionOutTime 0x9057ef8)
	float GetADSTransitionOutTime(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.GetADSTransitionInTime (Underlying native function: GetADSTransitionInTime 0x9057ed0)
	float GetADSTransitionInTime(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.ForceScopeFX (Has no native function)
	void ForceScopeFX(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged.EnableCornersReticle (Underlying native function: EnableCornersReticle 0x9057e44)
	void EnableCornersReticle(bool& bNewEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.EnableAltOuterReticle (Underlying native function: EnableAltOuterReticle 0x9057db8)
	void EnableAltOuterReticle(bool& bNewEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.EnableAltCenterReticle (Underlying native function: EnableAltCenterReticle 0x9057d2c)
	void EnableAltCenterReticle(bool& bNewEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.DoesWeaponOverheat (Underlying native function: DoesWeaponOverheat 0x9057cf4)
	bool DoesWeaponOverheat(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.DeactivateShellsFXNative (Underlying native function: DeactivateShellsFXNative 0x2b79cec)
	void DeactivateShellsFXNative(struct FName& SpawnProbabilityName); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.DeactivateMuzzleFlashFXNative (Underlying native function: DeactivateMuzzleFlashFXNative 0x1eafd34)
	void DeactivateMuzzleFlashFXNative(struct TArray<class UParticleSystemComponent*>& LegacyMuzzleFXComponents); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.DeactivateBeamFX (Underlying native function: DeactivateBeamFX 0x2d868dc)
	void DeactivateBeamFX(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.ClientFixupOverheatValue (Underlying native function: ClientFixupOverheatValue 0x9057be8)
	void ClientFixupOverheatValue(float& InOverheatValue); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortWeaponRanged.ClientFixOverheatState (Underlying native function: ClientFixOverheatState 0x9057b64)
	void ClientFixOverheatState(enum EFortWeaponOverheatState& NewOverheatState); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortWeaponRanged.ClearHomingTarget (Underlying native function: ClearHomingTarget 0x9057b40)
	void ClearHomingTarget(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.ActivateShellsFXNative (Underlying native function: ActivateShellsFXNative 0xfaf29c)
	void ActivateShellsFXNative(class UNiagaraSystem*& ShellBurstFX, class UNiagaraSystem*& ShellLoopingFX, struct FName& ShellSocketName, struct FName& RotationRateName, struct FVector& RotationRate, struct FName& VelocityName, struct FVector& Velocity, struct FName& GravityName, struct FVector& Gravity, struct FName& SizeName, struct FVector& Size, struct FName& ParentVelocityName, struct FVector& ParentVelocity, struct FName& RadiusName, float& Radius, struct FName& HeightName, float& Height, struct FName& ColorName, struct FLinearColor& ShellColor, struct FName& ShellTypeName, int& ShellTypeInt, float& CullDistance, bool& bUseShellsOnReload, struct FName& SpawnProbabilityName, float& SpawnRateScale); // (Final | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.ActivateMuzzleFlashFXNative (Underlying native function: ActivateMuzzleFlashFXNative 0xfaffac)
	void ActivateMuzzleFlashFXNative(bool& bPersistantFire, bool& bMuzzleUsesNiagara, struct TWeakObjectPtr<class UNiagaraSystem>& MuzzleNiagaraAsset, struct TArray<class UParticleSystemComponent*>& LegacyMuzzleFXComponents, float& MuzzleChanceOfLargeFlash, float& MuzzleFlashLargeMinScale, float& MuzzleFlashLargeMaxScale, float& MuzzleFlashSmallMinScale, float& MuzzleFlashSmallMaxScale); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.AbortScopeFX (Has no native function)
	void AbortScopeFX(); // (Event | Public | BlueprintEvent)
};


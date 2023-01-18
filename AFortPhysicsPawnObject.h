// Class /Script/FortniteGame.FortPhysicsPawnObject
// Size: 0xb90
class AFortPhysicsPawnObject : public AFortPhysicsPawn
{
	unsigned char unreflected_480[0x28]; // 0x480 (0x28) 
	class UStaticMeshComponent* PhysicsMeshComponent; // 0x4a8 (0x8)
	class UStaticMeshComponent* VisibleMeshComponent; // 0x4b0 (0x8)
	struct TEnumAsByte<EPhysicalSurface> PrimarySurfaceType; // 0x4b8 (0x1)
	struct TEnumAsByte<EFortBaseWeaponDamage> WeaponResponseType; // 0x4b9 (0x1)
	bool bShowDamageNumbers; // 0x4ba (0x1)
	bool bPlayDamageAudio; // 0x4bb (0x1)
	unsigned char unreflected_4bc[0x4]; // 0x4bc (0x4) 
	struct FGameplayTagContainer IgnoreImpulseTags; // 0x4c0 (0x20)
	struct FGameplayTagContainer PhysicsObjectTags; // 0x4e0 (0x20)
	float ImpulseResponseMultiplier; // 0x500 (0x4)
	float ImpulseResponseZBias; // 0x504 (0x4)
	struct FVector TestInitialLinearVelocity; // 0x508 (0x18)
	struct FVector TestInitialAngularVelocity; // 0x520 (0x18)
	struct FHitResult LookAheadHit; // 0x538 (0xe0)
	float CachedSpeed; // 0x618 (0x4)
	unsigned char unreflected_61c[0x4]; // 0x61c (0x4) 
	class UWeaponHitNotifyAudioBank* DefaultHitNotifyAudioBank; // 0x620 (0x8)
	struct FMulticastInlineDelegate OnHealthChanged; // 0x628 (0x10)
	float LifespanAfterDeath; // 0x638 (0x4)
	bool bPlayedDying; // 0x63c (0x1)
	unsigned char unreflected_63d[0x3]; // 0x63d (0x3) 
	float LastDamagedTime; // 0x640 (0x4)
	unsigned char unreflected_644[0x34]; // 0x644 (0x34) 
	class UClass* PlayerCollisionGameplayEffect; // 0x678 (0x8)
	unsigned char unreflected_680[0x38]; // 0x680 (0x38) 
	struct FVehicleTargetOrientation CorrectTargetOrientation; // 0x6b8 (0x48)
	unsigned char unreflected_700[0xa8]; // 0x700 (0xa8) 
	struct FFortAttributeInitializationKey* AttributeInitKey; // 0x7a8 (0x8)
	class UFortAbilitySystemComponent* AbilitySystemComponent; // 0x7b0 (0x8)
	class UFortHealthSet* HealthSet; // 0x7b8 (0x8)
	class UFortAthenaImpulseResponseSet* ImpulseResponseSet; // 0x7c0 (0x8)
	class UFortDamageSet* DamageSet; // 0x7c8 (0x8)
	class UFortHealthBarIndicator* HealthBarIndicator; // 0x7d0 (0x8)
	bool bPendingDeath; // 0x7d8 (0x1)
	unsigned char unreflected_7d9[0x7]; // 0x7d9 (0x7) 
	struct FGameplayTagContainer GameplayTags; // 0x7e0 (0x20)
	struct TArray<class UBuildingEditModeMetadata*> WallsPhysicsObjectCanDestroy; // 0x800 (0x10)
	struct TArray<class UClass*> BuildingPropClassesPhysicsObjectCanDestroy; // 0x810 (0x10)
	unsigned char unreflected_820[0x1]; // 0x820 (0x1) 
	struct TEnumAsByte<EPhysicalSurface> SurfaceTypePhysicsObjectOn; // 0x821 (0x1)
	unsigned char unreflected_822[0x6]; // 0x822 (0x6) 
	struct FMulticastInlineDelegate OnSurfaceTypePhysicsObjectIsOnChangedDelegate; // 0x828 (0x10)
	class UFortAbilitySet* StartupAbilitySet; // 0x838 (0x8)
	unsigned char unreflected_840[0x10]; // 0x840 (0x10) 
	struct FTimeStampedPhysicsPawnState CurrentServerPhysicsState; // 0x850 (0x90)
	unsigned char unreflected_8e0[0xa0]; // 0x8e0 (0xa0) 
	struct FHitData LastServerConfirmedHit; // 0x980 (0xc0)
	unsigned char unreflected_a40[0x110]; // 0xa40 (0x110) 
	struct FPhysicsPawnObjectInitialParameters InitialParameters; // 0xb50 (0x30)
	struct TArray<class UClass*> ActorsObjectDiesWhenHitting; // 0xb80 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPhysicsPawnObject.WakeUpOnGroundDied (Underlying native function: WakeUpOnGroundDied 0x830b500)
	void WakeUpOnGroundDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Public | HasDefaults)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.WakeUp (Underlying native function: WakeUp 0x109ebf0)
	void WakeUp(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.UpdateClientWithPhysicsObjectTestInput (Underlying native function: UpdateClientWithPhysicsObjectTestInput 0x8547bc8)
	void UpdateClientWithPhysicsObjectTestInput(struct FVector& LinearVelocity, struct FVector& AngularVelocity); // (Net | NetReliable | Native | Event | NetMulticast | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.TurnOffClientPrediction (Underlying native function: TurnOffClientPrediction 0x8547adc)
	void TurnOffClientPrediction(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.SpawnPhysicsPawnObject (Underlying native function: SpawnPhysicsPawnObject 0x85478e4)
	static class AFortPhysicsPawnObject* SpawnPhysicsPawnObject(class UObject*& WorldContextObject, class UClass*& ActorClass, struct FTransform& Transform, struct FPhysicsPawnObjectInitialParameters& InitialParameters); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.SetPropDestructionParams (Underlying native function: SetPropDestructionParams 0x8547594)
	void SetPropDestructionParams(struct TArray<class UClass*>& InBuildingPropClassesPhysicsObjectCanDestroy, struct TArray<class UBuildingEditModeMetadata*>& InWallsPhysicsObjectCanDestroy); // (Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.SetImpulseResponseZBias (Underlying native function: SetImpulseResponseZBias 0x85474fc)
	void SetImpulseResponseZBias(float& ZBias); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.SetImpulseResponseMultiplier (Underlying native function: SetImpulseResponseMultiplier 0x8547464)
	void SetImpulseResponseMultiplier(float& Multiplier); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.SetHealthPercent (Underlying native function: SetHealthPercent 0x85473e0)
	void SetHealthPercent(float& Percent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.SetDyingPhysics (Underlying native function: SetDyingPhysics 0x2256e88)
	void SetDyingPhysics(); // (Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.ServerBroadcastHitFromClient (Underlying native function: ServerBroadcastHitFromClient 0x8546ed0)
	void ServerBroadcastHitFromClient(class APlayerController*& HittingController, class APawn*& HittingPawn, struct FVector& VelocityOfHitter, struct FVector& HitNormal, struct FTimeStampedPhysicsPawnState& ClientBallState); // (Final | Net | NetReliable | Native | Event | NetMulticast | Private | HasDefaults)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.ServerBroadcastHit (Underlying native function: ServerBroadcastHit 0x8546da0)
	void ServerBroadcastHit(class APawn*& ImpulseInstigator, struct FVector& ImpactPoint, struct FVector& ImpulseValue); // (Final | Net | NetReliable | Native | Event | NetMulticast | Private | HasDefaults)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.SendClientStateToServer_Helper (Underlying native function: SendClientStateToServer_Helper 0x8546d8c)
	void SendClientStateToServerHelper(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.PawnHitByPhysicsObject (Has no native function)
	void PawnHitByPhysicsObject(class AFortPawn*& Pawn, struct FVector& ImpactPoint, struct FVector& ImpactNormal, struct FVector& LaunchVector); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.OnSurfaceTypePhysicsObjectIsOnChanged (Has no native function)
	void OnSurfaceTypePhysicsObjectIsOnChanged(struct TEnumAsByte<EPhysicalSurface>& SurfaceTypePhysicsObjectIsOn); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.OnStopTick (Has no native function)
	void OnStopTick(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.OnStartTick (Has no native function)
	void OnStartTick(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.OnRep_SurfaceTypePhysicsObjectOn (Underlying native function: OnRep_SurfaceTypePhysicsObjectOn 0x8546b38)
	void OnRepSurfaceTypePhysicsObjectOn(struct TEnumAsByte<EPhysicalSurface>& PreviousSurfaceOn); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.OnRep_PendingDeath (Underlying native function: OnRep_PendingDeath 0x8546a84)
	void OnRepPendingDeath(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.OnRep_LastServerConfirmedHit (Underlying native function: OnRep_LastServerConfirmedHit 0x8546a5c)
	void OnRepLastServerConfirmedHit(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.OnRep_InitialParameters (Underlying native function: OnRep_InitialParameters 0x8546a34)
	void OnRepInitialParameters(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.OnRep_HealthSet (Underlying native function: OnRep_HealthSet 0x26daa0c)
	void OnRepHealthSet(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.OnRep_CurrentServerPhysicsState (Underlying native function: OnRep_CurrentServerPhysicsState 0x85469bc)
	void OnRepCurrentServerPhysicsState(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.OnRep_CorrectTargetOrientation (Underlying native function: OnRep_CorrectTargetOrientation 0x85469a4)
	void OnRepCorrectTargetOrientation(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.OnRep_AbilitySystemComponent (Underlying native function: OnRep_AbilitySystemComponent 0x26daa0c)
	void OnRepAbilitySystemComponent(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.OnPxComponentWake (Underlying native function: OnPxComponentWake 0x85468c8)
	void OnPxComponentWake(class UPrimitiveComponent*& WakingComponent, struct FName& BoneName); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.OnImpactDamageApplied (Has no native function)
	void OnImpactDamageApplied(float& Damage, struct FVector& ImpactNormal); // (Event | Public | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.OnExitedWaterVolume (Has no native function)
	void OnExitedWaterVolume(struct FVector& WaterSurfacePoint); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.OnEnteredWaterVolume (Has no native function)
	void OnEnteredWaterVolume(struct FVector& WaterSurfacePoint); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.OnDeathPlayEffects (Has no native function)
	void OnDeathPlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.OnDamagePlayEffects (Has no native function)
	void OnDamagePlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.OnDamaged (Has no native function)
	void OnDamaged(float& Damage, struct FGameplayTagContainer& DamageTags, struct FGameplayEffectContextHandle& EffectContext, class AController*& EventInstigator, class AActor*& DamageCauser); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.OnCollisionHitServer (Has no native function)
	void OnCollisionHitServer(struct FVector& HitLocation, struct FVector& VelocityOfHitter, struct FVector& HitNormal, class AActor*& HitActor, struct TEnumAsByte<EPhysicalSurface>& HitSurfaceType); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.OnCollisionHitDamageEffects (Has no native function)
	void OnCollisionHitDamageEffects(float& DamageTaken); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.OnCollisionHitClient (Has no native function)
	void OnCollisionHitClient(struct FVector& HitLocation, struct FVector& VelocityOfHitter, struct FVector& HitNormal, class AActor*& HitActor, struct TEnumAsByte<EPhysicalSurface>& HitSurfaceType); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.ModifyIncomingDamage (Underlying native function: ModifyIncomingDamage 0x8546558)
	float ModifyIncomingDamage(float& Damage, struct FGameplayTagContainer& InTags, struct FGameplayEffectContextHandle& EffectContext, class AController*& EventInstigator, class AActor*& DamageCauser); // (Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.IsScrapingSidesOrTop (Underlying native function: IsScrapingSidesOrTop 0x8546530)
	bool IsScrapingSidesOrTop(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.IsInWater (Underlying native function: IsInWater 0x8546518)
	bool IsInWater(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.IsInAir (Underlying native function: IsInAir 0x85464f0)
	bool IsInAir(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.IsCorrectingOrientation (Underlying native function: IsCorrectingOrientation 0x85464c8)
	bool IsCorrectingOrientation(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.IsAsleep (Underlying native function: IsAsleep 0x85464b0)
	bool IsAsleep(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.HasPermissionToAlterBuildings (Underlying native function: HasPermissionToAlterBuildings 0x27c9608)
	bool HasPermissionToAlterBuildings(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.GetPreviousLinearVelocity (Underlying native function: GetPreviousLinearVelocity 0x854580c)
	struct FVector GetPreviousLinearVelocity(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.GetPreviousLinearAcceleration (Underlying native function: GetPreviousLinearAcceleration 0x85457e4)
	struct FVector GetPreviousLinearAcceleration(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.GetPreviousForwardSpeedKmh (Underlying native function: GetPreviousForwardSpeedKmh 0x85457b8)
	float GetPreviousForwardSpeedKmh(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.GetPhysicsObjectVelocity (Underlying native function: GetPhysicsObjectVelocity 0x85456a4)
	struct FVector GetPhysicsObjectVelocity(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.GetMaxHealth (Underlying native function: GetMaxHealth 0x85455f4)
	float GetMaxHealth(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.GetHealth (Underlying native function: GetHealth 0x85455d4)
	float GetHealth(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.GetForwardSpeedKmh (Underlying native function: GetForwardSpeedKmh 0x85455a8)
	float GetForwardSpeedKmh(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.GetDisplayName (Underlying native function: GetDisplayName 0x8545530)
	struct FString GetDisplayName(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.GameplayCue_Damage (Underlying native function: GameplayCue_Damage 0x85452fc)
	void GameplayCueDamage(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.DrawServerAndClientBallPosition (Underlying native function: DrawServerAndClientBallPosition 0x854522c)
	void DrawServerAndClientBallPosition(struct FVector& ServerPosition); // (Final | Net | NetReliable | Native | Event | NetMulticast | Private | HasDefaults)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.DestroyPhysicsObject (Underlying native function: DestroyPhysicsObject 0x8545218)
	void DestroyPhysicsObject(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.DebugDrawImpactBucket (Underlying native function: DebugDrawImpactBucket 0x85450ec)
	void DebugDrawImpactBucket(struct FVector& Location, struct FVector& ImpactVector, struct FColor& Color); // (Net | NetReliable | Native | Event | Protected | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.CanTeleport (Underlying native function: CanTeleport 0x8545070)
	bool CanTeleport(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.CanCorrectOrientation (Underlying native function: CanCorrectOrientation 0x8544fdc)
	bool CanCorrectOrientation(class AFortPawn*& FP); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.ApplyPredictedImpulseFromPawnHitClient (Underlying native function: ApplyPredictedImpulseFromPawnHitClient 0x8544eb8)
	void ApplyPredictedImpulseFromPawnHitClient(struct FVector& VelocityOfHitter, struct FVector& NormalTowardObject, class APawn*& HittingPawn); // (Final | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.ApplyImpulseFromPawnHit (Underlying native function: ApplyImpulseFromPawnHit 0x8544d94)
	void ApplyImpulseFromPawnHit(struct FVector& VelocityOfHitter, struct FVector& NormalTowardObject, class APawn*& HittingPawn); // (Final | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsPawnObject.ApplyImpulse (Underlying native function: ApplyImpulse 0x8544c94)
	void ApplyImpulse(class AActor*& ImpulseInstigator, struct FVector& ImpulseToApply); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};


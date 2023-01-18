// Class /Script/FortniteGame.FortPhysicsObjectComponent
// Size: 0x5e0
class UFortPhysicsObjectComponent : public UGameFrameworkComponent
{
	struct FMulticastInlineDelegate OnAwakeChanged; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnReceivedLargeImpulse; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnVehicleHit; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnRidingPawnAdded; // 0xd0 (0x10)
	struct FPhysicsObjectSetupTags PhysicsObjectSetupTags; // 0xe0 (0x10)
	class UBuoyancyComponent* BuoyancyComponent; // 0xf0 (0x8)
	struct FVector PreviousLinearVelocity; // 0xf8 (0x18)
	struct FVector LinearVelocity; // 0x110 (0x18)
	float MaxLinearVelocityOverride; // 0x128 (0x4)
	unsigned char unreflected_12c[0x4]; // 0x12c (0x4) 
	struct FVector PreviousAngularVelocity; // 0x130 (0x18)
	struct FVector AngularVelocity; // 0x148 (0x18)
	float CustomGravityMultiplier; // 0x160 (0x4)
	float GravityOverride; // 0x164 (0x4)
	unsigned char unreflected_168[0x8]; // 0x168 (0x8) 
	struct FPhysicsObjectMovementStateData MovementStateData; // 0x170 (0xf0)
	class UFortPhysicsObjectPreset* PhysicsPreset; // 0x260 (0x8)
	unsigned char unreflected_268[0x28]; // 0x268 (0x28) 
	class UFortPhysicsObjectCollisionEffectsData* EffectsDataOverride; // 0x290 (0x8)
	class UPhysicalMaterial* PhysicalMaterialOverride; // 0x298 (0x8)
	class UFortPhysicsObjectBuoyancyData* BuoyancyAssetOverride; // 0x2a0 (0x8)
	class UFortPhysicsObjectImpactDamageData* ImpactDamageDataOverride; // 0x2a8 (0x8)
	unsigned char unreflected_2b0[0x8]; // 0x2b0 (0x8) 
	class UFortPhysicsObjectNavigationData* NavigationData; // 0x2b8 (0x8)
	unsigned char unreflected_2c0[0x18]; // 0x2c0 (0x18) 
	struct FVector PhysicsObjectInitialLocation; // 0x2d8 (0x18)
	enum EFortPhysicsObjectActivationType ActivationType; // 0x2f0 (0x1)
	enum EFortPhysicsObjectAwakeState PhysicsObjectAwakeState; // 0x2f1 (0x1)
	unsigned char bHasSetupPhysicsObject; // 0x2f2 (0x1)
	unsigned char bServerHasSetupPhysicsObject; // 0x2f2 (0x1)
	unsigned char bForceStartActiveAndAwake; // 0x2f2 (0x1)
	unsigned char bHasComponentActivated; // 0x2f2 (0x1)
	unsigned char bDisableOverlapEvents; // 0x2f3 (0x1)
	unsigned char bDisableMovementStateUpdates; // 0x2f3 (0x1)
	unsigned char bGravityOverridden; // 0x2f3 (0x1)
	unsigned char unreflected_2f4[0xc]; // 0x2f4 (0xc) 
	struct FPhysicsObjectDeactivationSnapshot DeactivationSnapshotData; // 0x300 (0x40)
	class UPrimitiveComponent* SimulatingComponent; // 0x340 (0x8)
	class UFortLinkToActorComponent* LinkToActorComponent; // 0x348 (0x8)
	unsigned char unreflected_350[0x68]; // 0x350 (0x68) 
	struct FPhysicsObjectImpactInstigatorData ImpactInstigatorData; // 0x3b8 (0x10)
	unsigned char unreflected_3c8[0x158]; // 0x3c8 (0x158) 
	struct TArray<class AActor*> IgnoredActorsForDamage; // 0x520 (0x10)
	struct TArray<struct TWeakObjectPtr<class AFortPawn>> IgnoredPawns; // 0x530 (0x10)
	struct TArray<struct TWeakObjectPtr<class AFortPawn>> IgnoredPawnsPendingRemoval; // 0x540 (0x10)
	unsigned char padding_550[0x90]; // 0x550 (0x90)

	/* Functions */

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.WakeUpPhysicsObject (Underlying native function: WakeUpPhysicsObject 0x8d3ac90)
	static void WakeUpPhysicsObject(class AActor*& PhysicsObject, enum EFortPhysicsObjectActivationType& InActivationType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.WakeUp (Underlying native function: WakeUp 0x8d3ac10)
	void WakeUp(enum EFortPhysicsObjectActivationType& InActivationType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.SetPhysicsObjectPhysicalDataTag (Underlying native function: SetPhysicsObjectPhysicalDataTag 0x8d3a9a8)
	static void SetPhysicsObjectPhysicalDataTag(class AActor*& PhysicsObject, struct FGameplayTag& InPhysicsObjectPresetTag); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.SetMaxLinearVelocity (Underlying native function: SetMaxLinearVelocity 0x8d3a574)
	void SetMaxLinearVelocity(float& InMaxLinearVelocityOverride); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.SetMassOverride (Underlying native function: SetMassOverride 0x5e520d0)
	void SetMassOverride(float& InMassOverride, bool& bInScaleMassWithObjectScale); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.SetLinearDampingOverride (Underlying native function: SetLinearDampingOverride 0x5e52030)
	void SetLinearDampingOverride(float& InLinearDampingOverride); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.SetGravityOverride (Underlying native function: SetGravityOverride 0x8d3a398)
	void SetGravityOverride(bool& bInGravityOverridden, float& InGravityOverride); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.SetBaseDamageOverrides (Underlying native function: SetBaseDamageOverrides 0x8d3a204)
	void SetBaseDamageOverrides(struct FFortPhysicsObjectBaseDamageOverrides& InBaseDamageOverrides); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.SetAngularDamping (Underlying native function: SetAngularDamping 0x5e51db0)
	static void SetAngularDamping(class AActor*& PhysicsObject, struct TArray<struct FGameplayTag>& PresetTagsRequired, bool& bUsePresetValue, float& InAngularDamping); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.RemoveFromIgnoredDamageActors (Underlying native function: RemoveFromIgnoredDamageActors 0x8d3a17c)
	void RemoveFromIgnoredDamageActors(class AActor*& InActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.PutToSleepPhysicsObject (Underlying native function: PutToSleepPhysicsObject 0x8d3a0e0)
	static void PutToSleepPhysicsObject(class AActor*& PhysicsObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.PutToSleep (Underlying native function: PutToSleep 0x8d3a00c)
	void PutToSleep(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.OnRep_ServerHasSetupPhysicsObject (Underlying native function: OnRep_ServerHasSetupPhysicsObject 0x28cc0d0)
	void OnRepServerHasSetupPhysicsObject(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.OnRep_PhysicsObjectSetupTags (Underlying native function: OnRep_PhysicsObjectSetupTags 0x8d39d7c)
	void OnRepPhysicsObjectSetupTags(struct FPhysicsObjectSetupTags& PrevPhysicsObjectSetupTags); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.OnRep_DisableOverlapEvents (Underlying native function: OnRep_DisableOverlapEvents 0x8d39d68)
	void OnRepDisableOverlapEvents(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.OnRep_DisableMovementStateUpdates (Underlying native function: OnRep_DisableMovementStateUpdates 0x8d39d0c)
	void OnRepDisableMovementStateUpdates(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.OnRep_DeactivationSnapshotData (Underlying native function: OnRep_DeactivationSnapshotData 0x8d39cf8)
	void OnRepDeactivationSnapshotData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.OnRep_AwakeState (Underlying native function: OnRep_AwakeState 0xe99ebc)
	void OnRepAwakeState(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.OnRep_ActivationType (Underlying native function: OnRep_ActivationType 0x1deadf0)
	void OnRepActivationType(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.IsAwake (Underlying native function: IsAwake 0x2f6013c)
	bool IsAwake(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.IncrementNeverSleep (Underlying native function: IncrementNeverSleep 0x8d394cc)
	void IncrementNeverSleep(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.IgnorePawnForCollision (Underlying native function: IgnorePawnForCollision 0x8d38fec)
	void IgnorePawnForCollision(class AFortPawn*& Pawn, bool& bIgnore, bool& bIgnoreQueryCollision); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.HandleSimulatingComponentWake (Underlying native function: HandleSimulatingComponentWake 0x8d38e50)
	void HandleSimulatingComponentWake(class UPrimitiveComponent*& WakingComponent, struct FName& BoneName); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.HandleSimulatingComponentSleep (Underlying native function: HandleSimulatingComponentSleep 0x2b87cdc)
	void HandleSimulatingComponentSleep(class UPrimitiveComponent*& SleepingComponent, struct FName& BoneName); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.HandleSimulatingComponentHit (Underlying native function: HandleSimulatingComponentHit 0x1610134)
	void HandleSimulatingComponentHit(class UPrimitiveComponent*& HitComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, struct FVector& NormalImpulse, struct FHitResult& Hit); // (Final | Native | Private | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.HandlePreAbilitySystemComponentInitialized (Underlying native function: HandlePreAbilitySystemComponentInitialized 0x8d38e3c)
	void HandlePreAbilitySystemComponentInitialized(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.HandleEnteredWaterBody (Underlying native function: HandleEnteredWaterBody 0x8d38d78)
	void HandleEnteredWaterBody(struct FSphericalPontoon& FXPoint); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.HandleConnectedPhysicsActorWake (Underlying native function: HandleConnectedPhysicsActorWake 0x8d38cf8)
	void HandleConnectedPhysicsActorWake(class AActor*& PhysicsActor); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.HandleConnectedActorDestroyed (Underlying native function: HandleConnectedActorDestroyed 0x8d38c78)
	void HandleConnectedActorDestroyed(class AActor*& DamageCauser); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.HandleBuildingAbilitySystemComponentInitialized (Underlying native function: HandleBuildingAbilitySystemComponentInitialized 0x284f9a0)
	void HandleBuildingAbilitySystemComponentInitialized(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.HandleBasingChange (Underlying native function: HandleBasingChange 0x8d38af8)
	void HandleBasingChange(class AFortPawn*& BasedPawn); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.GetSimulatingComponent (Underlying native function: GetSimulatingComponent 0x8843214)
	class UPrimitiveComponent* GetSimulatingComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.GetMovingStateData (Underlying native function: GetMovingStateData 0x8d38538)
	void GetMovingStateData(class AActor*& OutInstigator, struct FHitResult& OutHitResult, float& OutLinearSpeed, enum EFortPhysicsObjectMovementState& OutMovementState); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.GetMaxLinearVelocityOverride (Underlying native function: GetMaxLinearVelocityOverride 0x8d38520)
	float GetMaxLinearVelocityOverride(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.GetGravity (Underlying native function: GetGravity 0x8d3832c)
	float GetGravity(bool& bUseGravityMultiplier); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.EnableOverlapEvents (Underlying native function: EnableOverlapEvents 0x8d37cbc)
	static void EnableOverlapEvents(class AActor*& PhysicsObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.EnableMovementStateUpdates (Underlying native function: EnableMovementStateUpdates 0x8d37c0c)
	static void EnableMovementStateUpdates(class AActor*& PhysicsObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.DisableOverlapEvents (Underlying native function: DisableOverlapEvents 0x8d37a10)
	static void DisableOverlapEvents(class AActor*& PhysicsObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.DisableMovementStateUpdates (Underlying native function: DisableMovementStateUpdates 0x8d37960)
	static void DisableMovementStateUpdates(class AActor*& PhysicsObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.DeferredSetupPhysicsObject (Underlying native function: DeferredSetupPhysicsObject 0x8d3794c)
	void DeferredSetupPhysicsObject(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.DecrementNeverSleep (Underlying native function: DecrementNeverSleep 0x8d37938)
	void DecrementNeverSleep(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.DeactivatePhysicsObject (Underlying native function: DeactivatePhysicsObject 0x71a663c)
	static void DeactivatePhysicsObject(class AActor*& PhysicsObject); // (Final | Native | Static | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.ClearIgnoredDamageActors (Underlying native function: ClearIgnoredDamageActors 0x8d36714)
	void ClearIgnoredDamageActors(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.CacheLastPlayerHit (Underlying native function: CacheLastPlayerHit 0x8d36614)
	void CacheLastPlayerHit(class AFortPlayerPawn*& Player); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.BP_HasSetupPhysicsObject (Underlying native function: BP_HasSetupPhysicsObject 0x8d36054)
	static bool BPHasSetupPhysicsObject(class AActor*& PhysicsObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.AddToIgnoredDamageActors (Underlying native function: AddToIgnoredDamageActors 0x8d35f88)
	void AddToIgnoredDamageActors(class AActor*& InActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsObjectComponent.ActivatePhysicsObject (Underlying native function: ActivatePhysicsObject 0x71a663c)
	static void ActivatePhysicsObject(class AActor*& PhysicsObject); // (Final | Native | Static | Private | BlueprintCallable)
};


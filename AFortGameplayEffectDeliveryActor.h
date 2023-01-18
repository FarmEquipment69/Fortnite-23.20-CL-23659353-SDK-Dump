// Class /Script/FortniteGame.FortGameplayEffectDeliveryActor
// Size: 0x668
class AFortGameplayEffectDeliveryActor : public AActor
{
	unsigned char unreflected_288[0x30]; // 0x288 (0x30) 
	struct FFortGameplayEffectContainerSpec EffectContainerSpecToApplyOnTouch; // 0x2b8 (0xb8)
	bool bKillOnExplode; // 0x370 (0x1)
	bool bSetHiddenOnKill; // 0x371 (0x1)
	bool bKillOnMaxTargetsTouched; // 0x372 (0x1)
	bool bSkipRecaptureSourceActorTagsOnTouch; // 0x373 (0x1)
	unsigned char unreflected_374[0x4]; // 0x374 (0x4) 
	struct FFortGameplayEffectContainerSpec EffectContainerSpecToApplyOnExplode; // 0x378 (0xb8)
	struct TArray<struct FFortGameplayEffectContainerSpec> AdditionalExplodeEffectContainers; // 0x430 (0x10)
	float LifespanAfterKill; // 0x440 (0x4)
	float TouchingActorsEffectApplicationUpdateTime; // 0x444 (0x4)
	struct TArray<struct FOverlapRestrictions*> OverlapRestrictions; // 0x448 (0x10)
	unsigned char bIsBeingKilled; // 0x458 (0x1)
	unsigned char bHasExploded; // 0x458 (0x1)
	unsigned char bIgnoreInstigatorCollision; // 0x458 (0x1)
	unsigned char bIgnoreVehicleAndAttachedActors; // 0x458 (0x1)
	unsigned char bDisableClientOverlapEvents; // 0x458 (0x1)
	unsigned char bAddHitResultToTouchApplication; // 0x458 (0x1)
	unsigned char bExplosionTransformIgnoresRotation; // 0x458 (0x1)
	unsigned char bCanExplodeMultipleTimes; // 0x459 (0x1)
	unsigned char bRegisterForEndOverlaps; // 0x459 (0x1)
	unsigned char bSpawnNavAreaModifierOverTargetSelectionShape; // 0x459 (0x1)
	unsigned char unreflected_45a[0x6]; // 0x45a (0x6) 
	class UClass* NavAreaClass; // 0x460 (0x8)
	struct FGameplayTag CurieIdentifier; // 0x468 (0x4)
	unsigned char unreflected_46c[0x4]; // 0x46c (0x4) 
	class UPrimitiveComponent* CollisionComponent; // 0x470 (0x8)
	class UFortWorldItemDefinition* AssociatedItemDef; // 0x478 (0x8)
	struct FFortSpawnContext SpawnContext; // 0x480 (0x28)
	unsigned char unreflected_4a8[0x168]; // 0x4a8 (0x168) 
	unsigned char bDoExplosionReentrancyGuard; // 0x610 (0x1)
	unsigned char unreflected_611[0x7]; // 0x611 (0x7) 
	struct TArray<class AActor*> InstigatorActorsAdded; // 0x618 (0x10)
	unsigned char unreflected_628[0x20]; // 0x628 (0x20) 
	struct FGameplayTagContainer AnalyticsTags; // 0x648 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.SetNoiseMakingInstigatorOverride (Underlying native function: SetNoiseMakingInstigatorOverride 0x9042620)
	void SetNoiseMakingInstigatorOverride(class AActor*& NewActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.SetIgnoreInstigatorCollision (Underlying native function: SetIgnoreInstigatorCollision 0x2d05b3c)
	void SetIgnoreInstigatorCollision(bool& bShouldIgnore); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.SetCollisionComponent (Underlying native function: SetCollisionComponent 0x90419c4)
	void SetCollisionComponent(class UPrimitiveComponent*& NewCollisionComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.OnTouched (Has no native function)
	void OnTouched(class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, struct FHitResult& HitResult, bool& bIsOverlap); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.OnRep_IsBeingKilled (Underlying native function: OnRep_IsBeingKilled 0x14f68cc)
	void OnRepIsBeingKilled(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.OnRep_HasExplodedReplay (Underlying native function: OnRep_HasExplodedReplay 0x250b1f4)
	void OnRepHasExplodedReplay(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.OnExploded (Has no native function)
	void OnExploded(struct TArray<class AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.OnDisableForKill (Has no native function)
	void OnDisableForKill(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.OnComponentTouch (Underlying native function: OnComponentTouch 0x2027ed0)
	void OnComponentTouch(class UPrimitiveComponent*& HitComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, struct FVector& NormalImpulse, struct FHitResult& Hit); // (0x00000002 | Native | Protected | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.OnComponentOverlap (Underlying native function: OnComponentOverlap 0x2027424)
	void OnComponentOverlap(class UPrimitiveComponent*& OverlappedComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (0x00000002 | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.OnComponentEndOverlap (Underlying native function: OnComponentEndOverlap 0x9040728)
	void OnComponentEndOverlap(class UPrimitiveComponent*& OverlappedComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.OnAssociatedItemDefinitionSet (Underlying native function: OnAssociatedItemDefinitionSet 0x8adc354)
	void OnAssociatedItemDefinitionSet(class UFortWorldItemDefinition*& NewAssociatedWID); // (0x00000002 | Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.KillTimerExpired (Underlying native function: KillTimerExpired 0x2056f24)
	void KillTimerExpired(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.Kill (Underlying native function: Kill 0x7062174)
	void Kill(); // (0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.IsBeingKilled (Underlying native function: IsBeingKilled 0x7a9d4b4)
	bool IsBeingKilled(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.HandleMoveIgnoredActorEndPlay (Underlying native function: HandleMoveIgnoredActorEndPlay 0x2301404)
	void HandleMoveIgnoredActorEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.GetCollisionComponent (Underlying native function: GetCollisionComponent 0x903f298)
	class UPrimitiveComponent* GetCollisionComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.GetAssociatedItemDefinition (Underlying native function: GetAssociatedItemDefinition 0x903f128)
	class UFortWorldItemDefinition* GetAssociatedItemDefinition(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.DoSingleActorHit (Underlying native function: DoSingleActorHit 0x903eebc)
	void DoSingleActorHit(struct FHitResult& Hit, bool& bBroadcastHit); // (0x00000002 | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.DoExplosionAtLocation (Underlying native function: DoExplosionAtLocation 0x903ee30)
	void DoExplosionAtLocation(struct FVector& ExplosionLocation); // (0x00000002 | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.DoExplosion (Underlying native function: DoExplosion 0x8546790)
	void DoExplosion(); // (0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.ChangeInstigator (Underlying native function: ChangeInstigator 0x903eb68)
	void ChangeInstigator(class APawn*& NewInstigator); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.BroadcastExplosion (Underlying native function: BroadcastExplosion 0x2195394)
	void BroadcastExplosion(struct TArray<class AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // (0x00000002 | Net | Native | Event | NetMulticast | Protected)

	// Function /Script/FortniteGame.FortGameplayEffectDeliveryActor.AddAdditionalExplodeEffectContainer (Underlying native function: AddAdditionalExplodeEffectContainer 0x903e5cc)
	void AddAdditionalExplodeEffectContainer(struct FFortGameplayEffectContainerSpec& ExplodeContainer); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};


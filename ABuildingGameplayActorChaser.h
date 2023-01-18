// Class /Script/FortniteGame.BuildingGameplayActorChaser
// Size: 0xcf0
class ABuildingGameplayActorChaser : public ABuildingGameplayActor
{
	class UFortProjectileMoveComp_Chase* FortProjectileMoveCompChase; // 0x9d8 (0x8)
	class UCapsuleComponent* CapsuleComponent; // 0x9e0 (0x8)
	struct FName TargetSocketName; // 0x9e8 (0x4)
	struct FName TargetPlayerSocketName; // 0x9ec (0x4)
	struct FName TargetNpcSocketName; // 0x9f0 (0x4)
	unsigned char unreflected_9f4[0x4]; // 0x9f4 (0x4) 
	class AFortPlayerPawn* ForcedMovementTarget; // 0x9f8 (0x8)
	struct FEventMessageTag AttachedMessageTag; // 0xa00 (0x4)
	struct FEventMessageTag DetachedMessageTag; // 0xa04 (0x4)
	struct FEventMessageTag SetMarkerPositionMessageTag; // 0xa08 (0x4)
	struct FEventMessageTag TargetDamagedMessageTag; // 0xa0c (0x4)
	class AActor* ChaseTarget; // 0xa10 (0x8)
	struct FGameplayTagQuery ValidTargetQuery; // 0xa18 (0x48)
	struct FScalableFloat TargetingRangeMax; // 0xa60 (0x28)
	unsigned char unreflected_a88[0x8]; // 0xa88 (0x8) 
	struct TArray<struct TEnumAsByte<EObjectTypeQuery>> TargetObjectTypes; // 0xa90 (0x10)
	struct FScalableFloat TargetingPrioritizePlayersOverNpcs; // 0xaa0 (0x28)
	unsigned char unreflected_ac8[0x8]; // 0xac8 (0x8) 
	struct FScalableFloat ChaseDistanceFromTargetToAttach; // 0xad0 (0x28)
	unsigned char unreflected_af8[0x8]; // 0xaf8 (0x8) 
	struct FScalableFloat PatrolTargetHeightAboveGround; // 0xb00 (0x28)
	unsigned char unreflected_b28[0x8]; // 0xb28 (0x8) 
	struct FScalableFloat PatrolNewDirectionMin; // 0xb30 (0x28)
	unsigned char unreflected_b58[0x8]; // 0xb58 (0x8) 
	struct FScalableFloat PatrolNewDirectionMax; // 0xb60 (0x28)
	unsigned char unreflected_b88[0x8]; // 0xb88 (0x8) 
	struct FScalableFloat PatrolDriftRange; // 0xb90 (0x28)
	unsigned char unreflected_bb8[0x8]; // 0xbb8 (0x8) 
	struct FScalableFloat PatrolMoveSpeedMin; // 0xbc0 (0x28)
	unsigned char unreflected_be8[0x8]; // 0xbe8 (0x8) 
	struct FScalableFloat PatrolMoveSpeedMax; // 0xbf0 (0x28)
	unsigned char unreflected_c18[0x8]; // 0xc18 (0x8) 
	struct FScalableFloat PatrolGroundFindDistance; // 0xc20 (0x28)
	unsigned char unreflected_c48[0x8]; // 0xc48 (0x8) 
	struct TArray<struct TEnumAsByte<EObjectTypeQuery>> PatrolAvoidObjectTypes; // 0xc50 (0x10)
	struct FScalableFloat PatrolTurnSeconds; // 0xc60 (0x28)
	unsigned char unreflected_c88[0x8]; // 0xc88 (0x8) 
	struct FChaserPatrolTurnData PatrolTurnData; // 0xc90 (0x40)
	unsigned char unreflected_cd0[0x8]; // 0xcd0 (0x8) 
	struct TArray<class AActor*> PotentialTargets; // 0xcd8 (0x10)
	float DetachedNetCullDistanceSquared; // 0xce8 (0x4)
	unsigned char padding_cec[0x4]; // 0xcec (0x4)

	/* Functions */

	// Function /Script/FortniteGame.BuildingGameplayActorChaser.TargetSearchComplete (Underlying native function: TargetSearchComplete 0x85e1248)
	void TargetSearchComplete(bool& WasCancelled); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingGameplayActorChaser.StayAboveWater (Underlying native function: StayAboveWater 0x85e1220)
	void StayAboveWater(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActorChaser.ShouldCancelTargetSearch (Underlying native function: ShouldCancelTargetSearch 0x85e116c)
	void ShouldCancelTargetSearch(bool& bShouldCancel); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.BuildingGameplayActorChaser.SetHealthBarMarkerPosition (Underlying native function: SetHealthBarMarkerPosition 0x85e0bdc)
	void SetHealthBarMarkerPosition(float& MarkerPosition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActorChaser.SetChaseTarget (Underlying native function: SetChaseTarget 0x85e09fc)
	void SetChaseTarget(class AActor*& InChaseTarget, bool& bInHomeOnChaseTarget, float& InTargetReachedDistanceOverride); // (Net | NetReliable | Native | Event | NetMulticast | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActorChaser.RandomNewPatrolDestination (Underlying native function: RandomNewPatrolDestination 0x85e0860)
	void RandomNewPatrolDestination(); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActorChaser.PotentialTargetFound (Underlying native function: PotentialTargetFound 0x85e0574)
	void PotentialTargetFound(class AActor*& InDetectedItem); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingGameplayActorChaser.OnTargetAcquired (Has no native function)
	void OnTargetAcquired(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorChaser.OnRep_PatrolTurnData (Underlying native function: OnRep_PatrolTurnData 0x85dffcc)
	void OnRepPatrolTurnData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingGameplayActorChaser.MulticastNetCullDistance (Underlying native function: MulticastNetCullDistance 0x85df7ac)
	void MulticastNetCullDistance(float& DistanceSquared); // (BlueprintAuthorityOnly | Net | NetReliable | Native | Event | NetMulticast | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActorChaser.LookForNewTarget (Underlying native function: LookForNewTarget 0x85df67c)
	void LookForNewTarget(); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActorChaser.IsValidTarget (Underlying native function: IsValidTarget 0x85df028)
	bool IsValidTarget(class UObject*& PotentialTarget); // (Final | Native | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.BuildingGameplayActorChaser.GetChaseTarget (Underlying native function: GetChaseTarget 0x85de684)
	class AActor* GetChaseTarget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.BuildingGameplayActorChaser.ForcePlayerForwardMovement (Underlying native function: ForcePlayerForwardMovement 0x85de5b0)
	void ForcePlayerForwardMovement(class AFortPlayerPawn*& Player, float& MaxSpeedScale); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActorChaser.EndForcedPlayerForwardMovement (Underlying native function: EndForcedPlayerForwardMovement 0x85de59c)
	void EndForcedPlayerForwardMovement(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActorChaser.DetachedFromChaseTarget (Underlying native function: DetachedFromChaseTarget 0x85de03c)
	void DetachedFromChaseTarget(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActorChaser.ChaseTargetDamaged (Underlying native function: ChaseTargetDamaged 0x85de028)
	void ChaseTargetDamaged(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActorChaser.AttachedToChaseTarget (Underlying native function: AttachedToChaseTarget 0x85dd8d8)
	void AttachedToChaseTarget(); // (Final | Native | Public | BlueprintCallable)
};


// Class /Script/FortniteGame.FortMovementComp_GroundSpline
// Size: 0x250
class UFortMovementComp_GroundSpline : public UMovementComponent
{
	float SplineLocationOffsetZ; // 0x108 (0x4)
	unsigned char bOffsetZIsAbsolute; // 0x10c (0x1)
	unsigned char bTickGroundSplineMovement; // 0x10c (0x1)
	unsigned char unreflected_10d[0x3]; // 0x10d (0x3) 
	struct FMulticastInlineDelegate OnHitActor; // 0x110 (0x10)
	struct FMulticastInlineDelegate OnEndOfSplineReached; // 0x120 (0x10)
	struct FMulticastInlineDelegate OnCrossedSplinePoint; // 0x130 (0x10)
	int NumberOfMoveRetriesPerTick; // 0x140 (0x4)
	float ClimbSpeedPercent; // 0x144 (0x4)
	float PitchSpeed; // 0x148 (0x4)
	float PitchThreshold; // 0x14c (0x4)
	float PitchThresholdSmoothing; // 0x150 (0x4)
	float LinearJerk; // 0x154 (0x4)
	float YawJerk; // 0x158 (0x4)
	float GroundCheckFrequency; // 0x15c (0x4)
	float GroundCheckDistance; // 0x160 (0x4)
	float AttemptUnstickMinimumAngleDegrees; // 0x164 (0x4)
	float PawnPushTime; // 0x168 (0x4)
	float ClientImmediatelySnapToReplicatedLocationTime; // 0x16c (0x4)
	float ClientImmediatelySnapToReplicatedLocationDistanceMinimumSquared; // 0x170 (0x4)
	float PawnPushForceMultiplier; // 0x174 (0x4)
	class UClass* GameplayEffectClassDestroyBuildings; // 0x178 (0x8)
	struct FGameplayTag TagDestroyBuildings; // 0x180 (0x4)
	float SplineDistanceReplicationRecoveryPercent; // 0x184 (0x4)
	float SplineDistanceReplicationRecoveryMinDistancePerSecond; // 0x188 (0x4)
	float SpeedTimeReplicationRecoveryPercent; // 0x18c (0x4)
	struct FGroundSplineLocationData ReplicatedSplineLocationData; // 0x190 (0x18)
	unsigned char unreflected_1a8[0x18]; // 0x1a8 (0x18) 
	struct FGroundSplineSpeedData ReplicatedTargetSpeeds; // 0x1c0 (0x18)
	unsigned char unreflected_1d8[0x38]; // 0x1d8 (0x38) 
	class UAbilitySystemComponent* AbilitySystemComponent; // 0x210 (0x8)
	unsigned char padding_218[0x38]; // 0x218 (0x38)

	/* Functions */

	// Function /Script/FortniteGame.FortMovementComp_GroundSpline.TeleportToDistanceOnSpline (Underlying native function: TeleportToDistanceOnSpline 0x8adee2c)
	void TeleportToDistanceOnSpline(class USplineComponent*& NewTravelSpline, float& Distance); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMovementComp_GroundSpline.SetTargetSpeeds (Underlying native function: SetTargetSpeeds 0x8b67160)
	void SetTargetSpeeds(struct FGroundSplineSpeedData& NewTargetSpeeds); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMovementComp_GroundSpline.SetSpline (Underlying native function: SetSpline 0x8adee2c)
	void SetSpline(class USplineComponent*& NewTravelSpline, float& NewDistanceOnSpline); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMovementComp_GroundSpline.SetAbilitySystemComponent (Underlying native function: SetAbilitySystemComponent 0x8b66ee0)
	void SetAbilitySystemComponent(class UAbilitySystemComponent*& NewAbilitySystemComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMovementComp_GroundSpline.OnRep_ReplicatedTargetSpeeds (Underlying native function: OnRep_ReplicatedTargetSpeeds 0x8b66b94)
	void OnRepReplicatedTargetSpeeds(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMovementComp_GroundSpline.OnRep_ReplicatedSplineLocationData (Underlying native function: OnRep_ReplicatedSplineLocationData 0x8b66b80)
	void OnRepReplicatedSplineLocationData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMovementComp_GroundSpline.GetTransformAtDistanceOnSpline (Underlying native function: GetTransformAtDistanceOnSpline 0x8b664f0)
	bool GetTransformAtDistanceOnSpline(struct FTransform& OutTransform, float& Distance); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortMovementComp_GroundSpline.GetTargetSpeeds (Underlying native function: GetTargetSpeeds 0x8b66478)
	struct FGroundSplineSpeedData GetTargetSpeeds(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMovementComp_GroundSpline.GetSplineDistance (Underlying native function: GetSplineDistance 0x282164c)
	float GetSplineDistance(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMovementComp_GroundSpline.GetSpline (Underlying native function: GetSpline 0x845e0e4)
	class USplineComponent* GetSpline(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMovementComp_GroundSpline.GetCurrentSpeeds (Underlying native function: GetCurrentSpeeds 0x8b661e4)
	struct FGroundSplineSpeedData GetCurrentSpeeds(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMovementComp_GroundSpline.ClientOnlySnapToServerLocationAndSpeed (Underlying native function: ClientOnlySnapToServerLocationAndSpeed 0x8b66104)
	void ClientOnlySnapToServerLocationAndSpeed(); // (Final | Native | Public | BlueprintCallable)
};


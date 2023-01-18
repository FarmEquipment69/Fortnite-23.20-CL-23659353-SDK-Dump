// Class /Script/Engine.ProjectileMovementComponent
// Size: 0x240
class UProjectileMovementComponent : public UMovementComponent
{
	float InitialSpeed; // 0x108 (0x4)
	float MaxSpeed; // 0x10c (0x4)
	unsigned char bRotationFollowsVelocity; // 0x110 (0x1)
	unsigned char bRotationRemainsVertical; // 0x110 (0x1)
	unsigned char bShouldBounce; // 0x110 (0x1)
	unsigned char bInitialVelocityInLocalSpace; // 0x110 (0x1)
	unsigned char bForceSubStepping; // 0x110 (0x1)
	unsigned char bSimulationEnabled; // 0x110 (0x1)
	unsigned char bSweepCollision; // 0x110 (0x1)
	unsigned char bIsHomingProjectile; // 0x110 (0x1)
	unsigned char bBounceAngleAffectsFriction; // 0x111 (0x1)
	unsigned char bIsSliding; // 0x111 (0x1)
	unsigned char bInterpMovement; // 0x111 (0x1)
	unsigned char bInterpRotation; // 0x111 (0x1)
	unsigned char unreflected_112[0x2]; // 0x112 (0x2) 
	float PreviousHitTime; // 0x114 (0x4)
	struct FVector PreviousHitNormal; // 0x118 (0x18)
	float ProjectileGravityScale; // 0x130 (0x4)
	float Buoyancy; // 0x134 (0x4)
	float Bounciness; // 0x138 (0x4)
	float Friction; // 0x13c (0x4)
	float BounceVelocityStopSimulatingThreshold; // 0x140 (0x4)
	float MinFrictionFraction; // 0x144 (0x4)
	struct FMulticastInlineDelegate OnProjectileBounce; // 0x148 (0x10)
	struct FMulticastInlineDelegate OnProjectileStop; // 0x158 (0x10)
	float HomingAccelerationMagnitude; // 0x168 (0x4)
	struct TWeakObjectPtr<class USceneComponent> HomingTargetComponent; // 0x16c (0x8)
	float MaxSimulationTimeStep; // 0x174 (0x4)
	int MaxSimulationIterations; // 0x178 (0x4)
	int BounceAdditionalIterations; // 0x17c (0x4)
	float InterpLocationTime; // 0x180 (0x4)
	float InterpRotationTime; // 0x184 (0x4)
	float InterpLocationMaxLagDistance; // 0x188 (0x4)
	float InterpLocationSnapToTargetDistance; // 0x18c (0x4)
	unsigned char padding_190[0xb0]; // 0x190 (0xb0)

	/* Functions */

	// Function /Script/Engine.ProjectileMovementComponent.StopSimulating (Underlying native function: StopSimulating 0x24cc0b8)
	void StopSimulating(struct FHitResult& HitResult); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.ProjectileMovementComponent.SetVelocityInLocalSpace (Underlying native function: SetVelocityInLocalSpace 0x9cfaaa0)
	void SetVelocityInLocalSpace(struct FVector& NewVelocity); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.ProjectileMovementComponent.SetInterpolatedComponent (Underlying native function: SetInterpolatedComponent 0x2063aac)
	void SetInterpolatedComponent(class USceneComponent*& Component); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.ProjectileMovementComponent.ResetInterpolation (Underlying native function: ResetInterpolation 0x8d41e70)
	void ResetInterpolation(); // (Native | Public | BlueprintCallable)

	// DelegateFunction /Script/Engine.ProjectileMovementComponent.OnProjectileStopDelegate__DelegateSignature (Has no native function)
	void OnProjectileStopDelegateDelegateSignature(struct FHitResult& ImpactResult); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/Engine.ProjectileMovementComponent.OnProjectileBounceDelegate__DelegateSignature (Has no native function)
	void OnProjectileBounceDelegateDelegateSignature(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity); // (MulticastDelegate | Public | Delegate | HasOutParms | HasDefaults)

	// Function /Script/Engine.ProjectileMovementComponent.MoveInterpolationTarget (Underlying native function: MoveInterpolationTarget 0x9cf7e58)
	void MoveInterpolationTarget(struct FVector& NewLocation, struct FRotator& NewRotation); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.ProjectileMovementComponent.LimitVelocity (Underlying native function: LimitVelocity 0x9cf7c84)
	struct FVector LimitVelocity(struct FVector& NewVelocity); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.ProjectileMovementComponent.IsVelocityUnderSimulationThreshold (Underlying native function: IsVelocityUnderSimulationThreshold 0x9cf7a28)
	bool IsVelocityUnderSimulationThreshold(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.ProjectileMovementComponent.IsInterpolationComplete (Underlying native function: IsInterpolationComplete 0x9cf794c)
	bool IsInterpolationComplete(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};


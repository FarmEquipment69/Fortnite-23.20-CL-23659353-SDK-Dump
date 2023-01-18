// Class /Script/Engine.NavMovementComponent
// Size: 0x148
class UNavMovementComponent : public UMovementComponent
{
	struct FNavAgentProperties NavAgentProps; // 0x108 (0x30)
	float FixedPathBrakingDistance; // 0x138 (0x4)
	unsigned char bUpdateNavAgentWithOwnersCollision; // 0x13c (0x1)
	unsigned char bUseAccelerationForPaths; // 0x13c (0x1)
	unsigned char bUseFixedBrakingDistanceForPaths; // 0x13c (0x1)
	struct FMovementProperties MovementState; // 0x13d (0x1)
	unsigned char unreflected_13e[0x2]; // 0x13e (0x2) 
	class UObject* PathFollowingComp; // 0x140 (0x8)

	/* Functions */

	// Function /Script/Engine.NavMovementComponent.StopMovementKeepPathing (Underlying native function: StopMovementKeepPathing 0x9cfabb8)
	void StopMovementKeepPathing(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.NavMovementComponent.StopActiveMovement (Underlying native function: StopActiveMovement 0x8d3dca4)
	void StopActiveMovement(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.NavMovementComponent.IsSwimming (Underlying native function: IsSwimming 0x9cf7a00)
	bool IsSwimming(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.NavMovementComponent.IsMovingOnGround (Underlying native function: IsMovingOnGround 0x2687fbc)
	bool IsMovingOnGround(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.NavMovementComponent.IsFlying (Underlying native function: IsFlying 0x9cf78cc)
	bool IsFlying(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.NavMovementComponent.IsFalling (Underlying native function: IsFalling 0x2ab1ff8)
	bool IsFalling(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.NavMovementComponent.IsCrouching (Underlying native function: IsCrouching 0x9cf7808)
	bool IsCrouching(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};


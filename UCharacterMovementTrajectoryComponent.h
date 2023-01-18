// Class /Script/MotionTrajectory.CharacterMovementTrajectoryComponent
// Size: 0x2a0
class UCharacterMovementTrajectoryComponent : public UMotionTrajectoryComponent
{
	struct FRotator LastDesiredControlRotation; // 0x268 (0x18)
	struct FRotator DesiredControlRotationVelocity; // 0x280 (0x18)
	unsigned char padding_298[0x8]; // 0x298 (0x8)

	/* Functions */

	// Function /Script/MotionTrajectory.CharacterMovementTrajectoryComponent.OnMovementUpdated (Underlying native function: OnMovementUpdated 0x5c2b5f0)
	void OnMovementUpdated(float& DeltaSeconds, struct FVector& OldLocation, struct FVector& OldVelocity); // (Final | Native | Protected | HasDefaults)
};


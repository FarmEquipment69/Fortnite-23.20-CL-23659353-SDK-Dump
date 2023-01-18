// Class /Script/ScoutDroneRuntime.FortScoutDroneMovementComponent
// Size: 0xfa0
class UFortScoutDroneMovementComponent : public UCharacterMovementComponent
{
	struct FVector LocalInputState; // 0xed8 (0x18)
	struct FVector LastInputState; // 0xef0 (0x18)
	struct FVector ReplicatedAcceleration; // 0xf08 (0x18)
	struct FScalableFloat StrafeInputMultiplier; // 0xf20 (0x28)
	struct FScalableFloat BacktrackingInputMultiplier; // 0xf48 (0x28)
	struct FScalableFloat VerticalMovementInputMultiplier; // 0xf70 (0x28)
	unsigned char padding_f98[0x8]; // 0xf98 (0x8)
};


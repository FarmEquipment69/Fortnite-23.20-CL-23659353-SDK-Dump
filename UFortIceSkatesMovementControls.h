// Class /Script/IceRuntime.FortIceSkatesMovementControls
// Size: 0x1c0
class UFortIceSkatesMovementControls : public UFortMovementControls
{
	struct FScalableFloat TurnSpeed; // 0x30 (0x28)
	struct FScalableFloat Acceleration; // 0x58 (0x28)
	struct FScalableFloat UphillSlopeAcceleration; // 0x80 (0x28)
	struct FScalableFloat DownhillSlopeAcceleration; // 0xa8 (0x28)
	struct FScalableFloat MaxSlopeAngle; // 0xd0 (0x28)
	struct FScalableFloat MinSpeed; // 0xf8 (0x28)
	struct FScalableFloat TargetSpeed; // 0x120 (0x28)
	struct FScalableFloat MaxSpeed; // 0x148 (0x28)
	struct FScalableFloat AirDrag; // 0x170 (0x28)
	unsigned char padding_198[0x28]; // 0x198 (0x28)
};


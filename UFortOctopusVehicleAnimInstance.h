// Class /Script/FortniteGame.FortOctopusVehicleAnimInstance
// Size: 0x6c0
class UFortOctopusVehicleAnimInstance : public UFortVehicleAnimInstance
{
	class AFortOctopusVehicle* OctopusVehicle; // 0x5f0 (0x8)
	struct FRotator ShellRotation; // 0x5f8 (0x18)
	struct FRotator SeatRotation; // 0x610 (0x18)
	struct FVector SeatRotationVelocity; // 0x628 (0x18)
	struct FVector SeatRotationTorque; // 0x640 (0x18)
	float SeatSteerYawDelta; // 0x658 (0x4)
	float SeatSteerPitchDelta; // 0x65c (0x4)
	float SeatSteerRollDelta; // 0x660 (0x4)
	float FwdBwd; // 0x664 (0x4)
	float LeftRight; // 0x668 (0x4)
	unsigned char unreflected_66c[0x4]; // 0x66c (0x4) 
	struct FRotator TowhookRotation; // 0x670 (0x18)
	struct FVector TargetHeading; // 0x688 (0x18)
	struct FVector AimPoint; // 0x6a0 (0x18)
	enum EFortCardinalDirection PivotDir; // 0x6b8 (0x1)
	unsigned char bIsBoosting; // 0x6b9 (0x1)
	unsigned char bIsTowhookExtending; // 0x6b9 (0x1)
	unsigned char bIsTowhookAttached; // 0x6b9 (0x1)
	unsigned char bIsTowhookContracting; // 0x6b9 (0x1)
	unsigned char bIsTowhookHolstered; // 0x6b9 (0x1)
	unsigned char bIsLowerVelocity; // 0x6b9 (0x1)
	unsigned char bIsDriverFemale; // 0x6b9 (0x1)
	unsigned char bShouldPlayPivotTransition; // 0x6b9 (0x1)
	unsigned char bShouldPlayGrappleFire; // 0x6ba (0x1)
	unsigned char padding_6bb[0x5]; // 0x6bb (0x5)
};


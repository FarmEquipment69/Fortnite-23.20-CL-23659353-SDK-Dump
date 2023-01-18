// Class /Script/HoagieRuntime.FortHoagieDriverAnimInstance
// Size: 0x890
class UFortHoagieDriverAnimInstance : public UFortVehicleOccupantAnimInstance
{
	struct FVector LeftHandIKPositionOffset; // 0x808 (0x18)
	struct FVector RightHandIKPositionOffset; // 0x820 (0x18)
	struct FRotator LeftHandIKRotationOffset; // 0x838 (0x18)
	struct FRotator RightHandIKRotationOffset; // 0x850 (0x18)
	enum EFortCardinalDirection BoostCardinalDirection; // 0x868 (0x1)
	unsigned char unreflected_869[0x3]; // 0x869 (0x3) 
	float NormalizedAcceleration; // 0x86c (0x4)
	float VehicleRoll; // 0x870 (0x4)
	float VehicleYaw; // 0x874 (0x4)
	float ForwardSpeed; // 0x878 (0x4)
	bool bIsMovingAnyDirection; // 0x87c (0x1)
	bool bIsMovingFastAnyDirection; // 0x87d (0x1)
	bool bShouldReverse; // 0x87e (0x1)
	bool bShouldGoBackToIdle; // 0x87f (0x1)
	bool bTransitionDefaultReverseStart; // 0x880 (0x1)
	bool bTransitionBoostLoopReverse; // 0x881 (0x1)
	unsigned char padding_882[0xe]; // 0x882 (0xe)
};


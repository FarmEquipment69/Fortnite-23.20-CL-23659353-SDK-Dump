// Class /Script/FortniteGame.FortVehicleLayerAnimInstance
// Size: 0x4e0
class UFortVehicleLayerAnimInstance : public UFortBaseLayerAnimInstance
{
	struct FFortAnimInput_CommonVehicle* CommonVehicleInput; // 0x440 (0x8)
	struct FFortAnimInput_TurnInPlace TurnInPlaceInput; // 0x448 (0x78)
	struct TEnumAsByte<EFortCustomGender> Gender; // 0x4c0 (0x1)
	unsigned char unreflected_4c1[0x3]; // 0x4c1 (0x3) 
	float LocalVelocityYawAngle; // 0x4c4 (0x4)
	float SlopePitchDegreeAngle; // 0x4c8 (0x4)
	float SlopeRollDegreeAngle; // 0x4cc (0x4)
	enum EFortCardinalDirection LocomotionCardinalDirection; // 0x4d0 (0x1)
	unsigned char bHasBalloons; // 0x4d1 (0x1)
	unsigned char bIsDriver; // 0x4d1 (0x1)
	unsigned char bIsFrontPassenger; // 0x4d1 (0x1)
	unsigned char bIsBackLeftPassenger; // 0x4d1 (0x1)
	unsigned char bIsBackRightPassenger; // 0x4d1 (0x1)
	unsigned char bTransitionLocomotionAdditiveCrouchTurning; // 0x4d1 (0x1)
	unsigned char bRecentlyFired; // 0x4d1 (0x1)
	unsigned char unreflected_4d2[0x2]; // 0x4d2 (0x2) 
	float Speed2D; // 0x4d4 (0x4)
	unsigned char bIsTargeting; // 0x4d8 (0x1)
	unsigned char padding_4d9[0x7]; // 0x4d9 (0x7)
};


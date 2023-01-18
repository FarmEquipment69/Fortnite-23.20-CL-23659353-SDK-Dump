// ScriptStruct /Script/FortniteGame.FortAthenaVehicleInputState
// Size: 0x40
struct FFortAthenaVehicleInputState
{
	float ForwardAlpha; // 0x0 (0x4)
	float RightAlpha; // 0x4 (0x4)
	float PitchAlpha; // 0x8 (0x4)
	float LookUpDelta; // 0xc (0x4)
	float TurnDelta; // 0x10 (0x4)
	float SteerAlpha; // 0x14 (0x4)
	float GravityOffset; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct FVector MovementDir; // 0x20 (0x18)
	unsigned char bIsReversing; // 0x38 (0x1)
	unsigned char bIsSprinting; // 0x38 (0x1)
	unsigned char bIsJumping; // 0x38 (0x1)
	unsigned char bIsBraking; // 0x38 (0x1)
	unsigned char bIsHonking; // 0x38 (0x1)
	unsigned char bIgnoreForwardInAir; // 0x38 (0x1)
	unsigned char bMovementModifier0; // 0x38 (0x1)
	unsigned char bMovementModifier1; // 0x38 (0x1)
	unsigned char bMovementModifier2; // 0x39 (0x1)
	unsigned char bUsingGamepad; // 0x39 (0x1)
	unsigned char bUsingTrigger; // 0x39 (0x1)
	unsigned char padding_3a[0x6]; // 0x3a (0x6)
};


// Class /Script/FortniteGame.FortItemLayerAnimInstance
// Size: 0x460
class UFortItemLayerAnimInstance : public UFortBaseLayerAnimInstance
{
	float Speed2D; // 0x440 (0x4)
	float FallPlayRate; // 0x444 (0x4)
	float DBNOTurnPlayRate; // 0x448 (0x4)
	float ADSToNonADSBlendTime; // 0x44c (0x4)
	float NonADSToADSBlendTime; // 0x450 (0x4)
	float SlopeSlidingPitch; // 0x454 (0x4)
	float SlopeSlidingRoll; // 0x458 (0x4)
	struct TEnumAsByte<EFortCustomGender> Gender; // 0x45c (0x1)
	unsigned char bIsMoving2D; // 0x45d (0x1)
	unsigned char bIsAboveMinimumLocomotionSpeed; // 0x45d (0x1)
	unsigned char bIsTargeting; // 0x45d (0x1)
	unsigned char bIsRelaxedLevel1; // 0x45d (0x1)
	unsigned char bIsRelaxedLevel2; // 0x45d (0x1)
	unsigned char bIsCrouching; // 0x45d (0x1)
	unsigned char bIsJumpBoosting; // 0x45d (0x1)
	unsigned char bSwimmingJumpInitiatedFromWater; // 0x45d (0x1)
	unsigned char bIsRelaxedLevel1AndNotJumpingFromWater; // 0x45e (0x1)
	unsigned char bIsInVehicle; // 0x45e (0x1)
	unsigned char bIsDBNO; // 0x45e (0x1)
	unsigned char bIsPlayingMeleeAnim; // 0x45e (0x1)
	unsigned char padding_45f[0x1]; // 0x45f (0x1)
};


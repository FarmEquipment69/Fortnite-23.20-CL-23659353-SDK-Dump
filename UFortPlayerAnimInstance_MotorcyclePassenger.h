// Class /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcyclePassenger
// Size: 0x8a0
class UFortPlayerAnimInstance_MotorcyclePassenger : public UFortPlayerAnimInstance_MotorcycleRider
{
	class UFortPlayerAnimInstance_MotorcycleDriver* DriverAnimInstance; // 0x850 (0x8)
	bool bHasDriver; // 0x858 (0x1)
	bool bIsDriverJumping; // 0x859 (0x1)
	bool bIsDriverInventoryMode; // 0x85a (0x1)
	bool bIsSeatedAction; // 0x85b (0x1)
	bool bIsThrowingConsumable; // 0x85c (0x1)
	bool bEarlyOutStoppieOutro; // 0x85d (0x1)
	unsigned char unreflected_85e[0x2]; // 0x85e (0x2) 
	float RunForwardAlpha; // 0x860 (0x4)
	bool bAimFWD; // 0x864 (0x1)
	bool bAimBWD; // 0x865 (0x1)
	bool bAimLFT; // 0x866 (0x1)
	bool bAimRGT; // 0x867 (0x1)
	float AimFWDDeltaAngleDegrees; // 0x868 (0x4)
	float AimBWDDeltaAngleDegrees; // 0x86c (0x4)
	float AimLFTDeltaAngleDegrees; // 0x870 (0x4)
	float AimRGTDeltaAngleDegrees; // 0x874 (0x4)
	bool bShouldJump; // 0x878 (0x1)
	bool bShouldApplySlopeCorrection; // 0x879 (0x1)
	bool bShouldExitFromLocomotion; // 0x87a (0x1)
	unsigned char unreflected_87b[0x1]; // 0x87b (0x1) 
	struct FCachedAnimRelevancyData JumpIntroCachedTime; // 0x87c (0x14)
	float CachedJumpIntroTime; // 0x890 (0x4)
	unsigned char padding_894[0xc]; // 0x894 (0xc)
};


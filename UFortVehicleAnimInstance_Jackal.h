// Class /Script/FortniteGame.FortVehicleAnimInstance_Jackal
// Size: 0x640
class UFortVehicleAnimInstance_Jackal : public UFortVehicleAnimInstance
{
	class AFortAthenaJackalVehicle* JackalVehicle; // 0x5f0 (0x8)
	bool bIsSprinting; // 0x5f8 (0x1)
	enum EFortCardinalDirection LocomotionCardinalDirection; // 0x5f9 (0x1)
	unsigned char unreflected_5fa[0x2]; // 0x5fa (0x2) 
	float RunForwardAlpha; // 0x5fc (0x4)
	float LeanYaw; // 0x600 (0x4)
	float CombatLeanYaw; // 0x604 (0x4)
	bool bPlayJumpTrickVertical; // 0x608 (0x1)
	bool bPlayJumpTrick; // 0x609 (0x1)
	bool bIsMoving; // 0x60a (0x1)
	bool bInAir; // 0x60b (0x1)
	bool bIsVehicleJumping; // 0x60c (0x1)
	bool bIsBoosting; // 0x60d (0x1)
	bool bIsOnSlope; // 0x60e (0x1)
	bool bPlayMovingFast; // 0x60f (0x1)
	bool bPlayDriveSouth; // 0x610 (0x1)
	bool bPlayAdditiveLeans; // 0x611 (0x1)
	bool bIdleToMovementStartTransition; // 0x612 (0x1)
	bool bMovementLoopToMovementStopTransition; // 0x613 (0x1)
	bool bLocomotionPoseToJumpTransition; // 0x614 (0x1)
	bool bJumpToLocomotionPoseTransition; // 0x615 (0x1)
	bool bIdleToMovementLoopTransition; // 0x616 (0x1)
	bool bMovementLoopToPivotTransition; // 0x617 (0x1)
	bool bMovementLoopToIdleTransition; // 0x618 (0x1)
	bool bDefaultToJumpCombatStartTransition; // 0x619 (0x1)
	bool bJumpApexToJumpFallTransition; // 0x61a (0x1)
	bool bDefaultToJumpStartTransition; // 0x61b (0x1)
	bool bCombatModeToSprintModeTransition; // 0x61c (0x1)
	bool bSprintModeToCombatModeTransition; // 0x61d (0x1)
	bool bIsPlayingEmoteOnHoverboard; // 0x61e (0x1)
	bool bShouldApplyAdditive; // 0x61f (0x1)
	bool bIsBothLegFK; // 0x620 (0x1)
	unsigned char unreflected_621[0x3]; // 0x621 (0x3) 
	float InPlaceLeansBlendSpaceAlpha; // 0x624 (0x4)
	float CombatLeanYawMultiplier; // 0x628 (0x4)
	float SlopeCheckPitchThresholdDegrees; // 0x62c (0x4)
	float SlopeCheckYawThresholdDegrees; // 0x630 (0x4)
	float AdditiveLeansSpeedThreshold; // 0x634 (0x4)
	unsigned char padding_638[0x8]; // 0x638 (0x8)
};


// Class /Script/FortniteGame.FortShapeshifterCharmsAnimInstance
// Size: 0x720
class UFortShapeshifterCharmsAnimInstance : public UCustomCharacterPartAnimInstance
{
	class AFortPlayerPawn* FortPlayerPawn; // 0x6e8 (0x8)
	class USkeletalMeshComponent* PawnSkeletalMesh; // 0x6f0 (0x8)
	unsigned char bTransitionIdleAdditivetoSwimJumpStart; // 0x6f8 (0x1)
	unsigned char unreflected_6f9[0x3]; // 0x6f9 (0x3) 
	float SwimmingSprintYawDeltaRatePerSecondSmooth; // 0x6fc (0x4)
	float SwimmingVelocityAngle; // 0x700 (0x4)
	float SwimmingSpeedRelativeToFlow; // 0x704 (0x4)
	float SwimmingDivePitch; // 0x708 (0x4)
	float SwimmingYawDeltaRatePerSecond; // 0x70c (0x4)
	float SwimmingDivePitchDeltaRatePerSec; // 0x710 (0x4)
	float Speed2D; // 0x714 (0x4)
	unsigned char bIsDiveJumping; // 0x718 (0x1)
	unsigned char bTransitionSwimSprinttoSwimSprintSlow; // 0x718 (0x1)
	unsigned char bTransitionSwimSprintSlowtoSwimSprint; // 0x718 (0x1)
	unsigned char bTransitionSwimSprintSlowtoSwimSprintStart; // 0x718 (0x1)
	unsigned char padding_719[0x7]; // 0x719 (0x7)
};


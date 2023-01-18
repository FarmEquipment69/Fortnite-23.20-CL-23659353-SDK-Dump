// Class /Script/FortniteGame.FortSlidingLayerAnimInstance
// Size: 0x4d0
class UFortSlidingLayerAnimInstance : public UFortBaseLayerAnimInstance
{
	bool bBypassEntry; // 0x440 (0x1)
	bool bIsKneeSliding; // 0x441 (0x1)
	bool bTransitionToKneeSlide; // 0x442 (0x1)
	unsigned char unreflected_443[0x5]; // 0x443 (0x5) 
	struct FVector KneeSlideLowerBodyInitialVector; // 0x448 (0x18)
	struct FVector KneeSlideLowerBodyInitialVectorSmooth; // 0x460 (0x18)
	float KneeSlideSlopeYaw; // 0x478 (0x4)
	float KneeSlideRootYawOffset; // 0x47c (0x4)
	float KneeSlideSlopeYawMinusRootRot; // 0x480 (0x4)
	float KneeSlideSlopeAngle; // 0x484 (0x4)
	float KneeSlideForwardVectorVelocityDelta; // 0x488 (0x4)
	bool bFastPathNotInitiatedSlideUpHillAndTransitionToKneeSlide; // 0x48c (0x1)
	unsigned char unreflected_48d[0x3]; // 0x48d (0x3) 
	float SpineTweakLean; // 0x490 (0x4)
	bool bInitiatedSlideUpHill; // 0x494 (0x1)
	unsigned char unreflected_495[0x3]; // 0x495 (0x3) 
	float VelocityAimYawDelta; // 0x498 (0x4)
	float KneeSlideAngleSlopeLimit; // 0x49c (0x4)
	float KneeSlideRootYawOffsetClampValue; // 0x4a0 (0x4)
	float KneeSlideRootYawOffsetMaxRotation; // 0x4a4 (0x4)
	float SpineTweakAccelerationLimit; // 0x4a8 (0x4)
	float SpineTweakValue; // 0x4ac (0x4)
	float KneeSlideLowerBodyInitialRotSmoothingSpeed; // 0x4b0 (0x4)
	float MinKneeSlideSlopeAngle; // 0x4b4 (0x4)
	float MaxKneeSlideForwardVectorVelocityDelta; // 0x4b8 (0x4)
	float DirectionVectorPlaneChangeThreshold; // 0x4bc (0x4)
	unsigned char padding_4c0[0x10]; // 0x4c0 (0x10)
};


// Class /Script/FortniteGame.CustomCharacterPartAnimInstance_BuffetFaceAcc
// Size: 0x7c0
class UCustomCharacterPartAnimInstance_BuffetFaceAcc : public UCustomCharacterPartAnimInstance
{
	class USkeletalMeshComponent* BodyMesh; // 0x6e8 (0x8)
	float RigidBodyAlpha; // 0x6f0 (0x4)
	float TrailAlpha; // 0x6f4 (0x4)
	float SkydiveFloatPoseFixAlpha; // 0x6f8 (0x4)
	float IsBackblingOnAlpha; // 0x6fc (0x4)
	float BackpackOnHeadUpDnAlpha; // 0x700 (0x4)
	float IsLongBackblingOnAlpha; // 0x704 (0x4)
	float IsShortBackblingOnAlpha; // 0x708 (0x4)
	float IsJumpPoseFixNeededAlpha; // 0x70c (0x4)
	float RelaxSpeed; // 0x710 (0x4)
	float HeadFwdBwdRotation; // 0x714 (0x4)
	bool bIsBackblingOn; // 0x718 (0x1)
	bool bIsLongBackblingOn; // 0x719 (0x1)
	bool bIsShortBackblingOn; // 0x71a (0x1)
	bool bIsHairConstraintOn; // 0x71b (0x1)
	unsigned char unreflected_71c[0x4]; // 0x71c (0x4) 
	struct FVector GravityOverride; // 0x720 (0x18)
	float RelaxSpeedInRangeA; // 0x738 (0x4)
	float RelaxSpeedInRangeB; // 0x73c (0x4)
	float RelaxSpeedOutRangeA; // 0x740 (0x4)
	float RelaxSpeedOutRangeB; // 0x744 (0x4)
	float TrailAlphaSkydiving; // 0x748 (0x4)
	float TrailAlphaFalling; // 0x74c (0x4)
	float LongBackblingThreshold; // 0x750 (0x4)
	float RigidBodyAlphaSkydiving; // 0x754 (0x4)
	float GravityStrength; // 0x758 (0x4)
	struct FName DeltaTransformHead; // 0x75c (0x4)
	struct FName DeltaTransformNeck; // 0x760 (0x4)
	unsigned char unreflected_764[0x4]; // 0x764 (0x4) 
	struct FBuffetFaceAccGravityOverrideInput GravityOverrideInput; // 0x768 (0x58)

	/* Functions */

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_BuffetFaceAcc.GenerateBackpackAlphas (Underlying native function: GenerateBackpackAlphas 0x8815028)
	void GenerateBackpackAlphas(); // (Final | Native | Protected | BlueprintCallable)
};


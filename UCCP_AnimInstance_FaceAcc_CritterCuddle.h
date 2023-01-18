// Class /Script/FortniteGame.CCP_AnimInstance_FaceAcc_CritterCuddle
// Size: 0x7a0
class UCCP_AnimInstance_FaceAcc_CritterCuddle : public UCustomCharacterPartAnimInstance
{
	float EyeForward; // 0x6e8 (0x4)
	float EyeBackward; // 0x6ec (0x4)
	float BodyRotationLeft; // 0x6f0 (0x4)
	float BodyRotationRight; // 0x6f4 (0x4)
	bool bIsMoving; // 0x6f8 (0x1)
	bool bIsNotTargeting; // 0x6f9 (0x1)
	unsigned char unreflected_6fa[0x2]; // 0x6fa (0x2) 
	float CurrentEyeDartTime; // 0x6fc (0x4)
	float CurrentEyeDartDelay; // 0x700 (0x4)
	struct FName LeftRotationSourceBone; // 0x704 (0x4)
	struct FName LeftRotationBaseBone; // 0x708 (0x4)
	struct FName RightRotationSourceBone; // 0x70c (0x4)
	struct FName RightRotationBaseBone; // 0x710 (0x4)
	struct TEnumAsByte<EAlphaFromDeltaTypes> LeftRotationDeltaComponentType; // 0x714 (0x1)
	struct TEnumAsByte<EAlphaFromDeltaTypes> RightRotationDeltaComponentType; // 0x715 (0x1)
	unsigned char unreflected_716[0x2]; // 0x716 (0x2) 
	struct FVector2D LeftRotationInputRange; // 0x718 (0x10)
	struct FVector2D LeftRotationOutputRange; // 0x728 (0x10)
	struct FVector2D RightRotationInputRange; // 0x738 (0x10)
	struct FVector2D RightRotationOutputRange; // 0x748 (0x10)
	struct FVector LeftRotationTwistAxis; // 0x758 (0x18)
	struct FVector RightRotationTwistAxis; // 0x770 (0x18)
	float EyeDelayMaximum; // 0x788 (0x4)
	float EyeDelayMinimum; // 0x78c (0x4)
	float EyeMoveMaximum; // 0x790 (0x4)
	float EyeMoveMinimum; // 0x794 (0x4)
	unsigned char padding_798[0x8]; // 0x798 (0x8)
};


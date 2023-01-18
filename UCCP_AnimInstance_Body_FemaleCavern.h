// Class /Script/FortniteGame.CCP_AnimInstance_Body_FemaleCavern
// Size: 0x7d0
class UCCP_AnimInstance_Body_FemaleCavern : public UCustomCharacterPartAnimInstance
{
	float LookUpL; // 0x6e8 (0x4)
	float LookUpR; // 0x6ec (0x4)
	float LegRotR; // 0x6f0 (0x4)
	unsigned char unreflected_6f4[0x4]; // 0x6f4 (0x4) 
	struct FVector SlopeRootTrans; // 0x6f8 (0x18)
	struct FRotator SlopeFootRot; // 0x710 (0x18)
	struct FRotator SimSpaceRot; // 0x728 (0x18)
	struct FName UpperArmLBoneName; // 0x740 (0x4)
	struct FName UpperArmRBoneName; // 0x744 (0x4)
	struct FName ClavicleLBoneName; // 0x748 (0x4)
	struct FName ClavicleRBoneName; // 0x74c (0x4)
	struct FName ThighRBoneName; // 0x750 (0x4)
	struct FName PelvisBoneName; // 0x754 (0x4)
	struct FMapRangeClamped_Ranges LookUpLRanges; // 0x758 (0x10)
	struct FMapRangeClamped_Ranges LookUpRRanges; // 0x768 (0x10)
	struct TEnumAsByte<EAlphaFromDeltaTypes> LegRotRReferenceTransformDeltaComponentType; // 0x778 (0x1)
	unsigned char unreflected_779[0x7]; // 0x779 (0x7) 
	struct FVector2D LegRotRReferenceTransformInputRange; // 0x780 (0x10)
	struct FVector2D LegRotRReferenceTransformOutputRange; // 0x790 (0x10)
	struct FVector LegRotRReferenceTransformTwistAxis; // 0x7a0 (0x18)
	float ComplexSimSpaceInterSpeedMax; // 0x7b8 (0x4)
	float ComplexSimSpacePawnSpeedMax; // 0x7bc (0x4)
	float ComplexSimSpaceRInterpErrorTolerance; // 0x7c0 (0x4)
	unsigned char padding_7c4[0xc]; // 0x7c4 (0xc)
};


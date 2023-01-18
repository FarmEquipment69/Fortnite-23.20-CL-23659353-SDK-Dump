// Class /Script/FortniteGame.CCP_AnimInstance_Body_CritterCuddle
// Size: 0x730
class UCCP_AnimInstance_Body_CritterCuddle : public UCustomCharacterPartAnimInstance
{
	float RightArmLift; // 0x6e8 (0x4)
	bool bIsWearingBackpack; // 0x6ec (0x1)
	bool bIsWearingCape; // 0x6ed (0x1)
	bool bIsInAir; // 0x6ee (0x1)
	unsigned char unreflected_6ef[0x1]; // 0x6ef (0x1) 
	struct FName ArmLiftSourceBone; // 0x6f0 (0x4)
	struct FName ArmLiftBaseBone; // 0x6f4 (0x4)
	float RightArmMapInRangeA; // 0x6f8 (0x4)
	float RightArmMapInRangeB; // 0x6fc (0x4)
	float RightArmMapOutRangeA; // 0x700 (0x4)
	float RightArmMapOutRangeB; // 0x704 (0x4)
	float AnimDynamicsAlphaLeafI; // 0x708 (0x4)
	float RigidBodyAlpha; // 0x70c (0x4)
	bool bIsWearingBackpackOrCape; // 0x710 (0x1)
	bool bIsInAirWithoutCape; // 0x711 (0x1)
	unsigned char unreflected_712[0x2]; // 0x712 (0x2) 
	float AnimDynamicsAlphaLeafITrue; // 0x714 (0x4)
	float AnimDynamicsAlphaLeafIFalse; // 0x718 (0x4)
	float RigidBodyAlphaTrue; // 0x71c (0x4)
	float RigidBodyAlphaFalse; // 0x720 (0x4)
	unsigned char padding_724[0xc]; // 0x724 (0xc)

	/* Functions */

	// Function /Script/FortniteGame.CCP_AnimInstance_Body_CritterCuddle.DetectBackbling (Underlying native function: DetectBackbling 0x8814e54)
	void DetectBackbling(); // (Final | Native | Protected | BlueprintCallable)
};


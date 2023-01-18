// Class /Script/FortniteGame.CustomCharacterPartAnimInstance_Buffet_F
// Size: 0x8f0
class UCustomCharacterPartAnimInstance_Buffet_F : public UCustomCharacterPartAnimInstance
{
	struct FRotator simspacerotation; // 0x6e8 (0x18)
	bool LockedOnSimSpace; // 0x700 (0x1)
	bool InComponentSpace; // 0x701 (0x1)
	bool InComponentSpaceLastFrame; // 0x702 (0x1)
	unsigned char unreflected_703[0x1]; // 0x703 (0x1) 
	float InterpSpeed; // 0x704 (0x4)
	float crouchingAlpha; // 0x708 (0x4)
	unsigned char unreflected_70c[0x4]; // 0x70c (0x4) 
	struct FVector GravityOverride; // 0x710 (0x18)
	struct FPoseDeformationQuery_Arms Arms; // 0x728 (0x118)
	struct FBuffetPoseSpaceDeformerInput ElbowRotR; // 0x840 (0xc)
	struct FBuffetPoseSpaceDeformerInput ElbowRotL; // 0x84c (0xc)
	struct FBuffetPoseSpaceDeformerInput ThighRotR; // 0x858 (0xc)
	struct FBuffetPoseSpaceDeformerInput ThighRotL; // 0x864 (0xc)
	struct FBuffetPoseSpaceDeformerInput KneeRotR; // 0x870 (0xc)
	struct FBuffetPoseSpaceDeformerInput KneeRotL; // 0x87c (0xc)
	float GravityStrength; // 0x888 (0x4)
	unsigned char unreflected_88c[0x4]; // 0x88c (0x4) 
	struct FBuffetGravityOverrideInput GravityOverrideInput; // 0x890 (0x58)
	unsigned char padding_8e8[0x8]; // 0x8e8 (0x8)
};


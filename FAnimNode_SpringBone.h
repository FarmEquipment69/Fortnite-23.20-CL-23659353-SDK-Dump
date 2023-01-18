// ScriptStruct /Script/AnimGraphRuntime.AnimNode_SpringBone
// Size: 0x158
struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase
{
	struct FBoneReference SpringBone; // 0xc8 (0xc)
	float MaxDisplacement; // 0xd4 (0x4)
	float SpringStiffness; // 0xd8 (0x4)
	float SpringDamping; // 0xdc (0x4)
	float ErrorResetThresh; // 0xe0 (0x4)
	unsigned char unreflected_e4[0x70]; // 0xe4 (0x70) 
	unsigned char bLimitDisplacement; // 0x154 (0x1)
	unsigned char bTranslateX; // 0x154 (0x1)
	unsigned char bTranslateY; // 0x154 (0x1)
	unsigned char bTranslateZ; // 0x154 (0x1)
	unsigned char bRotateX; // 0x154 (0x1)
	unsigned char bRotateY; // 0x154 (0x1)
	unsigned char bRotateZ; // 0x154 (0x1)
	unsigned char padding_155[0x3]; // 0x155 (0x3)
};


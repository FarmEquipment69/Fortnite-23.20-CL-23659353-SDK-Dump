// ScriptStruct /Script/AnimGraphRuntime.AnimNode_CCDIK
// Size: 0x1b0
struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase
{
	struct FVector EffectorLocation; // 0xc8 (0x18)
	struct TEnumAsByte<EBoneControlSpace> EffectorLocationSpace; // 0xe0 (0x1)
	unsigned char unreflected_e1[0xf]; // 0xe1 (0xf) 
	struct FBoneSocketTarget EffectorTarget; // 0xf0 (0x80)
	struct FBoneReference TipBone; // 0x170 (0xc)
	struct FBoneReference RootBone; // 0x17c (0xc)
	float Precision; // 0x188 (0x4)
	int MaxIterations; // 0x18c (0x4)
	bool bStartFromTail; // 0x190 (0x1)
	bool bEnableRotationLimit; // 0x191 (0x1)
	unsigned char unreflected_192[0x6]; // 0x192 (0x6) 
	struct TArray<float> RotationLimitPerJoints; // 0x198 (0x10)
	unsigned char padding_1a8[0x8]; // 0x1a8 (0x8)
};


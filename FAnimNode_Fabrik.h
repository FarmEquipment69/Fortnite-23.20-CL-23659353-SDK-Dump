// ScriptStruct /Script/AnimGraphRuntime.AnimNode_Fabrik
// Size: 0x1e0
struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase
{
	unsigned char unreflected_c8[0x8]; // 0xc8 (0x8) 
	struct FTransform EffectorTransform; // 0xd0 (0x60)
	struct FBoneSocketTarget EffectorTarget; // 0x130 (0x80)
	struct FBoneReference TipBone; // 0x1b0 (0xc)
	struct FBoneReference RootBone; // 0x1bc (0xc)
	float Precision; // 0x1c8 (0x4)
	int MaxIterations; // 0x1cc (0x4)
	struct TEnumAsByte<EBoneControlSpace> EffectorTransformSpace; // 0x1d0 (0x1)
	struct TEnumAsByte<EBoneRotationSource> EffectorRotationSource; // 0x1d1 (0x1)
	unsigned char padding_1d2[0xe]; // 0x1d2 (0xe)
};


// ScriptStruct /Script/AnimGraphRuntime.AnimNode_RotationMultiplier
// Size: 0xe8
struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase
{
	struct FBoneReference TargetBone; // 0xc8 (0xc)
	struct FBoneReference SourceBone; // 0xd4 (0xc)
	float Multiplier; // 0xe0 (0x4)
	struct TEnumAsByte<EBoneAxis> RotationAxisToRefer; // 0xe4 (0x1)
	bool bIsAdditive; // 0xe5 (0x1)
	unsigned char padding_e6[0x2]; // 0xe6 (0x2)
};


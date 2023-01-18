// ScriptStruct /Script/AnimGraphRuntime.AnimNode_ObserveBone
// Size: 0x120
struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToObserve; // 0xc8 (0xc)
	struct TEnumAsByte<EBoneControlSpace> DisplaySpace; // 0xd4 (0x1)
	bool bRelativeToRefPose; // 0xd5 (0x1)
	unsigned char unreflected_d6[0x2]; // 0xd6 (0x2) 
	struct FVector Translation; // 0xd8 (0x18)
	struct FRotator Rotation; // 0xf0 (0x18)
	struct FVector Scale; // 0x108 (0x18)
};


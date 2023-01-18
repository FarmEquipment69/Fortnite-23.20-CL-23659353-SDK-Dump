// ScriptStruct /Script/AnimGraphRuntime.AnimNode_CopyBone
// Size: 0xe8
struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase
{
	struct FBoneReference SourceBone; // 0xc8 (0xc)
	struct FBoneReference TargetBone; // 0xd4 (0xc)
	bool bCopyTranslation; // 0xe0 (0x1)
	bool bCopyRotation; // 0xe1 (0x1)
	bool bCopyScale; // 0xe2 (0x1)
	struct TEnumAsByte<EBoneControlSpace> ControlSpace; // 0xe3 (0x1)
	unsigned char padding_e4[0x4]; // 0xe4 (0x4)
};


// ScriptStruct /Script/AnimGraphRuntime.AnimNode_CopyBoneDelta
// Size: 0xf0
struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase
{
	struct FBoneReference SourceBone; // 0xc8 (0xc)
	struct FBoneReference TargetBone; // 0xd4 (0xc)
	bool bCopyTranslation; // 0xe0 (0x1)
	bool bCopyRotation; // 0xe1 (0x1)
	bool bCopyScale; // 0xe2 (0x1)
	enum CopyBoneDeltaMode CopyMode; // 0xe3 (0x1)
	float TranslationMultiplier; // 0xe4 (0x4)
	float RotationMultiplier; // 0xe8 (0x4)
	float ScaleMultiplier; // 0xec (0x4)
};


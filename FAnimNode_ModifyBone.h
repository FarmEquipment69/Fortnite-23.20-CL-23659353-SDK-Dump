// ScriptStruct /Script/AnimGraphRuntime.AnimNode_ModifyBone
// Size: 0x128
struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToModify; // 0xc8 (0xc)
	unsigned char unreflected_d4[0x4]; // 0xd4 (0x4) 
	struct FVector Translation; // 0xd8 (0x18)
	struct FRotator Rotation; // 0xf0 (0x18)
	struct FVector Scale; // 0x108 (0x18)
	struct TEnumAsByte<EBoneModificationMode> TranslationMode; // 0x120 (0x1)
	struct TEnumAsByte<EBoneModificationMode> RotationMode; // 0x121 (0x1)
	struct TEnumAsByte<EBoneModificationMode> ScaleMode; // 0x122 (0x1)
	struct TEnumAsByte<EBoneControlSpace> TranslationSpace; // 0x123 (0x1)
	struct TEnumAsByte<EBoneControlSpace> RotationSpace; // 0x124 (0x1)
	struct TEnumAsByte<EBoneControlSpace> ScaleSpace; // 0x125 (0x1)
	unsigned char padding_126[0x2]; // 0x126 (0x2)
};


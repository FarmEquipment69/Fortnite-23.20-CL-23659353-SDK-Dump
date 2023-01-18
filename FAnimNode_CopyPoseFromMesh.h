// ScriptStruct /Script/AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// Size: 0x1d0
struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base
{
	struct TWeakObjectPtr<class USkeletalMeshComponent> SourceMeshComponent; // 0x10 (0x8)
	unsigned char bUseAttachedParent; // 0x18 (0x1)
	unsigned char bCopyCurves; // 0x18 (0x1)
	bool bCopyCustomAttributes; // 0x19 (0x1)
	unsigned char bUseMeshPose; // 0x1a (0x1)
	unsigned char unreflected_1b[0x1]; // 0x1b (0x1) 
	struct FName RootBoneToCopy; // 0x1c (0x4)
	unsigned char padding_20[0x1b0]; // 0x20 (0x1b0)
};


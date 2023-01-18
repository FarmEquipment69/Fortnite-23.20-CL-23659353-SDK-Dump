// ScriptStruct /Script/IKRig.IKRigSkeleton
// Size: 0x70
struct FIKRigSkeleton
{
	struct TArray<struct FName> BoneNames; // 0x0 (0x10)
	struct TArray<int> ParentIndices; // 0x10 (0x10)
	struct TArray<struct FName> ExcludedBones; // 0x20 (0x10)
	struct TArray<struct FTransform> CurrentPoseGlobal; // 0x30 (0x10)
	struct TArray<struct FTransform> CurrentPoseLocal; // 0x40 (0x10)
	struct TArray<struct FTransform> RefPoseGlobal; // 0x50 (0x10)
	unsigned char padding_60[0x10]; // 0x60 (0x10)
};


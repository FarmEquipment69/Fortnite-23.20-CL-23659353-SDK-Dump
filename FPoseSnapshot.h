// ScriptStruct /Script/Engine.PoseSnapshot
// Size: 0x30
struct FPoseSnapshot
{
	struct TArray<struct FTransform> LocalTransforms; // 0x0 (0x10)
	struct TArray<struct FName> BoneNames; // 0x10 (0x10)
	struct FName SkeletalMeshName; // 0x20 (0x4)
	struct FName SnapshotName; // 0x24 (0x4)
	bool bIsValid; // 0x28 (0x1)
	unsigned char padding_29[0x7]; // 0x29 (0x7)
};


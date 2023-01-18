// ScriptStruct /Script/AugmentedReality.ARPose2D
// Size: 0x48
struct FARPose2D
{
	struct FARSkeletonDefinition SkeletonDefinition; // 0x0 (0x28)
	struct TArray<struct FVector2D> JointLocations; // 0x28 (0x10)
	struct TArray<bool> IsJointTracked; // 0x38 (0x10)
};


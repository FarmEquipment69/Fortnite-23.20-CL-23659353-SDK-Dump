// ScriptStruct /Script/AugmentedReality.ARPose3D
// Size: 0x50
struct FARPose3D
{
	struct FARSkeletonDefinition SkeletonDefinition; // 0x0 (0x28)
	struct TArray<struct FTransform> JointTransforms; // 0x28 (0x10)
	struct TArray<bool> IsJointTracked; // 0x38 (0x10)
	enum EARJointTransformSpace JointTransformSpace; // 0x48 (0x1)
	unsigned char padding_49[0x7]; // 0x49 (0x7)
};


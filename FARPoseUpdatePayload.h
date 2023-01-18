// ScriptStruct /Script/AugmentedReality.ARPoseUpdatePayload
// Size: 0x70
struct FARPoseUpdatePayload
{
	struct FTransform WorldTransform; // 0x0 (0x60)
	struct TArray<struct FTransform> JointTransforms; // 0x60 (0x10)
};


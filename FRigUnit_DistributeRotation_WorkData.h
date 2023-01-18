// ScriptStruct /Script/ControlRig.RigUnit_DistributeRotation_WorkData
// Size: 0x50
struct FRigUnit_DistributeRotation_WorkData
{
	struct TArray<struct FCachedRigElement> CachedItems; // 0x0 (0x10)
	struct TArray<int> ItemRotationA; // 0x10 (0x10)
	struct TArray<int> ItemRotationB; // 0x20 (0x10)
	struct TArray<float> ItemRotationT; // 0x30 (0x10)
	struct TArray<struct FTransform> ItemLocalTransforms; // 0x40 (0x10)
};


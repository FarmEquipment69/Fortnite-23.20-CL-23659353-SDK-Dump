// ScriptStruct /Script/ControlRig.RigUnit_SpringIK_WorkData
// Size: 0xb0
struct FRigUnit_SpringIK_WorkData
{
	struct TArray<struct FCachedRigElement> CachedBones; // 0x0 (0x10)
	struct FCachedRigElement CachedPoleVector; // 0x10 (0x18)
	struct TArray<struct FTransform> Transforms; // 0x28 (0x10)
	struct FCRSimPointContainer Simulation; // 0x38 (0x78)
};


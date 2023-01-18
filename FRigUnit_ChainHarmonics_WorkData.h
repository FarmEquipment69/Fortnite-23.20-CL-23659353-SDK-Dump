// ScriptStruct /Script/ControlRig.RigUnit_ChainHarmonics_WorkData
// Size: 0x98
struct FRigUnit_ChainHarmonics_WorkData
{
	struct FVector Time; // 0x0 (0x18)
	struct TArray<struct FCachedRigElement> Items; // 0x18 (0x10)
	struct TArray<float> Ratio; // 0x28 (0x10)
	struct TArray<struct FVector> LocalTip; // 0x38 (0x10)
	struct TArray<struct FVector> PendulumTip; // 0x48 (0x10)
	struct TArray<struct FVector> PendulumPosition; // 0x58 (0x10)
	struct TArray<struct FVector> PendulumVelocity; // 0x68 (0x10)
	struct TArray<struct FVector> HierarchyLine; // 0x78 (0x10)
	struct TArray<struct FVector> VelocityLines; // 0x88 (0x10)
};


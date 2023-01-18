// ScriptStruct /Script/ControlRig.RigUnit_CCDIK_WorkData
// Size: 0x58
struct FRigUnit_CCDIK_WorkData
{
	struct TArray<struct FCCDIKChainLink> Chain; // 0x0 (0x10)
	struct TArray<struct FCachedRigElement> CachedItems; // 0x10 (0x10)
	struct TArray<int> RotationLimitIndex; // 0x20 (0x10)
	struct TArray<float> RotationLimitsPerItem; // 0x30 (0x10)
	struct FCachedRigElement CachedEffector; // 0x40 (0x18)
};


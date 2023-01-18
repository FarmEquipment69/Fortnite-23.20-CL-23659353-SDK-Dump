// ScriptStruct /Script/ControlRig.RigUnit_HierarchyGetParent
// Size: 0x48
struct FRigUnit_HierarchyGetParent : FRigUnit_HierarchyBase
{
	struct FRigElementKey* Child; // 0x8 (0x8)
	struct FRigElementKey* Parent; // 0x10 (0x8)
	struct FCachedRigElement CachedChild; // 0x18 (0x18)
	struct FCachedRigElement CachedParent; // 0x30 (0x18)
};


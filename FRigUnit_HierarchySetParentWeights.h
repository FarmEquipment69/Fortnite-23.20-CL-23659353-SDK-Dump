// ScriptStruct /Script/ControlRig.RigUnit_HierarchySetParentWeights
// Size: 0x50
struct FRigUnit_HierarchySetParentWeights : FRigUnit_DynamicHierarchyBaseMutable
{
	struct FRigElementKey* Child; // 0x38 (0x8)
	struct TArray<struct FRigElementWeight> Weights; // 0x40 (0x10)
};


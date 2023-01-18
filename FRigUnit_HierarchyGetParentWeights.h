// ScriptStruct /Script/ControlRig.RigUnit_HierarchyGetParentWeights
// Size: 0x30
struct FRigUnit_HierarchyGetParentWeights : FRigUnit_DynamicHierarchyBase
{
	struct FRigElementKey* Child; // 0x8 (0x8)
	struct TArray<struct FRigElementWeight> Weights; // 0x10 (0x10)
	struct FRigElementKeyCollection Parents; // 0x20 (0x10)
};


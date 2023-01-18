// ScriptStruct /Script/ControlRig.RigUnit_HierarchyGetParentWeightsArray
// Size: 0x30
struct FRigUnit_HierarchyGetParentWeightsArray : FRigUnit_DynamicHierarchyBase
{
	struct FRigElementKey* Child; // 0x8 (0x8)
	struct TArray<struct FRigElementWeight> Weights; // 0x10 (0x10)
	struct TArray<struct FRigElementKey*> Parents; // 0x20 (0x10)
};


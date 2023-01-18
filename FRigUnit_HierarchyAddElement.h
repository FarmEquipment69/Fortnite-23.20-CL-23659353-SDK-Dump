// ScriptStruct /Script/ControlRig.RigUnit_HierarchyAddElement
// Size: 0x50
struct FRigUnit_HierarchyAddElement : FRigUnit_DynamicHierarchyBaseMutable
{
	struct FRigElementKey* Parent; // 0x38 (0x8)
	struct FName Name; // 0x40 (0x4)
	struct FRigElementKey* Item; // 0x44 (0x8)
	unsigned char padding_4c[0x4]; // 0x4c (0x4)
};


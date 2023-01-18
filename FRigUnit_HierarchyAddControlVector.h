// ScriptStruct /Script/ControlRig.RigUnit_HierarchyAddControlVector
// Size: 0x1d0
struct FRigUnit_HierarchyAddControlVector : FRigUnit_HierarchyAddElement
{
	struct FTransform OffsetTransform; // 0x50 (0x60)
	struct FVector InitialValue; // 0xb0 (0x18)
	unsigned char unreflected_c8[0x8]; // 0xc8 (0x8) 
	struct FRigUnit_HierarchyAddControlVector_Settings Settings; // 0xd0 (0x100)
};


// ScriptStruct /Script/ControlRig.RigUnit_HierarchyGetChildren
// Size: 0x50
struct FRigUnit_HierarchyGetChildren : FRigUnit_HierarchyBase
{
	struct FRigElementKey* Parent; // 0x8 (0x8)
	bool bIncludeParent; // 0x10 (0x1)
	bool bRecursive; // 0x11 (0x1)
	unsigned char unreflected_12[0x6]; // 0x12 (0x6) 
	struct FRigElementKeyCollection Children; // 0x18 (0x10)
	struct FCachedRigElement CachedParent; // 0x28 (0x18)
	struct FRigElementKeyCollection CachedChildren; // 0x40 (0x10)
};


// ScriptStruct /Script/ControlRig.RigUnit_HierarchyGetParents
// Size: 0x50
struct FRigUnit_HierarchyGetParents : FRigUnit_HierarchyBase
{
	struct FRigElementKey* Child; // 0x8 (0x8)
	bool bIncludeChild; // 0x10 (0x1)
	bool bReverse; // 0x11 (0x1)
	unsigned char unreflected_12[0x6]; // 0x12 (0x6) 
	struct FRigElementKeyCollection Parents; // 0x18 (0x10)
	struct FCachedRigElement CachedChild; // 0x28 (0x18)
	struct FRigElementKeyCollection CachedParents; // 0x40 (0x10)
};


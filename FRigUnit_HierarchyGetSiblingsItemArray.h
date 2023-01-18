// ScriptStruct /Script/ControlRig.RigUnit_HierarchyGetSiblingsItemArray
// Size: 0x50
struct FRigUnit_HierarchyGetSiblingsItemArray : FRigUnit_HierarchyBase
{
	struct FRigElementKey* Item; // 0x8 (0x8)
	bool bIncludeItem; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct TArray<struct FRigElementKey*> Siblings; // 0x18 (0x10)
	struct FCachedRigElement CachedItem; // 0x28 (0x18)
	struct FRigElementKeyCollection CachedSiblings; // 0x40 (0x10)
};


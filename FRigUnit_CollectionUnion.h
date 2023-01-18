// ScriptStruct /Script/ControlRig.RigUnit_CollectionUnion
// Size: 0x40
struct FRigUnit_CollectionUnion : FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection A; // 0x8 (0x10)
	struct FRigElementKeyCollection B; // 0x18 (0x10)
	bool bAllowDuplicates; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct FRigElementKeyCollection Collection; // 0x30 (0x10)
};


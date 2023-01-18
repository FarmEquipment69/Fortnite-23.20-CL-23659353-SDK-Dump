// ScriptStruct /Script/ControlRig.RigUnit_CollectionReplaceItems
// Size: 0x38
struct FRigUnit_CollectionReplaceItems : FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection Items; // 0x8 (0x10)
	struct FName Old; // 0x18 (0x4)
	struct FName New; // 0x1c (0x4)
	bool RemoveInvalidItems; // 0x20 (0x1)
	bool bAllowDuplicates; // 0x21 (0x1)
	unsigned char unreflected_22[0x6]; // 0x22 (0x6) 
	struct FRigElementKeyCollection Collection; // 0x28 (0x10)
};


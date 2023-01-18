// ScriptStruct /Script/ControlRig.RigUnit_CollectionItems
// Size: 0x30
struct FRigUnit_CollectionItems : FRigUnit_CollectionBase
{
	struct TArray<struct FRigElementKey*> Items; // 0x8 (0x10)
	bool bAllowDuplicates; // 0x18 (0x1)
	unsigned char unreflected_19[0x7]; // 0x19 (0x7) 
	struct FRigElementKeyCollection Collection; // 0x20 (0x10)
};


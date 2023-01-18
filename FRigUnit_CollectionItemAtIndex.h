// ScriptStruct /Script/ControlRig.RigUnit_CollectionItemAtIndex
// Size: 0x28
struct FRigUnit_CollectionItemAtIndex : FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection Collection; // 0x8 (0x10)
	int Index; // 0x18 (0x4)
	struct FRigElementKey* Item; // 0x1c (0x8)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};


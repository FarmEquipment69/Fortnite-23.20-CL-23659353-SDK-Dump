// ScriptStruct /Script/ControlRig.RigUnit_CollectionChainArray
// Size: 0x30
struct FRigUnit_CollectionChainArray : FRigUnit_CollectionBase
{
	struct FRigElementKey* FirstItem; // 0x8 (0x8)
	struct FRigElementKey* LastItem; // 0x10 (0x8)
	bool Reverse; // 0x18 (0x1)
	unsigned char unreflected_19[0x7]; // 0x19 (0x7) 
	struct TArray<struct FRigElementKey*> Items; // 0x20 (0x10)
};


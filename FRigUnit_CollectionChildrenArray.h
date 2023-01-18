// ScriptStruct /Script/ControlRig.RigUnit_CollectionChildrenArray
// Size: 0x28
struct FRigUnit_CollectionChildrenArray : FRigUnit_CollectionBase
{
	struct FRigElementKey* Parent; // 0x8 (0x8)
	bool bIncludeParent; // 0x10 (0x1)
	bool bRecursive; // 0x11 (0x1)
	enum ERigElementType TypeToSearch; // 0x12 (0x1)
	unsigned char unreflected_13[0x5]; // 0x13 (0x5) 
	struct TArray<struct FRigElementKey*> Items; // 0x18 (0x10)
};


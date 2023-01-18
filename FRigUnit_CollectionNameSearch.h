// ScriptStruct /Script/ControlRig.RigUnit_CollectionNameSearch
// Size: 0x20
struct FRigUnit_CollectionNameSearch : FRigUnit_CollectionBase
{
	struct FName PartialName; // 0x8 (0x4)
	enum ERigElementType TypeToSearch; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct FRigElementKeyCollection Collection; // 0x10 (0x10)
};


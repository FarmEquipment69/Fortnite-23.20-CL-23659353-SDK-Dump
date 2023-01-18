// ScriptStruct /Script/ControlRig.RigUnit_CollectionGetAll
// Size: 0x20
struct FRigUnit_CollectionGetAll : FRigUnit_CollectionBase
{
	enum ERigElementType TypeToSearch; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct TArray<struct FRigElementKey*> Items; // 0x10 (0x10)
};


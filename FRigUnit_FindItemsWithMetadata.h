// ScriptStruct /Script/ControlRig.RigUnit_FindItemsWithMetadata
// Size: 0x20
struct FRigUnit_FindItemsWithMetadata : FRigUnit
{
	struct FName Name; // 0x8 (0x4)
	enum ERigMetadataType Type; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct TArray<struct FRigElementKey*> Items; // 0x10 (0x10)
};


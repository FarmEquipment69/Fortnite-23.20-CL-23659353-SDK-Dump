// ScriptStruct /Script/ControlRig.RigUnit_FindItemsWithMetadataTag
// Size: 0x20
struct FRigUnit_FindItemsWithMetadataTag : FRigUnit
{
	struct FName tag; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct TArray<struct FRigElementKey*> Items; // 0x10 (0x10)
};


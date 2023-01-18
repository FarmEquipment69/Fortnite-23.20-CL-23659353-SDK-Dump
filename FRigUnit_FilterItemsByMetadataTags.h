// ScriptStruct /Script/ControlRig.RigUnit_FilterItemsByMetadataTags
// Size: 0x50
struct FRigUnit_FilterItemsByMetadataTags : FRigUnit
{
	struct TArray<struct FRigElementKey*> Items; // 0x8 (0x10)
	struct TArray<struct FName> Tags; // 0x18 (0x10)
	bool Inclusive; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct TArray<struct FRigElementKey*> Result; // 0x30 (0x10)
	struct TArray<struct FCachedRigElement> CachedIndices; // 0x40 (0x10)
};


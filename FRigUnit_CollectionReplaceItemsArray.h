// ScriptStruct /Script/ControlRig.RigUnit_CollectionReplaceItemsArray
// Size: 0x38
struct FRigUnit_CollectionReplaceItemsArray : FRigUnit_CollectionBase
{
	struct TArray<struct FRigElementKey*> Items; // 0x8 (0x10)
	struct FName Old; // 0x18 (0x4)
	struct FName New; // 0x1c (0x4)
	bool RemoveInvalidItems; // 0x20 (0x1)
	bool bAllowDuplicates; // 0x21 (0x1)
	unsigned char unreflected_22[0x6]; // 0x22 (0x6) 
	struct TArray<struct FRigElementKey*> Result; // 0x28 (0x10)
};


// ScriptStruct /Script/ControlRig.RigUnit_SetMetadataTagArray
// Size: 0x68
struct FRigUnit_SetMetadataTagArray : FRigUnitMutable
{
	struct FRigElementKey* Item; // 0x38 (0x8)
	struct TArray<struct FName> Tags; // 0x40 (0x10)
	struct FCachedRigElement CachedIndex; // 0x50 (0x18)
};


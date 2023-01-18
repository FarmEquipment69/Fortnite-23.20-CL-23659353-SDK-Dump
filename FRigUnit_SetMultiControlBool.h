// ScriptStruct /Script/ControlRig.RigUnit_SetMultiControlBool
// Size: 0x58
struct FRigUnit_SetMultiControlBool : FRigUnitMutable
{
	struct TArray<struct FRigUnit_SetMultiControlBool_Entry*> Entries; // 0x38 (0x10)
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x48 (0x10)
};


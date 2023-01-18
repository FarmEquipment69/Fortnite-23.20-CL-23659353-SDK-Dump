// ScriptStruct /Script/ControlRig.RigUnit_SetMultiControlRotator
// Size: 0x60
struct FRigUnit_SetMultiControlRotator : FRigUnitMutable
{
	struct TArray<struct FRigUnit_SetMultiControlRotator_Entry> Entries; // 0x38 (0x10)
	float Weight; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct TArray<struct FCachedRigElement> CachedControlIndices; // 0x50 (0x10)
};


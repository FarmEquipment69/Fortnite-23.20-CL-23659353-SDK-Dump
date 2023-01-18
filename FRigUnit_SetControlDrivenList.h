// ScriptStruct /Script/ControlRig.RigUnit_SetControlDrivenList
// Size: 0x68
struct FRigUnit_SetControlDrivenList : FRigUnitMutable
{
	struct FName Control; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct TArray<struct FRigElementKey*> Driven; // 0x40 (0x10)
	struct FCachedRigElement CachedControlIndex; // 0x50 (0x18)
};


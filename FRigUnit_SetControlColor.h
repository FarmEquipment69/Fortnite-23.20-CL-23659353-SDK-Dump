// ScriptStruct /Script/ControlRig.RigUnit_SetControlColor
// Size: 0x68
struct FRigUnit_SetControlColor : FRigUnitMutable
{
	struct FName Control; // 0x38 (0x4)
	struct FLinearColor Color; // 0x3c (0x10)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct FCachedRigElement CachedControlIndex; // 0x50 (0x18)
};


// ScriptStruct /Script/ControlRig.RigUnit_GetControlColor
// Size: 0x38
struct FRigUnit_GetControlColor : FRigUnit
{
	struct FName Control; // 0x8 (0x4)
	struct FLinearColor Color; // 0xc (0x10)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct FCachedRigElement CachedControlIndex; // 0x20 (0x18)
};


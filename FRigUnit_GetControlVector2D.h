// ScriptStruct /Script/ControlRig.RigUnit_GetControlVector2D
// Size: 0x58
struct FRigUnit_GetControlVector2D : FRigUnit
{
	struct FName Control; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FVector2D Vector; // 0x10 (0x10)
	struct FVector2D Minimum; // 0x20 (0x10)
	struct FVector2D Maximum; // 0x30 (0x10)
	struct FCachedRigElement CachedControlIndex; // 0x40 (0x18)
};


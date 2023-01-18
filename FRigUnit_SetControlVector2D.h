// ScriptStruct /Script/ControlRig.RigUnit_SetControlVector2D
// Size: 0x68
struct FRigUnit_SetControlVector2D : FRigUnitMutable
{
	struct FName Control; // 0x38 (0x4)
	float Weight; // 0x3c (0x4)
	struct FVector2D Vector; // 0x40 (0x10)
	struct FCachedRigElement CachedControlIndex; // 0x50 (0x18)
};


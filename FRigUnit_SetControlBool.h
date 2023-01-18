// ScriptStruct /Script/ControlRig.RigUnit_SetControlBool
// Size: 0x58
struct FRigUnit_SetControlBool : FRigUnitMutable
{
	struct FName Control; // 0x38 (0x4)
	bool BoolValue; // 0x3c (0x1)
	unsigned char unreflected_3d[0x3]; // 0x3d (0x3) 
	struct FCachedRigElement CachedControlIndex; // 0x40 (0x18)
};


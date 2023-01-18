// ScriptStruct /Script/ControlRig.RigUnit_GetControlBool
// Size: 0x28
struct FRigUnit_GetControlBool : FRigUnit
{
	struct FName Control; // 0x8 (0x4)
	bool BoolValue; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct FCachedRigElement CachedControlIndex; // 0x10 (0x18)
};


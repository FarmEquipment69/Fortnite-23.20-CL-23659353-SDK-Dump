// ScriptStruct /Script/ControlRig.RigUnit_GetControlFloat
// Size: 0x30
struct FRigUnit_GetControlFloat : FRigUnit
{
	struct FName Control; // 0x8 (0x4)
	float FloatValue; // 0xc (0x4)
	float Minimum; // 0x10 (0x4)
	float Maximum; // 0x14 (0x4)
	struct FCachedRigElement CachedControlIndex; // 0x18 (0x18)
};


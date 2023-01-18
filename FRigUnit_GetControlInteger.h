// ScriptStruct /Script/ControlRig.RigUnit_GetControlInteger
// Size: 0x30
struct FRigUnit_GetControlInteger : FRigUnit
{
	struct FName Control; // 0x8 (0x4)
	int IntegerValue; // 0xc (0x4)
	int Minimum; // 0x10 (0x4)
	int Maximum; // 0x14 (0x4)
	struct FCachedRigElement CachedControlIndex; // 0x18 (0x18)
};


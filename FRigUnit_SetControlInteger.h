// ScriptStruct /Script/ControlRig.RigUnit_SetControlInteger
// Size: 0x60
struct FRigUnit_SetControlInteger : FRigUnitMutable
{
	struct FName Control; // 0x38 (0x4)
	int Weight; // 0x3c (0x4)
	int IntegerValue; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FCachedRigElement CachedControlIndex; // 0x48 (0x18)
};


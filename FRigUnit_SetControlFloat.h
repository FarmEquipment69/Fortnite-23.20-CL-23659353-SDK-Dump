// ScriptStruct /Script/ControlRig.RigUnit_SetControlFloat
// Size: 0x60
struct FRigUnit_SetControlFloat : FRigUnitMutable
{
	struct FName Control; // 0x38 (0x4)
	float Weight; // 0x3c (0x4)
	float FloatValue; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FCachedRigElement CachedControlIndex; // 0x48 (0x18)
};


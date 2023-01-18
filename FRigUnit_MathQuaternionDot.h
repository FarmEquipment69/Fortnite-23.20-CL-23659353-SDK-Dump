// ScriptStruct /Script/ControlRig.RigUnit_MathQuaternionDot
// Size: 0x60
struct FRigUnit_MathQuaternionDot : FRigUnit_MathQuaternionBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FQuat A; // 0x10 (0x20)
	struct FQuat B; // 0x30 (0x20)
	float Result; // 0x50 (0x4)
	unsigned char padding_54[0xc]; // 0x54 (0xc)
};


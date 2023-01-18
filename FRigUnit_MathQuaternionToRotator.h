// ScriptStruct /Script/ControlRig.RigUnit_MathQuaternionToRotator
// Size: 0x50
struct FRigUnit_MathQuaternionToRotator : FRigUnit_MathQuaternionBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FQuat Value; // 0x10 (0x20)
	struct FRotator Result; // 0x30 (0x18)
	unsigned char padding_48[0x8]; // 0x48 (0x8)
};


// ScriptStruct /Script/ControlRig.RigUnit_MathQuaternionRotateVector
// Size: 0x60
struct FRigUnit_MathQuaternionRotateVector : FRigUnit_MathQuaternionBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FQuat Transform; // 0x10 (0x20)
	struct FVector Vector; // 0x30 (0x18)
	struct FVector Result; // 0x48 (0x18)
};


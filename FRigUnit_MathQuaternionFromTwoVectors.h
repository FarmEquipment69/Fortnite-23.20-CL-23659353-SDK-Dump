// ScriptStruct /Script/ControlRig.RigUnit_MathQuaternionFromTwoVectors
// Size: 0x60
struct FRigUnit_MathQuaternionFromTwoVectors : FRigUnit_MathQuaternionBase
{
	struct FVector A; // 0x8 (0x18)
	struct FVector B; // 0x20 (0x18)
	unsigned char unreflected_38[0x8]; // 0x38 (0x8) 
	struct FQuat Result; // 0x40 (0x20)
};


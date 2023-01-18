// ScriptStruct /Script/ControlRig.RigUnit_MathQuaternionFromEuler
// Size: 0x50
struct FRigUnit_MathQuaternionFromEuler : FRigUnit_MathQuaternionBase
{
	struct FVector Euler; // 0x8 (0x18)
	enum EEulerRotationOrder RotationOrder; // 0x20 (0x1)
	unsigned char unreflected_21[0xf]; // 0x21 (0xf) 
	struct FQuat Result; // 0x30 (0x20)
};


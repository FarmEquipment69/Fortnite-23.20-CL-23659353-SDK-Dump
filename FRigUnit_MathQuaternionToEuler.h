// ScriptStruct /Script/ControlRig.RigUnit_MathQuaternionToEuler
// Size: 0x50
struct FRigUnit_MathQuaternionToEuler : FRigUnit_MathQuaternionBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FQuat Value; // 0x10 (0x20)
	enum EEulerRotationOrder RotationOrder; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FVector Result; // 0x38 (0x18)
};


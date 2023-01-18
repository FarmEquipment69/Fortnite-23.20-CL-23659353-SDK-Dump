// ScriptStruct /Script/ControlRig.RigUnit_MathTransformFromSRT
// Size: 0x110
struct FRigUnit_MathTransformFromSRT : FRigUnit_MathTransformBase
{
	struct FVector Location; // 0x8 (0x18)
	struct FVector Rotation; // 0x20 (0x18)
	enum EEulerRotationOrder RotationOrder; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct FVector Scale; // 0x40 (0x18)
	unsigned char unreflected_58[0x8]; // 0x58 (0x8) 
	struct FTransform Transform; // 0x60 (0x60)
	struct FEulerTransform EulerTransform; // 0xc0 (0x48)
	unsigned char padding_108[0x8]; // 0x108 (0x8)
};


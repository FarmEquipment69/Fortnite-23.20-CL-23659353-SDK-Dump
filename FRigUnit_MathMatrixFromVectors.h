// ScriptStruct /Script/ControlRig.RigUnit_MathMatrixFromVectors
// Size: 0xf0
struct FRigUnit_MathMatrixFromVectors : FRigUnit_MathMatrixBase
{
	struct FVector Origin; // 0x8 (0x18)
	struct FVector X; // 0x20 (0x18)
	struct FVector Y; // 0x38 (0x18)
	struct FVector Z; // 0x50 (0x18)
	unsigned char unreflected_68[0x8]; // 0x68 (0x8) 
	struct FMatrix Result; // 0x70 (0x80)
};


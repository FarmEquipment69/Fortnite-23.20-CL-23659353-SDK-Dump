// ScriptStruct /Script/ControlRig.RigUnit_MathVectorMirrorTransform
// Size: 0xb0
struct FRigUnit_MathVectorMirrorTransform : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8 (0x18)
	struct TEnumAsByte<EAxis> MirrorAxis; // 0x20 (0x1)
	struct TEnumAsByte<EAxis> AxisToFlip; // 0x21 (0x1)
	unsigned char unreflected_22[0xe]; // 0x22 (0xe) 
	struct FTransform CentralTransform; // 0x30 (0x60)
	struct FVector Result; // 0x90 (0x18)
	unsigned char padding_a8[0x8]; // 0xa8 (0x8)
};


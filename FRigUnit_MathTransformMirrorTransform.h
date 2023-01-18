// ScriptStruct /Script/ControlRig.RigUnit_MathTransformMirrorTransform
// Size: 0x140
struct FRigUnit_MathTransformMirrorTransform : FRigUnit_MathTransformBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform Value; // 0x10 (0x60)
	struct TEnumAsByte<EAxis> MirrorAxis; // 0x70 (0x1)
	struct TEnumAsByte<EAxis> AxisToFlip; // 0x71 (0x1)
	unsigned char unreflected_72[0xe]; // 0x72 (0xe) 
	struct FTransform CentralTransform; // 0x80 (0x60)
	struct FTransform Result; // 0xe0 (0x60)
};


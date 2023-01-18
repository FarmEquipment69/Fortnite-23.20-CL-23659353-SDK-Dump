// ScriptStruct /Script/ControlRig.RigUnit_MathQuaternionMirrorTransform
// Size: 0xc0
struct FRigUnit_MathQuaternionMirrorTransform : FRigUnit_MathQuaternionBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FQuat Value; // 0x10 (0x20)
	struct TEnumAsByte<EAxis> MirrorAxis; // 0x30 (0x1)
	struct TEnumAsByte<EAxis> AxisToFlip; // 0x31 (0x1)
	unsigned char unreflected_32[0xe]; // 0x32 (0xe) 
	struct FTransform CentralTransform; // 0x40 (0x60)
	struct FQuat Result; // 0xa0 (0x20)
};


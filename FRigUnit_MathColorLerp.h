// ScriptStruct /Script/ControlRig.RigUnit_MathColorLerp
// Size: 0x40
struct FRigUnit_MathColorLerp : FRigUnit_MathColorBase
{
	struct FLinearColor A; // 0x8 (0x10)
	struct FLinearColor B; // 0x18 (0x10)
	float T; // 0x28 (0x4)
	struct FLinearColor Result; // 0x2c (0x10)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};


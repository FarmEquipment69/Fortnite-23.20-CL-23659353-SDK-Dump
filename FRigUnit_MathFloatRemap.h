// ScriptStruct /Script/ControlRig.RigUnit_MathFloatRemap
// Size: 0x28
struct FRigUnit_MathFloatRemap : FRigUnit_MathFloatBase
{
	float Value; // 0x8 (0x4)
	float SourceMinimum; // 0xc (0x4)
	float SourceMaximum; // 0x10 (0x4)
	float TargetMinimum; // 0x14 (0x4)
	float TargetMaximum; // 0x18 (0x4)
	bool bClamp; // 0x1c (0x1)
	unsigned char unreflected_1d[0x3]; // 0x1d (0x3) 
	float Result; // 0x20 (0x4)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};


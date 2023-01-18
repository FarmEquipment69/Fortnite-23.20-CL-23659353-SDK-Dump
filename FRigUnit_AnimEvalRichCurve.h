// ScriptStruct /Script/ControlRig.RigUnit_AnimEvalRichCurve
// Size: 0xb0
struct FRigUnit_AnimEvalRichCurve : FRigUnit_AnimBase
{
	float Value; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FRuntimeFloatCurve Curve; // 0x10 (0x88)
	float SourceMinimum; // 0x98 (0x4)
	float SourceMaximum; // 0x9c (0x4)
	float TargetMinimum; // 0xa0 (0x4)
	float TargetMaximum; // 0xa4 (0x4)
	float Result; // 0xa8 (0x4)
	unsigned char padding_ac[0x4]; // 0xac (0x4)
};


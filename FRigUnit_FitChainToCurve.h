// ScriptStruct /Script/ControlRig.RigUnit_FitChainToCurve
// Size: 0x250
struct FRigUnit_FitChainToCurve : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone; // 0x38 (0x4)
	struct FName EndBone; // 0x3c (0x4)
	struct FCRFourPointBezier Bezier; // 0x40 (0x60)
	enum EControlRigCurveAlignment Alignment; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x3]; // 0xa1 (0x3) 
	float Minimum; // 0xa4 (0x4)
	float Maximum; // 0xa8 (0x4)
	int SamplingPrecision; // 0xac (0x4)
	struct FVector PrimaryAxis; // 0xb0 (0x18)
	struct FVector SecondaryAxis; // 0xc8 (0x18)
	struct FVector PoleVectorPosition; // 0xe0 (0x18)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations; // 0xf8 (0x10)
	enum EControlRigAnimEasingType RotationEaseType; // 0x108 (0x1)
	unsigned char unreflected_109[0x3]; // 0x109 (0x3) 
	float Weight; // 0x10c (0x4)
	bool bPropagateToChildren; // 0x110 (0x1)
	unsigned char unreflected_111[0xf]; // 0x111 (0xf) 
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x120 (0x90)
	struct FRigUnit_FitChainToCurve_WorkData WorkData; // 0x1b0 (0x98)
	unsigned char padding_248[0x8]; // 0x248 (0x8)
};


// ScriptStruct /Script/ControlRig.RigUnit_FitChainToCurveItemArray
// Size: 0x250
struct FRigUnit_FitChainToCurveItemArray : FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigElementKey*> Items; // 0x38 (0x10)
	struct FCRFourPointBezier Bezier; // 0x48 (0x60)
	enum EControlRigCurveAlignment Alignment; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x3]; // 0xa9 (0x3) 
	float Minimum; // 0xac (0x4)
	float Maximum; // 0xb0 (0x4)
	int SamplingPrecision; // 0xb4 (0x4)
	struct FVector PrimaryAxis; // 0xb8 (0x18)
	struct FVector SecondaryAxis; // 0xd0 (0x18)
	struct FVector PoleVectorPosition; // 0xe8 (0x18)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations; // 0x100 (0x10)
	enum EControlRigAnimEasingType RotationEaseType; // 0x110 (0x1)
	unsigned char unreflected_111[0x3]; // 0x111 (0x3) 
	float Weight; // 0x114 (0x4)
	bool bPropagateToChildren; // 0x118 (0x1)
	unsigned char unreflected_119[0x7]; // 0x119 (0x7) 
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x120 (0x90)
	struct FRigUnit_FitChainToCurve_WorkData WorkData; // 0x1b0 (0x98)
	unsigned char padding_248[0x8]; // 0x248 (0x8)
};


// ScriptStruct /Script/ControlRigSpline.RigUnit_FitChainToSplineCurveItemArray
// Size: 0x210
struct FRigUnit_FitChainToSplineCurveItemArray : FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigElementKey*> Items; // 0x38 (0x10)
	struct FControlRigSpline Spline; // 0x48 (0x18)
	enum EControlRigCurveAlignment Alignment; // 0x60 (0x1)
	unsigned char unreflected_61[0x3]; // 0x61 (0x3) 
	float Minimum; // 0x64 (0x4)
	float Maximum; // 0x68 (0x4)
	int SamplingPrecision; // 0x6c (0x4)
	struct FVector PrimaryAxis; // 0x70 (0x18)
	struct FVector SecondaryAxis; // 0x88 (0x18)
	struct FVector PoleVectorPosition; // 0xa0 (0x18)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations; // 0xb8 (0x10)
	enum EControlRigAnimEasingType RotationEaseType; // 0xc8 (0x1)
	unsigned char unreflected_c9[0x3]; // 0xc9 (0x3) 
	float Weight; // 0xcc (0x4)
	bool bPropagateToChildren; // 0xd0 (0x1)
	unsigned char unreflected_d1[0xf]; // 0xd1 (0xf) 
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0xe0 (0x90)
	struct FRigUnit_FitChainToCurve_WorkData WorkData; // 0x170 (0x98)
	unsigned char padding_208[0x8]; // 0x208 (0x8)
};


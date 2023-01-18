// ScriptStruct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorBase
// Size: 0xc0
struct FRigUnit_MathRBFInterpolateVectorBase : FRigUnit_MathRBFInterpolateBase
{
	struct FVector Input; // 0x8 (0x18)
	enum ERBFVectorDistanceType DistanceFunction; // 0x20 (0x1)
	enum ERBFKernelType SmoothingFunction; // 0x21 (0x1)
	unsigned char unreflected_22[0x2]; // 0x22 (0x2) 
	float SmoothingRadius; // 0x24 (0x4)
	bool bNormalizeOutput; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct FRigUnit_MathRBFInterpolateVectorWorkData WorkData; // 0x30 (0x90)
};


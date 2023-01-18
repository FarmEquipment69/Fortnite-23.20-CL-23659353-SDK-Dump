// ScriptStruct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatBase
// Size: 0xf0
struct FRigUnit_MathRBFInterpolateQuatBase : FRigUnit_MathRBFInterpolateBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FQuat Input; // 0x10 (0x20)
	enum ERBFQuatDistanceType DistanceFunction; // 0x30 (0x1)
	enum ERBFKernelType SmoothingFunction; // 0x31 (0x1)
	unsigned char unreflected_32[0x2]; // 0x32 (0x2) 
	float SmoothingAngle; // 0x34 (0x4)
	bool bNormalizeOutput; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct FVector TwistAxis; // 0x40 (0x18)
	unsigned char unreflected_58[0x8]; // 0x58 (0x8) 
	struct FRigUnit_MathRBFInterpolateQuatWorkData WorkData; // 0x60 (0x90)
};


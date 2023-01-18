// ScriptStruct /Script/IKRig.LimbSolverSettings
// Size: 0x24
struct FLimbSolverSettings
{
	float ReachPrecision; // 0x0 (0x4)
	struct TEnumAsByte<EAxis> HingeRotationAxis; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	int MaxIterations; // 0x8 (0x4)
	bool bEnableLimit; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	float MinRotationAngle; // 0x10 (0x4)
	bool bAveragePull; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	float PullDistribution; // 0x18 (0x4)
	float ReachStepAlpha; // 0x1c (0x4)
	bool bEnableTwistCorrection; // 0x20 (0x1)
	struct TEnumAsByte<EAxis> EndBoneForwardAxis; // 0x21 (0x1)
	unsigned char padding_22[0x2]; // 0x22 (0x2)
};


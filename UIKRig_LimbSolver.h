// Class /Script/IKRig.IKRig_LimbSolver
// Size: 0x88
class UIKRig_LimbSolver : public UIKRigSolver
{
	struct FName RootName; // 0x30 (0x4)
	float ReachPrecision; // 0x34 (0x4)
	struct TEnumAsByte<EAxis> HingeRotationAxis; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	int MaxIterations; // 0x3c (0x4)
	bool bEnableLimit; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	float MinRotationAngle; // 0x44 (0x4)
	bool bAveragePull; // 0x48 (0x1)
	unsigned char unreflected_49[0x3]; // 0x49 (0x3) 
	float PullDistribution; // 0x4c (0x4)
	float ReachStepAlpha; // 0x50 (0x4)
	bool bEnableTwistCorrection; // 0x54 (0x1)
	struct TEnumAsByte<EAxis> EndBoneForwardAxis; // 0x55 (0x1)
	unsigned char unreflected_56[0x2]; // 0x56 (0x2) 
	class UIKRig_LimbEffector* Effector; // 0x58 (0x8)
	unsigned char padding_60[0x28]; // 0x60 (0x28)
};


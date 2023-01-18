// Class /Script/ControlRig.ControlRigNumericalValidationPass
// Size: 0xb8
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{
	bool bCheckControls; // 0x28 (0x1)
	bool bCheckBones; // 0x29 (0x1)
	bool bCheckCurves; // 0x2a (0x1)
	unsigned char unreflected_2b[0x1]; // 0x2b (0x1) 
	float TranslationPrecision; // 0x2c (0x4)
	float RotationPrecision; // 0x30 (0x4)
	float ScalePrecision; // 0x34 (0x4)
	float CurvePrecision; // 0x38 (0x4)
	struct FName EventNameA; // 0x3c (0x4)
	struct FName EventNameB; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FRigPose Pose; // 0x48 (0x70)
};


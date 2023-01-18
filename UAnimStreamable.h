// Class /Script/Engine.AnimStreamable
// Size: 0xe8
class UAnimStreamable : public UAnimSequenceBase
{
	int NumberOfKeys; // 0xb0 (0x4)
	enum EAnimInterpolationType Interpolation; // 0xb4 (0x1)
	unsigned char unreflected_b5[0x3]; // 0xb5 (0x3) 
	struct FName RetargetSource; // 0xb8 (0x4)
	unsigned char unreflected_bc[0x14]; // 0xbc (0x14) 
	class UAnimBoneCompressionSettings* BoneCompressionSettings; // 0xd0 (0x8)
	class UAnimCurveCompressionSettings* CurveCompressionSettings; // 0xd8 (0x8)
	bool bEnableRootMotion; // 0xe0 (0x1)
	struct TEnumAsByte<ERootMotionRootLock> RootMotionRootLock; // 0xe1 (0x1)
	bool bForceRootLock; // 0xe2 (0x1)
	bool bUseNormalizedRootMotionScale; // 0xe3 (0x1)
	unsigned char padding_e4[0x4]; // 0xe4 (0x4)
};


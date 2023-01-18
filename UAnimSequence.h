// Class /Script/Engine.AnimSequence
// Size: 0x1d8
class UAnimSequence : public UAnimSequenceBase
{
	class UAnimBoneCompressionSettings* BoneCompressionSettings; // 0xb0 (0x8)
	class UAnimCurveCompressionSettings* CurveCompressionSettings; // 0xb8 (0x8)
	unsigned char unreflected_c0[0x70]; // 0xc0 (0x70) 
	struct TEnumAsByte<EAdditiveAnimationType> AdditiveAnimType; // 0x130 (0x1)
	struct TEnumAsByte<EAdditiveBasePoseType> RefPoseType; // 0x131 (0x1)
	unsigned char unreflected_132[0x2]; // 0x132 (0x2) 
	int RefFrameIndex; // 0x134 (0x4)
	class UAnimSequence* RefPoseSeq; // 0x138 (0x8)
	struct FName RetargetSource; // 0x140 (0x4)
	unsigned char unreflected_144[0x4]; // 0x144 (0x4) 
	struct TArray<struct FTransform> RetargetSourceAssetReferencePose; // 0x148 (0x10)
	enum EAnimInterpolationType Interpolation; // 0x158 (0x1)
	bool bEnableRootMotion; // 0x159 (0x1)
	struct TEnumAsByte<ERootMotionRootLock> RootMotionRootLock; // 0x15a (0x1)
	bool bForceRootLock; // 0x15b (0x1)
	bool bUseNormalizedRootMotionScale; // 0x15c (0x1)
	bool bRootMotionSettingsCopiedFromMontage; // 0x15d (0x1)
	unsigned char unreflected_15e[0x2]; // 0x15e (0x2) 
	struct TArray<struct FAnimSyncMarker*> AuthoredSyncMarkers; // 0x160 (0x10)
	unsigned char unreflected_170[0x10]; // 0x170 (0x10) 
	struct FFrameRate* TargetFrameRate; // 0x180 (0x8)
	struct TMap<struct FAnimationAttributeIdentifier, struct FAttributeCurve> AttributeCurves; // 0x188 (0x50)
};


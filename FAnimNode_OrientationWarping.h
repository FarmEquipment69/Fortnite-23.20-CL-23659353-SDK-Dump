// ScriptStruct /Script/AnimationWarpingRuntime.AnimNode_OrientationWarping
// Size: 0x198
struct FAnimNode_OrientationWarping : FAnimNode_SkeletalControlBase
{
	enum EWarpingEvaluationMode Mode; // 0xc8 (0x1)
	unsigned char unreflected_c9[0x3]; // 0xc9 (0x3) 
	float OrientationAngle; // 0xcc (0x4)
	float LocomotionAngle; // 0xd0 (0x4)
	float MinRootMotionSpeedThreshold; // 0xd4 (0x4)
	float LocomotionAngleDeltaThreshold; // 0xd8 (0x4)
	unsigned char unreflected_dc[0x4]; // 0xdc (0x4) 
	struct TArray<struct FBoneReference> SpineBones; // 0xe0 (0x10)
	struct FBoneReference IKFootRootBone; // 0xf0 (0xc)
	unsigned char unreflected_fc[0x4]; // 0xfc (0x4) 
	struct TArray<struct FBoneReference> IKFootBones; // 0x100 (0x10)
	struct TEnumAsByte<EAxis> RotationAxis; // 0x110 (0x1)
	unsigned char unreflected_111[0x3]; // 0x111 (0x3) 
	float DistributedBoneOrientationAlpha; // 0x114 (0x4)
	float RotationInterpSpeed; // 0x118 (0x4)
	float WarpingAlpha; // 0x11c (0x4)
	float OffsetAlpha; // 0x120 (0x4)
	float MaxOffsetAngle; // 0x124 (0x4)
	unsigned char padding_128[0x70]; // 0x128 (0x70)
};


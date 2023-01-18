// ScriptStruct /Script/AnimGraphRuntime.AnimLegIKDefinition
// Size: 0x24
struct FAnimLegIKDefinition
{
	struct FBoneReference IKFootBone; // 0x0 (0xc)
	struct FBoneReference FKFootBone; // 0xc (0xc)
	int NumBonesInLimb; // 0x18 (0x4)
	float MinRotationAngle; // 0x1c (0x4)
	struct TEnumAsByte<EAxis> FootBoneForwardAxis; // 0x20 (0x1)
	struct TEnumAsByte<EAxis> HingeRotationAxis; // 0x21 (0x1)
	bool bEnableRotationLimit; // 0x22 (0x1)
	bool bEnableKneeTwistCorrection; // 0x23 (0x1)
};


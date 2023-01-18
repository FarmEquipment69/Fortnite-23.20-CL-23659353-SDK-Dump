// ScriptStruct /Script/AnimGraphRuntime.AnimNode_Trail
// Size: 0x2a0
struct FAnimNode_Trail : FAnimNode_SkeletalControlBase
{
	unsigned char unreflected_c8[0x68]; // 0xc8 (0x68) 
	struct FBoneReference TrailBone; // 0x130 (0xc)
	int ChainLength; // 0x13c (0x4)
	struct TEnumAsByte<EAxis> ChainBoneAxis; // 0x140 (0x1)
	unsigned char bInvertChainBoneAxis; // 0x141 (0x1)
	unsigned char bLimitStretch; // 0x141 (0x1)
	unsigned char bLimitRotation; // 0x141 (0x1)
	unsigned char bUsePlanarLimit; // 0x141 (0x1)
	unsigned char bActorSpaceFakeVel; // 0x141 (0x1)
	unsigned char bReorientParentToChild; // 0x141 (0x1)
	unsigned char unreflected_142[0x2]; // 0x142 (0x2) 
	float MaxDeltaTime; // 0x144 (0x4)
	float RelaxationSpeedScale; // 0x148 (0x4)
	unsigned char unreflected_14c[0x4]; // 0x14c (0x4) 
	struct FRuntimeFloatCurve TrailRelaxationSpeed; // 0x150 (0x88)
	struct FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor; // 0x1d8 (0x30)
	struct TArray<struct FRotationLimit> RotationLimits; // 0x208 (0x10)
	struct TArray<struct FVector> RotationOffsets; // 0x218 (0x10)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x228 (0x10)
	float StretchLimit; // 0x238 (0x4)
	unsigned char unreflected_23c[0x4]; // 0x23c (0x4) 
	struct FVector FakeVelocity; // 0x240 (0x18)
	struct FBoneReference BaseJoint; // 0x258 (0xc)
	float LastBoneRotationAnimAlphaBlend; // 0x264 (0x4)
	unsigned char padding_268[0x38]; // 0x268 (0x38)
};


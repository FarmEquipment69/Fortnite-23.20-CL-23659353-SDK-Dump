// ScriptStruct /Script/AnimationWarpingRuntime.AnimNode_StrideWarping
// Size: 0x230
struct FAnimNode_StrideWarping : FAnimNode_SkeletalControlBase
{
	enum EWarpingEvaluationMode Mode; // 0xc8 (0x1)
	unsigned char unreflected_c9[0x7]; // 0xc9 (0x7) 
	struct FVector StrideDirection; // 0xd0 (0x18)
	float StrideScale; // 0xe8 (0x4)
	float LocomotionSpeed; // 0xec (0x4)
	float MinRootMotionSpeedThreshold; // 0xf0 (0x4)
	struct FBoneReference PelvisBone; // 0xf4 (0xc)
	struct FBoneReference IKFootRootBone; // 0x100 (0xc)
	unsigned char unreflected_10c[0x4]; // 0x10c (0x4) 
	struct TArray<struct FStrideWarpingFootDefinition> FootDefinitions; // 0x110 (0x10)
	struct FInputClampConstants StrideScaleModifier; // 0x120 (0x14)
	unsigned char unreflected_134[0x4]; // 0x134 (0x4) 
	struct FWarpingVectorValue FloorNormalDirection; // 0x138 (0x20)
	struct FWarpingVectorValue GravityDirection; // 0x158 (0x20)
	struct FIKFootPelvisPullDownSolver PelvisIKFootSolver; // 0x178 (0x70)
	bool bOrientStrideDirectionUsingFloorNormal; // 0x1e8 (0x1)
	bool bCompensateIKUsingFKThighRotation; // 0x1e9 (0x1)
	bool bClampIKUsingFKLimits; // 0x1ea (0x1)
	unsigned char padding_1eb[0x45]; // 0x1eb (0x45)
};


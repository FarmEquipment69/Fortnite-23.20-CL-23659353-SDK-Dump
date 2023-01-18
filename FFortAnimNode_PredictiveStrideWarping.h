// ScriptStruct /Script/FortniteGame.FortAnimNode_PredictiveStrideWarping
// Size: 0x200
struct FFortAnimNode_PredictiveStrideWarping : FAnimNode_SkeletalControlBase
{
	unsigned char unreflected_c8[0x8]; // 0xc8 (0x8) 
	struct FBoneReference IKFootRootBone; // 0xd0 (0xc)
	unsigned char unreflected_dc[0x4]; // 0xdc (0x4) 
	struct TArray<struct FPredictiveStrideWarpingFootDefinition> FeetDefinitions; // 0xe0 (0x10)
	struct TArray<struct FPredictiveStrideWarpingFootData> FeetData; // 0xf0 (0x10)
	struct FBoneReference PelvisBone; // 0x100 (0xc)
	enum EPredictiveStrideWarpingAxisMode PredictiveStrideWarpingAxisMode; // 0x10c (0x1)
	enum EPredictiveStrideWarpingAxisMode FloorNormalAxisMode; // 0x10d (0x1)
	enum EPredictiveStrideWarpingAxisMode GravityDirAxisMode; // 0x10e (0x1)
	unsigned char unreflected_10f[0x1]; // 0x10f (0x1) 
	float SpeedScaling; // 0x110 (0x4)
	struct FInputScaleBiasClamp SpeedScalingScaleBiasClamp; // 0x114 (0x30)
	unsigned char unreflected_144[0x4]; // 0x144 (0x4) 
	struct FVector ManualPredictiveStrideWarpingDir; // 0x148 (0x18)
	struct FVector ManualFloorNormalInput; // 0x160 (0x18)
	struct FVector ManualGravityDirInput; // 0x178 (0x18)
	float PelvisPostAdjustmentAlpha; // 0x190 (0x4)
	int PelvisAdjustmentMaxIter; // 0x194 (0x4)
	struct FVectorRK4SpringInterpolator* PelvisAdjustmentInterp; // 0x198 (0x8)
	unsigned char unreflected_1a0[0x58]; // 0x1a0 (0x58) 
	unsigned char bAdjustThighBonesRotation; // 0x1f8 (0x1)
	unsigned char bClampIKUsingFKLeg; // 0x1f8 (0x1)
	unsigned char bOrientPredictiveStrideWarpingAxisBasedOnFloorNormal; // 0x1f8 (0x1)
	unsigned char unreflected_1f9[0x3]; // 0x1f9 (0x3) 
	float CachedDeltaTime; // 0x1fc (0x4)
};


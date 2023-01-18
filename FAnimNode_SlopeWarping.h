// ScriptStruct /Script/AnimationWarpingRuntime.AnimNode_SlopeWarping
// Size: 0x2d8
struct FAnimNode_SlopeWarping : FAnimNode_SkeletalControlBase
{
	unsigned char unreflected_c8[0x18]; // 0xc8 (0x18) 
	struct FBoneReference IKFootRootBone; // 0xe0 (0xc)
	struct FBoneReference PelvisBone; // 0xec (0xc)
	struct TArray<struct FSlopeWarpingFootDefinition> FeetDefinitions; // 0xf8 (0x10)
	struct TArray<struct FSlopeWarpingFootData> FeetData; // 0x108 (0x10)
	struct FVectorRK4SpringInterpolator* PelvisOffsetInterpolator; // 0x118 (0x8)
	unsigned char unreflected_120[0x58]; // 0x120 (0x58) 
	struct FVector GravityDir; // 0x178 (0x18)
	struct FVector CustomFloorOffset; // 0x190 (0x18)
	float CachedDeltaTime; // 0x1a8 (0x4)
	unsigned char unreflected_1ac[0x4]; // 0x1ac (0x4) 
	struct FVector TargetFloorNormalWorldSpace; // 0x1b0 (0x18)
	struct FVectorRK4SpringInterpolator* FloorNormalInterpolator; // 0x1c8 (0x8)
	unsigned char unreflected_1d0[0x58]; // 0x1d0 (0x58) 
	struct FVector TargetFloorOffsetLocalSpace; // 0x228 (0x18)
	struct FVectorRK4SpringInterpolator* FloorOffsetInterpolator; // 0x240 (0x8)
	unsigned char unreflected_248[0x58]; // 0x248 (0x58) 
	float MaxStepHeight; // 0x2a0 (0x4)
	unsigned char bKeepMeshInsideOfCapsule; // 0x2a4 (0x1)
	unsigned char bPullPelvisDown; // 0x2a4 (0x1)
	unsigned char bUseCustomFloorOffset; // 0x2a4 (0x1)
	unsigned char bWasOnGround; // 0x2a4 (0x1)
	unsigned char bShowDebug; // 0x2a4 (0x1)
	unsigned char bFloorSmoothingInitialized; // 0x2a4 (0x1)
	unsigned char unreflected_2a5[0x3]; // 0x2a5 (0x3) 
	struct FVector ActorLocation; // 0x2a8 (0x18)
	struct FVector GravityDirCompSpace; // 0x2c0 (0x18)
};


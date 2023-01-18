// ScriptStruct /Script/FortniteGame.FortAnimNode_QuadrupedSlopeWarping
// Size: 0x5c8
struct FFortAnimNode_QuadrupedSlopeWarping : FFortAnimNode_SlopeWarping
{
	struct FBoneReference SkeletonRootBone; // 0x2e8 (0xc)
	struct FBoneReference ArmsRootBone; // 0x2f4 (0xc)
	struct FBoneReference ArmsIKFootRootBone; // 0x300 (0xc)
	unsigned char unreflected_30c[0x4]; // 0x30c (0x4) 
	struct TArray<struct FFortSlopeWarpingFootDefinition> ArmsFeetDefinitions; // 0x310 (0x10)
	int NumSpineBones; // 0x320 (0x4)
	unsigned char unreflected_324[0x4]; // 0x324 (0x4) 
	struct FVectorRK4SpringInterpolator* ArmsRootBoneOffsetInterpolator; // 0x328 (0x8)
	unsigned char unreflected_330[0x58]; // 0x330 (0x58) 
	struct TArray<struct FFortSlopeWarpingFootData> ArmsFeetData; // 0x388 (0x10)
	float MaxMovementDistBeforeNewTrace; // 0x398 (0x4)
	unsigned char bUseMovementComponentFloorInfoInsteadOfTraces; // 0x39c (0x1)
	unsigned char bOnlyAffectSkeletonRootBone; // 0x39c (0x1)
	unsigned char padding_39d[0x22b]; // 0x39d (0x22b)
};


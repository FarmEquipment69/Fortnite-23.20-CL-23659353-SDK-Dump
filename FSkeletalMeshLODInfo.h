// ScriptStruct /Script/Engine.SkeletalMeshLODInfo
// Size: 0xd8
struct FSkeletalMeshLODInfo
{
	struct FPerPlatformFloat ScreenSize; // 0x0 (0x4)
	float LODHysteresis; // 0x4 (0x4)
	struct TArray<int> LODMaterialMap; // 0x8 (0x10)
	struct FSkeletalMeshBuildSettings BuildSettings; // 0x18 (0x18)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x30 (0x3c)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	struct TArray<struct FBoneReference> BonesToRemove; // 0x70 (0x10)
	struct TArray<struct FBoneReference> BonesToPrioritize; // 0x80 (0x10)
	struct TArray<struct FSectionReference> SectionsToPrioritize; // 0x90 (0x10)
	float WeightOfPrioritization; // 0xa0 (0x4)
	unsigned char unreflected_a4[0x4]; // 0xa4 (0x4) 
	class UAnimSequence* BakePose; // 0xa8 (0x8)
	class UAnimSequence* BakePoseOverride; // 0xb0 (0x8)
	struct FString SourceImportFilename; // 0xb8 (0x10)
	enum ESkinCacheUsage SkinCacheUsage; // 0xc8 (0x1)
	unsigned char unreflected_c9[0x3]; // 0xc9 (0x3) 
	float MorphTargetPositionErrorTolerance; // 0xcc (0x4)
	unsigned char bHasBeenSimplified; // 0xd0 (0x1)
	unsigned char bHasPerLODVertexColors; // 0xd0 (0x1)
	unsigned char bAllowCPUAccess; // 0xd0 (0x1)
	unsigned char bSupportUniformlyDistributedSampling; // 0xd0 (0x1)
	unsigned char padding_d1[0x7]; // 0xd1 (0x7)
};


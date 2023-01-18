// ScriptStruct /Script/Engine.SkeletalMeshOptimizationSettings
// Size: 0x3c
struct FSkeletalMeshOptimizationSettings
{
	struct TEnumAsByte<SkeletalMeshTerminationCriterion> TerminationCriterion; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float NumOfTrianglesPercentage; // 0x4 (0x4)
	float NumOfVertPercentage; // 0x8 (0x4)
	uint32_t MaxNumOfTriangles; // 0xc (0x4)
	uint32_t MaxNumOfVerts; // 0x10 (0x4)
	float MaxDeviationPercentage; // 0x14 (0x4)
	struct TEnumAsByte<SkeletalMeshOptimizationType> ReductionMethod; // 0x18 (0x1)
	struct TEnumAsByte<SkeletalMeshOptimizationImportance> SilhouetteImportance; // 0x19 (0x1)
	struct TEnumAsByte<SkeletalMeshOptimizationImportance> TextureImportance; // 0x1a (0x1)
	struct TEnumAsByte<SkeletalMeshOptimizationImportance> ShadingImportance; // 0x1b (0x1)
	struct TEnumAsByte<SkeletalMeshOptimizationImportance> SkinningImportance; // 0x1c (0x1)
	unsigned char bRemapMorphTargets; // 0x1d (0x1)
	unsigned char bRecalcNormals; // 0x1d (0x1)
	unsigned char unreflected_1e[0x2]; // 0x1e (0x2) 
	float WeldingThreshold; // 0x20 (0x4)
	float NormalsThreshold; // 0x24 (0x4)
	int MaxBonesPerVertex; // 0x28 (0x4)
	unsigned char bEnforceBoneBoundaries; // 0x2c (0x1)
	unsigned char bMergeCoincidentVertBones; // 0x2c (0x1)
	unsigned char unreflected_2d[0x3]; // 0x2d (0x3) 
	float VolumeImportance; // 0x30 (0x4)
	unsigned char bLockEdges; // 0x34 (0x1)
	unsigned char bLockColorBounaries; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	int BaseLOD; // 0x38 (0x4)
};


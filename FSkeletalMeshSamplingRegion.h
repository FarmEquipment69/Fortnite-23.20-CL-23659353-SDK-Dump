// ScriptStruct /Script/Engine.SkeletalMeshSamplingRegion
// Size: 0x30
struct FSkeletalMeshSamplingRegion
{
	struct FName Name; // 0x0 (0x4)
	int LODIndex; // 0x4 (0x4)
	unsigned char bSupportUniformlyDistributedSampling; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct TArray<struct FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10 (0x10)
	struct TArray<struct FSkeletalMeshSamplingRegionBoneFilter*> BoneFilters; // 0x20 (0x10)
};


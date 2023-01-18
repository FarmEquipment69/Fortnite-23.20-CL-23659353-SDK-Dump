// ScriptStruct /Script/SkeletalMerging.SkeletalMeshMergeParams
// Size: 0x40
struct FSkeletalMeshMergeParams
{
	struct TArray<struct FSkelMeshMergeSectionMapping> MeshSectionMappings; // 0x0 (0x10)
	struct TArray<struct FSkelMeshMergeMeshUVTransforms> UVTransformsPerMesh; // 0x10 (0x10)
	struct TArray<class USkeletalMesh*> MeshesToMerge; // 0x20 (0x10)
	int StripTopLODS; // 0x30 (0x4)
	unsigned char bNeedsCpuAccess; // 0x34 (0x1)
	unsigned char bSkeletonBefore; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	class USkeleton* Skeleton; // 0x38 (0x8)
};


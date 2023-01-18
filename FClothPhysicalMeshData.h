// ScriptStruct /Script/ClothingSystemRuntimeCommon.ClothPhysicalMeshData
// Size: 0xd8
struct FClothPhysicalMeshData
{
	struct TArray<struct FVector3f> Vertices; // 0x0 (0x10)
	struct TArray<struct FVector3f> Normals; // 0x10 (0x10)
	struct TArray<uint32_t> Indices; // 0x20 (0x10)
	struct TMap<uint32_t, struct FPointWeightMap> WeightMaps; // 0x30 (0x50)
	struct TArray<float> InverseMasses; // 0x80 (0x10)
	struct TArray<struct FClothVertBoneData> BoneData; // 0x90 (0x10)
	struct TArray<uint32_t> SelfCollisionIndices; // 0xa0 (0x10)
	struct FClothTetherData EuclideanTethers; // 0xb0 (0x10)
	struct FClothTetherData GeodesicTethers; // 0xc0 (0x10)
	int MaxBoneWeights; // 0xd0 (0x4)
	int NumFixedVerts; // 0xd4 (0x4)
};


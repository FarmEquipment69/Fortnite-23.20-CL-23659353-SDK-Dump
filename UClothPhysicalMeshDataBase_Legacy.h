// Class /Script/ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
// Size: 0xe0
class UClothPhysicalMeshDataBase_Legacy : public UObject
{
	struct TArray<struct FVector3f> Vertices; // 0x28 (0x10)
	struct TArray<struct FVector3f> Normals; // 0x38 (0x10)
	struct TArray<uint32_t> Indices; // 0x48 (0x10)
	struct TArray<float> InverseMasses; // 0x58 (0x10)
	struct TArray<struct FClothVertBoneData> BoneData; // 0x68 (0x10)
	int NumFixedVerts; // 0x78 (0x4)
	int MaxBoneWeights; // 0x7c (0x4)
	struct TArray<uint32_t> SelfCollisionIndices; // 0x80 (0x10)
	unsigned char padding_90[0x50]; // 0x90 (0x50)
};


// ScriptStruct /Script/NearestNeighborModel.ClothPartData
// Size: 0x60
struct FClothPartData
{
	int PCACoeffNum; // 0x0 (0x4)
	uint32_t PCACoeffStart; // 0x4 (0x4)
	uint32_t NumVertices; // 0x8 (0x4)
	uint32_t NumNeighbors; // 0xc (0x4)
	struct TArray<uint32_t> VertexMap; // 0x10 (0x10)
	struct TArray<float> PCABasis; // 0x20 (0x10)
	struct TArray<float> VertexMean; // 0x30 (0x10)
	struct TArray<float> NeighborCoeffs; // 0x40 (0x10)
	struct TArray<float> NeighborOffsets; // 0x50 (0x10)
};


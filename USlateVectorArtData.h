// Class /Script/UMG.SlateVectorArtData
// Size: 0x70
class USlateVectorArtData : public UObject
{
	struct TArray<struct FSlateMeshVertex> VertexData; // 0x28 (0x10)
	struct TArray<uint32_t> IndexData; // 0x38 (0x10)
	class UMaterialInterface* Material; // 0x48 (0x8)
	struct FVector2D ExtentMin; // 0x50 (0x10)
	struct FVector2D ExtentMax; // 0x60 (0x10)
};


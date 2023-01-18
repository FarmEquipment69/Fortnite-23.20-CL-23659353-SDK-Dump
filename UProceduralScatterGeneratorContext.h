// Class /Script/Procedural.ProceduralScatterGeneratorContext
// Size: 0x380
class UProceduralScatterGeneratorContext : public UProceduralGeneratorContext
{
	struct FScatteredPointCloud ScatteredPointCloud; // 0x58 (0x10)
	struct TArray<class UProceduralScatterGeneratorTile*> UniqueTiles; // 0x68 (0x10)
	struct TArray<struct FSourcePointGenerator> SourcePointGenerators; // 0x78 (0x10)
	struct TArray<struct FProceduralScatterProjectionPoint> ProjectionPointCloud; // 0x88 (0x10)
	class UProceduralPointCloud* SourcePointCloud; // 0x98 (0x8)
	class UProceduralPointCloud* BlockerPointCloud; // 0xa0 (0x8)
	class UMaterialInstanceDynamic* ProjectionVectorMaterial; // 0xa8 (0x8)
	unsigned char padding_b0[0x2d0]; // 0xb0 (0x2d0)
};


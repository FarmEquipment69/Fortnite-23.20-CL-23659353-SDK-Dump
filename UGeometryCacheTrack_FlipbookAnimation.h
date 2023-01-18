// Class /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation
// Size: 0x80
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
	uint32_t NumMeshSamples; // 0x58 (0x4)
	unsigned char padding_5c[0x24]; // 0x5c (0x24)

	/* Functions */

	// Function /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample (Underlying native function: AddMeshSample 0x5b21820)
	void AddMeshSample(struct FGeometryCacheMeshData& MeshData, float& SampleTime); // (Final | Native | Public | HasOutParms)
};


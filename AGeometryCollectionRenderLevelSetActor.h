// Class /Script/GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Size: 0x380
class AGeometryCollectionRenderLevelSetActor : public AActor
{
	class UVolumeTexture* TargetVolumeTexture; // 0x288 (0x8)
	class UMaterial* RayMarchMaterial; // 0x290 (0x8)
	float SurfaceTolerance; // 0x298 (0x4)
	float Isovalue; // 0x29c (0x4)
	bool Enabled; // 0x2a0 (0x1)
	bool RenderVolumeBoundingBox; // 0x2a1 (0x1)
	unsigned char padding_2a2[0xde]; // 0x2a2 (0xde)
};


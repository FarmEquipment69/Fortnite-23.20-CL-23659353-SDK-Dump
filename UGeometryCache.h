// Class /Script/GeometryCache.GeometryCache
// Size: 0x70
class UGeometryCache : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct TArray<class UMaterialInterface*> Materials; // 0x30 (0x10)
	struct TArray<class UGeometryCacheTrack*> Tracks; // 0x40 (0x10)
	unsigned char unreflected_50[0x10]; // 0x50 (0x10) 
	int StartFrame; // 0x60 (0x4)
	int EndFrame; // 0x64 (0x4)
	uint64_t Hash; // 0x68 (0x8)
};


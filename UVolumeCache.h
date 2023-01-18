// Class /Script/Niagara.VolumeCache
// Size: 0x60
class UVolumeCache : public UObject
{
	struct FString FilePath; // 0x28 (0x10)
	enum EVolumeCacheType CacheType; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	struct FIntVector Resolution; // 0x3c (0xc)
	int FrameRangeStart; // 0x48 (0x4)
	int FrameRangeEnd; // 0x4c (0x4)
	unsigned char padding_50[0x10]; // 0x50 (0x10)
};


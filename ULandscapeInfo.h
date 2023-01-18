// Class /Script/Landscape.LandscapeInfo
// Size: 0x238
class ULandscapeInfo : public UObject
{
	struct TLazyObjectPtr<class ALandscape> LandscapeActor; // 0x28 (0x1c)
	struct FGuid LandscapeGuid; // 0x44 (0x10)
	int ComponentSizeQuads; // 0x54 (0x4)
	int SubsectionSizeQuads; // 0x58 (0x4)
	int ComponentNumSubsections; // 0x5c (0x4)
	struct FVector DrawScale; // 0x60 (0x18)
	unsigned char unreflected_78[0xb0]; // 0x78 (0xb0) 
	struct TArray<struct TWeakObjectPtr<class ALandscapeStreamingProxy>> StreamingProxies; // 0x128 (0x10)
	unsigned char padding_138[0x100]; // 0x138 (0x100)
};


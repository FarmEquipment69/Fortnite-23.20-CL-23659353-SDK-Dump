// Class /Script/Landscape.LandscapeMeshProxyComponent
// Size: 0x630
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
	struct FGuid LandscapeGuid; // 0x600 (0x10)
	struct TArray<struct FIntPoint*> ProxyComponentBases; // 0x610 (0x10)
	int8_t ProxyLOD; // 0x620 (0x1)
	unsigned char padding_621[0xf]; // 0x621 (0xf)
};


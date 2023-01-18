// Class /Script/Landscape.LandscapeGrassType
// Size: 0x60
class ULandscapeGrassType : public UObject
{
	struct TArray<struct FGrassVariety> GrassVarieties; // 0x28 (0x10)
	unsigned char bEnableDensityScaling; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	class UStaticMesh* GrassMesh; // 0x40 (0x8)
	float GrassDensity; // 0x48 (0x4)
	float PlacementJitter; // 0x4c (0x4)
	int StartCullDistance; // 0x50 (0x4)
	int EndCullDistance; // 0x54 (0x4)
	bool RandomRotation; // 0x58 (0x1)
	bool AlignToSurface; // 0x59 (0x1)
	unsigned char padding_5a[0x6]; // 0x5a (0x6)
};


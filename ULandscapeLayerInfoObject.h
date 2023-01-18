// Class /Script/Landscape.LandscapeLayerInfoObject
// Size: 0x50
class ULandscapeLayerInfoObject : public UObject
{
	struct FName LayerName; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	class UPhysicalMaterial* PhysMaterial; // 0x30 (0x8)
	float Hardness; // 0x38 (0x4)
	struct FLinearColor LayerUsageDebugColor; // 0x3c (0x10)
	unsigned char padding_4c[0x4]; // 0x4c (0x4)
};


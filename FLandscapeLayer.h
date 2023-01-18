// ScriptStruct /Script/Landscape.LandscapeLayer
// Size: 0x88
struct FLandscapeLayer
{
	struct FGuid Guid; // 0x0 (0x10)
	struct FName Name; // 0x10 (0x4)
	bool bVisible; // 0x14 (0x1)
	bool bLocked; // 0x15 (0x1)
	unsigned char unreflected_16[0x2]; // 0x16 (0x2) 
	float HeightmapAlpha; // 0x18 (0x4)
	float WeightmapAlpha; // 0x1c (0x4)
	struct TEnumAsByte<ELandscapeBlendMode> BlendMode; // 0x20 (0x1)
	unsigned char unreflected_21[0x7]; // 0x21 (0x7) 
	struct TArray<struct FLandscapeLayerBrush> Brushes; // 0x28 (0x10)
	struct TMap<class ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend; // 0x38 (0x50)
};


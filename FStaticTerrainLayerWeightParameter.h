// ScriptStruct /Script/Engine.StaticTerrainLayerWeightParameter
// Size: 0x2c
struct FStaticTerrainLayerWeightParameter
{
	struct FMaterialParameterInfo ParameterInfo; // 0x0 (0xc)
	struct FGuid ExpressionGUID; // 0xc (0x10)
	bool bOverride; // 0x1c (0x1)
	unsigned char unreflected_1d[0x3]; // 0x1d (0x3) 
	struct FName LayerName; // 0x20 (0x4)
	int WeightmapIndex; // 0x24 (0x4)
	bool bWeightBasedBlend; // 0x28 (0x1)
	unsigned char padding_29[0x3]; // 0x29 (0x3)
};


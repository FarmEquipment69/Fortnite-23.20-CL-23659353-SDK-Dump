// Class /Script/Engine.MaterialExpressionMaterialAttributeLayers
// Size: 0x218
class UMaterialExpressionMaterialAttributeLayers : public UMaterialExpression
{
	struct FMaterialAttributesInput Input; // 0xb0 (0x30)
	struct FMaterialLayersFunctions DefaultLayers; // 0xe0 (0x100)
	struct TArray<class UMaterialExpressionMaterialFunctionCall*> LayerCallers; // 0x1e0 (0x10)
	int NumActiveLayerCallers; // 0x1f0 (0x4)
	unsigned char unreflected_1f4[0x4]; // 0x1f4 (0x4) 
	struct TArray<class UMaterialExpressionMaterialFunctionCall*> BlendCallers; // 0x1f8 (0x10)
	int NumActiveBlendCallers; // 0x208 (0x4)
	bool bIsLayerGraphBuilt; // 0x20c (0x1)
	unsigned char padding_20d[0xb]; // 0x20d (0xb)
};


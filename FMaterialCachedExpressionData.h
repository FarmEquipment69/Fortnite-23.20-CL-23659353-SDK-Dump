// ScriptStruct /Script/Engine.MaterialCachedExpressionData
// Size: 0x2f8
struct FMaterialCachedExpressionData
{
	struct FMaterialCachedParameterEntry RuntimeEntries[0x6]; // 0x0 (0x50) (ARRAY) 
	struct TArray<int> ScalarPrimitiveDataIndexValues; // 0x1e0 (0x10)
	struct TArray<int> VectorPrimitiveDataIndexValues; // 0x1f0 (0x10)
	struct TArray<float> ScalarValues; // 0x200 (0x10)
	struct TArray<struct FLinearColor> VectorValues; // 0x210 (0x10)
	struct TArray<struct FVector4d> DoubleVectorValues; // 0x220 (0x10)
	struct TArray<struct TWeakObjectPtr<class UTexture>> TextureValues; // 0x230 (0x10)
	struct TArray<struct TWeakObjectPtr<class UFont>> FontValues; // 0x240 (0x10)
	struct TArray<int> FontPageValues; // 0x250 (0x10)
	struct TArray<struct TWeakObjectPtr<class URuntimeVirtualTexture>> RuntimeVirtualTextureValues; // 0x260 (0x10)
	struct TArray<class UObject*> ReferencedTextures; // 0x270 (0x10)
	struct TArray<struct FMaterialFunctionInfo> FunctionInfos; // 0x280 (0x10)
	struct TArray<struct FMaterialParameterCollectionInfo> ParameterCollectionInfos; // 0x290 (0x10)
	struct TArray<class ULandscapeGrassType*> GrassTypes; // 0x2a0 (0x10)
	struct FMaterialLayersFunctionsRuntimeData MaterialLayers; // 0x2b0 (0x20)
	struct TArray<struct FName> DynamicParameterNames; // 0x2d0 (0x10)
	struct TArray<bool> QualityLevelsUsed; // 0x2e0 (0x10)
	unsigned char bHasMaterialLayers; // 0x2f0 (0x1)
	unsigned char bHasRuntimeVirtualTextureOutput; // 0x2f0 (0x1)
	unsigned char bHasSceneColor; // 0x2f0 (0x1)
	unsigned char bHasPerInstanceCustomData; // 0x2f0 (0x1)
	unsigned char bHasPerInstanceRandom; // 0x2f0 (0x1)
	unsigned char bHasVertexInterpolator; // 0x2f0 (0x1)
	unsigned char unreflected_2f1[0x3]; // 0x2f1 (0x3) 
	uint32_t PropertyConnectedBitmask; // 0x2f4 (0x4)
};


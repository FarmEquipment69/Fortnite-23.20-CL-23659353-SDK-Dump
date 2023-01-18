// ScriptStruct /Script/Engine.MaterialCachedExpressionEditorOnlyData
// Size: 0x230
struct FMaterialCachedExpressionEditorOnlyData
{
	struct FMaterialCachedParameterEntry EditorOnlyEntries[0x2]; // 0x0 (0x50) (ARRAY) 
	struct FMaterialCachedParameterEditorEntry EditorEntries[0x8]; // 0xa0 (0x10) (ARRAY) 
	struct TArray<bool> StaticSwitchValues; // 0x120 (0x10)
	struct TArray<struct FStaticComponentMaskValue> StaticComponentMaskValues; // 0x130 (0x10)
	struct TArray<struct FVector2D> ScalarMinMaxValues; // 0x140 (0x10)
	struct TArray<struct TWeakObjectPtr<class UCurveLinearColor>> ScalarCurveValues; // 0x150 (0x10)
	struct TArray<struct TWeakObjectPtr<class UCurveLinearColorAtlas>> ScalarCurveAtlasValues; // 0x160 (0x10)
	struct TArray<struct FParameterChannelNames> VectorChannelNameValues; // 0x170 (0x10)
	struct TArray<bool> VectorUsedAsChannelMaskValues; // 0x180 (0x10)
	struct TArray<struct FParameterChannelNames> TextureChannelNameValues; // 0x190 (0x10)
	struct FMaterialLayersFunctionsEditorOnlyData MaterialLayers; // 0x1a0 (0x70)
	struct TArray<struct FString> AssetPaths; // 0x210 (0x10)
	struct TArray<struct FName> LandscapeLayerNames; // 0x220 (0x10)
};


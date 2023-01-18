// ScriptStruct /Script/Engine.MaterialLayersFunctions
// Size: 0x100
struct FMaterialLayersFunctions : FMaterialLayersFunctionsRuntimeData
{
	struct FMaterialLayersFunctionsEditorOnlyData EditorOnly; // 0x20 (0x70)
	struct TArray<bool> LayerStates; // 0x90 (0x10)
	struct TArray<struct FText> LayerNames; // 0xa0 (0x10)
	struct TArray<bool> RestrictToLayerRelatives; // 0xb0 (0x10)
	struct TArray<bool> RestrictToBlendRelatives; // 0xc0 (0x10)
	struct TArray<struct FGuid> LayerGuids; // 0xd0 (0x10)
	struct TArray<enum EMaterialLayerLinkState> LayerLinkStates; // 0xe0 (0x10)
	struct TArray<struct FGuid> DeletedParentLayerGuids; // 0xf0 (0x10)
};


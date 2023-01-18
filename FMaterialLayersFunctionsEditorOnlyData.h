// ScriptStruct /Script/Engine.MaterialLayersFunctionsEditorOnlyData
// Size: 0x70
struct FMaterialLayersFunctionsEditorOnlyData
{
	struct TArray<bool> LayerStates; // 0x0 (0x10)
	struct TArray<struct FText> LayerNames; // 0x10 (0x10)
	struct TArray<bool> RestrictToLayerRelatives; // 0x20 (0x10)
	struct TArray<bool> RestrictToBlendRelatives; // 0x30 (0x10)
	struct TArray<struct FGuid> LayerGuids; // 0x40 (0x10)
	struct TArray<enum EMaterialLayerLinkState> LayerLinkStates; // 0x50 (0x10)
	struct TArray<struct FGuid> DeletedParentLayerGuids; // 0x60 (0x10)
};


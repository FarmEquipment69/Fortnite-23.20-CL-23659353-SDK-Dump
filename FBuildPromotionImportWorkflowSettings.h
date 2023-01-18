// ScriptStruct /Script/Engine.BuildPromotionImportWorkflowSettings
// Size: 0x150
struct FBuildPromotionImportWorkflowSettings
{
	struct FEditorImportWorkflowDefinition Diffuse; // 0x0 (0x20)
	struct FEditorImportWorkflowDefinition Normal; // 0x20 (0x20)
	struct FEditorImportWorkflowDefinition StaticMesh; // 0x40 (0x20)
	struct FEditorImportWorkflowDefinition ReimportStaticMesh; // 0x60 (0x20)
	struct FEditorImportWorkflowDefinition BlendShapeMesh; // 0x80 (0x20)
	struct FEditorImportWorkflowDefinition MorphMesh; // 0xa0 (0x20)
	struct FEditorImportWorkflowDefinition SkeletalMesh; // 0xc0 (0x20)
	struct FEditorImportWorkflowDefinition Animation; // 0xe0 (0x20)
	struct FEditorImportWorkflowDefinition sound; // 0x100 (0x20)
	struct FEditorImportWorkflowDefinition SurroundSound; // 0x120 (0x20)
	struct TArray<struct FEditorImportWorkflowDefinition> OtherAssetsToImport; // 0x140 (0x10)
};


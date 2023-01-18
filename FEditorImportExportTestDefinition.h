// ScriptStruct /Script/Engine.EditorImportExportTestDefinition
// Size: 0x38
struct FEditorImportExportTestDefinition
{
	struct FFilePath ImportFilePath; // 0x0 (0x10)
	struct FString ExportFileExtension; // 0x10 (0x10)
	bool bSkipExport; // 0x20 (0x1)
	unsigned char unreflected_21[0x7]; // 0x21 (0x7) 
	struct TArray<struct FImportFactorySettingValues> FactorySettings; // 0x28 (0x10)
};


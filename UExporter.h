// Class /Script/Engine.Exporter
// Size: 0x78
class UExporter : public UObject
{
	class UClass* SupportedClass; // 0x28 (0x8)
	class UObject* ExportRootScope; // 0x30 (0x8)
	struct TArray<struct FString> FormatExtension; // 0x38 (0x10)
	struct TArray<struct FString> FormatDescription; // 0x48 (0x10)
	int PreferredFormatIndex; // 0x58 (0x4)
	int TextIndent; // 0x5c (0x4)
	unsigned char bText; // 0x60 (0x1)
	unsigned char bSelectedOnly; // 0x60 (0x1)
	unsigned char bForceFileOperations; // 0x60 (0x1)
	unsigned char unreflected_61[0x7]; // 0x61 (0x7) 
	class UAssetExportTask* ExportTask; // 0x68 (0x8)
	unsigned char padding_70[0x8]; // 0x70 (0x8)

	/* Functions */

	// Function /Script/Engine.Exporter.ScriptRunAssetExportTask (Has no native function)
	bool ScriptRunAssetExportTask(class UAssetExportTask*& Task); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Exporter.RunAssetExportTasks (Underlying native function: RunAssetExportTasks 0x85de3bc)
	static bool RunAssetExportTasks(struct TArray<class UAssetExportTask*>& ExportTasks); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.Exporter.RunAssetExportTask (Underlying native function: RunAssetExportTask 0x723ba10)
	static bool RunAssetExportTask(class UAssetExportTask*& Task); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)
};


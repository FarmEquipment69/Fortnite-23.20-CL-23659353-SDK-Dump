// Class /Script/Engine.AssetExportTask
// Size: 0x78
class UAssetExportTask : public UObject
{
	class UObject* Object; // 0x28 (0x8)
	class UExporter* Exporter; // 0x30 (0x8)
	struct FString Filename; // 0x38 (0x10)
	bool bSelected; // 0x48 (0x1)
	bool bReplaceIdentical; // 0x49 (0x1)
	bool bPrompt; // 0x4a (0x1)
	bool bAutomated; // 0x4b (0x1)
	bool bUseFileArchive; // 0x4c (0x1)
	bool bWriteEmptyFiles; // 0x4d (0x1)
	unsigned char unreflected_4e[0x2]; // 0x4e (0x2) 
	struct TArray<class UObject*> IgnoreObjectList; // 0x50 (0x10)
	class UObject* Options; // 0x60 (0x8)
	struct TArray<struct FString> Errors; // 0x68 (0x10)
};


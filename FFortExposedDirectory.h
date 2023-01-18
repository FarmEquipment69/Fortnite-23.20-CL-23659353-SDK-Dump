// ScriptStruct /Script/FortniteGame.FortExposedDirectory
// Size: 0x50
struct FFortExposedDirectory
{
	struct FString SourceDirectory; // 0x0 (0x10)
	struct FString ExposedPackagePath; // 0x10 (0x10)
	struct FString ExposedDirectory; // 0x20 (0x10)
	bool bRecursiveDirectories; // 0x30 (0x1)
	bool bPreserveFolderStructure; // 0x31 (0x1)
	unsigned char unreflected_32[0x6]; // 0x32 (0x6) 
	struct TArray<struct FTopLevelAssetPath*> AssetClasses; // 0x38 (0x10)
	bool bIncludeDerivedAssetClasses; // 0x48 (0x1)
	unsigned char padding_49[0x7]; // 0x49 (0x7)
};


// ScriptStruct /Script/Engine.AssetManagerSearchRules
// Size: 0x50
struct FAssetManagerSearchRules
{
	struct TArray<struct FString> AssetScanPaths; // 0x0 (0x10)
	struct TArray<struct FString> IncludePatterns; // 0x10 (0x10)
	struct TArray<struct FString> ExcludePatterns; // 0x20 (0x10)
	unsigned char AssetBaseClass_30[0x8]; // 0x30 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
	bool bHasBlueprintClasses; // 0x38 (0x1)
	bool bForceSynchronousScan; // 0x39 (0x1)
	bool bSkipVirtualPathExpansion; // 0x3a (0x1)
	bool bSkipManagerIncludeCheck; // 0x3b (0x1)
	unsigned char padding_3c[0x14]; // 0x3c (0x14)
};


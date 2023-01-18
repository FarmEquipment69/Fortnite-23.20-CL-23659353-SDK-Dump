// ScriptStruct /Script/Engine.PrimaryAssetTypeInfo
// Size: 0x88
struct FPrimaryAssetTypeInfo
{
	struct FName PrimaryAssetType; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TWeakObjectPtr<class UClass> AssetBaseClass; // 0x8 (0x28)
	unsigned char AssetBaseClassLoaded_30[0x8]; // 0x30 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
	bool bHasBlueprintClasses; // 0x38 (0x1)
	bool bIsEditorOnly; // 0x39 (0x1)
	unsigned char unreflected_3a[0x6]; // 0x3a (0x6) 
	struct TArray<struct FDirectoryPath> Directories; // 0x40 (0x10)
	struct TArray<struct FSoftObjectPath> SpecificAssets; // 0x50 (0x10)
	struct FPrimaryAssetRules Rules; // 0x60 (0xc)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	struct TArray<struct FString> AssetScanPaths; // 0x70 (0x10)
	bool bIsDynamicAsset; // 0x80 (0x1)
	unsigned char unreflected_81[0x3]; // 0x81 (0x3) 
	int NumberOfAssets; // 0x84 (0x4)
};


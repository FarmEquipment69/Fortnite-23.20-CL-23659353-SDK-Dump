// ScriptStruct /Script/CoreUObject.ARFilter
// Size: 0x150
struct FARFilter
{
	struct TArray<struct FName> PackageNames; // 0x0 (0x10)
	struct TArray<struct FName> PackagePaths; // 0x10 (0x10)
	struct TArray<struct FSoftObjectPath> SoftObjectPaths; // 0x20 (0x10)
	struct TArray<struct FName> ClassNames; // 0x30 (0x10)
	struct TArray<struct FTopLevelAssetPath*> ClassPaths; // 0x40 (0x10)
	unsigned char unreflected_50[0x50]; // 0x50 (0x50) 
	struct TSet<struct FName> RecursiveClassesExclusionSet; // 0xa0 (0x50)
	struct TSet<struct FTopLevelAssetPath*> RecursiveClassPathsExclusionSet; // 0xf0 (0x50)
	bool bRecursivePaths; // 0x140 (0x1)
	bool bRecursiveClasses; // 0x141 (0x1)
	bool bIncludeOnlyOnDiskAssets; // 0x142 (0x1)
	unsigned char padding_143[0xd]; // 0x143 (0xd)
};


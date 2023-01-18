// ScriptStruct /Script/Engine.CompilerNativizationOptions
// Size: 0x78
struct FCompilerNativizationOptions
{
	struct FName PlatformName; // 0x0 (0x4)
	bool ServerOnlyPlatform; // 0x4 (0x1)
	bool ClientOnlyPlatform; // 0x5 (0x1)
	bool bExcludeMonolithicHeaders; // 0x6 (0x1)
	unsigned char unreflected_7[0x1]; // 0x7 (0x1) 
	struct TArray<struct FName> ExcludedModules; // 0x8 (0x10)
	struct TSet<struct FSoftObjectPath> ExcludedAssets; // 0x18 (0x50)
	struct TArray<struct FString> ExcludedFolderPaths; // 0x68 (0x10)
};


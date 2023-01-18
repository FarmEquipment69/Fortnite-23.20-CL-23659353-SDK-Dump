// ScriptStruct /Script/VkEngineTypes.ValkyrieProjectDescriptor
// Size: 0x1d8
struct FValkyrieProjectDescriptor
{
	unsigned char FileVersion; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString VersionSuffix; // 0x8 (0x10)
	struct FString Title; // 0x18 (0x10)
	struct FString Description; // 0x28 (0x10)
	struct FString KeyArt; // 0x38 (0x10)
	struct TArray<struct FString> Attributions; // 0x48 (0x10)
	enum EValkyrieProjectKind Kind; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FString CompatibilityVersion; // 0x60 (0x10)
	struct TArray<struct FString> EditorPermissions; // 0x70 (0x10)
	struct FString EpicApp; // 0x80 (0x10)
	float SortPriority; // 0x90 (0x4)
	unsigned char unreflected_94[0x4]; // 0x94 (0x4) 
	struct TArray<struct FString> MetaDataTags; // 0x98 (0x10)
	struct TArray<struct FValkyriePluginReferenceDescriptor> Plugins; // 0xa8 (0x10)
	struct TArray<struct FValkyrieProjectDependencyDescriptor> Dependencies; // 0xb8 (0x10)
	struct TMap<struct FString, struct FJsonObjectWrapper> DataSets; // 0xc8 (0x50)
	unsigned char unreflected_118[0x60]; // 0x118 (0x60) 
	struct FValkyrieProjectBindingsDescriptor Bindings; // 0x178 (0x60)
};


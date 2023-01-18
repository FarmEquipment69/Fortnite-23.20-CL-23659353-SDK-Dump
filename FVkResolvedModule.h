// ScriptStruct /Script/VkEngineTypes.VkResolvedModule
// Size: 0x88
struct FVkResolvedModule
{
	struct FString ModuleId; // 0x0 (0x10)
	int Version; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FString ArtifactId; // 0x18 (0x10)
	struct FString CookJobId; // 0x28 (0x10)
	struct FVkModuleBinaries Binaries; // 0x38 (0x50)
};


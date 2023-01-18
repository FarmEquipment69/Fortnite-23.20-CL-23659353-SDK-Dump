// ScriptStruct /Script/VkEngineTypes.VkContentPackage
// Size: 0x70
struct FVkContentPackage
{
	struct FString ProjectID; // 0x0 (0x10)
	struct TMap<struct FString, struct FString> ProjectFlags; // 0x10 (0x50)
	struct TArray<struct FVkModuleVersionWithArtifacts> Content; // 0x60 (0x10)
};


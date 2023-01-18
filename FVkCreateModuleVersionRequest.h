// ScriptStruct /Script/VkEngineTypes.VkCreateModuleVersionRequest
// Size: 0x90
struct FVkCreateModuleVersionRequest
{
	struct TMap<struct FString, struct FString> RawFiles; // 0x0 (0x50)
	struct TArray<struct FVkModuleVersionRef> Dependencies; // 0x50 (0x10)
	struct FJsonObjectWrapper Meta; // 0x60 (0x20)
	struct FString Checksum; // 0x80 (0x10)
};


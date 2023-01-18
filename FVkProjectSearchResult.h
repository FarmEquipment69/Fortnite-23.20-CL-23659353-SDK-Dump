// ScriptStruct /Script/VkEngineTypes.VkProjectSearchResult
// Size: 0x70
struct FVkProjectSearchResult
{
	struct FString ProjectID; // 0x0 (0x10)
	struct FDateTime* Created; // 0x10 (0x8)
	struct FDateTime* Accessed; // 0x18 (0x8)
	struct FJsonObjectWrapper Meta; // 0x20 (0x20)
	struct FJsonObjectWrapper SysMeta; // 0x40 (0x20)
	struct FString LinkCode; // 0x60 (0x10)
};


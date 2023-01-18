// ScriptStruct /Script/VkEngineTypes.VkCreateModuleRequest
// Size: 0xa0
struct FVkCreateModuleRequest
{
	struct FString ModuleName; // 0x0 (0x10)
	struct FJsonObjectWrapper Meta; // 0x10 (0x20)
	struct FString ContentType; // 0x30 (0x10)
	struct TMap<enum EConsumerRole, bool> Relevance; // 0x40 (0x50)
	struct FString DesiredModuleId; // 0x90 (0x10)
};


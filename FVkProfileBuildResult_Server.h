// ScriptStruct /Script/VkEngineTypes.VkProfileBuildResult_Server
// Size: 0x70
struct FVkProfileBuildResult_Server
{
	struct FString BuildId; // 0x0 (0x10)
	struct FString Platform; // 0x10 (0x10)
	struct TMap<struct FString, float> Stat; // 0x20 (0x50)
};


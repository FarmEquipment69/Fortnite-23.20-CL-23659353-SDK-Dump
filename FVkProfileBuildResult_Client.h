// ScriptStruct /Script/VkEngineTypes.VkProfileBuildResult_Client
// Size: 0x80
struct FVkProfileBuildResult_Client
{
	struct FString AccountId; // 0x0 (0x10)
	struct FString BuildId; // 0x10 (0x10)
	struct FString Platform; // 0x20 (0x10)
	struct TMap<struct FString, float> Stat; // 0x30 (0x50)
};


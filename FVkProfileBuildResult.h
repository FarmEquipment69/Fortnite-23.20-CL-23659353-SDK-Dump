// ScriptStruct /Script/VkEngineTypes.VkProfileBuildResult
// Size: 0xa8
struct FVkProfileBuildResult
{
	float Score; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FString SessionId; // 0x8 (0x10)
	struct FVkProfileBuildResult_Duration Duration; // 0x18 (0x10)
	struct FVkProfileBuildResult_Server Server; // 0x28 (0x70)
	struct TArray<struct FVkProfileBuildResult_Client> Clients; // 0x98 (0x10)
};


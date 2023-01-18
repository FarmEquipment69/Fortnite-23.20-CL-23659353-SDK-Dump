// ScriptStruct /Script/VkEngineTypes.VkProjectUserInfo
// Size: 0xd8
struct FVkProjectUserInfo
{
	struct FString ProjectID; // 0x0 (0x10)
	struct FString AccountId; // 0x10 (0x10)
	struct FString Title; // 0x20 (0x10)
	bool HasStar; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TMap<struct FString, bool> Access; // 0x38 (0x50)
	struct FVkPublishedLink PlaytestLink; // 0x88 (0x40)
	struct TArray<struct FString> Permissions; // 0xc8 (0x10)
};


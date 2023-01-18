// ScriptStruct /Script/VkEngineTypes.VkProjectPlaytestAccessResult
// Size: 0x80
struct FVkProjectPlaytestAccessResult
{
	struct FVkNamedId Owner; // 0x0 (0x20)
	struct FString OwnerType; // 0x20 (0x10)
	struct TMap<struct FString, struct FVkProjectAccessControl> Playtesters; // 0x30 (0x50)
};


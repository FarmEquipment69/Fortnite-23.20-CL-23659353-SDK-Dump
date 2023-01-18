// ScriptStruct /Script/VkEngineTypes.VkProjectDoc
// Size: 0xc8
struct FVkProjectDoc
{
	struct FString ProjectID; // 0x0 (0x10)
	struct FDateTime* Created; // 0x10 (0x8)
	struct FVkTypedId Author; // 0x18 (0x18)
	struct FVkTypedId Owner; // 0x30 (0x18)
	struct FJsonObjectWrapper Meta; // 0x48 (0x20)
	struct FJsonObjectWrapper SysMeta; // 0x68 (0x20)
	struct FVkPublishedLink LiveLink; // 0x88 (0x40)
};


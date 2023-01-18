// ScriptStruct /Script/VkEngineTypes.VkPublishedLink
// Size: 0x40
struct FVkPublishedLink
{
	struct FString LinkCode; // 0x0 (0x10)
	int LinkVersion; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FDateTime* LastPublished; // 0x18 (0x8)
	struct FString Base; // 0x20 (0x10)
	struct FString CommitMessage; // 0x30 (0x10)
};


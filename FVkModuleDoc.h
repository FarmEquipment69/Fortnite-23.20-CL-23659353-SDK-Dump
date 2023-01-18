// ScriptStruct /Script/VkEngineTypes.VkModuleDoc
// Size: 0xf0
struct FVkModuleDoc
{
	struct FString ModuleId; // 0x0 (0x10)
	struct FDateTime* Created; // 0x10 (0x8)
	struct FDateTime* Updated; // 0x18 (0x8)
	struct FVkTypedId Author; // 0x20 (0x18)
	struct FString ProjectID; // 0x38 (0x10)
	struct FString ModuleName; // 0x48 (0x10)
	struct FString ContentType; // 0x58 (0x10)
	struct TMap<enum EConsumerRole, bool> Relevance; // 0x68 (0x50)
	struct FString AliasForModuleId; // 0xb8 (0x10)
	struct FJsonObjectWrapper Meta; // 0xc8 (0x20)
	int LatestVersion; // 0xe8 (0x4)
	unsigned char padding_ec[0x4]; // 0xec (0x4)
};


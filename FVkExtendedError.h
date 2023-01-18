// ScriptStruct /Script/VkEngineTypes.VkExtendedError
// Size: 0x80
struct FVkExtendedError
{
	struct FString FormatKey; // 0x0 (0x10)
	struct FString FormatNamespace; // 0x10 (0x10)
	struct FString message; // 0x20 (0x10)
	struct TMap<struct FString, struct FString> Params; // 0x30 (0x50)
};


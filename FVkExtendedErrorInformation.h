// ScriptStruct /Script/VkEngineTypes.VkExtendedErrorInformation
// Size: 0x30
struct FVkExtendedErrorInformation
{
	struct FString ErrorCode; // 0x0 (0x10)
	struct FString ErrorMessage; // 0x10 (0x10)
	struct TArray<struct FVkExtendedError> AdditionalErrors; // 0x20 (0x10)
};


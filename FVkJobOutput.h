// ScriptStruct /Script/VkEngineTypes.VkJobOutput
// Size: 0x40
struct FVkJobOutput
{
	struct FString BaseUrl; // 0x0 (0x10)
	double TotalSizeKb; // 0x10 (0x8)
	double UserContentTotalSizeKb; // 0x18 (0x8)
	struct TArray<struct FString> Files; // 0x20 (0x10)
	struct FString manifest; // 0x30 (0x10)
};


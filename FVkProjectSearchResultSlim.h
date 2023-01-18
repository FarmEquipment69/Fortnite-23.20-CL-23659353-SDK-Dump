// ScriptStruct /Script/VkEngineTypes.VkProjectSearchResultSlim
// Size: 0x88
struct FVkProjectSearchResultSlim
{
	struct FString ProjectID; // 0x0 (0x10)
	struct FDateTime* Date; // 0x10 (0x8)
	struct FVkProjectInfoSlim Info; // 0x18 (0x68)
	bool isstarred; // 0x80 (0x1)
	bool isnew; // 0x81 (0x1)
	unsigned char padding_82[0x6]; // 0x82 (0x6)
};


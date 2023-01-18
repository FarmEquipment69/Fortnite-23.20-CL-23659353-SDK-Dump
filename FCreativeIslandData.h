// ScriptStruct /Script/FortniteGame.CreativeIslandData
// Size: 0x58
struct FCreativeIslandData
{
	struct FString McpId; // 0x0 (0x10)
	struct FText IslandName; // 0x10 (0x18)
	struct FOnlineLinkId IslandCode; // 0x28 (0x18)
	struct FDateTime* LastLoadedDate; // 0x40 (0x8)
	struct FDateTime* DeletedAt; // 0x48 (0x8)
	bool bIsDeleted; // 0x50 (0x1)
	bool bIsVKProject; // 0x51 (0x1)
	unsigned char padding_52[0x6]; // 0x52 (0x6)
};


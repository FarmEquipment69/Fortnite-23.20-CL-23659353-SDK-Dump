// ScriptStruct /Script/McpProfileSys.GiftBoxInfo
// Size: 0x48
struct FGiftBoxInfo
{
	struct FDateTime* GiftedOn; // 0x0 (0x8)
	struct FString FromAccountId; // 0x8 (0x10)
	struct TArray<struct FMcpLootEntry> LootList; // 0x18 (0x10)
	struct FJsonObjectWrapper Params; // 0x28 (0x20)
};


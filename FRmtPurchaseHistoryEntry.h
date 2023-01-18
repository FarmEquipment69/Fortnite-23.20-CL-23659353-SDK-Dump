// ScriptStruct /Script/FortniteGame.RmtPurchaseHistoryEntry
// Size: 0x28
struct FRmtPurchaseHistoryEntry
{
	struct FString FulfillmentId; // 0x0 (0x10)
	struct FDateTime* PurchaseDate; // 0x10 (0x8)
	struct TArray<struct FMcpLootEntry> LootResult; // 0x18 (0x10)
};


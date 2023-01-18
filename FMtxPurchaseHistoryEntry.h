// ScriptStruct /Script/FortniteGame.MtxPurchaseHistoryEntry
// Size: 0x58
struct FMtxPurchaseHistoryEntry
{
	struct FString PurchaseId; // 0x0 (0x10)
	struct FString OfferId; // 0x10 (0x10)
	struct FDateTime* PurchaseDate; // 0x20 (0x8)
	struct FDateTime* RefundDate; // 0x28 (0x8)
	struct FDateTime* UndoTimeout; // 0x30 (0x8)
	bool FreeRefundEligible; // 0x38 (0x1)
	bool bHasBeenRefunded; // 0x39 (0x1)
	unsigned char unreflected_3a[0x6]; // 0x3a (0x6) 
	struct TArray<struct FMcpLootEntry> LootResult; // 0x40 (0x10)
	int TotalMtxPaid; // 0x50 (0x4)
	unsigned char padding_54[0x4]; // 0x54 (0x4)
};


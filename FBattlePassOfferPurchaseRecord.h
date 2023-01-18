// ScriptStruct /Script/FortniteGame.BattlePassOfferPurchaseRecord
// Size: 0x38
struct FBattlePassOfferPurchaseRecord
{
	struct FString OfferId; // 0x0 (0x10)
	struct FDateTime* PurchaseDate; // 0x10 (0x8)
	struct TArray<struct FMcpLootEntry> LootResult; // 0x18 (0x10)
	struct FPrimaryAssetId* CurrencyType; // 0x28 (0x8)
	int TotalCurrencyPaid; // 0x30 (0x4)
	unsigned char padding_34[0x4]; // 0x34 (0x4)
};


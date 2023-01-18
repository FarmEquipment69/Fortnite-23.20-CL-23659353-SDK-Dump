// ScriptStruct /Script/FortniteGame.MtxPurchaseHistory
// Size: 0x20
struct FMtxPurchaseHistory
{
	struct TArray<struct FMtxPurchaseHistoryEntry> Purchases; // 0x0 (0x10)
	int RefundCredits; // 0x10 (0x4)
	int RefundsUsed; // 0x14 (0x4)
	struct FDateTime* TokenRefreshReferenceTime; // 0x18 (0x8)
};


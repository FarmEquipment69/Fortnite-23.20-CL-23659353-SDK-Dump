// ScriptStruct /Script/GameSubCatalog.CatalogRedeemRealMoneyPurchasesInfo
// Size: 0x58
struct FCatalogRedeemRealMoneyPurchasesInfo
{
	enum EAppStore AppStore; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TArray<struct FString> AuthTokens; // 0x8 (0x10)
	struct TArray<struct FString> ReceiptIds; // 0x18 (0x10)
	enum ERedeemRealMoneyPurchaseRefreshType RefreshType; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct FString PurchaseCorrelationId; // 0x30 (0x10)
	unsigned char padding_40[0x18]; // 0x40 (0x18)
};


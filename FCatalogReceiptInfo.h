// ScriptStruct /Script/GameSubCatalog.CatalogReceiptInfo
// Size: 0x50
struct FCatalogReceiptInfo
{
	enum EAppStore AppStore; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString AppStoreId; // 0x8 (0x10)
	struct FString ReceiptId; // 0x18 (0x10)
	struct FString ReceiptInfo; // 0x28 (0x10)
	struct FString PurchaseCorrelationId; // 0x38 (0x10)
	unsigned char padding_48[0x8]; // 0x48 (0x8)
};


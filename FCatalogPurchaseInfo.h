// ScriptStruct /Script/GameSubCatalog.CatalogPurchaseInfo
// Size: 0x40
struct FCatalogPurchaseInfo
{
	struct FString OfferId; // 0x0 (0x10)
	int PurchaseQuantity; // 0x10 (0x4)
	struct TEnumAsByte<EStoreCurrencyType> Currency; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	struct FString CurrencySubType; // 0x18 (0x10)
	int ExpectedTotalPrice; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct FString GameContext; // 0x30 (0x10)
};


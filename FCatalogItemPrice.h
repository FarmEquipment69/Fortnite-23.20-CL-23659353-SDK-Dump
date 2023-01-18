// ScriptStruct /Script/GameSubCatalog.CatalogItemPrice
// Size: 0x50
struct FCatalogItemPrice
{
	struct TEnumAsByte<EStoreCurrencyType> CurrencyType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString CurrencySubType; // 0x8 (0x10)
	int RegularPrice; // 0x18 (0x4)
	int FinalPrice; // 0x1c (0x4)
	struct FText PriceTextOverride; // 0x20 (0x18)
	struct TEnumAsByte<ECatalogSaleType> SaleType; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct FDateTime* SaleExpiration; // 0x40 (0x8)
	enum EAppStore AppStoreId; // 0x48 (0x1)
	unsigned char padding_49[0x7]; // 0x49 (0x7)
};


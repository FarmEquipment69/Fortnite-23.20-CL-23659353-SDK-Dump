// ScriptStruct /Script/GameSubCatalog.CatalogDynamicBundle
// Size: 0x38
struct FCatalogDynamicBundle
{
	int DiscountedBasePrice; // 0x0 (0x4)
	int RegularBasePrice; // 0x4 (0x4)
	int FloorPrice; // 0x8 (0x4)
	struct TEnumAsByte<EStoreCurrencyType> CurrencyType; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct FString CurrencySubType; // 0x10 (0x10)
	struct TEnumAsByte<ECatalogSaleType> DisplayType; // 0x20 (0x1)
	unsigned char unreflected_21[0x7]; // 0x21 (0x7) 
	struct TArray<struct FCatalogDynamicBundleItem> BundleItems; // 0x28 (0x10)
};


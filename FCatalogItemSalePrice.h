// ScriptStruct /Script/GameSubCatalog.CatalogItemSalePrice
// Size: 0x18
struct FCatalogItemSalePrice
{
	int SalePrice; // 0x0 (0x4)
	struct TEnumAsByte<ECatalogSaleType> SaleType; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct FDateTime* StartTime; // 0x8 (0x8)
	struct FDateTime* EndTime; // 0x10 (0x8)
};


// ScriptStruct /Script/GameSubCatalog.CatalogDynamicBundleItem
// Size: 0x78
struct FCatalogDynamicBundleItem
{
	struct FItemQuantity Item; // 0x0 (0x38)
	bool bCanOwnMultiple; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	int RegularPrice; // 0x3c (0x4)
	int DiscountedPrice; // 0x40 (0x4)
	int AlreadyOwnedPriceReduction; // 0x44 (0x4)
	struct FText Title; // 0x48 (0x18)
	struct FText Description; // 0x60 (0x18)
};


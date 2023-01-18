// ScriptStruct /Script/FortniteUI.CardPackOffer
// Size: 0x78
struct FCardPackOffer
{
	struct FText Title; // 0x0 (0x18)
	struct FText Description; // 0x18 (0x18)
	int MtxPrice; // 0x30 (0x4)
	struct TEnumAsByte<ECatalogSaleType> SaleType; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	struct FText SaleText; // 0x38 (0x18)
	int Price; // 0x50 (0x4)
	int RegularPrice; // 0x54 (0x4)
	class UFortAccountItemDefinition* CurrencyType; // 0x58 (0x8)
	int QuantityRemaining; // 0x60 (0x4)
	bool bTimedOffer; // 0x64 (0x1)
	unsigned char padding_65[0x13]; // 0x65 (0x13)
};


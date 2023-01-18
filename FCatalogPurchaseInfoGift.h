// ScriptStruct /Script/GameSubCatalog.CatalogPurchaseInfoGift
// Size: 0x70
struct FCatalogPurchaseInfoGift
{
	struct FString OfferId; // 0x0 (0x10)
	struct TEnumAsByte<EStoreCurrencyType> Currency; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct FString CurrencySubType; // 0x18 (0x10)
	int ExpectedTotalPrice; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct FString GameContext; // 0x30 (0x10)
	struct TArray<struct FString> ReceiverAccountIds; // 0x40 (0x10)
	struct FString GiftWrapTemplateId; // 0x50 (0x10)
	struct FString PersonalMessage; // 0x60 (0x10)
};


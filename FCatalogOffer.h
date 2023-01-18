// ScriptStruct /Script/GameSubCatalog.CatalogOffer
// Size: 0x260
struct FCatalogOffer
{
	struct FString OfferId; // 0x0 (0x10)
	struct FString DevName; // 0x10 (0x10)
	struct TArray<struct FCatalogKeyValue> MetaInfo; // 0x20 (0x10)
	enum ECatalogOfferType OfferType; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TArray<struct FCatalogItemPrice> Prices; // 0x38 (0x10)
	struct FCatalogDynamicBundle DynamicBundleInfo; // 0x48 (0x38)
	int DailyLimit; // 0x80 (0x4)
	int WeeklyLimit; // 0x84 (0x4)
	int MonthlyLimit; // 0x88 (0x4)
	unsigned char unreflected_8c[0x4]; // 0x8c (0x4) 
	struct TArray<struct FString> Categories; // 0x90 (0x10)
	struct FString CatalogGroup; // 0xa0 (0x10)
	int CatalogGroupPriority; // 0xb0 (0x4)
	int SortPriority; // 0xb4 (0x4)
	struct FText Title; // 0xb8 (0x18)
	struct FText ShortDescription; // 0xd0 (0x18)
	struct FText Description; // 0xe8 (0x18)
	struct FString AppStoreId[0xc]; // 0x100 (0x10) (ARRAY) 
	struct FCatalogMetaAssetInfo MetaAssetInfo; // 0x1c0 (0x30)
	struct FString DisplayAssetPath; // 0x1f0 (0x10)
	struct TArray<struct FItemQuantity> ItemGrants; // 0x200 (0x10)
	struct TArray<struct FCatalogOfferRequirement> Requirements; // 0x210 (0x10)
	struct FCatalogGiftInfo GiftInfo; // 0x220 (0x28)
	bool Refundable; // 0x248 (0x1)
	unsigned char unreflected_249[0x7]; // 0x249 (0x7) 
	struct TArray<struct FString> DenyItemTemplateIds; // 0x250 (0x10)
};


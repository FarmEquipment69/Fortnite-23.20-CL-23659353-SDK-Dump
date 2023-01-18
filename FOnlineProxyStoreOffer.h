// ScriptStruct /Script/OnlineSubsystemUtils.OnlineProxyStoreOffer
// Size: 0x110
struct FOnlineProxyStoreOffer
{
	struct FString OfferId; // 0x0 (0x10)
	struct FText Title; // 0x10 (0x18)
	struct FText Description; // 0x28 (0x18)
	struct FText LongDescription; // 0x40 (0x18)
	struct FText RegularPriceText; // 0x58 (0x18)
	int RegularPrice; // 0x70 (0x4)
	unsigned char unreflected_74[0x4]; // 0x74 (0x4) 
	struct FText PriceText; // 0x78 (0x18)
	int NumericPrice; // 0x90 (0x4)
	unsigned char unreflected_94[0x4]; // 0x94 (0x4) 
	struct FString CurrencyCode; // 0x98 (0x10)
	struct FDateTime* ReleaseDate; // 0xa8 (0x8)
	struct FDateTime* ExpirationDate; // 0xb0 (0x8)
	enum EOnlineProxyStoreOfferDiscountType DiscountType; // 0xb8 (0x1)
	unsigned char unreflected_b9[0x7]; // 0xb9 (0x7) 
	struct TMap<struct FString, struct FString> DynamicFields; // 0xc0 (0x50)
};


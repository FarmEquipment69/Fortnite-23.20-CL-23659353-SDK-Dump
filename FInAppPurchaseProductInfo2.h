// ScriptStruct /Script/OnlineSubsystemUtils.InAppPurchaseProductInfo2
// Size: 0xf8
struct FInAppPurchaseProductInfo2
{
	struct FString Identifier; // 0x0 (0x10)
	struct FString TransactionIdentifier; // 0x10 (0x10)
	struct FString DisplayName; // 0x20 (0x10)
	struct FString DisplayDescription; // 0x30 (0x10)
	struct FString DisplayPrice; // 0x40 (0x10)
	float RawPrice; // 0x50 (0x4)
	unsigned char unreflected_54[0x4]; // 0x54 (0x4) 
	struct FString CurrencyCode; // 0x58 (0x10)
	struct FString CurrencySymbol; // 0x68 (0x10)
	struct FString DecimalSeparator; // 0x78 (0x10)
	struct FString GroupingSeparator; // 0x88 (0x10)
	struct FString ReceiptData; // 0x98 (0x10)
	struct TMap<struct FString, struct FString> DynamicFields; // 0xa8 (0x50)
};


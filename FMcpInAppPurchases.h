// ScriptStruct /Script/GameSubCatalog.McpInAppPurchases
// Size: 0xd0
struct FMcpInAppPurchases
{
	struct TArray<struct FString> Receipts; // 0x0 (0x10)
	struct TArray<struct FString> IgnoredReceipts; // 0x10 (0x10)
	struct TArray<struct FString> Fulfillments; // 0x20 (0x10)
	struct TMap<struct FString, int> FulfillmentCounts; // 0x30 (0x50)
	struct TMap<enum EAppStore, struct FMcpEntitlementRefreshTimerInfo> RefreshTimers; // 0x80 (0x50)
};


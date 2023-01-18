// ScriptStruct /Script/PurchaseFlow.PurchaseFlowReceiptParam
// Size: 0x30
struct FPurchaseFlowReceiptParam
{
	struct FString TransactionId; // 0x0 (0x10)
	struct FString TransactionState; // 0x10 (0x10)
	struct TArray<struct FPurchaseFlowOffer> Offers; // 0x20 (0x10)
};


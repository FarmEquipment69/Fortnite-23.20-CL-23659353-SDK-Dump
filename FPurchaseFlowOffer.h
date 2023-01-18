// ScriptStruct /Script/PurchaseFlow.PurchaseFlowOffer
// Size: 0x38
struct FPurchaseFlowOffer
{
	struct FString OfferNamespace; // 0x0 (0x10)
	struct FString OfferId; // 0x10 (0x10)
	int Quantity; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct TArray<struct FPurchaseFlowItem> Items; // 0x28 (0x10)
};


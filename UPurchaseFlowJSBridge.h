// Class /Script/PurchaseFlow.PurchaseFlowJSBridge
// Size: 0x38
class UPurchaseFlowJSBridge : public UObject
{
	unsigned char unreflected_38[0x38]; 

	/* Functions */

	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.RequestClose (Underlying native function: RequestClose 0x7df0d88)
	void RequestClose(struct FString& CloseInfo); // (Final | Native | Public)

	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.Receipt (Underlying native function: Receipt 0x7df0c90)
	void Receipt(struct FPurchaseFlowReceiptParam& Receipt); // (Final | Native | Public)

	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.LaunchValidatedExternalBrowserUrl (Underlying native function: LaunchValidatedExternalBrowserUrl 0x7df0874)
	bool LaunchValidatedExternalBrowserUrl(struct FString& AllowedBrowserID, struct FString& URL); // (Final | Native | Public)

	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.LaunchExternalBrowserUrl (Underlying native function: LaunchExternalBrowserUrl 0x7df0704)
	bool LaunchExternalBrowserUrl(struct FString& URL); // (Final | Native | Public)

	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserPath (Underlying native function: GetExternalBrowserPath 0x7df04bc)
	struct FString GetExternalBrowserPath(struct FString& BrowserId); // (Final | Native | Public)

	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserName (Underlying native function: GetExternalBrowserName 0x7df0340)
	struct FString GetExternalBrowserName(struct FString& BrowserId); // (Final | Native | Public)

	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.GetDefaultExternalBrowserID (Underlying native function: GetDefaultExternalBrowserID 0x7df0190)
	struct FString GetDefaultExternalBrowserID(struct FString& URL); // (Final | Native | Public)
};


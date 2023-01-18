// Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
// Size: 0x68
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{
	struct FMulticastInlineDelegate OnSuccess; // 0x28 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (0x10)
	unsigned char padding_48[0x20]; // 0x48 (0x20)

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery (Underlying native function: CreateProxyObjectForInAppPurchaseQuery 0x6e5c23c)
	static class UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(class APlayerController*& PlayerController, struct TArray<struct FString>& ProductIdentifiers); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};


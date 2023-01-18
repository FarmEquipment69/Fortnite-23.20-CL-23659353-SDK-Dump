// Class /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// Size: 0xa8
class UInAppPurchaseCallbackProxy2 : public UObject
{
	struct FMulticastInlineDelegate OnSuccess; // 0x28 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (0x10)
	unsigned char padding_48[0x60]; // 0x48 (0x60)

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases (Underlying native function: CreateProxyObjectForInAppPurchaseUnprocessedPurchases 0x6e5c858)
	static class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class APlayerController*& PlayerController); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned (Underlying native function: CreateProxyObjectForInAppPurchaseQueryOwned 0x6e5c344)
	static class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(class APlayerController*& PlayerController); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase (Underlying native function: CreateProxyObjectForInAppPurchase 0x6e5bee0)
	static class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(class APlayerController*& PlayerController, struct FInAppPurchaseProductRequest2& ProductRequest); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};


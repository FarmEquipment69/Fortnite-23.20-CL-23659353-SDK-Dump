// Class /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
// Size: 0xb0
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{
	struct FMulticastInlineDelegate OnSuccess; // 0x28 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (0x10)
	unsigned char padding_48[0x68]; // 0x48 (0x68)

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore (Underlying native function: CreateProxyObjectForInAppPurchaseRestore 0x6e5c5b0)
	static class UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest2>& ConsumableProductFlags, class APlayerController*& PlayerController); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};


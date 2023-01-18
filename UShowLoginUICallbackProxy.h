// Class /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy
// Size: 0x60
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (0x10)
	unsigned char padding_50[0x10]; // 0x50 (0x10)

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI (Underlying native function: ShowExternalLoginUI 0x6e732e0)
	static class UShowLoginUICallbackProxy* ShowExternalLoginUI(class UObject*& WorldContextObject, class APlayerController*& InPlayerController); // (Final | Native | Static | Public | BlueprintCallable)
};


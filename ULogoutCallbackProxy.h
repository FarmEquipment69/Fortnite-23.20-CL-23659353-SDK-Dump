// Class /Script/OnlineSubsystemUtils.LogoutCallbackProxy
// Size: 0x68
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (0x10)
	unsigned char padding_50[0x18]; // 0x50 (0x18)

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.LogoutCallbackProxy.Logout (Underlying native function: Logout 0x6e5eb5c)
	static class ULogoutCallbackProxy* Logout(class UObject*& WorldContextObject, class APlayerController*& PlayerController); // (Final | Native | Static | Public | BlueprintCallable)
};


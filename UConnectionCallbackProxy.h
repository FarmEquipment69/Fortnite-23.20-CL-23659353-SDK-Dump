// Class /Script/OnlineSubsystemUtils.ConnectionCallbackProxy
// Size: 0x78
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (0x10)
	unsigned char padding_50[0x28]; // 0x50 (0x28)

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService (Underlying native function: ConnectToService 0x6e5bb88)
	static class UConnectionCallbackProxy* ConnectToService(class UObject*& WorldContextObject, class APlayerController*& PlayerController); // (Final | Native | Static | Public | BlueprintCallable)
};


// Class /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy
// Size: 0x198
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (0x10)
	unsigned char padding_50[0x148]; // 0x50 (0x148)

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession (Underlying native function: JoinSession 0x6e5e8b0)
	static class UJoinSessionCallbackProxy* JoinSession(class UObject*& WorldContextObject, class APlayerController*& PlayerController, struct FBlueprintSessionResult& SearchResult); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};


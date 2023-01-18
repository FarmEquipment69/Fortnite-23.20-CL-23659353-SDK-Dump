// Class /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// Size: 0x68
class ULeaderboardFlushCallbackProxy : public UObject
{
	struct FMulticastInlineDelegate OnSuccess; // 0x28 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (0x10)
	unsigned char padding_48[0x20]; // 0x48 (0x20)

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush (Underlying native function: CreateProxyObjectForFlush 0x6e5bcd0)
	static class ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(class APlayerController*& PlayerController, struct FName& SessionName); // (Final | Native | Static | Public | BlueprintCallable)
};


// Class /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// Size: 0x90
class ULeaderboardQueryCallbackProxy : public UObject
{
	struct FMulticastInlineDelegate OnSuccess; // 0x28 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38 (0x10)
	unsigned char padding_48[0x48]; // 0x48 (0x48)

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery (Underlying native function: CreateProxyObjectForIntQuery 0x6e5cafc)
	static class ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(class APlayerController*& PlayerController, struct FName& StatName); // (Final | Native | Static | Public | BlueprintCallable)
};


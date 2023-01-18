// Class /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy
// Size: 0x78
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (0x10)
	unsigned char padding_50[0x28]; // 0x50 (0x28)

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch (Underlying native function: QuitMatch 0x6e72d44)
	static class UQuitMatchCallbackProxy* QuitMatch(class UObject*& WorldContextObject, class APlayerController*& PlayerController, struct FString& MatchID, struct TEnumAsByte<EMPMatchOutcome>& Outcome, int& TurnTimeoutInSeconds); // (Final | Native | Static | Public | BlueprintCallable)
};


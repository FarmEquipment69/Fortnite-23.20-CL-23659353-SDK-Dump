// Class /Script/OnlineSubsystemUtils.EndMatchCallbackProxy
// Size: 0x80
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (0x10)
	unsigned char padding_50[0x30]; // 0x50 (0x30)

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch (Underlying native function: EndMatch 0x6e5d204)
	static class UEndMatchCallbackProxy* EndMatch(class UObject*& WorldContextObject, class APlayerController*& PlayerController, struct TScriptInterface<class ITurnBasedMatchInterface>& MatchActor, struct FString& MatchID, struct TEnumAsByte<EMPMatchOutcome>& LocalPlayerOutcome, struct TEnumAsByte<EMPMatchOutcome>& OtherPlayersOutcome); // (Final | Native | Static | Public | BlueprintCallable)
};


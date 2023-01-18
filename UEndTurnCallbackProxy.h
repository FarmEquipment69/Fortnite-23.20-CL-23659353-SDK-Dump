// Class /Script/OnlineSubsystemUtils.EndTurnCallbackProxy
// Size: 0x78
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (0x10)
	unsigned char padding_50[0x28]; // 0x50 (0x28)

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn (Underlying native function: EndTurn 0x6e5d570)
	static class UEndTurnCallbackProxy* EndTurn(class UObject*& WorldContextObject, class APlayerController*& PlayerController, struct FString& MatchID, struct TScriptInterface<class ITurnBasedMatchInterface>& TurnBasedMatchInterface); // (Final | Native | Static | Public | BlueprintCallable)
};


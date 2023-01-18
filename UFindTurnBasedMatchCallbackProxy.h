// Class /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// Size: 0x88
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (0x10)
	unsigned char padding_50[0x38]; // 0x50 (0x38)

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch (Underlying native function: FindTurnBasedMatch 0x6e5d990)
	static class UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(class UObject*& WorldContextObject, class APlayerController*& PlayerController, struct TScriptInterface<class ITurnBasedMatchInterface>& MatchActor, int& MinPlayers, int& MaxPlayers, int& PlayerGroup, bool& ShowExistingMatches); // (Final | Native | Static | Public | BlueprintCallable)
};


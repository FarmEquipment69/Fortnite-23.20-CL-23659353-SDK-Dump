// Class /Script/OnlineSubsystem.TurnBasedMatchInterface
// Size: 0x28
class ITurnBasedMatchInterface : public IInterface
{

	/* Functions */

	// Function /Script/OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn (Has no native function)
	void OnMatchReceivedTurn(struct FString& Match, bool& bDidBecomeActive); // (Event | Public | BlueprintEvent)

	// Function /Script/OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded (Has no native function)
	void OnMatchEnded(struct FString& Match); // (Event | Public | BlueprintEvent)
};


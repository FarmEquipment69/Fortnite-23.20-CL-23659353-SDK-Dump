// Class /Script/FortniteUI.InfiltrationBaseWidget
// Size: 0x330
class UInfiltrationBaseWidget : public ULTMWidgetBase
{
	struct TWeakObjectPtr<class AFortAthenaMutator_Infiltration> CachedMutator; // 0x328 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.InfiltrationBaseWidget.OnMutatorReady (Has no native function)
	void OnMutatorReady(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.InfiltrationBaseWidget.OnIsCurrentlyDefendedChanged (Has no native function)
	void OnIsCurrentlyDefendedChanged(bool& bNewBeingDefended); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.InfiltrationBaseWidget.OnIntelStateChanged (Has no native function)
	void OnIntelStateChanged(enum EIntelStateEnum& NewState); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.InfiltrationBaseWidget.OnGroundTimerChanged (Has no native function)
	void OnGroundTimerChanged(float& NewTimeRemaining); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.InfiltrationBaseWidget.IsLocalPlayerDefending (Underlying native function: IsLocalPlayerDefending 0xa57e5bc)
	bool IsLocalPlayerDefending(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationBaseWidget.IsLocalPlayerAttacking (Underlying native function: IsLocalPlayerAttacking 0xa57e4bc)
	bool IsLocalPlayerAttacking(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationBaseWidget.IsBeingHeldByLocalPlayer (Underlying native function: IsBeingHeldByLocalPlayer 0xa57e480)
	bool IsBeingHeldByLocalPlayer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationBaseWidget.GetNumOfRounds (Underlying native function: GetNumOfRounds 0xa57cdbc)
	int GetNumOfRounds(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationBaseWidget.GetIsCurrentlyDefended (Underlying native function: GetIsCurrentlyDefended 0xa57ccb0)
	bool GetIsCurrentlyDefended(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationBaseWidget.GetGroundTimeRemaining (Underlying native function: GetGroundTimeRemaining 0xa57cc40)
	float GetGroundTimeRemaining(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationBaseWidget.GetDefendingTeam (Underlying native function: GetDefendingTeam 0xa57cb20)
	unsigned char GetDefendingTeam(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationBaseWidget.GetCurrentRound (Underlying native function: GetCurrentRound 0xa57ca9c)
	int GetCurrentRound(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationBaseWidget.GetCurrentIntelState (Underlying native function: GetCurrentIntelState 0x2486284)
	enum EIntelStateEnum GetCurrentIntelState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationBaseWidget.GetAttackingTeam (Underlying native function: GetAttackingTeam 0xa57c730)
	unsigned char GetAttackingTeam(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};


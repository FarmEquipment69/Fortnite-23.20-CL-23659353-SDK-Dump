// Class /Script/FortniteGame.InfiltrationStatusComponent
// Size: 0xf8
class UInfiltrationStatusComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnIntelStateChanged; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnIsCurrentlyDefendedChanged; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnGroundTimerChanged; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnRoundResetEvent; // 0xd0 (0x10)
	struct FMulticastInlineDelegate OnMutatorReadyEvent; // 0xe0 (0x10)
	struct TWeakObjectPtr<class AFortAthenaMutator_Infiltration> CachedMutator; // 0xf0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.InfiltrationStatusComponent.TryExecuteMutatorReady (Underlying native function: TryExecuteMutatorReady 0x8461548)
	void TryExecuteMutatorReady(); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.InfiltrationStatusComponent.OnRoundResetEvent__DelegateSignature (Has no native function)
	void OnRoundResetEventDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.InfiltrationStatusComponent.OnRoundReset (Underlying native function: OnRoundReset 0x845fd1c)
	void OnRoundReset(); // (Final | Native | Public)

	// Function /Script/FortniteGame.InfiltrationStatusComponent.OnRep_CachedMutator (Underlying native function: OnRep_CachedMutator 0x845fbac)
	void OnRepCachedMutator(); // (Final | Native | Protected)

	// DelegateFunction /Script/FortniteGame.InfiltrationStatusComponent.OnMutatorReady__DelegateSignature (Has no native function)
	void OnMutatorReadyDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.InfiltrationStatusComponent.OnIsCurrentlyDefendedChanged__DelegateSignature (Has no native function)
	void OnIsCurrentlyDefendedChangedDelegateSignature(bool& bInRange); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.InfiltrationStatusComponent.OnIntelStateChanged__DelegateSignature (Has no native function)
	void OnIntelStateChangedDelegateSignature(enum EIntelStateEnum& CurrentState); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.InfiltrationStatusComponent.OnGroundTimerChanged__DelegateSignature (Has no native function)
	void OnGroundTimerChangedDelegateSignature(float& NewTimeRemaining); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.InfiltrationStatusComponent.IsLocalPlayerDefending (Underlying native function: IsLocalPlayerDefending 0x845e464)
	bool IsLocalPlayerDefending(class AFortPlayerControllerAthena*& LocalPlayer); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.InfiltrationStatusComponent.IsLocalPlayerAttacking (Underlying native function: IsLocalPlayerAttacking 0x845e3b8)
	bool IsLocalPlayerAttacking(class AFortPlayerControllerAthena*& LocalPlayer); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.InfiltrationStatusComponent.IsBeingHeldByLocalPlayer (Underlying native function: IsBeingHeldByLocalPlayer 0x845e260)
	bool IsBeingHeldByLocalPlayer(class AFortPlayerControllerAthena*& LocalPlayer); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.InfiltrationStatusComponent.GetIsCurrentlyDefended (Underlying native function: GetIsCurrentlyDefended 0x845de3c)
	bool GetIsCurrentlyDefended(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.InfiltrationStatusComponent.GetGroundTimeRemaining (Underlying native function: GetGroundTimeRemaining 0x845ddfc)
	float GetGroundTimeRemaining(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.InfiltrationStatusComponent.GetDefendingTeam (Underlying native function: GetDefendingTeam 0x845dae8)
	unsigned char GetDefendingTeam(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.InfiltrationStatusComponent.GetCurrentIntelState (Underlying native function: GetCurrentIntelState 0x845daa0)
	enum EIntelStateEnum GetCurrentIntelState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.InfiltrationStatusComponent.GetAttackingTeam (Underlying native function: GetAttackingTeam 0x845d9c0)
	unsigned char GetAttackingTeam(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};


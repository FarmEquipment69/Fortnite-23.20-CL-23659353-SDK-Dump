// Class /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy
// Size: 0x228
class UFortControllerComponent_FakeKillRelevancy : public UFortControllerComponent
{
	struct FFakeKillRelevancyPlayerDataArray PlayerDataArray; // 0xa0 (0x120)
	struct TMap<class AFortPlayerStateAthena*, enum EFakeKillRelevancyPlayerKillStep> ClientPlayerStateKillStepMap; // 0x1c0 (0x50)
	unsigned char ResetCounter; // 0x210 (0x1)
	unsigned char unreflected_211[0x7]; // 0x211 (0x7) 
	struct TArray<class AFortPlayerStateAthena*> DebugSupergroupPlayerStates; // 0x218 (0x10)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.ResetRelevancy (Underlying native function: ResetRelevancy 0x26daa0c)
	void ResetRelevancy(); // (Final | BlueprintAuthorityOnly | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.PlayKillEffects (Has no native function)
	void PlayKillEffects(struct FFakeKillRelevancyPlayerDataEntry& FakeKillData, float& RelevancyDelay); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.OnRep_ResetCounter (Underlying native function: OnRep_ResetCounter 0x76c57c0)
	void OnRepResetCounter(); // (Final | Native | Private)

	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.OnKillEffectsPlayed (Underlying native function: OnKillEffectsPlayed 0x76c4574)
	void OnKillEffectsPlayed(class AFortPlayerStateAthena*& PlayerState); // (Final | BlueprintCosmetic | Native | Protected | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.GetDeathLocation (Underlying native function: GetDeathLocation 0x76c2664)
	struct FVector GetDeathLocation(class AFortPlayerStateAthena*& PlayerState); // (Final | Native | Protected | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.CancelKillEffectsOnServer (Has no native function)
	void CancelKillEffectsOnServer(); // (BlueprintAuthorityOnly | Event | Protected | BlueprintEvent)

	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.CancelKillEffectsOnClient (Has no native function)
	void CancelKillEffectsOnClient(struct TArray<class AFortPlayerStateAthena*>& PlayerStates); // (BlueprintCosmetic | Event | Protected | HasOutParms | BlueprintEvent)
};


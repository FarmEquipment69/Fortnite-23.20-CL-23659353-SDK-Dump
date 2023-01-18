// Class /Script/SpecialEventGameplayRuntime.SpecialEventScript
// Size: 0x308
class ASpecialEventScript : public AInfo
{
	struct FMulticastInlineDelegate OnSpecialEventPhaseActivated; // 0x288 (0x10)
	struct FMulticastInlineDelegate OnSpecialEventPhaseDeactivated; // 0x298 (0x10)
	struct TArray<struct FPhaseInfo> PhaseInfoArray; // 0x2a8 (0x10)
	class ALevelSequenceActor* MasterSequence; // 0x2b8 (0x8)
	float DropDeadWindowSizeInSeconds; // 0x2c0 (0x4)
	float DelayAfterConentLoad; // 0x2c4 (0x4)
	float DelayAfterWarmup; // 0x2c8 (0x4)
	float ForceReturnToMainMenuTime; // 0x2cc (0x4)
	float ForceReturnToMainMenuTimeRandomness; // 0x2d0 (0x4)
	float MinDelayReturnToMainMenu; // 0x2d4 (0x4)
	float MaxDelayReturnToMainMenu; // 0x2d8 (0x4)
	bool bPreloadAllLevelsOnServer; // 0x2dc (0x1)
	bool bAllowGarbageCollectionAfterUnload; // 0x2dd (0x1)
	bool bFullPurgeGC; // 0x2de (0x1)
	unsigned char unreflected_2df[0x1]; // 0x2df (0x1) 
	int ReplicatedActivePhaseIndex; // 0x2e0 (0x4)
	unsigned char unreflected_2e4[0xc]; // 0x2e4 (0xc) 
	class UMeshNetworkComponent* MeshNetworkComponent; // 0x2f0 (0x8)
	unsigned char padding_2f8[0x10]; // 0x2f8 (0x10)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.UpdateMasterSequence (Underlying native function: UpdateMasterSequence 0x76c8a88)
	void UpdateMasterSequence(float& Time); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.StartEventAtIndex (Underlying native function: StartEventAtIndex 0x76c7f38)
	void StartEventAtIndex(int& InStartingIndex); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.SetLocalPlayersSignificantForSpecialEventSequence (Underlying native function: SetLocalPlayersSignificantForSpecialEventSequence 0x76c73b0)
	void SetLocalPlayersSignificantForSpecialEventSequence(bool& bIsSignificant); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.OnRep_ReplicatedActivePhaseIndex (Underlying native function: OnRep_ReplicatedActivePhaseIndex 0x76c56fc)
	void OnRepReplicatedActivePhaseIndex(); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.GetActivePhaseIndex (Underlying native function: GetActivePhaseIndex 0x76c1f3c)
	int GetActivePhaseIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.BP_OnScriptReady (Has no native function)
	void BPOnScriptReady(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.BP_OnScriptFinished (Has no native function)
	void BPOnScriptFinished(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.AttemptStartNextPhase (Underlying native function: AttemptStartNextPhase 0x76c0590)
	void AttemptStartNextPhase(struct FGameplayTag& CurrentPhaseTag); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.AttemptFinishPhase (Underlying native function: AttemptFinishPhase 0x76c0510)
	void AttemptFinishPhase(struct FGameplayTag& PhaseTag); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};


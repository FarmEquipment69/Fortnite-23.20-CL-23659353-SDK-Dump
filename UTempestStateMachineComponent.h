// Class /Script/TempestRuntime.TempestStateMachineComponent
// Size: 0x170
class UTempestStateMachineComponent : public UGameFrameworkComponent
{
	bool bDestroyOnCompletion; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	struct FScalableFloat FormationDuration; // 0xa8 (0x28)
	struct FScalableFloat ActiveDuration; // 0xd0 (0x28)
	struct FScalableFloat DissipationDuration; // 0xf8 (0x28)
	struct FTempestStateInfo CurrentStateInfo; // 0x120 (0xc)
	unsigned char unreflected_12c[0x1c]; // 0x12c (0x1c) 
	struct FMulticastInlineDelegate OnTempestStateChangedDelegate; // 0x148 (0x10)
	unsigned char padding_158[0x18]; // 0x158 (0x18)

	/* Functions */

	// Function /Script/TempestRuntime.TempestStateMachineComponent.OnRep_CurrentStateInfo (Underlying native function: OnRep_CurrentStateInfo 0x76e7468)
	void OnRepCurrentStateInfo(); // (Final | Native | Private)

	// Function /Script/TempestRuntime.TempestStateMachineComponent.GetCurrentStateInfo (Underlying native function: GetCurrentStateInfo 0x76e7440)
	struct FTempestStateInfo GetCurrentStateInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/TempestRuntime.TempestStateMachineComponent.GetCurrentStateCompletionPercentage (Underlying native function: GetCurrentStateCompletionPercentage 0x76e7418)
	float GetCurrentStateCompletionPercentage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/TempestRuntime.TempestStateMachineComponent.GetCurrentState (Underlying native function: GetCurrentState 0x76e7400)
	enum ETempestState GetCurrentState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/TempestRuntime.TempestStateMachineComponent.ForceDissipate (Underlying native function: ForceDissipate 0x76e724c)
	void ForceDissipate(struct FString& InDissipationReason); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};


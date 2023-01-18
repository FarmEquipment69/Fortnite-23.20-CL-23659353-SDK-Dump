// Class /Script/SpecialEventGameplayRuntime.SpecialEventPhase
// Size: 0x328
class ASpecialEventPhase : public AInfo
{
	unsigned char unreflected_288[0x18]; // 0x288 (0x18) 
	struct FGameplayTag PhaseTag; // 0x2a0 (0x4)
	bool bApplyGameplayEffects; // 0x2a4 (0x1)
	unsigned char unreflected_2a5[0x3]; // 0x2a5 (0x3) 
	struct TArray<class UClass*> GameplayEffectsToApply; // 0x2a8 (0x10)
	struct TArray<struct FSpecialEventPhaseComponentNetModeInfo> ControllerComponentsToApplyInfoList; // 0x2b8 (0x10)
	struct TArray<struct FSpecialEventPhaseComponentNetModeInfo> PawnComponentsToApplyInfoList; // 0x2c8 (0x10)
	class UClass* CameraModifierToApply; // 0x2d8 (0x8)
	bool bRemoveModifierOnPhaseDeactivation; // 0x2e0 (0x1)
	bool bRemoveGameplayEffects; // 0x2e1 (0x1)
	unsigned char unreflected_2e2[0x6]; // 0x2e2 (0x6) 
	struct TArray<class UClass*> GameplayEffectsToRemove; // 0x2e8 (0x10)
	struct TArray<struct FSpecialEventPhaseComponentNetModeInfo> ControllerComponentsToRemoveInfoList; // 0x2f8 (0x10)
	struct TArray<struct FSpecialEventPhaseComponentNetModeInfo> PawnComponentsToRemoveInfoList; // 0x308 (0x10)
	class UCameraModifier* AppliedCameraModifier; // 0x318 (0x8)
	enum ESpecialEventPhaseState PhaseState; // 0x320 (0x1)
	unsigned char padding_321[0x7]; // 0x321 (0x7)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.SetHUDElementVisibility (Underlying native function: SetHUDElementVisibility 0x76c7134)
	void SetHUDElementVisibility(struct FGameplayTagContainer& HUDElementTags, bool& bHideElements); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.PrePhaseActivation_Server (Has no native function)
	void PrePhaseActivationServer(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnRep_PhaseState (Underlying native function: OnRep_PhaseState 0x76c56d8)
	void OnRepPhaseState(); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseFinished (Underlying native function: OnPhaseFinished 0x76c5014)
	void OnPhaseFinished(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseDeactivation_Server (Has no native function)
	void OnPhaseDeactivationServer(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseDeactivation_Client (Has no native function)
	void OnPhaseDeactivationClient(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseActivation_Server (Has no native function)
	void OnPhaseActivationServer(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseActivation_Client (Has no native function)
	void OnPhaseActivationClient(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.GetPhaseTag (Underlying native function: GetPhaseTag 0x75be82c)
	struct FGameplayTag GetPhaseTag(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.DebugActivatePhase (Underlying native function: DebugActivatePhase 0x26daa0c)
	void DebugActivatePhase(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};


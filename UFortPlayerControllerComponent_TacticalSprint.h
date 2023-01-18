// Class /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint
// Size: 0x1a8
class UFortPlayerControllerComponent_TacticalSprint : public UControllerComponent
{
	unsigned char unreflected_a0[0x18]; // 0xa0 (0x18) 
	class AFortPlayerPawn* CurrentBoundPlayerPawn; // 0xb8 (0x8)
	unsigned char bTacticalSprintEnabled; // 0xc0 (0x1)
	unsigned char bWantsToTacticalSprint; // 0xc0 (0x1)
	unsigned char bHandlingMoveForward; // 0xc0 (0x1)
	unsigned char bIsSprinting; // 0xc0 (0x1)
	unsigned char bWasInBuildMode; // 0xc0 (0x1)
	unsigned char bFireAnalyticsEventOnEndPlay; // 0xc0 (0x1)
	unsigned char unreflected_c1[0x3]; // 0xc1 (0x3) 
	struct FGameplayTag TacticalSprintAbilityGameplayTag; // 0xc4 (0x4)
	struct FGameplayTag DisableTacticalSprintAbilityGameplayTag; // 0xc8 (0x4)
	unsigned char unreflected_cc[0x4]; // 0xcc (0x4) 
	struct FScalableFloat TacticalSprintEnabled; // 0xd0 (0x28)
	struct FScalableFloat TacticalSprintToggleGracePeriod; // 0xf8 (0x28)
	struct FMulticastInlineDelegate OnTacticalSprintStarted; // 0x120 (0x10)
	struct FMulticastInlineDelegate OnTacticalSprintEnded; // 0x130 (0x10)
	struct FMulticastInlineDelegate OnFailedToSprint; // 0x140 (0x10)
	struct FTimerHandle* StopWantingToSprintTimerReceipt; // 0x150 (0x8)
	unsigned char unreflected_158[0x48]; // 0x158 (0x48) 
	class UInputComponent* InputComponent; // 0x1a0 (0x8)

	/* Functions */

	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.SetIsSprinting (Underlying native function: SetIsSprinting 0x729c640)
	void SetIsSprinting(bool& bNewIsSprinting); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnWeaponEquipped (Underlying native function: OnWeaponEquipped 0x729c57c)
	void OnWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PreviousWeapon); // (Final | Native | Private)

	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnPawnChanged (Underlying native function: OnPawnChanged 0x729c4e8)
	void OnPawnChanged(class AFortPawn*& InPawn); // (Final | Native | Private)

	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnMovementModeChanged (Underlying native function: OnMovementModeChanged 0x729c3ec)
	void OnMovementModeChanged(class ACharacter*& Character, struct TEnumAsByte<EMovementMode>& PrevMovementMode, unsigned char& PreviousCustomMode); // (Final | Native | Private)

	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnAutoRunChanged (Underlying native function: OnAutoRunChanged 0x729c36c)
	void OnAutoRunChanged(bool& bAutoRunIsOn); // (Final | Native | Private)

	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.LogAndVisualLog (Underlying native function: LogAndVisualLog 0x729c1b4)
	void LogAndVisualLog(class UObject*& LoggingSource, enum ESprintLoggingVerbosityLevel& Verbosity, struct FString& LogString); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};


// Class /Script/SidewaysCodeUI.SidewaysWidgetBase
// Size: 0x2e0
class USidewaysWidgetBase : public UFortHUDElementWidget
{
	class AFortPlayspaceReplicatedState* ReplicatedState; // 0x2d0 (0x8)
	enum ESidewaysState CurrentSidewaysState; // 0x2d8 (0x1)
	unsigned char padding_2d9[0x7]; // 0x2d9 (0x7)

	/* Functions */

	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.OnSidewaysStateChanged (Underlying native function: OnSidewaysStateChanged 0x72ac494)
	void OnSidewaysStateChanged(class USidewaysStateComponent*& SidewaysStateComponent, class ASidewaysPlayspace*& NewPlayspace, enum ESidewaysState& OldState, enum ESidewaysState& NewState); // (Final | Native | Protected)

	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.OnParamUpdated (Has no native function)
	void OnParamUpdated(struct FGameplayTag& UpdatedParam); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.OnExitSideways (Has no native function)
	void OnExitSideways(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.OnEnterSideways (Has no native function)
	void OnEnterSideways(class ASidewaysPlayspace*& Playspace); // (Event | Protected | BlueprintEvent)

	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.IsValidPlayspace (Has no native function)
	bool IsValidPlayspace(class ASidewaysPlayspace*& Playspace); // (Event | Protected | BlueprintEvent | Const)

	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.InitializeVariables (Has no native function)
	void InitializeVariables(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.HandleFortPawnChanged (Underlying native function: HandleFortPawnChanged 0x72ac414)
	void HandleFortPawnChanged(class AFortPawn*& PossessedPawn); // (Final | Native | Protected)

	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.ConfigureUIFromPlayspace (Has no native function)
	void ConfigureUIFromPlayspace(class ASidewaysPlayspace*& Playspace); // (Event | Protected | BlueprintEvent)
};


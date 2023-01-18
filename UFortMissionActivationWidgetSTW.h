// Class /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW
// Size: 0x3f8
class UFortMissionActivationWidgetSTW : public UCommonActivatableWidget
{
	class UFortMissionActivationInfoSTW* InfoObject; // 0x3a8 (0x8)
	struct FGameplayTagContainer ReadyUpObjectiveHandle; // 0x3b0 (0x20)
	class UCurveFloat* DifficultyIncreaseBluGloCurve; // 0x3d0 (0x8)
	unsigned char padding_3d8[0x20]; // 0x3d8 (0x20)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.RequestStartObjectiveState (Underlying native function: RequestStartObjectiveState 0x7599d60)
	void RequestStartObjectiveState(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.RequestDifficultyIncreaseState (Underlying native function: RequestDifficultyIncreaseState 0x7599d30)
	void RequestDifficultyIncreaseState(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.RequestDefaultState (Underlying native function: RequestDefaultState 0x7599ce0)
	void RequestDefaultState(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.OnVoteLockoutChangedBP (Has no native function)
	void OnVoteLockoutChangedBP(enum EFortVoteType& VoteType, bool& bIsLocked); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.OnStateUpdated (Has no native function)
	void OnStateUpdated(enum EFortMissionActivationWidgetSTWState& ActiveState, enum EFortMissionActivationWidgetSTWState& PreviousState); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.OnMultiplayerChangedBP (Has no native function)
	void OnMultiplayerChangedBP(bool& bIsMultiplayer); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.OnActiveVoteChangedBP (Has no native function)
	void OnActiveVoteChangedBP(enum EFortVoteType& VoteType, bool& bIsVoteActive, int& VoteResult); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.GetCurrentState (Underlying native function: GetCurrentState 0x7596594)
	enum EFortMissionActivationWidgetSTWState GetCurrentState(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};


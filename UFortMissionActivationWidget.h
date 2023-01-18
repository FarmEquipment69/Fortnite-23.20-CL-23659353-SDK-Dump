// Class /Script/FortniteUI.FortMissionActivationWidget
// Size: 0x568
class UFortMissionActivationWidget : public UFortActivatablePanel
{
	class UFortMissionActivationInfo* InfoObject; // 0x518 (0x8)
	struct FGameplayTagContainer ReadyUpObjectiveHandle; // 0x520 (0x20)
	class UCurveFloat* DifficultyIncreaseBluGloCurve; // 0x540 (0x8)
	unsigned char padding_548[0x20]; // 0x548 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.FortMissionActivationWidget.RequestStartObjectiveState (Underlying native function: RequestStartObjectiveState 0xa84933c)
	void RequestStartObjectiveState(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMissionActivationWidget.RequestDifficultyIncreaseState (Underlying native function: RequestDifficultyIncreaseState 0xa849328)
	void RequestDifficultyIncreaseState(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMissionActivationWidget.RequestDefaultState (Underlying native function: RequestDefaultState 0xa8492d8)
	void RequestDefaultState(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMissionActivationWidget.OnVoteLockoutChangedBP (Has no native function)
	void OnVoteLockoutChangedBP(enum EFortVoteType& VoteType, bool& bIsLocked); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMissionActivationWidget.OnStateUpdated (Has no native function)
	void OnStateUpdated(enum EFortMissionActivationWidgetState& ActiveState, enum EFortMissionActivationWidgetState& PreviousState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMissionActivationWidget.OnMultiplayerChangedBP (Has no native function)
	void OnMultiplayerChangedBP(bool& bIsMultiplayer); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMissionActivationWidget.OnActiveVoteChangedBP (Has no native function)
	void OnActiveVoteChangedBP(enum EFortVoteType& VoteType, bool& bIsVoteActive, int& VoteResult); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMissionActivationWidget.GetCurrentState (Underlying native function: GetCurrentState 0x6bc694c)
	enum EFortMissionActivationWidgetState GetCurrentState(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};


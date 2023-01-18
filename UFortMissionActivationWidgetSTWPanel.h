// Class /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel
// Size: 0x2b8
class UFortMissionActivationWidgetSTWPanel : public UCommonUserWidget
{
	class UFortMissionActivationInfoSTW* InfoObject; // 0x290 (0x8)
	unsigned char padding_298[0x20]; // 0x298 (0x20)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.SetInfoObject (Underlying native function: SetInfoObject 0x759a400)
	void SetInfoObject(class UFortMissionActivationInfoSTW*& NewInfoObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnVoteUpdatedBP (Has no native function)
	void OnVoteUpdatedBP(enum EFortVoteType& VoteType); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnVoteLockoutChangedBP (Has no native function)
	void OnVoteLockoutChangedBP(enum EFortVoteType& VoteType, bool& bIsLocked); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnMultiplayerChangedBP (Has no native function)
	void OnMultiplayerChangedBP(bool& bIsMultiplayer); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnActiveVoteChangedBP (Has no native function)
	void OnActiveVoteChangedBP(enum EFortVoteType& VoteType, bool& bIsVoteActive, int& VoteResult); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.InfoObjectUpdated (Has no native function)
	void InfoObjectUpdated(); // (Event | Protected | BlueprintEvent)
};


// Class /Script/FortniteUI.FortMissionActivationWidgetPanel
// Size: 0x2b8
class UFortMissionActivationWidgetPanel : public UCommonUserWidget
{
	class UFortMissionActivationInfo* InfoObject; // 0x290 (0x8)
	unsigned char padding_298[0x20]; // 0x298 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.FortMissionActivationWidgetPanel.SetInfoObject (Underlying native function: SetInfoObject 0xa849950)
	void SetInfoObject(class UFortMissionActivationInfo*& NewInfoObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMissionActivationWidgetPanel.OnVoteUpdatedBP (Has no native function)
	void OnVoteUpdatedBP(enum EFortVoteType& VoteType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMissionActivationWidgetPanel.OnVoteLockoutChangedBP (Has no native function)
	void OnVoteLockoutChangedBP(enum EFortVoteType& VoteType, bool& bIsLocked); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMissionActivationWidgetPanel.OnMultiplayerChangedBP (Has no native function)
	void OnMultiplayerChangedBP(bool& bIsMultiplayer); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMissionActivationWidgetPanel.OnActiveVoteChangedBP (Has no native function)
	void OnActiveVoteChangedBP(enum EFortVoteType& VoteType, bool& bIsVoteActive, int& VoteResult); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMissionActivationWidgetPanel.InfoObjectUpdated (Has no native function)
	void InfoObjectUpdated(); // (Event | Protected | BlueprintEvent)
};


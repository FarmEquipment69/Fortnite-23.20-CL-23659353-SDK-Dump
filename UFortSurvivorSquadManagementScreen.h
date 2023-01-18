// Class /Script/SaveTheWorldUI.FortSurvivorSquadManagementScreen
// Size: 0x718
class UFortSurvivorSquadManagementScreen : public UFortSquadManagementScreenBase
{
	class UFortSurvivorSquadStatMatchesBase* StatMatchesWidget; // 0x638 (0x8)
	unsigned char padding_640[0xd8]; // 0x640 (0xd8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortSurvivorSquadManagementScreen.UpdateCycleButtons (Has no native function)
	void UpdateCycleButtons(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSurvivorSquadManagementScreen.ShowHelpDialog (Has no native function)
	void ShowHelpDialog(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSurvivorSquadManagementScreen.PlayFeedbackForSlottingPerson (Has no native function)
	void PlayFeedbackForSlottingPerson(class UFortWorker*& Worker, int& SlotIndex, struct FFortSurvivorSquadSlottingFeedbackData& FeedbackData); // (Event | Protected | HasOutParms | BlueprintEvent)
};


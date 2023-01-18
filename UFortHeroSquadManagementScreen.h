// Class /Script/SaveTheWorldUI.FortHeroSquadManagementScreen
// Size: 0x658
class UFortHeroSquadManagementScreen : public UFortSquadManagementScreenBase
{
	struct FDataTableRowHandle ManageDefendersInputActionRowHandle; // 0x638 (0x10)
	class UFortHeroSquadBonusPerksWidgetBase* BonusPerksWidget; // 0x648 (0x8)
	unsigned char padding_650[0x8]; // 0x650 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortHeroSquadManagementScreen.PlayFeedbackForSlottingPerson (Has no native function)
	void PlayFeedbackForSlottingPerson(class UFortCharacter*& Character, int& SlotIndex); // (Event | Protected | BlueprintEvent)
};


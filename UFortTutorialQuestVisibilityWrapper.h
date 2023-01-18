// Class /Script/FortniteUI.FortTutorialQuestVisibilityWrapper
// Size: 0x2c8
class UFortTutorialQuestVisibilityWrapper : public UFortBangWrapper_NUI
{
	class UFortQuestItemDefinition* QuestItemDefinition; // 0x2a8 (0x8)
	struct FDataTableRowHandle QuestObjectiveStat; // 0x2b0 (0x10)
	unsigned char padding_2c0[0x8]; // 0x2c0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortTutorialQuestVisibilityWrapper.HandleCurrentQuestsChanged (Underlying native function: HandleCurrentQuestsChanged 0xa9394d0)
	void HandleCurrentQuestsChanged(); // (Final | Native | Private)
};


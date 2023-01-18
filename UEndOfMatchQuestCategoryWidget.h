// Class /Script/FortniteUI.EndOfMatchQuestCategoryWidget
// Size: 0x2e0
class UEndOfMatchQuestCategoryWidget : public UCommonUserWidget
{
	unsigned char unreflected_290[0x10]; // 0x290 (0x10) 
	class UWidgetSwitcher* SwitcherCategoryType; // 0x2a0 (0x8)
	class USizeBox* EntryBoxSizeBox; // 0x2a8 (0x8)
	class UDynamicEntryBox* EntryBoxQuestUpdates; // 0x2b0 (0x8)
	struct TArray<class UEndOfMatchQuestEntryWidget*> QuestWidgetsToShow; // 0x2b8 (0x10)
	unsigned char padding_2c8[0x18]; // 0x2c8 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.EndOfMatchQuestCategoryWidget.StartMoveEntriesDown (Underlying native function: StartMoveEntriesDown 0xa4e3170)
	void StartMoveEntriesDown(class UEndOfMatchQuestEntryWidget*& NextWidget); // (Final | Native | Private)

	// Function /Script/FortniteUI.EndOfMatchQuestCategoryWidget.StartFirstEntryIntro (Underlying native function: StartFirstEntryIntro 0xa4e315c)
	void StartFirstEntryIntro(); // (Final | Native | Private)

	// Function /Script/FortniteUI.EndOfMatchQuestCategoryWidget.ShowNextUpdate (Underlying native function: ShowNextUpdate 0xa4e30a8)
	void ShowNextUpdate(); // (Final | Native | Private)

	// Function /Script/FortniteUI.EndOfMatchQuestCategoryWidget.MoveAllEntriesDown (Underlying native function: MoveAllEntriesDown 0xa4e26bc)
	void MoveAllEntriesDown(); // (Final | Native | Private)
};


// Class /Script/SaveTheWorldUI.FortQuestMapDetailsPanel
// Size: 0x358
class UFortQuestMapDetailsPanel : public UFortQuestMapDetailsPanelBase
{
	struct FDataTableRowHandle PlayButtonTriggeringAction; // 0x2a8 (0x10)
	struct TArray<class UClass*> PriorityActivatableWidgetClassList; // 0x2b8 (0x10)
	class UClass* CurrentQuestBorder; // 0x2c8 (0x8)
	class UClass* CompletedQuestBorder; // 0x2d0 (0x8)
	class UFortJournalQuestDetails* PanelJournalDetails; // 0x2d8 (0x8)
	class UCommonTextBlock* TextQuestTitle; // 0x2e0 (0x8)
	class UCommonTextBlock* TextQuestDescription; // 0x2e8 (0x8)
	class UCommonTextBlock* TextHeader; // 0x2f0 (0x8)
	class UCommonTextBlock* TextNotOwnedHeader; // 0x2f8 (0x8)
	class UCommonTextBlock* TextInactiveQuestName; // 0x300 (0x8)
	class UImage* ImageQuestIcon; // 0x308 (0x8)
	class UCommonListView* ListTasks; // 0x310 (0x8)
	class UCommonBorder* BorderHeader; // 0x318 (0x8)
	class UWidgetSwitcher* SwitcherBody; // 0x320 (0x8)
	class UFortRewardInfoWidget* WidgetFutureQuestRewardInfo; // 0x328 (0x8)
	class UScrollBox* ScrollBoxQuest; // 0x330 (0x8)
	class UScrollBox* ScrollBoxNoQuest; // 0x338 (0x8)
	struct TArray<class UFortQuestObjectiveInfo*> VisibleObjectives; // 0x340 (0x10)
	class UFortQuestItem* CurrentQuestItem; // 0x350 (0x8)
};


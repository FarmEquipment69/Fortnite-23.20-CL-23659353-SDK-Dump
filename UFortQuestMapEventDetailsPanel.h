// Class /Script/SaveTheWorldUI.FortQuestMapEventDetailsPanel
// Size: 0x340
class UFortQuestMapEventDetailsPanel : public UFortQuestMapDetailsPanelBase
{
	class UClass* CurrentQuestBorder; // 0x2a8 (0x8)
	class UClass* CompletedQuestBorder; // 0x2b0 (0x8)
	class UClass* FutureQuestBorder; // 0x2b8 (0x8)
	class UVerticalBox* VBoxQuestContainer; // 0x2c0 (0x8)
	class UVerticalBox* VBoxCompletedQuestContainer; // 0x2c8 (0x8)
	class UCommonAnimatedSwitcher* SwitcherQuests; // 0x2d0 (0x8)
	class UCommonBorder* BorderNextQuest; // 0x2d8 (0x8)
	class UCommonTextBlock* TextQuestName; // 0x2e0 (0x8)
	class UCommonTextBlock* TextQuestDescription; // 0x2e8 (0x8)
	class UCommonTextBlock* TextTitle; // 0x2f0 (0x8)
	class UCommonListView* ListTasks; // 0x2f8 (0x8)
	class UImage* ImageQuestIcon; // 0x300 (0x8)
	class UScrollBox* ScrollBoxSideBar; // 0x308 (0x8)
	class UDataTable* EventQuestTable; // 0x310 (0x8)
	class UClass* SideBarEntryClass; // 0x318 (0x8)
	class UFortQuestItemDefinition* UnlockEventQuestDefinition; // 0x320 (0x8)
	class UFortQuestItemDefinition* CurrentQuestDef; // 0x328 (0x8)
	struct TArray<class UFortQuestObjectiveInfo*> VisibleObjectives; // 0x330 (0x10)
};


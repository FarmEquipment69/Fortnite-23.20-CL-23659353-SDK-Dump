// Class /Script/SaveTheWorldUI.FortQuestMapEventSideEntry
// Size: 0x2f0
class UFortQuestMapEventSideEntry : public UCommonUserWidget
{
	class UCommonAnimatedSwitcher* SwitcherRewards; // 0x290 (0x8)
	class UCommonListView* ListSideTasks; // 0x298 (0x8)
	class UCommonTextBlock* TextSideQuestTitle; // 0x2a0 (0x8)
	class UImage* ImageArrow; // 0x2a8 (0x8)
	class UImage* ImageQuestComplete; // 0x2b0 (0x8)
	struct FMargin RewardPadding; // 0x2b8 (0x10)
	class UFortQuestItemDefinition* CurrentQuestItemDef; // 0x2c8 (0x8)
	class UFortQuestItem* CurrentQuestItem; // 0x2d0 (0x8)
	struct FTimerHandle* RewardAnimationTimer; // 0x2d8 (0x8)
	struct TArray<class UFortQuestObjectiveInfo*> SideQuestObjectives; // 0x2e0 (0x10)
};


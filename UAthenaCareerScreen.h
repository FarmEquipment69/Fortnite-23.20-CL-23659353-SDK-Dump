// Class /Script/FortniteUI.AthenaCareerScreen
// Size: 0x590
class UAthenaCareerScreen : public UCommonActivatablePanelLegacy
{
	struct TWeakObjectPtr<class UClass> LeaderboardsScreenClass; // 0x4e0 (0x28)
	struct TWeakObjectPtr<class UClass> ReplayBrowserScreenClass; // 0x508 (0x28)
	struct FDataTableRowHandle BackToSocialTabInputActionRowHandle; // 0x530 (0x10)
	class UCommonTextBlock* TextAccountLevel; // 0x540 (0x8)
	class UCommonButtonBase* ButtonLeaderboards; // 0x548 (0x8)
	class UCommonButtonBase* ButtonReplays; // 0x550 (0x8)
	class UAthenaFeatTimelineListView* ListViewFeatTimeline; // 0x558 (0x8)
	class UCommonTextBlock* TextChapterContext; // 0x560 (0x8)
	class UBacchusCloseButton* MobileCloseButton; // 0x568 (0x8)
	class UCommonTextBlock* TextMobileTabLabel; // 0x570 (0x8)
	class UImage* ImageLeftFill; // 0x578 (0x8)
	class UImage* ImageRightFill; // 0x580 (0x8)
	class UImage* ImageGradient; // 0x588 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCareerScreen.ShowFeats (Has no native function)
	void ShowFeats(bool& bHasCompletedFeats); // (Event | Protected | BlueprintEvent)
};


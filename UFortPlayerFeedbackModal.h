// Class /Script/FortniteUI.FortPlayerFeedbackModal
// Size: 0x7b8
class UFortPlayerFeedbackModal : public UFortActivatablePanel
{
	unsigned char unreflected_518[0x8]; // 0x518 (0x8) 
	class UCommonButtonGroupBase* CategoryTabs; // 0x520 (0x8)
	struct TArray<struct TWeakObjectPtr<class UFortPlayerFeedbackModalSubscreenBase>> DisplayedSubScreenStack; // 0x528 (0x10)
	struct TArray<struct TWeakObjectPtr<class UFortPlayerFeedbackModalSubscreenBase>> SubScreenToDisplayQueue; // 0x538 (0x10)
	unsigned char unreflected_548[0x1e8]; // 0x548 (0x1e8) 
	struct TArray<struct FFortFeedbackDropdownCategoryHotfix_Add*> PlayerFeedbackCategoriesToAdd; // 0x730 (0x10)
	struct TArray<struct FFortFeedbackDropdownCategoryHotfix_Modify*> PlayerFeedbackCategoriesToModify; // 0x740 (0x10)
	class UClass* SubscreenCategoryDisplay; // 0x750 (0x8)
	class UClass* SubscreenPlayerSelect; // 0x758 (0x8)
	class UClass* SubscreenSubmitDisplay; // 0x760 (0x8)
	class UClass* SubscreenFreeText; // 0x768 (0x8)
	class UClass* SubscreenEpicQA; // 0x770 (0x8)
	class UClass* SubscreenScreenshot; // 0x778 (0x8)
	class UDynamicEntryBox* SubscreenTabs; // 0x780 (0x8)
	class UScrollBox* SubscreenContainer; // 0x788 (0x8)
	class UCommonTextBlock* TextModalTitle; // 0x790 (0x8)
	class UCommonButtonBase* ButtonClose; // 0x798 (0x8)
	class UCommonButtonBase* CloseButton; // 0x7a0 (0x8)
	class UCommonButtonBase* ButtonNewFeedbackReport; // 0x7a8 (0x8)
	class UCommonButtonBase* ButtonBack; // 0x7b0 (0x8)
};


// Class /Script/SaveTheWorldUI.FortCollectionBookSectionCompletionRewardWidget
// Size: 0x300
class UFortCollectionBookSectionCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget
{
	class UCommonButtonLegacy* RewardDetailsButton; // 0x2a8 (0x8)
	struct TWeakObjectPtr<class UClass> RewardDetailsModalWidgetClass; // 0x2b0 (0x28)
	struct FText ModalTitle; // 0x2d8 (0x18)
	class UFortCollectionBookRewardModalWidget* RewardDetailsModalWidget; // 0x2f0 (0x8)
	class UFortCollectionBookSection* Section; // 0x2f8 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionCompletionRewardWidget.HandleRewardDetailsModalWidgetDeactivated (Underlying native function: HandleRewardDetailsModalWidgetDeactivated 0x756f960)
	void HandleRewardDetailsModalWidgetDeactivated(class UCommonActivatablePanelLegacy*& DeactivatedPanel); // (Final | Native | Private)
};


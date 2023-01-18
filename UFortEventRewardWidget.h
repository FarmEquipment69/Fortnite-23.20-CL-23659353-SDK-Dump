// Class /Script/EventScreenBase.FortEventRewardWidget
// Size: 0x310
class UFortEventRewardWidget : public UFortEventWidgetBase
{
	struct FText RequiredResourceFormat; // 0x270 (0x18)
	struct FText RemainingResourceFormat; // 0x288 (0x18)
	class UCommonButtonBase* ButtonRewardPreview; // 0x2a0 (0x8)
	class UFortCosmeticItemCard* UserWidgetItemCard; // 0x2a8 (0x8)
	bool bPreviewMode; // 0x2b0 (0x1)
	unsigned char padding_2b1[0x5f]; // 0x2b1 (0x5f)

	/* Functions */

	// Function /Script/EventScreenBase.FortEventRewardWidget.SetProgressPercent (Has no native function)
	void SetProgressPercent(float& Percent); // (Event | Public | BlueprintEvent)

	// Function /Script/EventScreenBase.FortEventRewardWidget.SetInSelectedState (Has no native function)
	void SetInSelectedState(bool& bSelected); // (Event | Protected | BlueprintEvent)

	// Function /Script/EventScreenBase.FortEventRewardWidget.SetInPreviewSelectedState (Has no native function)
	void SetInPreviewSelectedState(bool& bSelected); // (Event | Public | BlueprintEvent)

	// Function /Script/EventScreenBase.FortEventRewardWidget.SetAllRewardsCollected (Has no native function)
	void SetAllRewardsCollected(bool& bAllCollected); // (Event | Public | BlueprintEvent)

	// Function /Script/EventScreenBase.FortEventRewardWidget.OnSetRewardItem (Has no native function)
	void OnSetRewardItem(int& RequiredProgress, int& RemainingProgress, float& RewardProgressPercent, float& PreviewProgressPercent, float& OverallProgressPercent, bool& bInPreviewMode); // (Event | Protected | BlueprintEvent)

	// Function /Script/EventScreenBase.FortEventRewardWidget.OnInputMethodChanged (Has no native function)
	void OnInputMethodChanged(enum ECommonInputType& NewInputType); // (Event | Protected | BlueprintEvent)
};


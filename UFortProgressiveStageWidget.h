// Class /Script/CrewUI.FortProgressiveStageWidget
// Size: 0x2b0
class UFortProgressiveStageWidget : public UCommonUserWidget
{
	class UCommonTextBlock* TextMonth; // 0x290 (0x8)
	unsigned char padding_298[0x18]; // 0x298 (0x18)

	/* Functions */

	// Function /Script/CrewUI.FortProgressiveStageWidget.OnSetTooltipVisible (Has no native function)
	void OnSetTooltipVisible(bool& bVisible); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.FortProgressiveStageWidget.OnSetTooltipText (Has no native function)
	void OnSetTooltipText(struct FText& InToolTipText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/CrewUI.FortProgressiveStageWidget.OnPeekStateChanged (Has no native function)
	void OnPeekStateChanged(bool& bIsInPeekState); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.FortProgressiveStageWidget.ClearStageItemWidgets (Has no native function)
	void ClearStageItemWidgets(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.FortProgressiveStageWidget.AddStageItemWidget (Has no native function)
	class UFortProgressiveItemWidget* AddStageItemWidget(); // (Event | Protected | BlueprintEvent)
};


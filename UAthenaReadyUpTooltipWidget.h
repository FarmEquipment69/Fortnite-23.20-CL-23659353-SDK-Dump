// Class /Script/FortniteUI.AthenaReadyUpTooltipWidget
// Size: 0x2a8
class UAthenaReadyUpTooltipWidget : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	struct TArray<class UAthenaReadyUpTooltipTickWidget*> PartyWidgets; // 0x298 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaReadyUpTooltipWidget.HandlePartyWidgetReadinessChanged (Underlying native function: HandlePartyWidgetReadinessChanged 0xa531470)
	void HandlePartyWidgetReadinessChanged(bool& bIsReadied); // (Final | Native | Protected)
};


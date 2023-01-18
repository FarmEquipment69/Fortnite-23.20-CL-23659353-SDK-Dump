// Class /Script/XpEverywhereUI.XpEverywhereAccoladesWidget
// Size: 0x340
class UXpEverywhereAccoladesWidget : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x60]; // 0x2d0 (0x60) 
	struct FFortPrioritizedWidgetData PrioritizationData; // 0x330 (0x2)
	unsigned char padding_332[0xe]; // 0x332 (0xe)

	/* Functions */

	// Function /Script/XpEverywhereUI.XpEverywhereAccoladesWidget.OpenWidget (Has no native function)
	void OpenWidget(class UFortAccoladeItemDefinition*& AccoladeDef, int& XpValue, struct FText& DisplayName, struct TWeakObjectPtr<class UTexture2D>& AccoladeLargePreviewImageOverride, struct FText& SimulatedName, struct FText& SimulatedText, enum EFortSimulatedXPSize& SimulatedXpSize); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/XpEverywhereUI.XpEverywhereAccoladesWidget.OnStompedByOtherWidget (Has no native function)
	void OnStompedByOtherWidget(); // (Event | Protected | BlueprintEvent)

	// Function /Script/XpEverywhereUI.XpEverywhereAccoladesWidget.OnEventAdded (Has no native function)
	void OnEventAdded(); // (Event | Protected | BlueprintEvent)

	// Function /Script/XpEverywhereUI.XpEverywhereAccoladesWidget.HasMoreXPEvents (Underlying native function: HasMoreXPEvents 0x77ec270)
	bool HasMoreXPEvents(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/XpEverywhereUI.XpEverywhereAccoladesWidget.CloseWidget (Underlying native function: CloseWidget 0x77ec080)
	void CloseWidget(); // (Final | Native | Protected | BlueprintCallable)
};


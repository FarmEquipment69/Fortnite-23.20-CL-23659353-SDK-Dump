// Class /Script/XpEverywhereUI.XpEverywhereReticleWidget
// Size: 0x2e8
class UXpEverywhereReticleWidget : public UFortHUDElementWidget
{
	unsigned char unreflected_2e8[0x2e8]; 

	/* Functions */

	// Function /Script/XpEverywhereUI.XpEverywhereReticleWidget.UpdateXPSource (Has no native function)
	void UpdateXPSource(struct FText& NewSourceText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/XpEverywhereUI.XpEverywhereReticleWidget.UpdateXPAmount (Has no native function)
	void UpdateXPAmount(int& NewAmount, class USoundCue*& Cue, enum EFortSimulatedXPSize& SimulatedXpSize); // (Event | Protected | BlueprintEvent)

	// Function /Script/XpEverywhereUI.XpEverywhereReticleWidget.UpdateRestXP (Has no native function)
	void UpdateRestXP(int& RestXpRemaining); // (Event | Protected | BlueprintEvent)

	// Function /Script/XpEverywhereUI.XpEverywhereReticleWidget.HandleProfileUpdated (Underlying native function: HandleProfileUpdated 0x77ec25c)
	void HandleProfileUpdated(); // (Final | Native | Protected)

	// Function /Script/XpEverywhereUI.XpEverywhereReticleWidget.ForwardEvents (Underlying native function: ForwardEvents 0x77ec1a8)
	void ForwardEvents(); // (Final | Native | Protected | BlueprintCallable)
};


// Class /Script/FortniteUI.AthenaCountdownWidgetBase
// Size: 0x318
class UAthenaCountdownWidgetBase : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x40]; // 0x2d0 (0x40) 
	struct FFortPrioritizedWidgetData PrioritizationData; // 0x310 (0x2)
	unsigned char padding_312[0x6]; // 0x312 (0x6)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCountdownWidgetBase.OnDisplayWarningMessage (Has no native function)
	void OnDisplayWarningMessage(struct FText& FirstLineText, struct FText& SecondLineText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCountdownWidgetBase.OnCountdownUpdate (Has no native function)
	void OnCountdownUpdate(int& TimeRemaining, struct FText& CountdownUpdateText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCountdownWidgetBase.OnCountdownStopped (Has no native function)
	void OnCountdownStopped(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCountdownWidgetBase.OnCountdownStarted (Has no native function)
	void OnCountdownStarted(int& TimeRemaining, struct FText& CountdownIntroText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCountdownWidgetBase.OnCountdownFinished (Has no native function)
	void OnCountdownFinished(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCountdownWidgetBase.HandleGamePhaseStepChanged (Underlying native function: HandleGamePhaseStepChanged 0x25cdd48)
	void HandleGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.AthenaCountdownWidgetBase.HandleCountdownUpdate (Underlying native function: HandleCountdownUpdate 0xa48c1b4)
	void HandleCountdownUpdate(int& TimeRemaining); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaCountdownWidgetBase.HandleCountdownStopped (Underlying native function: HandleCountdownStopped 0xa48c1a0)
	void HandleCountdownStopped(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaCountdownWidgetBase.HandleCountdownStarted (Underlying native function: HandleCountdownStarted 0xa48c120)
	void HandleCountdownStarted(int& TimeRemaining); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaCountdownWidgetBase.HandleCountdownFinished (Underlying native function: HandleCountdownFinished 0xa48c10c)
	void HandleCountdownFinished(); // (Final | Native | Protected)
};


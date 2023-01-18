// Class /Script/FortniteUI.CobaltGamePhaseWidgetBase
// Size: 0x340
class UCobaltGamePhaseWidgetBase : public ULTMWidgetBase
{
	float StormComingWarningTime; // 0x328 (0x4)
	unsigned char padding_32c[0x14]; // 0x32c (0x14)

	/* Functions */

	// Function /Script/FortniteUI.CobaltGamePhaseWidgetBase.UpdateTimeDisplay (Has no native function)
	void UpdateTimeDisplay(bool& bSetWarningFont, struct FText& NewTimeDisplay); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.CobaltGamePhaseWidgetBase.OnGameStateSet (Underlying native function: OnGameStateSet 0xa57ed1c)
	void OnGameStateSet(class AFortGameState*& InGameState); // (Final | Native | Protected)

	// Function /Script/FortniteUI.CobaltGamePhaseWidgetBase.OnGamePhaseStepChanged (Has no native function)
	void OnGamePhaseStepChanged(enum EAthenaGamePhaseStep& GamePhaseStep); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.CobaltGamePhaseWidgetBase.HandleGamePhaseStepChanged (Underlying native function: HandleGamePhaseStepChanged 0xa57db44)
	void HandleGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.CobaltGamePhaseWidgetBase.HandleCountdownUpdate (Underlying native function: HandleCountdownUpdate 0xa57d6c4)
	void HandleCountdownUpdate(int& TimeRemaining); // (Final | Native | Protected)
};


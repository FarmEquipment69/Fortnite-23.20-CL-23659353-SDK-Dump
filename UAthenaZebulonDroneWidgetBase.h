// Class /Script/FortniteUI.AthenaZebulonDroneWidgetBase
// Size: 0x2d0
class UAthenaZebulonDroneWidgetBase : public UFortHUDElementWidget
{

	/* Functions */

	// Function /Script/FortniteUI.AthenaZebulonDroneWidgetBase.OnGameStateSet (Underlying native function: OnGameStateSet 0xa4e26ec)
	void OnGameStateSet(class AFortGameState*& InGameState); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaZebulonDroneWidgetBase.OnGamePhaseStepChanged (Has no native function)
	void OnGamePhaseStepChanged(enum EAthenaGamePhaseStep& GamePhaseStep); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaZebulonDroneWidgetBase.HandleGamePhaseStepChanged (Underlying native function: HandleGamePhaseStepChanged 0xa4e118c)
	void HandleGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Protected | HasOutParms)
};


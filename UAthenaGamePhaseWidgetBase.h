// Class /Script/FortniteUI.AthenaGamePhaseWidgetBase
// Size: 0x2f8
class UAthenaGamePhaseWidgetBase : public UFortHUDElementWidget
{
	class UTextBlock* TextRemainingTime; // 0x2d0 (0x8)
	class UMaterialInterface* StormComingFontMaterial; // 0x2d8 (0x8)
	float StormComingWarningTime; // 0x2e0 (0x4)
	unsigned char padding_2e4[0x14]; // 0x2e4 (0x14)

	/* Functions */

	// Function /Script/FortniteUI.AthenaGamePhaseWidgetBase.OnGamePhaseStepChanged (Has no native function)
	void OnGamePhaseStepChanged(enum EAthenaGamePhaseStep& GamePhaseStep); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaGamePhaseWidgetBase.HandleGamePhaseStepChanged (Underlying native function: HandleGamePhaseStepChanged 0x158ed44)
	void HandleGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& InSafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaGamePhaseWidgetBase.HandleCountdownUpdate (Underlying native function: HandleCountdownUpdate 0xa48c234)
	void HandleCountdownUpdate(int& TimeRemaining); // (Final | Native | Private)
};


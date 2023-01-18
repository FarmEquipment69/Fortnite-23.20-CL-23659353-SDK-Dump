// Class /Script/VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns
// Size: 0x130
class UFortUIManagerComponent_VictoryCrowns : public UFortControllerComponent
{
	class UClass* VictoryCrownsIndicatorClass; // 0xa0 (0x8)
	struct FUserWidgetPool IndicatorPool; // 0xa8 (0x88)

	/* Functions */

	// Function /Script/VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns.RebuildBearerIndicators (Underlying native function: RebuildBearerIndicators 0x77c5e38)
	void RebuildBearerIndicators(struct TArray<class AFortPlayerStateAthena*>& CrownBearerList); // (Final | Native | Protected | HasOutParms)

	// Function /Script/VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns.HandleGamePhaseStepChanged (Underlying native function: HandleGamePhaseStepChanged 0x77c5bd4)
	void HandleGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Protected | HasOutParms)
};


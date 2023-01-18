// Class /Script/VictoryCrownsUI.VictoryCrownsPlayerInfoWidget
// Size: 0x2e0
class UVictoryCrownsPlayerInfoWidget : public UFortHUDElementWidget
{
	unsigned char unreflected_2e0[0x2e0]; 

	/* Functions */

	// Function /Script/VictoryCrownsUI.VictoryCrownsPlayerInfoWidget.OnPlayerVictoryCrownStatusChanged (Has no native function)
	void OnPlayerVictoryCrownStatusChanged(bool& bHasCrown); // (Event | Protected | BlueprintEvent)

	// Function /Script/VictoryCrownsUI.VictoryCrownsPlayerInfoWidget.HandleCrownBearerListChanged (Underlying native function: HandleCrownBearerListChanged 0x77c5b38)
	void HandleCrownBearerListChanged(struct TArray<class AFortPlayerStateAthena*>& CrownBearerList); // (Final | Native | Protected | HasOutParms)
};


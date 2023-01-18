// Class /Script/NevadaUI.FortNevadaVehicleReticle
// Size: 0x4e0
class UFortNevadaVehicleReticle : public UFortAthenaVehicleDashboardWidget
{
	class UClass* NevadaTargetIndicatorClass; // 0x438 (0x8)
	class UNevadaTargetIndicator* TargetIndicator; // 0x440 (0x8)
	class AFortNevadaVehicle* OwningNevadaVehicle; // 0x448 (0x8)
	unsigned char unreflected_450[0x8]; // 0x450 (0x8) 
	struct FUserWidgetPool IndicatorPool; // 0x458 (0x88)

	/* Functions */

	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnVehicleStateChanged (Has no native function)
	void OnVehicleStateChanged(enum ENevadaFlightStates& VehicleState); // (Event | Protected | BlueprintEvent)

	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamEnabledChanged (Has no native function)
	void OnTractorBeamEnabledChanged(bool& bEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamDetached (Has no native function)
	void OnTractorBeamDetached(); // (Event | Protected | BlueprintEvent)

	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamDeactivated (Has no native function)
	void OnTractorBeamDeactivated(float& Cooldown); // (Event | Protected | BlueprintEvent)

	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamChargeStarted (Has no native function)
	void OnTractorBeamChargeStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamAttached (Has no native function)
	void OnTractorBeamAttached(); // (Event | Protected | BlueprintEvent)

	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamActivated (Has no native function)
	void OnTractorBeamActivated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnEnergyCanonFired (Has no native function)
	void OnEnergyCanonFired(float& Cooldown); // (Event | Protected | BlueprintEvent)

	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnEnergyCannonEnabledChanged (Has no native function)
	void OnEnergyCannonEnabledChanged(bool& bEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnBatteryChanged (Has no native function)
	void OnBatteryChanged(float& BatteryLevel); // (Event | Protected | BlueprintEvent)
};


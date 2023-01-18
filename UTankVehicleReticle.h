// Class /Script/TankUI.TankVehicleReticle
// Size: 0x458
class UTankVehicleReticle : public UFortAthenaVehicleDashboardWidget
{
	class AFortTankVehicle* OwningTankVehicle; // 0x438 (0x8)
	float MinTurretPitch; // 0x440 (0x4)
	float MaxTurretPitch; // 0x444 (0x4)
	bool bDistanceMeterEnabled; // 0x448 (0x1)
	bool bTankOrientationEventsEnabled; // 0x449 (0x1)
	unsigned char padding_44a[0xe]; // 0x44a (0xe)

	/* Functions */

	// Function /Script/TankUI.TankVehicleReticle.SetupVehicleFromBP (Underlying native function: SetupVehicleFromBP 0x73b86d4)
	void SetupVehicleFromBP(class AActor*& NewVehicle); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/TankUI.TankVehicleReticle.OnTreadEnabledChanged (Has no native function)
	void OnTreadEnabledChanged(bool& bEnabled, struct TEnumAsByte<ETreadSide>& Side); // (Event | Protected | BlueprintEvent)

	// Function /Script/TankUI.TankVehicleReticle.OnTankTurretAimYawValueChanged (Has no native function)
	void OnTankTurretAimYawValueChanged(float& Value); // (Event | Protected | BlueprintEvent)

	// Function /Script/TankUI.TankVehicleReticle.OnTankTurretAimPitchValueChanged (Has no native function)
	void OnTankTurretAimPitchValueChanged(float& Pitch, float& PitchPercent); // (Event | Protected | BlueprintEvent)

	// Function /Script/TankUI.TankVehicleReticle.OnTankTargetingReleased (Has no native function)
	void OnTankTargetingReleased(); // (Event | Protected | BlueprintEvent)

	// Function /Script/TankUI.TankVehicleReticle.OnTankTargetingPressed (Has no native function)
	void OnTankTargetingPressed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/TankUI.TankVehicleReticle.OnTankRotationValueChanged (Has no native function)
	void OnTankRotationValueChanged(float& TankValue, float& TurretValue); // (Event | Protected | BlueprintEvent)

	// Function /Script/TankUI.TankVehicleReticle.OnTankHatchHealthChanged (Has no native function)
	void OnTankHatchHealthChanged(float& HatchHealth, float& HatchHealthMax, bool& bNewlyDisabled, bool& bNewlyEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/TankUI.TankVehicleReticle.OnTankEngineHealthChanged (Has no native function)
	void OnTankEngineHealthChanged(float& EngineHealth, float& EngineHealthMax, bool& bNewlyDisabled, bool& bNewlyEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/TankUI.TankVehicleReticle.OnTankDistanceUpdate (Has no native function)
	void OnTankDistanceUpdate(float& Distance, float& DistancePercent); // (Event | Protected | BlueprintEvent)

	// Function /Script/TankUI.TankVehicleReticle.OnCannonFired (Has no native function)
	void OnCannonFired(float& RateTime); // (Event | Protected | BlueprintEvent)

	// Function /Script/TankUI.TankVehicleReticle.HandleOnEquipMountedWeapon (Underlying native function: HandleOnEquipMountedWeapon 0x73b8654)
	void HandleOnEquipMountedWeapon(class AFortWeaponRanged*& EquippedMountedWeapon); // (Final | Native | Private)

	// Function /Script/TankUI.TankVehicleReticle.HandleOnDamageablePartHealthChanged (Underlying native function: HandleOnDamageablePartHealthChanged 0x73b849c)
	void HandleOnDamageablePartHealthChanged(struct FVehicleDamageablePartConfig& PartConfig, struct FVehicleDamageablePart& Part, bool& bNewlyDisabled, bool& bNewlyEnabled); // (Final | Native | Private | HasOutParms)
};


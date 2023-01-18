// Class /Script/TankRuntime.FortTankVehicleAnimInstance
// Size: 0x7e0
class UFortTankVehicleAnimInstance : public UFortTreadVehicleAnimInstance
{
	class AFortTankVehicle* TankVehicle; // 0x6c0 (0x8)
	struct FRotator CurrentAimRotation; // 0x6c8 (0x18)
	struct FRotator CurrentTurretAimRotation; // 0x6e0 (0x18)
	struct FRotator SmoothedTurretDeltaRotation; // 0x6f8 (0x18)
	float InterpolationRate; // 0x710 (0x4)
	bool bEngineOverheated; // 0x714 (0x1)
	bool bHasPassenger; // 0x715 (0x1)
	bool bIsFired; // 0x716 (0x1)
	bool bIsReady; // 0x717 (0x1)
	bool bDriverCoverOnCooldown; // 0x718 (0x1)
	unsigned char unreflected_719[0x3]; // 0x719 (0x3) 
	float LeftTreadPower; // 0x71c (0x4)
	float RightTreadPower; // 0x720 (0x4)
	float TurretYawAlpha; // 0x724 (0x4)
	float TurretYawAlphaSmoothingRate; // 0x728 (0x4)
	float CannonYaw; // 0x72c (0x4)
	float CannonPitch; // 0x730 (0x4)
	float TurretYaw; // 0x734 (0x4)
	float TurretPitch; // 0x738 (0x4)
	struct FLinearColor MIDTreadPositionColor; // 0x73c (0x10)
	float MIDTreadDamageLeft; // 0x74c (0x4)
	float MIDTreadDamageRight; // 0x750 (0x4)
	float MIDExhaustShakeSpeed; // 0x754 (0x4)
	float MIDExhaustShakeAmp; // 0x758 (0x4)
	float MIDEngineBoostGlow; // 0x75c (0x4)
	float MIDEngineHealthRatio; // 0x760 (0x4)
	unsigned char unreflected_764[0x4]; // 0x764 (0x4) 
	struct TMap<enum EVehicleSeats, struct FTankAnimAimingData> AimingData; // 0x768 (0x50)
	struct FRotator PreviousTurretAimRotation; // 0x7b8 (0x18)
	unsigned char padding_7d0[0x10]; // 0x7d0 (0x10)

	/* Functions */

	// Function /Script/TankRuntime.FortTankVehicleAnimInstance.UpdateMIDEngineProperties (Underlying native function: UpdateMIDEngineProperties 0x73b724c)
	void UpdateMIDEngineProperties(float& DeltaSeconds, float& EngineHealthRatio); // (Final | Native | Private | BlueprintCallable)
};


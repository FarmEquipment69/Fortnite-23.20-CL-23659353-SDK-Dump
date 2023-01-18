// Class /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance
// Size: 0x680
class UFortArmoredBattleBusVehicleAnimInstance : public UFortVehicleAnimInstance
{
	float FrontTurretAimPitch; // 0x5f0 (0x4)
	float RearTurretAimPitch; // 0x5f4 (0x4)
	float FrontYawDeltaSmoothed; // 0x5f8 (0x4)
	float RearYawDeltaSmoothed; // 0x5fc (0x4)
	float SmoothedVehicleYawRate; // 0x600 (0x4)
	float FrontYawDeltaSmoothedAlpha; // 0x604 (0x4)
	float RearYawDeltaSmoothedAlpha; // 0x608 (0x4)
	unsigned char unreflected_60c[0x4]; // 0x60c (0x4) 
	struct FRotator FrontWeaponYaw; // 0x610 (0x18)
	struct FRotator RearWeaponYaw; // 0x628 (0x18)
	struct FRotator PreviousVehicleRotator; // 0x640 (0x18)
	bool bHasFrontTurretPassenger; // 0x658 (0x1)
	bool bHasRearTurretPassenger; // 0x659 (0x1)
	unsigned char unreflected_65a[0x2]; // 0x65a (0x2) 
	float NetworkEaseRate; // 0x65c (0x4)
	float UpdateYawDeltaSmoothedLerpRate; // 0x660 (0x4)
	int FrontPassengerSeatIndex; // 0x664 (0x4)
	int RearPassengerSeatIndex; // 0x668 (0x4)
	float FrontPassengerYawOffset; // 0x66c (0x4)
	float RearPassengerYawOffset; // 0x670 (0x4)
	struct FName FrontPassengerBoneName; // 0x674 (0x4)
	struct FName RearPassengerBoneName; // 0x678 (0x4)
	unsigned char padding_67c[0x4]; // 0x67c (0x4)

	/* Functions */

	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.UpdateYawDeltaSmoothed (Underlying native function: UpdateYawDeltaSmoothed 0x725a920)
	float UpdateYawDeltaSmoothed(class AFortAthenaVehicle*& VehicleActor, struct FName& SocketName, struct FRotator& NewRotation, float& SmoothedYawValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.UpdateTurretAimPitchWeaponYaw (Underlying native function: UpdateTurretAimPitchWeaponYaw 0x725a580)
	void UpdateTurretAimPitchWeaponYaw(class AFortAthenaVehicle*& OwnerVehicle, class AFortPlayerPawn*& GunnerActor, struct FName& SocketName, float& YawOffset, float& TurretAimPitch, float& YawDeltaSmoothed, struct FRotator& WeaponYaw); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.UpdateSmoothedVehicleYawRate (Underlying native function: UpdateSmoothedVehicleYawRate 0x725a498)
	float UpdateSmoothedVehicleYawRate(class AFortAthenaVehicle*& VehicleActor, struct FRotator& PreviousRotator); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.GetPitchAndYaw (Underlying native function: GetPitchAndYaw 0x7259fbc)
	void GetPitchAndYaw(class AFortAthenaVehicle*& VehicleActor, class AFortPlayerPawn*& GunnerActor, float& AdjustedPitch, float& AdjustedYaw, bool& bIsLocalPlayerControlled, struct FRotator& YawRotator); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};


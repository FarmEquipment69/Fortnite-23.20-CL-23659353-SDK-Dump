// Class /Script/TankRuntime.FortTankVehicleConfigs
// Size: 0x9b8
class UFortTankVehicleConfigs : public UFortTreadVehicleConfigs
{
	struct TArray<struct FTankWeaponAimingData> TankWeaponAimingData; // 0x960 (0x10)
	struct FText SecondInteractText; // 0x970 (0x18)
	struct TEnumAsByte<TInteractionType> SecondInteractType; // 0x988 (0x1)
	unsigned char unreflected_989[0x7]; // 0x989 (0x7) 
	struct FScalableFloat SecondInteractDuration; // 0x990 (0x28)
};


// Class /Script/FortniteGame.FortAttributeSet_VehicleFuel
// Size: 0x148
class UFortAttributeSet_VehicleFuel : public UFortAttributeSet
{
	struct FFortGameplayAttributeData Fuel; // 0x30 (0x28)
	struct FFortGameplayAttributeData FuelTankCapacity; // 0x58 (0x28)
	struct FFortGameplayAttributeData FuelPerSecondIdle; // 0x80 (0x28)
	struct FFortGameplayAttributeData FuelPerSecondDriving; // 0xa8 (0x28)
	struct FFortGameplayAttributeData FuelPerSecondBoosting; // 0xd0 (0x28)
	struct FFortGameplayAttributeData MinFuelAtSpawn; // 0xf8 (0x28)
	struct FFortGameplayAttributeData MaxFuelAtSpawn; // 0x120 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortAttributeSet_VehicleFuel.OnRep_Fuel (Underlying native function: OnRep_Fuel 0x85a5770)
	void OnRepFuel(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)
};


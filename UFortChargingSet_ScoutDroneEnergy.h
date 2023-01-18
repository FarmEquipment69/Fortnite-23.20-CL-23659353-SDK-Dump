// Class /Script/ScoutDroneRuntime.FortChargingSet_ScoutDroneEnergy
// Size: 0x108
class UFortChargingSet_ScoutDroneEnergy : public UFortChargingSet_Base
{
	struct FFortGameplayAttributeData Energy; // 0x48 (0x28)
	struct FFortGameplayAttributeData MaxEnergy; // 0x70 (0x28)
	struct FFortGameplayAttributeData EnergyChargeRate; // 0x98 (0x28)
	struct FFortGameplayAttributeData ServerTimeEnergyIncrements; // 0xc0 (0x28)
	unsigned char padding_e8[0x20]; // 0xe8 (0x20)

	/* Functions */

	// Function /Script/ScoutDroneRuntime.FortChargingSet_ScoutDroneEnergy.OnRep_Energy (Underlying native function: OnRep_Energy 0x5357ea0)
	void OnRepEnergy(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Protected | HasOutParms)
};


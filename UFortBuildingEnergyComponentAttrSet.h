// Class /Script/FortniteGame.FortBuildingEnergyComponentAttrSet
// Size: 0x110
class UFortBuildingEnergyComponentAttrSet : public UFortAttributeSet
{
	unsigned char unreflected_30[0x18]; // 0x30 (0x18) 
	struct FFortGameplayAttributeData CurrentEnergyLevel; // 0x48 (0x28)
	struct FFortGameplayAttributeData RegenRate; // 0x70 (0x28)
	struct FFortGameplayAttributeData EnergyCost; // 0x98 (0x28)
	struct FFortGameplayAttributeData EnergyRechargeDelay; // 0xc0 (0x28)
	struct FFortGameplayAttributeData EnergyCapacity; // 0xe8 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortBuildingEnergyComponentAttrSet.OnRep_EnergyCost (Underlying native function: OnRep_EnergyCost 0x862dfa8)
	void OnRepEnergyCost(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortBuildingEnergyComponentAttrSet.OnRep_EnergyCapacity (Underlying native function: OnRep_EnergyCapacity 0x862dedc)
	void OnRepEnergyCapacity(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortBuildingEnergyComponentAttrSet.OnRep_CurrentEnergyLevel (Underlying native function: OnRep_CurrentEnergyLevel 0x862dd84)
	void OnRepCurrentEnergyLevel(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Protected | HasOutParms)
};


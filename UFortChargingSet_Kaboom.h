// Class /Script/FortniteGame.FortChargingSet_Kaboom
// Size: 0xe8
class UFortChargingSet_Kaboom : public UFortChargingSet_Base
{
	struct FFortGameplayAttributeData Charge; // 0x48 (0x28)
	struct FFortGameplayAttributeData MaxCharge; // 0x70 (0x28)
	struct FFortGameplayAttributeData ChargeRate; // 0x98 (0x28)
	struct FFortGameplayAttributeData ServerTimeChargeIncrements; // 0xc0 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortChargingSet_Kaboom.OnRep_Charge (Underlying native function: OnRep_Charge 0x85a4b68)
	void OnRepCharge(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)
};


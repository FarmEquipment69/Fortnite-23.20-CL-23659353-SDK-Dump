// Class /Script/FortniteGame.FortCowVehicleSet
// Size: 0x88
class UFortCowVehicleSet : public UFortAttributeSet
{
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	struct FFortGameplayAttributeData MaxFuel; // 0x38 (0x28)
	struct FFortGameplayAttributeData Fuel; // 0x60 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortCowVehicleSet.OnRep_Fuel (Underlying native function: OnRep_Fuel 0x85a583c)
	void OnRepFuel(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Protected | HasOutParms)
};


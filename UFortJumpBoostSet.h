// Class /Script/FortniteGame.FortJumpBoostSet
// Size: 0x240
class UFortJumpBoostSet : public UFortAttributeSet
{
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	struct FFortGameplayAttributeData BoostActive; // 0x38 (0x28)
	struct FFortGameplayAttributeData MaxFuel; // 0x60 (0x28)
	struct FFortGameplayAttributeData Fuel; // 0x88 (0x28)
	struct FFortGameplayAttributeData ReserveMaxFuel; // 0xb0 (0x28)
	struct FFortGameplayAttributeData ReserveFuel; // 0xd8 (0x28)
	struct FFortGameplayAttributeData FuelBurnRate; // 0x100 (0x28)
	struct FFortGameplayAttributeData FuelRegenRate; // 0x128 (0x28)
	struct FFortGameplayAttributeData FuelRegenDelay; // 0x150 (0x28)
	struct FFortGameplayAttributeData BoostFuelCost; // 0x178 (0x28)
	struct FFortGameplayAttributeData UpwardThrust; // 0x1a0 (0x28)
	struct FFortGameplayAttributeData LateralThrust; // 0x1c8 (0x28)
	struct FFortGameplayAttributeData UpwardAcceleration; // 0x1f0 (0x28)
	struct FFortGameplayAttributeData LateralAcceleration; // 0x218 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortJumpBoostSet.OnRep_ReserveFuel (Underlying native function: OnRep_ReserveFuel 0x85a7b4c)
	void OnRepReserveFuel(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortJumpBoostSet.OnRep_Fuel (Underlying native function: OnRep_Fuel 0x85a5908)
	void OnRepFuel(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)
};


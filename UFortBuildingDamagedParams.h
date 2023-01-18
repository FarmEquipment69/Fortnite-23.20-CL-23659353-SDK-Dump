// Class /Script/FortniteGame.FortBuildingDamagedParams
// Size: 0x48
class UFortBuildingDamagedParams : public UFortMissionEventParams
{
	class ABuildingActor* Building; // 0x28 (0x8)
	struct TEnumAsByte<EFortBuildingType> BuildingType; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	class AController* DamagedBy; // 0x38 (0x8)
	unsigned char padding_40[0x8]; // 0x40 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortBuildingDamagedParams.SetParams (Underlying native function: SetParams 0x8b2e7a0)
	void SetParams(class ABuildingActor*& Building, struct TEnumAsByte<EFortBuildingType>& BuildingType, class AController*& DamagedBy, float& DamageAmount, class UFortBuildingDamagedParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBuildingDamagedParams.BreakParams (Underlying native function: BreakParams 0x8b28cd0)
	void BreakParams(class ABuildingActor*& Building, struct TEnumAsByte<EFortBuildingType>& BuildingType, class AController*& DamagedBy, float& DamageAmount); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};


// Class /Script/FortniteGame.FortBuildingDestroyedParams
// Size: 0x40
class UFortBuildingDestroyedParams : public UFortMissionEventParams
{
	class ABuildingActor* Building; // 0x28 (0x8)
	struct TEnumAsByte<EFortBuildingType> BuildingType; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	class AController* Destroyer; // 0x38 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortBuildingDestroyedParams.SetParams (Underlying native function: SetParams 0x8b2e934)
	void SetParams(class ABuildingActor*& Building, struct TEnumAsByte<EFortBuildingType>& BuildingType, class AController*& Destroyer, class UFortBuildingDestroyedParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBuildingDestroyedParams.BreakParams (Underlying native function: BreakParams 0x8b28e54)
	void BreakParams(class ABuildingActor*& Building, struct TEnumAsByte<EFortBuildingType>& BuildingType, class AController*& Destroyer); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};


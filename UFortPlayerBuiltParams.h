// Class /Script/FortniteGame.FortPlayerBuiltParams
// Size: 0x40
class UFortPlayerBuiltParams : public UFortMissionEventParams
{
	class ABuildingActor* Building; // 0x28 (0x8)
	struct TEnumAsByte<EFortBuildingType> BuildingType; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	class AFortPlayerController* Builder; // 0x38 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerBuiltParams.SetParams (Underlying native function: SetParams 0x8b2e934)
	void SetParams(class ABuildingActor*& Building, struct TEnumAsByte<EFortBuildingType>& BuildingType, class AFortPlayerController*& Builder, class UFortPlayerBuiltParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerBuiltParams.BreakParams (Underlying native function: BreakParams 0x8b28e54)
	void BreakParams(class ABuildingActor*& Building, struct TEnumAsByte<EFortBuildingType>& BuildingType, class AFortPlayerController*& Builder); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};


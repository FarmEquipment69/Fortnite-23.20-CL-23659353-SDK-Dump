// Class /Script/FortniteGame.FortBuildingEditedParams
// Size: 0x48
class UFortBuildingEditedParams : public UFortMissionEventParams
{
	class ABuildingActor* OriginalBuilding; // 0x28 (0x8)
	class ABuildingActor* NewBuilding; // 0x30 (0x8)
	struct TEnumAsByte<EFortBuildingType> BuildingType; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	class AFortPlayerController* Editor; // 0x40 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortBuildingEditedParams.SetParams (Underlying native function: SetParams 0x8b2ea80)
	void SetParams(class ABuildingActor*& OriginalBuilding, class ABuildingActor*& NewBuilding, struct TEnumAsByte<EFortBuildingType>& BuildingType, class AFortPlayerController*& Editor, class UFortBuildingEditedParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBuildingEditedParams.BreakParams (Underlying native function: BreakParams 0x8b28f84)
	void BreakParams(class ABuildingActor*& OriginalBuilding, class ABuildingActor*& NewBuilding, struct TEnumAsByte<EFortBuildingType>& BuildingType, class AFortPlayerController*& Editor); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};


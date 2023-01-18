// Class /Script/FortniteGame.AthenaLayoutRequirementData
// Size: 0x48
class UAthenaLayoutRequirementData : public UPrimaryDataAsset
{
	class UClass* BuildingClass; // 0x30 (0x8)
	struct TArray<class UClass*> LayoutRequirementClasses; // 0x38 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.AthenaLayoutRequirementData.SpawnMatchingLayoutRequirement (Underlying native function: SpawnMatchingLayoutRequirement 0x85a9c9c)
	class ABuildingLayoutRequirement* SpawnMatchingLayoutRequirement(class ABuildingSMActor*& SourceActor, bool& bMatchResourceType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AthenaLayoutRequirementData.FindMatchingLayoutRequirementClass (Underlying native function: FindMatchingLayoutRequirementClass 0x85a32bc)
	bool FindMatchingLayoutRequirementClass(class ABuildingSMActor*& BuildingActor, class UClass*& MatchingClass); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};


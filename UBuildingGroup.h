// Class /Script/FortniteGame.BuildingGroup
// Size: 0x78
class UBuildingGroup : public UDataAsset
{
	struct FName GroupName; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	class UBuildingGroup* FallbackGroup; // 0x38 (0x8)
	struct TEnumAsByte<EBuildingFoundationType> FoundationType; // 0x40 (0x1)
	unsigned char unreflected_41[0x7]; // 0x41 (0x7) 
	struct FGameplayTagContainer AllBuildingLevelTags; // 0x48 (0x20)
	struct TArray<struct FFortMapData> BuildingLevelData; // 0x68 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.BuildingGroup.GetAllMapNames (Underlying native function: GetAllMapNames 0x80922cc)
	void GetAllMapNames(struct TArray<struct FString>& AllMaps); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};


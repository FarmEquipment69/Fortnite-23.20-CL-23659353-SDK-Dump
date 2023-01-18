// ScriptStruct /Script/FortniteGame.FortMissionPlacementFoundationItem
// Size: 0x78
struct FFortMissionPlacementFoundationItem
{
	struct FGameplayTagContainer ItemIdentifyingTags; // 0x0 (0x20)
	struct FGameplayTagContainer TagsToAddToChosenPlacementActorOrFoundationActor; // 0x20 (0x20)
	class UEnvQuery* PlacementQuery; // 0x40 (0x8)
	struct TWeakObjectPtr<class UClass> BuildingFoundationToPlace; // 0x48 (0x28)
	int NumLocationsToFind; // 0x70 (0x4)
	bool bAdjustFoundationPlacementForFloors; // 0x74 (0x1)
	unsigned char padding_75[0x3]; // 0x75 (0x3)
};


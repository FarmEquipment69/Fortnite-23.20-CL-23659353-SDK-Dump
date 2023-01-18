// ScriptStruct /Script/FortniteGame.FortMissionPlacementActorItem
// Size: 0x80
struct FFortMissionPlacementActorItem
{
	struct FGameplayTagContainer ItemIdentifyingTags; // 0x0 (0x20)
	struct FGameplayTagContainer TagsToAddToChosenPlacementActor; // 0x20 (0x20)
	class UEnvQuery* PlacementQuery; // 0x40 (0x8)
	struct TWeakObjectPtr<class UClass> ActorToPlace; // 0x48 (0x28)
	int NumLocationsToFind; // 0x70 (0x4)
	bool bSpawnActorAutomatically; // 0x74 (0x1)
	bool bShouldReserveLocations; // 0x75 (0x1)
	unsigned char unreflected_76[0x1]; // 0x76 (0x1) 
	bool bSnapToGrid; // 0x77 (0x1)
	bool bAdjustPlacementForFloors; // 0x78 (0x1)
	bool bDontCreateSpawnRiftsNearby; // 0x79 (0x1)
	unsigned char padding_7a[0x6]; // 0x7a (0x6)
};


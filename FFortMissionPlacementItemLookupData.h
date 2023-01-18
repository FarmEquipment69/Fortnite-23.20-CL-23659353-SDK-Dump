// ScriptStruct /Script/FortniteGame.FortMissionPlacementItemLookupData
// Size: 0x90
struct FFortMissionPlacementItemLookupData
{
	struct FGameplayTagContainer ItemIdentifyingTags; // 0x0 (0x20)
	struct FGameplayTagContainer TagsAddedToPlacementActors; // 0x20 (0x20)
	class UClass* ActorToPlace; // 0x40 (0x8)
	struct TWeakObjectPtr<class AActor> ActorToUseForSpawnLocation; // 0x48 (0x8)
	struct TWeakObjectPtr<class AActor> SpawnedActorWeak; // 0x50 (0x8)
	struct FVector SpawnLocation; // 0x58 (0x18)
	struct FRotator SpawnRotation; // 0x70 (0x18)
	unsigned char bDontCreateSpawnRiftsNearby; // 0x88 (0x1)
	unsigned char bShouldFreeLocationsOnDeath; // 0x88 (0x1)
	unsigned char padding_89[0x7]; // 0x89 (0x7)
};


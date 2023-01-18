// Class /Script/FortniteGame.EQSActorSpawnerHelperDestroyActorsInArea
// Size: 0x58
class UEQSActorSpawnerHelperDestroyActorsInArea : public UObject
{
	struct FVector OverlapCheckExtent; // 0x28 (0x18)
	struct TArray<class UClass*> ActorClassesToDestroy; // 0x40 (0x10)
	bool bDestroyBuildingActorsOnSpawn; // 0x50 (0x1)
	unsigned char padding_51[0x7]; // 0x51 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.EQSActorSpawnerHelperDestroyActorsInArea.EQSActorSpawnerHelperDestroyActorsInArea (Underlying native function: EQSActorSpawnerHelperDestroyActorsInArea 0x84a55f4)
	void EQSActorSpawnerHelperDestroyActorsInArea(struct TArray<class AActor*>& OutDestroyedActors, struct FTransform& Transform); // (Native | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)
};


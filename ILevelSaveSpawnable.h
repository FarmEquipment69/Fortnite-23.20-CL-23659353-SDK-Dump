// Class /Script/FortniteGame.LevelSaveSpawnable
// Size: 0x28
class ILevelSaveSpawnable : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.LevelSaveSpawnable.PreSaveToQuickbar (Underlying native function: PreSaveToQuickbar 0x6a4c7a4)
	void PreSaveToQuickbar(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.LevelSaveSpawnable.PreSaveBaseActorRecord (Underlying native function: PreSaveBaseActorRecord 0x6a4c688)
	void PreSaveBaseActorRecord(); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.LevelSaveSpawnable.PreFinishSpawning (Underlying native function: PreFinishSpawning 0x80a6150)
	void PreFinishSpawning(class AActor*& VolumeSpawnedWithin); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.LevelSaveSpawnable.PostLevelSaveSpawnCleanup (Underlying native function: PostLevelSaveSpawnCleanup 0x2620534)
	void PostLevelSaveSpawnCleanup(); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.LevelSaveSpawnable.PostFinishSpawningInEditor (Underlying native function: PostFinishSpawningInEditor 0x720cff0)
	void PostFinishSpawningInEditor(); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.LevelSaveSpawnable.PostFinishSpawning (Underlying native function: PostFinishSpawning 0x2640c6c)
	void PostFinishSpawning(); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.LevelSaveSpawnable.CanBeSavedToPlayset (Underlying native function: CanBeSavedToPlayset 0x80ace04)
	bool CanBeSavedToPlayset(); // (0x00000002 | Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.LevelSaveSpawnable.CanBeSavedToCreativeVolume (Underlying native function: CanBeSavedToCreativeVolume 0x80acde0)
	bool CanBeSavedToCreativeVolume(); // (0x00000002 | Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.LevelSaveSpawnable.CanBeDeletedFromCreativeVolume (Underlying native function: CanBeDeletedFromCreativeVolume 0x80acdbc)
	bool CanBeDeletedFromCreativeVolume(); // (0x00000002 | Native | Event | Public | BlueprintEvent | Const)
};


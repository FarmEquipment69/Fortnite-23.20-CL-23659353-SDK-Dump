// Class /Script/FortniteGame.LevelSaveBaseComponent
// Size: 0x148
class ULevelSaveBaseComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x48]; // 0xa0 (0x48) 
	struct FString ExplicitSaveFile; // 0xe8 (0x10)
	float TimeBetweenSaves; // 0xf8 (0x4)
	unsigned char bAutoLoadRecord; // 0xfc (0x1)
	unsigned char unreflected_fd[0x13]; // 0xfd (0x13) 
	class ULevelSaveRecord* LevelRecord; // 0x110 (0x8)
	struct TArray<class AActor*> ActorToAddAfterWrite; // 0x118 (0x10)
	unsigned char padding_128[0x20]; // 0x128 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.LevelSaveBaseComponent.StopPeriodicSaveTimer (Underlying native function: StopPeriodicSaveTimer 0x8ab5350)
	void StopPeriodicSaveTimer(); // (Final | Native | Public)

	// Function /Script/FortniteGame.LevelSaveBaseComponent.StartPeriodicSaveTimer (Underlying native function: StartPeriodicSaveTimer 0x8ab533c)
	void StartPeriodicSaveTimer(); // (Final | Native | Public)

	// Function /Script/FortniteGame.LevelSaveBaseComponent.SaveOutLevelRecord (Underlying native function: SaveOutLevelRecord 0x756d600)
	void SaveOutLevelRecord(); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.LevelSaveBaseComponent.ResaveActor (Underlying native function: ResaveActor 0x8ab4f78)
	bool ResaveActor(class AActor*& Actor); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.LevelSaveBaseComponent.RegisterNewActor (Underlying native function: RegisterNewActor 0x8ab4de8)
	bool RegisterNewActor(class AActor*& Actor); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.LevelSaveBaseComponent.RegisterModificationToRollback (Underlying native function: RegisterModificationToRollback 0x8ab4d48)
	void RegisterModificationToRollback(class AActor*& Actor); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.LevelSaveBaseComponent.RegisterDeletionToRollback (Underlying native function: RegisterDeletionToRollback 0x8ab4ca8)
	void RegisterDeletionToRollback(class AActor*& Actor); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.LevelSaveBaseComponent.RegisterDeletedActor (Underlying native function: RegisterDeletedActor 0x8ab4bf8)
	bool RegisterDeletedActor(class AActor*& Actor); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.LevelSaveBaseComponent.RegisterCreationToRollback (Underlying native function: RegisterCreationToRollback 0x8ab4b58)
	void RegisterCreationToRollback(class AActor*& Actor); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.LevelSaveBaseComponent.OnFinishSpawning (Underlying native function: OnFinishSpawning 0x8ab49f0)
	void OnFinishSpawning(struct FAsyncTaskResult& Result); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.LevelSaveBaseComponent.OnFinishedRecordWrite (Underlying native function: OnFinishedRecordWrite 0x8ab4abc)
	void OnFinishedRecordWrite(struct FAsyncTaskResult& Result); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.LevelSaveBaseComponent.LoadLevelRecord (Underlying native function: LoadLevelRecord 0x8ab49dc)
	void LoadLevelRecord(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.LevelSaveBaseComponent.ConstructNewLevelRecord (Underlying native function: ConstructNewLevelRecord 0x8ab44b0)
	void ConstructNewLevelRecord(class AActor*& Owner); // (Final | Native | Private)
};


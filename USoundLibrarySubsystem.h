// Class /Script/SoundLibrary.SoundLibrarySubsystem
// Size: 0x130
class USoundLibrarySubsystem : public UWorldSubsystem
{
	class USoundLibraryCollection* CommonLibraries; // 0x30 (0x8)
	struct TMap<struct FName, class USoundLibrary*> SoundLibraries; // 0x38 (0x50)
	class USoundLibrarySimpleContext* SimpleContext; // 0x88 (0x8)
	struct TMap<uint32_t, struct FSoundLibraryActorData> ActorDataMap; // 0x90 (0x50)
	unsigned char padding_e0[0x50]; // 0xe0 (0x50)

	/* Functions */

	// Function /Script/SoundLibrary.SoundLibrarySubsystem.RemoveLibrary (Underlying native function: RemoveLibrary 0x7df472c)
	void RemoveLibrary(class AActor*& Actor, class USoundLibrary*& Library); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SoundLibrary.SoundLibrarySubsystem.RemoveLibraries (Underlying native function: RemoveLibraries 0x14b7618)
	void RemoveLibraries(class AActor*& Actor, struct TArray<class USoundLibrary*>& Libraries); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SoundLibrary.SoundLibrarySubsystem.RemoveContext (Underlying native function: RemoveContext 0x7df45ac)
	bool RemoveContext(class AActor*& Actor, class UClass*& ContextClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SoundLibrary.SoundLibrarySubsystem.PlaySoundSimple (Underlying native function: PlaySoundSimple 0x217dcb8)
	struct FSoundLibraryPlaySoundResult PlaySoundSimple(class AActor*& OwningActor, struct FSoundLibrarySimpleContextSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SoundLibrary.SoundLibrarySubsystem.PlaySound (Underlying native function: PlaySound 0x24269e4)
	void PlaySound(class USoundLibraryContext*& Context, struct FSoundLibraryPlaySoundResult& OutResults); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SoundLibrary.SoundLibrarySubsystem.GetContext (Underlying native function: GetContext 0x7df43ac)
	class USoundLibraryContext* GetContext(class AActor*& Actor, class UClass*& ContextClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SoundLibrary.SoundLibrarySubsystem.EnableEventsForActor (Underlying native function: EnableEventsForActor 0x7df4328)
	void EnableEventsForActor(class AActor*& Actor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SoundLibrary.SoundLibrarySubsystem.DisableEventsForActor (Underlying native function: DisableEventsForActor 0x7df42a4)
	void DisableEventsForActor(class AActor*& Actor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SoundLibrary.SoundLibrarySubsystem.AddLibrary (Underlying native function: AddLibrary 0x7df3ba4)
	void AddLibrary(class AActor*& Actor, class USoundLibrary*& Library); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SoundLibrary.SoundLibrarySubsystem.AddLibraries (Underlying native function: AddLibraries 0x14b7b88)
	void AddLibraries(class AActor*& Actor, struct TArray<class USoundLibrary*>& Libraries); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SoundLibrary.SoundLibrarySubsystem.AddContext (Underlying native function: AddContext 0x7df3a0c)
	class USoundLibraryContext* AddContext(class AActor*& Actor, class UClass*& ContextClass); // (Final | Native | Public | BlueprintCallable)
};


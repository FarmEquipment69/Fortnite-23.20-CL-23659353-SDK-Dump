// Class /Script/SoundLibrary.SoundLibraryContext
// Size: 0x58
class USoundLibraryContext : public UObject
{
	struct TWeakObjectPtr<class AActor> Actor; // 0x28 (0x8)
	struct FGameplayTag BaseEventName; // 0x30 (0x4)
	bool bForwardToActorOwner; // 0x34 (0x1)
	bool bForwardToAttachedActors; // 0x35 (0x1)
	bool bAutoResetContext; // 0x36 (0x1)
	unsigned char unreflected_37[0x1]; // 0x37 (0x1) 
	struct FGameplayTagContainer PlaybackTags; // 0x38 (0x20)

	/* Functions */

	// Function /Script/SoundLibrary.SoundLibraryContext.PlaySound (Underlying native function: PlaySound 0x14bcc04)
	bool PlaySound(class USoundBase*& sound, struct FSoundLibraryPlaySoundResult& OutResults); // (Native | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/SoundLibrary.SoundLibraryContext.OnRemovedFromActor (Underlying native function: OnRemovedFromActor 0x7066da0)
	void OnRemovedFromActor(class AActor*& InActor); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/SoundLibrary.SoundLibraryContext.OnAddedToActor (Underlying native function: OnAddedToActor 0x25d53a4)
	void OnAddedToActor(class AActor*& InActor); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/SoundLibrary.SoundLibraryContext.CreateEventName (Underlying native function: CreateEventName 0x1e0fa94)
	bool CreateEventName(struct FGameplayTag& OutEventName); // (Native | Event | Public | HasOutParms | BlueprintEvent | Const)
};


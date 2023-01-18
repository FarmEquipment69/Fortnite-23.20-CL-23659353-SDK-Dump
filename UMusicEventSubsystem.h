// Class /Script/FortniteGame.MusicEventSubsystem
// Size: 0xe0
class UMusicEventSubsystem : public UGameInstanceSubsystem
{
	unsigned char unreflected_30[0x28]; // 0x30 (0x28) 
	struct FSoftObjectPath SubsystemDataAssetPath; // 0x58 (0x18)
	class UMusicEventSubsystemData* SubsystemData; // 0x70 (0x8)
	struct TArray<struct FMusicEventData> EventDataArray; // 0x78 (0x10)
	struct TArray<class UMusicEventInstance*> EventInstances; // 0x88 (0x10)
	struct TArray<class UMusicEventInstance*> EventInstancesFadingOut; // 0x98 (0x10)
	struct TArray<struct TWeakObjectPtr<class UMusicEventInstance>> TickingEventInstances; // 0xa8 (0x10)
	struct TArray<struct TWeakObjectPtr<class UAudioComponent>> AllComponents; // 0xb8 (0x10)
	struct TArray<class UAudioComponent*> OwnedComponents; // 0xc8 (0x10)
	class UMusicEventSubsystemDebugWidget* DebugWidget; // 0xd8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.MusicEventSubsystem.RemoveEventCategory (Underlying native function: RemoveEventCategory 0x17ffdb8)
	void RemoveEventCategory(struct FGameplayTag& EventTag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.MusicEventSubsystem.RemoveEventBySynthComponent (Underlying native function: RemoveEventBySynthComponent 0x18001d0)
	void RemoveEventBySynthComponent(class USynthComponent*& Component); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.MusicEventSubsystem.RemoveEvent (Underlying native function: RemoveEvent 0x18000d0)
	void RemoveEvent(class UAudioComponent*& Component); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.MusicEventSubsystem.RemoveAllEvents (Underlying native function: RemoveAllEvents 0x8e80e64)
	void RemoveAllEvents(bool& bPreviousWorldsOnly); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.MusicEventSubsystem.OnLoadingScreenComplete (Underlying native function: OnLoadingScreenComplete 0x8e7f590)
	void OnLoadingScreenComplete(); // (Final | Native | Private)

	// Function /Script/FortniteGame.MusicEventSubsystem.OnEventInstancePlaybackCompleted (Underlying native function: OnEventInstancePlaybackCompleted 0x2e29f8c)
	void OnEventInstancePlaybackCompleted(class UMusicEventInstance*& Instance); // (Final | Native | Private)

	// Function /Script/FortniteGame.MusicEventSubsystem.IsEnabled (Underlying native function: IsEnabled 0x8e7f420)
	bool IsEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.MusicEventSubsystem.ChangeEventCategory (Underlying native function: ChangeEventCategory 0x8e7d424)
	void ChangeEventCategory(class UAudioComponent*& Component, struct FGameplayTag& EventTag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.MusicEventSubsystem.AddEventBySynthComponent (Underlying native function: AddEventBySynthComponent 0x8e7cf90)
	void AddEventBySynthComponent(class USynthComponent*& Component, struct FGameplayTag& EventTag, struct FGameplayTagContainer& EventBehaviorTags); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.MusicEventSubsystem.AddEventByComponent (Underlying native function: AddEventByComponent 0x8e7ce60)
	void AddEventByComponent(class UAudioComponent*& Component, struct FGameplayTag& EventTag, struct FGameplayTagContainer& EventBehaviorTags); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.MusicEventSubsystem.AddEvent (Underlying native function: AddEvent 0x17ff30c)
	class UAudioComponent* AddEvent(class USoundBase*& Asset, struct FGameplayTag& EventTag, struct FGameplayTagContainer& EventBehaviorTags); // (Final | Native | Public | BlueprintCallable)
};


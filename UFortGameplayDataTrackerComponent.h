// Class /Script/FortniteGame.FortGameplayDataTrackerComponent
// Size: 0x1a0
class UFortGameplayDataTrackerComponent : public UGameFrameworkComponent
{
	bool bShouldReplicateEvents; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	struct FMulticastInlineDelegate OnChangedHasAnyEventValue; // 0xa8 (0x10)
	struct FScalableFloat TrackerEnabled; // 0xb8 (0x28)
	bool bUseFirstPlayerControllerViewTargetAsAvatarActor; // 0xe0 (0x1)
	unsigned char unreflected_e1[0x7]; // 0xe1 (0x7) 
	struct TArray<struct FFortGameplayDataTrackerEventConfiguration> EventsToTrack; // 0xe8 (0x10)
	struct TArray<struct FFortGameplayDataTrackerActorStateGroupConfig> ActorStateGroupsToTrack; // 0xf8 (0x10)
	struct TArray<struct FFortGameplayDataTrackerAccumulation> AccumulationsToTrack; // 0x108 (0x10)
	struct TArray<struct FFortGameplayDataTrackerEventConfiguration> FullEventsToTrackList; // 0x118 (0x10)
	struct TArray<struct FFortGameplayDataTrackerEventValue*> ReplicatedEventValues; // 0x128 (0x10)
	struct TArray<struct FFortGameplayDataTrackerEventValue*> EventValues; // 0x138 (0x10)
	struct TArray<struct FFortGameplayDataTrackerAccumulation> DataAccumulations; // 0x148 (0x10)
	struct TArray<struct FFortGameplayDataTrackerAccumulation> PendingDataAccumulationRegistrations; // 0x158 (0x10)
	class AFortGameStateAthena* CachedGameState; // 0x168 (0x8)
	float VislogFrequencySeconds; // 0x170 (0x4)
	float LastVislogTime; // 0x174 (0x4)
	unsigned char padding_178[0x28]; // 0x178 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayDataTrackerComponent.TriggerEvent (Underlying native function: TriggerEvent 0x8a1d678)
	void TriggerEvent(struct FGameplayTag& EventTag, float& Value); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayDataTrackerComponent.RegisterForEventValueRange (Underlying native function: RegisterForEventValueRange 0x8a1cfac)
	bool RegisterForEventValueRange(struct FGameplayTag& Event, struct FFortGameplayDataTrackedRange& Range, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayDataTrackerComponent.RegisterForAccumulationRangeEvents (Underlying native function: RegisterForAccumulationRangeEvents 0x8a1ce68)
	bool RegisterForAccumulationRangeEvents(struct FGameplayTag& AccumulationTag, struct FGameplayTag& RangeTag, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayDataTrackerComponent.OnRep_EventValues (Underlying native function: OnRep_EventValues 0x8a1ccdc)
	void OnRepEventValues(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameplayDataTrackerComponent.HandlePlaylistLoaded (Underlying native function: HandlePlaylistLoaded 0x8a1c620)
	void HandlePlaylistLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortGameplayDataTrackerComponent.GetEventValue (Underlying native function: GetEventValue 0x8a1bdf8)
	float GetEventValue(struct FGameplayTag& EventTag); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayDataTrackerComponent.GetAccumulationValue (Underlying native function: GetAccumulationValue 0x8a1bd5c)
	float GetAccumulationValue(struct FGameplayTag& AccumulationTag); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayDataTrackerComponent.AddDataAccumulation (Underlying native function: AddDataAccumulation 0x8a1bc14)
	bool AddDataAccumulation(struct FFortGameplayDataTrackerAccumulation& Accumulation); // (Final | Native | Public | BlueprintCallable)
};


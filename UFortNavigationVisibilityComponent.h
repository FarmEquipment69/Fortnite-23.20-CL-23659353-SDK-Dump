// Class /Script/FortniteGame.FortNavigationVisibilityComponent
// Size: 0x1a8
class UFortNavigationVisibilityComponent : public UActorComponent
{
	struct TWeakObjectPtr<class AActor> WeakActor; // 0xa0 (0x8)
	struct FMulticastInlineDelegate HandleCustomPassed; // 0xa8 (0x10)
	struct FMulticastInlineDelegate HandleCustomFailed; // 0xb8 (0x10)
	bool bPassedRules; // 0xc8 (0x1)
	unsigned char unreflected_c9[0x7]; // 0xc9 (0x7) 
	int64_t LastProfileRevision; // 0xd0 (0x8)
	bool bEnableCollision; // 0xd8 (0x1)
	bool bCustomSkipCollision; // 0xd9 (0x1)
	unsigned char unreflected_da[0x2]; // 0xda (0x2) 
	struct TWeakObjectPtr<class AFortPlayerController> RoomOwner; // 0xdc (0x8)
	struct TWeakObjectPtr<class UFortGameStateComponent_EventLevel> GSCStreamingLevelOwner; // 0xe4 (0x8)
	unsigned char unreflected_ec[0x4]; // 0xec (0x4) 
	struct FGameplayTagContainer ValidActiveCameraTags; // 0xf0 (0x20)
	struct FGameplayTagContainer ExcludedActiveCameraTags; // 0x110 (0x20)
	struct TArray<struct FQuestRequirement> Quests; // 0x130 (0x10)
	struct TArray<struct FItemRequirement> Items; // 0x140 (0x10)
	struct TArray<struct FCalendarRequirement> CalendarEvents; // 0x150 (0x10)
	struct TArray<struct FProfileStatRequirement> ProfileStats; // 0x160 (0x10)
	struct FString DebugTrackingName; // 0x170 (0x10)
	bool bShouldLogFails; // 0x180 (0x1)
	bool debugVisibilityLastKnownState; // 0x181 (0x1)
	enum EVisibilityResponse ActorResponse; // 0x182 (0x1)
	unsigned char padding_183[0x25]; // 0x183 (0x25)

	/* Functions */

	// Function /Script/FortniteGame.FortNavigationVisibilityComponent.MakeActorVisable (Underlying native function: MakeActorVisable 0x5cc9af0)
	void MakeActorVisable(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortNavigationVisibilityComponent.MakeActorHidden (Underlying native function: MakeActorHidden 0x5cc9ad0)
	void MakeActorHidden(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortNavigationVisibilityComponent.HandlePlayerChanged (Underlying native function: HandlePlayerChanged 0x8546128)
	void HandlePlayerChanged(class AFortPlayerController*& NewRoomOwner); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortNavigationVisibilityComponent.HandleActiveCameraChanged (Underlying native function: HandleActiveCameraChanged 0x85459d4)
	void HandleActiveCameraChanged(struct FGameplayTag& CameraTag); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortNavigationVisibilityComponent.Editor_GetValidProfileStats (Underlying native function: Editor_GetValidProfileStats 0x85452c0)
	struct TArray<struct FString> EditorGetValidProfileStats(); // (Final | Native | Private | Const)

	// Function /Script/FortniteGame.FortNavigationVisibilityComponent.Editor_GetValidObjectives (Underlying native function: Editor_GetValidObjectives 0x7308ee4)
	struct TArray<struct FName> EditorGetValidObjectives(); // (Final | Native | Private | Const)
};


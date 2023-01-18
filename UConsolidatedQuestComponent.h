// Class /Script/FortniteGame.ConsolidatedQuestComponent
// Size: 0x3a0
class UConsolidatedQuestComponent : public USceneComponent
{
	struct FMulticastInlineDelegate OnQuestNotReady; // 0x2a0 (0x10)
	struct FMulticastInlineDelegate OnQuestReady; // 0x2b0 (0x10)
	struct FMulticastInlineDelegate OnServerQuestReady; // 0x2c0 (0x10)
	struct FMulticastInlineDelegate OnQuestComponentSuccessEvent; // 0x2d0 (0x10)
	struct FMulticastInlineDelegate OnCustomSetVisualsToFailed; // 0x2e0 (0x10)
	struct FMulticastInlineDelegate OnQuestStageChanged; // 0x2f0 (0x10)
	struct FMulticastInlineDelegate OnCustomSetVisualsToPassed; // 0x300 (0x10)
	struct FMulticastInlineDelegate OnCustomUpdateObjective; // 0x310 (0x10)
	struct FMulticastInlineDelegate OnUpdateQuest; // 0x320 (0x10)
	class UFortQuestItemDefinition* QuestItemDefinition; // 0x330 (0x8)
	struct FName ObjectiveBackendName; // 0x338 (0x4)
	unsigned char unreflected_33c[0x4]; // 0x33c (0x4) 
	struct FString CalendarEnableEvent; // 0x340 (0x10)
	struct FGameplayTagContainer BlockedPlaylistTags; // 0x350 (0x20)
	enum EQuestVisibilityResponse ComponentResponse; // 0x370 (0x1)
	enum EQuestUpdateType UpdateType; // 0x371 (0x1)
	bool bIsInteractable; // 0x372 (0x1)
	unsigned char padding_373[0x2d]; // 0x373 (0x2d)

	/* Functions */

	// Function /Script/FortniteGame.ConsolidatedQuestComponent.UpdateCompletedForPlayer (Underlying native function: UpdateCompletedForPlayer 0x86b6268)
	void UpdateCompletedForPlayer(class AFortPlayerController*& InPlayerController, bool& bCompleted); // (Final | Native | Protected | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.ConsolidatedQuestComponent.SimpleQuestComponentDelegate__DelegateSignature (Has no native function)
	void SimpleQuestComponentDelegateDelegateSignature(class AFortPlayerController*& PlayerController); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.ConsolidatedQuestComponent.SetQuestItemDefinition (Underlying native function: SetQuestItemDefinition 0x86b61e8)
	void SetQuestItemDefinition(class UFortQuestItemDefinition*& InQuestItemDefinition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.ConsolidatedQuestComponent.SetObjectiveBackendName (Underlying native function: SetObjectiveBackendName 0x86b615c)
	void SetObjectiveBackendName(struct FName& InObjectiveBackendName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.ConsolidatedQuestComponent.QuestComponentStageChaged__DelegateSignature (Has no native function)
	void QuestComponentStageChagedDelegateSignature(class AFortPlayerController*& PlayerController, int& UpdatedQuestStage); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.ConsolidatedQuestComponent.QuestComponentCustomVisualsPassed__DelegateSignature (Has no native function)
	void QuestComponentCustomVisualsPassedDelegateSignature(class AFortPlayerController*& PlayerController, bool& bFullyInitalized); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.ConsolidatedQuestComponent.QuestComponentCustomUpdatedOjective__DelegateSignature (Has no native function)
	void QuestComponentCustomUpdatedOjectiveDelegateSignature(class AFortPlayerController*& PlayerController, int& AchievedCount, int& RequiredCount); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.ConsolidatedQuestComponent.OnPlaylistDataReady (Underlying native function: OnPlaylistDataReady 0x86b5ca8)
	void OnPlaylistDataReady(class AFortGameStateAthena*& GameState, class UFortPlaylist*& Playlist, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.ConsolidatedQuestComponent.OnCalendarUpdated (Underlying native function: OnCalendarUpdated 0x86b5c94)
	void OnCalendarUpdated(); // (Final | Native | Private)

	// Function /Script/FortniteGame.ConsolidatedQuestComponent.IsInteractable (Underlying native function: IsInteractable 0x86b5ab4)
	bool IsInteractable(class AFortPlayerController*& InteractingController); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.ConsolidatedQuestComponent.GetQuestItemDefinition (Underlying native function: GetQuestItemDefinition 0x6ae21d8)
	class UFortQuestItemDefinition* GetQuestItemDefinition(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.ConsolidatedQuestComponent.Editor_GetValidObjectives (Underlying native function: Editor_GetValidObjectives 0x7308ee4)
	struct TArray<struct FName> EditorGetValidObjectives(); // (Final | Native | Private | Const)
};


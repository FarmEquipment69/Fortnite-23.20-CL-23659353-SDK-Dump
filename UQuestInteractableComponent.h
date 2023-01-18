// Class /Script/FortniteGame.QuestInteractableComponent
// Size: 0x400
class UQuestInteractableComponent : public USceneComponent
{
	struct FMulticastInlineDelegate SetupForServer; // 0x2a0 (0x10)
	struct FMulticastInlineDelegate Unavailable; // 0x2b0 (0x10)
	struct FMulticastInlineDelegate ClientQuestVisualCreated; // 0x2c0 (0x10)
	struct FMulticastInlineDelegate ClientQuestEnabled; // 0x2d0 (0x10)
	struct FMulticastInlineDelegate ClientQuestDisabled; // 0x2e0 (0x10)
	struct FMulticastInlineDelegate ClientQuestObjectiveComplete; // 0x2f0 (0x10)
	struct FString CalendarEnableEvent; // 0x300 (0x10)
	struct FGameplayTagContainer BlockedPlaylistTags; // 0x310 (0x20)
	class UFortQuestItemDefinition* QuestItemDefinition; // 0x330 (0x8)
	struct FName ObjectiveBackendName; // 0x338 (0x4)
	unsigned char unreflected_33c[0x4]; // 0x33c (0x4) 
	struct FTimerHandle* DelayUntilCurrentQuestsReady; // 0x340 (0x8)
	bool bReady; // 0x348 (0x1)
	unsigned char unreflected_349[0x7]; // 0x349 (0x7) 
	struct TArray<class AFortPlayerController*> LocalPlayersOnTheQuest; // 0x350 (0x10)
	struct TWeakObjectPtr<class UClass> QuestVisualClass; // 0x360 (0x28)
	unsigned char unreflected_388[0x50]; // 0x388 (0x50) 
	bool bDestroyActorWhenUnavailable; // 0x3d8 (0x1)
	unsigned char padding_3d9[0x27]; // 0x3d9 (0x27)

	/* Functions */

	// DelegateFunction /Script/FortniteGame.QuestInteractableComponent.SimpleDynamicMulticastDelegate__DelegateSignature (Has no native function)
	void SimpleDynamicMulticastDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.QuestInteractableComponent.QuestVisualDynamicMulticastDelegate__DelegateSignature (Has no native function)
	void QuestVisualDynamicMulticastDelegateDelegateSignature(class AQuestVisual*& QuestVisual); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.QuestInteractableComponent.OnRep_Ready (Underlying native function: OnRep_Ready 0x871b564)
	void OnRepReady(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.QuestInteractableComponent.OnPlaylistDataReady (Underlying native function: OnPlaylistDataReady 0x871b1c4)
	void OnPlaylistDataReady(class AFortGameStateAthena*& GameState, class UFortPlaylist*& Playlist, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.QuestInteractableComponent.OnDisplayDynamicQuestUpdate (Underlying native function: OnDisplayDynamicQuestUpdate 0x871af9c)
	void OnDisplayDynamicQuestUpdate(class UFortQuestObjectiveInfo*& QuestObjective, bool& bDisplayStatusUpdate, bool& bDisplayAnnouncementUpdate); // (Final | Native | Protected)

	// Function /Script/FortniteGame.QuestInteractableComponent.OnCalendarUpdated (Underlying native function: OnCalendarUpdated 0x871ae9c)
	void OnCalendarUpdated(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.QuestInteractableComponent.GetQuestManagerForActor (Underlying native function: GetQuestManagerForActor 0x871a5d8)
	class UFortQuestManager* GetQuestManagerForActor(class AActor*& InActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.QuestInteractableComponent.Editor_GetValidObjectives (Underlying native function: Editor_GetValidObjectives 0x7308ee4)
	struct TArray<struct FName> EditorGetValidObjectives(); // (Final | Native | Private | Const)
};


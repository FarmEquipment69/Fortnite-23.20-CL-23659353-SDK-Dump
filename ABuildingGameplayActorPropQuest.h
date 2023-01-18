// Class /Script/FortniteGame.BuildingGameplayActorPropQuest
// Size: 0xa60
class ABuildingGameplayActorPropQuest : public ABuildingGameplayActorQuest
{
	bool bEnableConversationComponent; // 0x9e0 (0x1)
	unsigned char unreflected_9e1[0x3]; // 0x9e1 (0x3) 
	struct FGameplayTag ConversationEntryTag; // 0x9e4 (0x4)
	class UConsolidatedQuestComponent* ConsolidatedQuestComponent; // 0x9e8 (0x8)
	class UFortQuestIconComponent* QuestIconComponent; // 0x9f0 (0x8)
	class AFortPlayerController* FortPlayerControllerTempRef; // 0x9f8 (0x8)
	struct TMap<class AFortPlayerController*, bool> FortPlayerControllerToCanInteract; // 0xa00 (0x50)
	struct TArray<class AFortPlayerPawnAthena*> OverlapWatchedActors; // 0xa50 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.BuildingGameplayActorPropQuest.SendInteractionMessage (Underlying native function: SendInteractionMessage 0x85e0890)
	void SendInteractionMessage(class AActor*& Author, struct FGameplayTagContainer& SubjectTags); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActorPropQuest.ReHideActor (Has no native function)
	void ReHideActor(class AFortPlayerController*& FortPC); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorPropQuest.QuestLog (Underlying native function: QuestLog 0x85e06d4)
	void QuestLog(struct FString& StringToLog); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActorPropQuest.PlayerTagsCheck (Underlying native function: PlayerTagsCheck 0x85e039c)
	bool PlayerTagsCheck(class AFortPlayerController*& FortPC, struct FGameplayTagContainer& RequiredPlayerTags, struct FGameplayTagContainer& ProhibitedPlayerTags); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActorPropQuest.OverlapTagsRecheck (Underlying native function: OverlapTagsRecheck 0x85e01b0)
	void OverlapTagsRecheck(struct FFortOverlapData& OverlapData); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingGameplayActorPropQuest.HideMesh (Has no native function)
	void HideMesh(bool& bIsInSplitScreen); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorPropQuest.HandleComponentOverlap_DisoveryRadius (Underlying native function: HandleComponentOverlap_DisoveryRadius 0x85dec88)
	void HandleComponentOverlapDisoveryRadius(class AActor*& OtherActor, struct FFortOverlapData& OverlapData); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActorPropQuest.GetQuestTargetTags (Underlying native function: GetQuestTargetTags 0x85dea1c)
	struct FGameplayTagContainer GetQuestTargetTags(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingGameplayActorPropQuest.FxTestOverride (Has no native function)
	void FxTestOverride(class AFortPlayerController*& FortPC); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorPropQuest.CompleteFromDiscovery (Has no native function)
	void CompleteFromDiscovery(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorPropQuest.ActivateComponents (Has no native function)
	void ActivateComponents(); // (Event | Protected | BlueprintEvent)
};


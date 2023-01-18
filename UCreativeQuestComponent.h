// Class /Script/FortniteGame.CreativeQuestComponent
// Size: 0x178
class UCreativeQuestComponent : public UActorComponent
{
	struct FMulticastSparseDelegate OnConditionsMetDelegate; // 0xa0 (0x1)
	enum ECreativeQuestStat StatToTrack; // 0xa1 (0x1)
	enum ECreativeQuestSharing SharingMode; // 0xa2 (0x1)
	unsigned char unreflected_a3[0x1]; // 0xa3 (0x1) 
	int TargetTeam; // 0xa4 (0x4)
	int TargetClass; // 0xa8 (0x4)
	int AssignedToTeam; // 0xac (0x4)
	enum EDeathCause TargetDeathCause; // 0xb0 (0x1)
	bool bSelfEliminationsCount; // 0xb1 (0x1)
	bool bHeadshotsOnly; // 0xb2 (0x1)
	bool bPlayerEliminationsCount; // 0xb3 (0x1)
	bool bNonPlayerEliminationsCount; // 0xb4 (0x1)
	unsigned char unreflected_b5[0x3]; // 0xb5 (0x3) 
	struct FString QuestName; // 0xb8 (0x10)
	struct FString ObjectiveText; // 0xc8 (0x10)
	int MinigameTargetAmount; // 0xd8 (0x4)
	enum EShowOnHudMode ShowQuestOnHUD; // 0xdc (0x1)
	enum EShowProgressMode ShowProgressMode; // 0xdd (0x1)
	bool bShowCompleteEffects; // 0xde (0x1)
	unsigned char unreflected_df[0x1]; // 0xdf (0x1) 
	struct TWeakObjectPtr<class UTexture2D> QuestIconImage; // 0xe0 (0x28)
	struct FLinearColor QuestColor; // 0x108 (0x10)
	struct TArray<struct FCreativeQuestData> QuestIndividualData; // 0x118 (0x10)
	struct TArray<int> QuestTeamProgress; // 0x128 (0x10)
	int QuestAllProgress; // 0x138 (0x4)
	int QuestInitialProgress; // 0x13c (0x4)
	float DistanceTraveledUpdateRate; // 0x140 (0x4)
	float DistancePerPoint; // 0x144 (0x4)
	class AFortMinigame* MyMinigame; // 0x148 (0x8)
	struct TArray<struct FCreativeQuestPlayerDistanceTraveledInfo> PlayerDistanceTraveledInfos; // 0x150 (0x10)
	unsigned char padding_160[0x18]; // 0x160 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.CreativeQuestComponent.UnregisterQuest (Underlying native function: UnregisterQuest 0x876385c)
	void UnregisterQuest(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeQuestComponent.TriggerHUDUpdate (Underlying native function: TriggerHUDUpdate 0x87637dc)
	void TriggerHUDUpdate(bool& bForceUpdate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeQuestComponent.SetCurrentAmount (Underlying native function: SetCurrentAmount 0x8762bf4)
	void SetCurrentAmount(class AController*& ForPlayer, int& NewAmount); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeQuestComponent.SetActiveFor (Underlying native function: SetActiveFor 0x8762a04)
	void SetActiveFor(class AController*& Player, bool& bNewActive); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeQuestComponent.ResetQuestProgress (Underlying native function: ResetQuestProgress 0x87626fc)
	void ResetQuestProgress(int& InitialAmount); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeQuestComponent.RegisterQuest (Underlying native function: RegisterQuest 0x8762318)
	void RegisterQuest(class AFortMinigame*& Minigame); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeQuestComponent.OnRep_QuestUpdate (Underlying native function: OnRep_QuestUpdate 0x87620d0)
	void OnRepQuestUpdate(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeQuestComponent.OnRep_QuestActive (Underlying native function: OnRep_QuestActive 0x87620a4)
	void OnRepQuestActive(); // (Final | Native | Private)

	// Function /Script/FortniteGame.CreativeQuestComponent.OnMissionManagerCreated (Underlying native function: OnMissionManagerCreated 0x8761f50)
	void OnMissionManagerCreated(); // (Final | 0x00000002 | Native | Private)

	// Function /Script/FortniteGame.CreativeQuestComponent.OnMinigameStarted (Underlying native function: OnMinigameStarted 0x26daa0c)
	void OnMinigameStarted(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeQuestComponent.OnMinigameEnded (Underlying native function: OnMinigameEnded 0x26daa0c)
	void OnMinigameEnded(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeQuestComponent.IsActiveFor (Underlying native function: IsActiveFor 0x8761540)
	bool IsActiveFor(class AController*& Player); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CreativeQuestComponent.HandlePlayerStatChanged (Underlying native function: HandlePlayerStatChanged 0x8761250)
	void HandlePlayerStatChanged(enum EFortQuestObjectiveStatEvent& Type, class UObject*& TargetObject, class AFortPlayerController*& PlayerController, struct FGameplayTagContainer& TargetTags, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& ContextTags, int& Count); // (Final | 0x00000002 | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.CreativeQuestComponent.GetCurrentAmount (Underlying native function: GetCurrentAmount 0x8760324)
	int GetCurrentAmount(class AController*& ForPlayer); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CreativeQuestComponent.GetActiveSharedControllers (Underlying native function: GetActiveSharedControllers 0x875fb08)
	struct TArray<class AController*> GetActiveSharedControllers(class AController*& Instigator); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};


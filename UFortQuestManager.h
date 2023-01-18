// Class /Script/FortniteGame.FortQuestManager
// Size: 0x498
class UFortQuestManager : public UObject
{
	struct TArray<class UFortQuestManagerComponent*> Components; // 0x28 (0x10)
	unsigned char unreflected_38[0x288]; // 0x38 (0x288) 
	struct FMulticastInlineDelegate OnQuestsGranted; // 0x2c0 (0x10)
	unsigned char unreflected_2d0[0x30]; // 0x2d0 (0x30) 
	struct FMulticastInlineDelegate OnQuestsUpdated; // 0x300 (0x10)
	struct FMulticastInlineDelegate OnQuestsCompleted; // 0x310 (0x10)
	unsigned char unreflected_320[0x18]; // 0x320 (0x18) 
	struct FMulticastInlineDelegate OnDisplayDynamicQuestUpdate; // 0x338 (0x10)
	unsigned char unreflected_348[0x30]; // 0x348 (0x30) 
	struct TWeakObjectPtr<class UFortMcpProfileSubgame> BoundProfile; // 0x378 (0x8)
	struct TArray<class UFortQuestItem*> CurrentQuests; // 0x380 (0x10)
	struct TArray<struct FFortQuestObjectiveCompletion> PendingChanges; // 0x390 (0x10)
	unsigned char unreflected_3a0[0x60]; // 0x3a0 (0x60) 
	struct TArray<struct FFortAbilitySetHandle> EquippedQuestAbilities; // 0x400 (0x10)
	unsigned char unreflected_410[0x38]; // 0x410 (0x38) 
	enum EAthenaRebootEligiblityStatus RebootEligiblityStatus; // 0x448 (0x1)
	unsigned char unreflected_449[0x3]; // 0x449 (0x3) 
	float DamageTakenEventFlushDelaySeconds; // 0x44c (0x4)
	float DamageEventFlushDelaySeconds; // 0x450 (0x4)
	float HitEventDelaySeconds; // 0x454 (0x4)
	float BuildingEventFlushDelaySeconds; // 0x458 (0x4)
	bool bDoQuestStateLogging; // 0x45c (0x1)
	bool bBlockQuestCompletion; // 0x45d (0x1)
	unsigned char unreflected_45e[0x2]; // 0x45e (0x2) 
	float XpEventFlushDelaySeconds; // 0x460 (0x4)
	unsigned char unreflected_464[0x4]; // 0x464 (0x4) 
	struct TArray<struct FString> BackendObjectiveNamesToBlock; // 0x468 (0x10)
	struct TArray<struct FString> QuestTemplatesToBlock; // 0x478 (0x10)
	struct TArray<class UFortQuestItem*> QuestsToAddToUpdates; // 0x488 (0x10)

	/* Functions */

	// DelegateFunction /Script/FortniteGame.FortQuestManager.SimpleDynamicMulticastDelegate__DelegateSignature (Has no native function)
	void SimpleDynamicMulticastDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortQuestManager.SendCustomStatEventWithTags (Underlying native function: SendCustomStatEventWithTags 0x8e1d06c)
	void SendCustomStatEventWithTags(enum EFortQuestObjectiveStatEvent& Type, struct FGameplayTagContainer& AdditionalSourceTags, struct FGameplayTagContainer& TargetTags, int& Count); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestManager.SendCustomStatEventDirect (Underlying native function: SendCustomStatEventDirect 0x8e1cf88)
	void SendCustomStatEventDirect(struct FName& ObjectiveBackendName, class UFortQuestItem*& QuestItem, int& Count); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestManager.SendCustomStatEvent (Underlying native function: SendCustomStatEvent 0x8e1ceb8)
	void SendCustomStatEvent(struct FDataTableRowHandle& ObjectiveStat, int& Count); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestManager.SendComplexCustomStatEvent (Underlying native function: SendComplexCustomStatEvent 0x8e1ccf8)
	void SendComplexCustomStatEvent(class UObject*& TargetObject, struct FGameplayTagContainer& AdditionalSourceTags, struct FGameplayTagContainer& TargetTags, int& Count); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.FortQuestManager.OnQuestsGranted__DelegateSignature (Has no native function)
	void OnQuestsGrantedDelegateSignature(struct TArray<class UFortQuestItem*>& Quests); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/FortniteGame.FortQuestManager.OnQuestsCompleted__DelegateSignature (Has no native function)
	void OnQuestsCompletedDelegateSignature(struct TArray<class UFortQuestItem*>& Quests); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/FortniteGame.FortQuestManager.OnDisplayDynamicQuestUpdate__DelegateSignature (Has no native function)
	void OnDisplayDynamicQuestUpdateDelegateSignature(class UFortQuestObjectiveInfo*& QuestObjective, bool& bDisplayStatusUpdate, bool& bDisplayAnnouncementUpdate); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortQuestManager.IsQuestObjectiveActive (Underlying native function: IsQuestObjectiveActive 0x8e1cb8c)
	bool IsQuestObjectiveActive(struct FName& ObjectiveName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestManager.IsQuestInProgress (Underlying native function: IsQuestInProgress 0x8e1c698)
	bool IsQuestInProgress(class UFortQuestItemDefinition*& Definition); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestManager.IsObjectiveWithNameInProgress (Underlying native function: IsObjectiveWithNameInProgress 0x8e1c59c)
	bool IsObjectiveWithNameInProgress(class UFortQuestItemDefinition*& Definition, struct FName& BackendName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestManager.IsObjectiveInProgress (Underlying native function: IsObjectiveInProgress 0x8e1c4bc)
	bool IsObjectiveInProgress(class UFortQuestItemDefinition*& Definition, struct FDataTableRowHandle& ObjectiveStatHandle); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestManager.InitializeQuestAbilities (Underlying native function: InitializeQuestAbilities 0x71a663c)
	void InitializeQuestAbilities(class APawn*& PlayerPawn); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortQuestManager.HasCompletedQuest (Underlying native function: HasCompletedQuest 0x8e1c300)
	bool HasCompletedQuest(class UFortQuestItemDefinition*& Definition); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestManager.HasCompletedObjectiveWithName (Underlying native function: HasCompletedObjectiveWithName 0x8e1c228)
	bool HasCompletedObjectiveWithName(class UFortQuestItemDefinition*& Definition, struct FName& BackendName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestManager.HasCompletedObjective (Underlying native function: HasCompletedObjective 0x8e1c148)
	bool HasCompletedObjective(class UFortQuestItemDefinition*& Definition, struct FDataTableRowHandle& ObjectiveStatHandle); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestManager.GetSourceAndContextTags (Underlying native function: GetSourceAndContextTags 0x8e1bac0)
	void GetSourceAndContextTags(struct FGameplayTagContainer& OutSourceTags, struct FGameplayTagContainer& OutContextTags); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestManager.GetQuestWithDefinition (Underlying native function: GetQuestWithDefinition 0x8e1b780)
	class UFortQuestItem* GetQuestWithDefinition(class UFortQuestItemDefinition*& Definition); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestManager.GetQuestManagerComponent (Underlying native function: GetQuestManagerComponent 0x8e1b6c0)
	class UFortQuestManagerComponent* GetQuestManagerComponent(class UClass*& QuestManagerComponentClass); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestManager.GetPlayerControllerBP (Underlying native function: GetPlayerControllerBP 0x8e1b5dc)
	class AFortPlayerController* GetPlayerControllerBP(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestManager.GetObjectiveCompletionCount (Underlying native function: GetObjectiveCompletionCount 0x8e1b390)
	int GetObjectiveCompletionCount(class UFortQuestItemDefinition*& Definition, struct FName& BackendName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestManager.GetNumCompletedObjectives (Underlying native function: GetNumCompletedObjectives 0x8e1b2cc)
	int GetNumCompletedObjectives(class UFortQuestItemDefinition*& Definition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestManager.GetCurrentQuests (Underlying native function: GetCurrentQuests 0x8e1b120)
	void GetCurrentQuests(struct TArray<class UFortQuestItem*>& OutCurrentQuests); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortQuestManager.GetCompletedQuests (Underlying native function: GetCompletedQuests 0x8e1af38)
	void GetCompletedQuests(struct TArray<class UFortQuestItem*>& OutCompletedQuests); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestManager.ForceTriggerQuestsUpdated (Underlying native function: ForceTriggerQuestsUpdated 0x8e1ad30)
	void ForceTriggerQuestsUpdated(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestManager.CanProgressQuestInCurrentZone (Underlying native function: CanProgressQuestInCurrentZone 0x8e1ac54)
	bool CanProgressQuestInCurrentZone(class UFortQuestItemDefinition*& QuestItemDefinition); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};


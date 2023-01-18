// Class /Script/FortniteGame.FortQuestManagerComponent_Athena
// Size: 0x568
class UFortQuestManagerComponent_Athena : public UFortQuestManagerComponent
{
	unsigned char unreflected_28[0x18]; // 0x28 (0x18) 
	struct TArray<class UFortChallengeBundleItem*> CurrentChallengeBundles; // 0x40 (0x10)
	bool bHasSentMatchStarted; // 0x50 (0x1)
	unsigned char unreflected_51[0x7]; // 0x51 (0x7) 
	struct TArray<struct FFortDisplayQuestUpdateData> DisplayQuestUpdateData; // 0x58 (0x10)
	struct TArray<class UFortAccoladeItem*> CurrentAccolades; // 0x68 (0x10)
	struct TArray<class UFortQuestItem*> CurrentFeats; // 0x78 (0x10)
	struct TSet<class UFortFeatItemDefinition*> FeatsCompletedThisSession; // 0x88 (0x50)
	unsigned char unreflected_d8[0x158]; // 0xd8 (0x158) 
	struct FMulticastInlineDelegate OnTransientQuestStarted; // 0x230 (0x10)
	struct FMulticastInlineDelegate OnTransientQuestAdded; // 0x240 (0x10)
	struct FMulticastInlineDelegate OnTransientQuestRemoved; // 0x250 (0x10)
	struct FMulticastInlineDelegate OnUrgentTransientQuestStarted; // 0x260 (0x10)
	struct FMulticastInlineDelegate OnUrgentTransientQuestCompleted; // 0x270 (0x10)
	struct FMulticastInlineDelegate OnUrgentTransientQuestFailed; // 0x280 (0x10)
	struct TArray<class UFortQuestItem*> ActiveTransientQuests; // 0x290 (0x10)
	struct TArray<class UFortQuestItem*> CompletedQuests; // 0x2a0 (0x10)
	struct TArray<class UFortQuestItem*> RemovedTransientQuests; // 0x2b0 (0x10)
	struct TArray<class UFortQuestItem*> ActiveMilestoneQuests; // 0x2c0 (0x10)
	struct TArray<struct FFortQuestAnalyticEvent> McpQuestAnalyticEvents; // 0x2d0 (0x10)
	unsigned char unreflected_2e0[0x50]; // 0x2e0 (0x50) 
	class UFortQuestItemDefinition_Athena* PinnedSharedQuest; // 0x330 (0x8)
	unsigned char unreflected_338[0x10]; // 0x338 (0x10) 
	struct TMap<struct FUniqueNetIdRepl, struct FSharedQuestData> SquadSharedQuestData; // 0x348 (0x50)
	unsigned char unreflected_398[0x28]; // 0x398 (0x28) 
	class UAthenaQuestCategoryManager* QuestCategoryManager; // 0x3c0 (0x8)
	unsigned char unreflected_3c8[0x48]; // 0x3c8 (0x48) 
	struct TSet<class UFortQuestItem*> ActiveQuestVO; // 0x410 (0x50)
	unsigned char unreflected_460[0xa0]; // 0x460 (0xa0) 
	struct TArray<class UFortHardcoreModifierItem*> HardcoreModifiersToUse; // 0x500 (0x10)
	struct TArray<class UFortHardcoreModifierItem*> CurrentHardcoreModifiers; // 0x510 (0x10)
	struct FGameplayTagContainer CurrentHardcoreModifierSrcTags; // 0x520 (0x20)
	bool bBlockAthenaQuestCompletion; // 0x540 (0x1)
	bool bBlockAthenaQuestCompletionInCompetitive; // 0x541 (0x1)
	bool bAllowAthenaMCPNotifyOnComplete; // 0x542 (0x1)
	bool bBlockPartyAssist; // 0x543 (0x1)
	bool bUseSquadForPartyAssist; // 0x544 (0x1)
	bool bBlockBRXPWhenDead; // 0x545 (0x1)
	bool bBlockXPEventsInAnyAAState; // 0x546 (0x1)
	bool bBlockAthenaFeatsCompletionInCompetitive; // 0x547 (0x1)
	struct TArray<struct FString> TransientQuestsToAutoComplete; // 0x548 (0x10)
	struct TArray<class UFortQuestItem*> PostBRWarmupQuests; // 0x558 (0x10)

	/* Functions */

	// DelegateFunction /Script/FortniteGame.FortQuestManagerComponent_Athena.OnXpDeltasUpdated__DelegateSignature (Has no native function)
	void OnXpDeltasUpdatedDelegateSignature(int& CombatXp, int& ServivalXp, int& MedalBonusXP, int& ChallengeXp, int& MatchXp, int& TotalXp); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortQuestManagerComponent_Athena.OnUrgentTransientQuestStarted__DelegateSignature (Has no native function)
	void OnUrgentTransientQuestStartedDelegateSignature(class UFortQuestItem*& TransientQuestItem); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortQuestManagerComponent_Athena.OnUrgentTransientQuestFailed__DelegateSignature (Has no native function)
	void OnUrgentTransientQuestFailedDelegateSignature(class UFortQuestItem*& TransientQuestItem); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortQuestManagerComponent_Athena.OnUrgentTransientQuestCompleted__DelegateSignature (Has no native function)
	void OnUrgentTransientQuestCompletedDelegateSignature(class UFortQuestItem*& TransientQuestItem); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortQuestManagerComponent_Athena.OnTransientQuestStarted__DelegateSignature (Has no native function)
	void OnTransientQuestStartedDelegateSignature(class UFortQuestItem*& TransientQuestItem, class UFortQuestItemDefinition_Athena*& PreceedingQuestDefAthena); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortQuestManagerComponent_Athena.OnTransientQuestRemoved__DelegateSignature (Has no native function)
	void OnTransientQuestRemovedDelegateSignature(class UFortQuestItem*& TransientQuestItem); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortQuestManagerComponent_Athena.OnTransientQuestAdded__DelegateSignature (Has no native function)
	void OnTransientQuestAddedDelegateSignature(class UFortQuestItem*& AddedQuestItem); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortQuestManagerComponent_Athena.OnSharedQuestChanged__DelegateSignature (Has no native function)
	void OnSharedQuestChangedDelegateSignature(struct FUniqueNetIdRepl& PlayerId, class UFortQuestItem*& QuestToPin); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/FortniteGame.FortQuestManagerComponent_Athena.OnQuestVOPlayStateChanged__DelegateSignature (Has no native function)
	void OnQuestVOPlayStateChangedDelegateSignature(bool& bIsPlaying); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortQuestManagerComponent_Athena.OnQuestVOMuteStateChanged__DelegateSignature (Has no native function)
	void OnQuestVOMuteStateChangedDelegateSignature(bool& bIsMuted); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortQuestManagerComponent_Athena.OnQuestVOMuteHoldStarted__DelegateSignature (Has no native function)
	void OnQuestVOMuteHoldStartedDelegateSignature(float& Duration); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortQuestManagerComponent_Athena.OnQuestVOMuteHoldEnded__DelegateSignature (Has no native function)
	void OnQuestVOMuteHoldEndedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortQuestManagerComponent_Athena.OnObjectiveStatXPGranted__DelegateSignature (Has no native function)
	void OnObjectiveStatXPGrantedDelegateSignature(struct FXPEventInfo& XPEvent); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Athena.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x2e3dedc)
	void OnGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Private)

	// DelegateFunction /Script/FortniteGame.FortQuestManagerComponent_Athena.OnAssistPlayerCleaningUpSharedQuests__DelegateSignature (Has no native function)
	void OnAssistPlayerCleaningUpSharedQuestsDelegateSignature(struct FUniqueNetIdRepl& PlayerId); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Athena.HandleQuestObjectiveUpdated (Underlying native function: HandleQuestObjectiveUpdated 0x8e1bc90)
	void HandleQuestObjectiveUpdated(class AFortPlayerController*& QuestOwner, class UFortQuestItemDefinition*& QuestDef, struct FName& BackendName, int& CompletionCount, int& DeltaChange, class AFortPlayerState*& AssistingPlayer, enum EFortQuestObjectiveStatEvent& StatEvent); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Athena.CanGrantSharedQuests (Underlying native function: CanGrantSharedQuests 0x8e1abe8)
	bool CanGrantSharedQuests(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestManagerComponent_Athena.AppendTemporaryRelevancyTags (Underlying native function: AppendTemporaryRelevancyTags 0x8e1aa04)
	void AppendTemporaryRelevancyTags(struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& ContextTags, struct FGameplayTagContainer& TargetTags); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)
};


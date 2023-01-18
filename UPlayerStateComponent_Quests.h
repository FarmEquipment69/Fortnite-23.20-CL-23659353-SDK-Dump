// Class /Script/FortniteGame.PlayerStateComponent_Quests
// Size: 0xd8
class UPlayerStateComponent_Quests : public UPlayerStateComponent
{
	unsigned char unreflected_a0[0x18]; // 0xa0 (0x18) 
	struct TArray<class UQuestContainer*> QuestContainers; // 0xb8 (0x10)
	struct TArray<struct TScriptInterface<class IQuestInstanceInterface>> ParticipatingQuests; // 0xc8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.PlayerStateComponent_Quests.IsQuestInstanceObjectiveCompleted (Underlying native function: IsQuestInstanceObjectiveCompleted 0x8e1c9dc)
	bool IsQuestInstanceObjectiveCompleted(struct FString& QuestId, struct FName& ObjectiveName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.PlayerStateComponent_Quests.IsQuestInstanceObjectiveActive (Underlying native function: IsQuestInstanceObjectiveActive 0x8e1c82c)
	bool IsQuestInstanceObjectiveActive(struct FString& QuestId, struct FName& ObjectiveName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.PlayerStateComponent_Quests.IsQuestInstanceCompleted (Underlying native function: IsQuestInstanceCompleted 0x8e1c73c)
	bool IsQuestInstanceCompleted(struct FString& QuestId); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};


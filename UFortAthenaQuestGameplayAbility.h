// Class /Script/FortniteGame.FortAthenaQuestGameplayAbility
// Size: 0xb30
class UFortAthenaQuestGameplayAbility : public UFortGameplayAbility
{
	struct TArray<class UFortQuestItem*> BoundQuestItems; // 0xb20 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaQuestGameplayAbility.BP_OnQuestCompleted (Has no native function)
	void BPOnQuestCompleted(class UFortQuestItem*& QuestItem); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaQuestGameplayAbility.BP_OnObjectiveUpdated (Has no native function)
	void BPOnObjectiveUpdated(class UFortQuestItem*& QuestItem, struct FName& ObjectiveBackendName, int& AchivedCount, int& GoalCount); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaQuestGameplayAbility.BP_OnObjectiveCompleted (Has no native function)
	void BPOnObjectiveCompleted(class UFortQuestItem*& QuestItem, struct FName& ObjectiveBackendName); // (Event | Protected | BlueprintEvent)
};


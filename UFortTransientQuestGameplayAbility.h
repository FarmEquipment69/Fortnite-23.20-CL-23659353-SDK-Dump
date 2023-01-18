// Class /Script/FortniteGame.FortTransientQuestGameplayAbility
// Size: 0xb28
class UFortTransientQuestGameplayAbility : public UFortGameplayAbility
{
	class UFortQuestItemDefinition_Athena* QuestItemDefinition; // 0xb20 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortTransientQuestGameplayAbility.StopUrgentQuestEvent (Underlying native function: StopUrgentQuestEvent 0x8142f18)
	void StopUrgentQuestEvent(struct FUrgentQuestData& UrgentQuestData); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortTransientQuestGameplayAbility.StartUrgentQuestEvent (Underlying native function: StartUrgentQuestEvent 0x8142e10)
	void StartUrgentQuestEvent(struct FUrgentQuestData& UrgentQuestData); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortTransientQuestGameplayAbility.OnPostAbilityInitialization (Has no native function)
	void OnPostAbilityInitialization(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTransientQuestGameplayAbility.FailQuest (Underlying native function: FailQuest 0x81408e4)
	void FailQuest(); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortTransientQuestGameplayAbility.CompleteQuest (Underlying native function: CompleteQuest 0x813f79c)
	void CompleteQuest(); // (Final | Native | Protected | BlueprintCallable | Const)
};


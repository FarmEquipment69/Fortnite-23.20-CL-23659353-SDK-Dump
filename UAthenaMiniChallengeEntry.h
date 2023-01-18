// Class /Script/FortniteUI.AthenaMiniChallengeEntry
// Size: 0x2f8
class UAthenaMiniChallengeEntry : public UCommonUserWidget
{
	class UFortLazyImage* QuestIcon; // 0x290 (0x8)
	class UFortQuestItemDefinition* QuestDef; // 0x298 (0x8)
	class UFortQuestItemDefinition* PendingQuestDef; // 0x2a0 (0x8)
	int DisplayGoal; // 0x2a8 (0x4)
	int DisplayAchivedCount; // 0x2ac (0x4)
	int PendingGoalCount; // 0x2b0 (0x4)
	int PendingLastKnown; // 0x2b4 (0x4)
	int PendingAchivedCount; // 0x2b8 (0x4)
	int PendingXpValue; // 0x2bc (0x4)
	bool bPendingUpdate; // 0x2c0 (0x1)
	bool bIsFirstTimeBoosted; // 0x2c1 (0x1)
	unsigned char unreflected_2c2[0x2]; // 0x2c2 (0x2) 
	struct FName ParamName; // 0x2c4 (0x4)
	unsigned char padding_2c8[0x30]; // 0x2c8 (0x30)

	/* Functions */

	// Function /Script/FortniteUI.AthenaMiniChallengeEntry.UpdateQuestDescription (Has no native function)
	void UpdateQuestDescription(struct FText& Description); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMiniChallengeEntry.UpdateProgressBar (Has no native function)
	void UpdateProgressBar(int& LastKnownCount, int& AchivedCount, int& GoalCount); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMiniChallengeEntry.TriggerNewQuestGranted (Has no native function)
	void TriggerNewQuestGranted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMiniChallengeEntry.SetXpValue (Has no native function)
	void SetXpValue(int& XpRewardValue); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMiniChallengeEntry.RefeshWithNewQuest (Has no native function)
	void RefeshWithNewQuest(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMiniChallengeEntry.QuestCompletedFinishFill (Has no native function)
	void QuestCompletedFinishFill(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMiniChallengeEntry.FinishedQuestUpdate (Underlying native function: FinishedQuestUpdate 0xa4e0a8c)
	void FinishedQuestUpdate(); // (Final | Native | Public | BlueprintCallable)
};


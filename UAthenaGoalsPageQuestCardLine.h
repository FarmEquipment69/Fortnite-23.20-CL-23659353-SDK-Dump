// Class /Script/FortniteUI.AthenaGoalsPageQuestCardLine
// Size: 0x290
class UAthenaGoalsPageQuestCardLine : public UUserWidget
{
	class UCommonRichTextBlock* RichTextGoalName; // 0x268 (0x8)
	class UAthenaChallengeRewards* UserWidgetRewards; // 0x270 (0x8)
	class UCommonTextBlock* TextQuestID; // 0x278 (0x8)
	unsigned char padding_280[0x10]; // 0x280 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaGoalsPageQuestCardLine.SetObjectiveProgress (Has no native function)
	void SetObjectiveProgress(int& Achieved, int& Required); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaGoalsPageQuestCardLine.Reset (Has no native function)
	void Reset(); // (Event | Public | BlueprintCallable | BlueprintEvent)
};


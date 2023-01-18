// Class /Script/FortniteUI.AthenaGoalsPageQuestCard
// Size: 0x2c0
class UAthenaGoalsPageQuestCard : public UAthenaGoalsPageBaseCard
{
	struct FText TextExpired; // 0x288 (0x18)
	class UCommonTextBlock* TextBundleID; // 0x2a0 (0x8)
	struct TArray<class UFortQuestItem*> PrevQuestList; // 0x2a8 (0x10)
	unsigned char padding_2b8[0x8]; // 0x2b8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaGoalsPageQuestCard.PopulateIsSelectable (Has no native function)
	void PopulateIsSelectable(bool& bCardIsSelectable); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaGoalsPageQuestCard.PopulateHeader (Has no native function)
	void PopulateHeader(struct FBundleGoalCardDisplayData& GoalCardDisplayData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaGoalsPageQuestCard.PopulateBattlePassRequirement (Has no native function)
	void PopulateBattlePassRequirement(bool& bBattlePassRequired); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaGoalsPageQuestCard.GetIsSelectable (Underlying native function: GetIsSelectable 0xa5a2d34)
	bool GetIsSelectable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};


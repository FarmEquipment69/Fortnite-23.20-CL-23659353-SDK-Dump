// Class /Script/SaveTheWorldUI.FortJournalQuestProgressBar
// Size: 0x2a0
class UFortJournalQuestProgressBar : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	struct TWeakObjectPtr<class UFortQuestObjectiveInfo> QuestObjectiveInfo; // 0x298 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortJournalQuestProgressBar.GetProgressDetails (Underlying native function: GetProgressDetails 0x75972c8)
	void GetProgressDetails(struct FText& OutNumerator, struct FText& OutDenominator, float& OutFraction); // (Final | Native | Protected | HasOutParms | BlueprintCallable)
};


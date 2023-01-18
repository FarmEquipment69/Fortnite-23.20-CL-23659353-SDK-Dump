// Class /Script/SaveTheWorldUI.FortJournalQuestDetails
// Size: 0x298
class UFortJournalQuestDetails : public UCommonUserWidget
{
	class UFortQuestItem* CurrentQuest; // 0x290 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.SetCurrentQuest (Underlying native function: SetCurrentQuest 0x759a1d8)
	void SetCurrentQuest(class UFortQuestItem*& InCurrentQuest); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.RegisterEndSpokenDialogEvent (Underlying native function: RegisterEndSpokenDialogEvent 0x7599c1c)
	void RegisterEndSpokenDialogEvent(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.OnEndSpokenDialog (Has no native function)
	void OnEndSpokenDialog(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.HandleCurrentQuestChangedBP (Has no native function)
	void HandleCurrentQuestChangedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.GetVisibleObjectives (Underlying native function: GetVisibleObjectives 0x75978ac)
	void GetVisibleObjectives(struct TArray<class UFortQuestObjectiveInfo*>& VisibleObjectives); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.GetRewards (Underlying native function: GetRewards 0x7597708)
	void GetRewards(struct TArray<struct FFortItemInstanceQuantityPair>& OutRewards, struct TArray<struct FFortItemInstanceQuantityPair>& OutSelectableRewards); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.GetFutureObjectives (Underlying native function: GetFutureObjectives 0x7596870)
	void GetFutureObjectives(struct TArray<class UFortQuestObjectiveInfo*>& FutureObjectives); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.GetActiveMissionTileType (Underlying native function: GetActiveMissionTileType 0x7596174)
	enum EFortTheaterMapTileType GetActiveMissionTileType(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.CanPlayQuest (Underlying native function: CanPlayQuest 0x7595554)
	bool CanPlayQuest(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.CanPartyLeaderPlayQuest (Underlying native function: CanPartyLeaderPlayQuest 0x75954bc)
	bool CanPartyLeaderPlayQuest(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.CanGotoQuest (Underlying native function: CanGotoQuest 0x7595490)
	bool CanGotoQuest(); // (Final | Native | Public | BlueprintCallable)
};


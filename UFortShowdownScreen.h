// Class /Script/FortniteUI.FortShowdownScreen
// Size: 0x598
class UFortShowdownScreen : public UFortActivatablePanel
{
	struct FDataTableRowHandle HypeLeaderboardActionRowHandle; // 0x518 (0x10)
	class UClass* HypeLeaderboardScreenClass; // 0x528 (0x8)
	class UClass* TileItemClass; // 0x530 (0x8)
	class UClass* TournamentModalClass; // 0x538 (0x8)
	class UCommonButtonBase* ButtonDetails; // 0x540 (0x8)
	class UCommonTextBlock* CommonTextBlockRegionText; // 0x548 (0x8)
	class UFortShowdownTournamentListView* ListViewTournamentList; // 0x550 (0x8)
	class UFortShowdownRegionButton* ButtonRegionSelection; // 0x558 (0x8)
	class UImage* ImageLoadingSpinner; // 0x560 (0x8)
	bool bIsUsingGamepad; // 0x568 (0x1)
	unsigned char padding_569[0x2f]; // 0x569 (0x2f)

	/* Functions */

	// Function /Script/FortniteUI.FortShowdownScreen.SelectedTournamentChanged (Has no native function)
	void SelectedTournamentChanged(struct FString& SelectedTournament); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortShowdownScreen.SelectedFrontTournament (Has no native function)
	void SelectedFrontTournament(bool& bFrontIsSelected); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortShowdownScreen.SelectedEndTournament (Has no native function)
	void SelectedEndTournament(bool& bEndIsSelected); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortShowdownScreen.NavigateTournamentRight (Underlying native function: NavigateTournamentRight 0xa8f0a3c)
	void NavigateTournamentRight(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortShowdownScreen.NavigateTournamentLeft (Underlying native function: NavigateTournamentLeft 0xa8f0a04)
	void NavigateTournamentLeft(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortShowdownScreen.HandleSelectedTileChanged (Underlying native function: HandleSelectedTileChanged 0xa8ef92c)
	void HandleSelectedTileChanged(class UCommonButtonLegacy*& Button, int& ButtonIndex); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortShowdownScreen.HandlePopupStateChanged (Underlying native function: HandlePopupStateChanged 0xa8ef650)
	void HandlePopupStateChanged(bool& bIsOpen); // (Final | Native | Private)
};


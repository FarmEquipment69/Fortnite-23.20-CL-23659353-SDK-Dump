// Class /Script/FortniteUI.FortDivisionDetailsScreen
// Size: 0x538
class UFortDivisionDetailsScreen : public UFortActivatablePanel
{
	class UFortDivisionDetailsInfo* DetailsInfo; // 0x518 (0x8)
	class UFortDivisionPayoutInfo* PayoutInfo; // 0x520 (0x8)
	class UCommonTextBlock* TextTitle; // 0x528 (0x8)
	class UCommonWidgetSwitcherLegacy* WidgetSwitcherMainContent; // 0x530 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortDivisionDetailsScreen.SetTournamentAndEventId (Underlying native function: SetTournamentAndEventId 0xa8f29b0)
	void SetTournamentAndEventId(struct FString& InTournamentId, struct FString& InEventId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortDivisionDetailsScreen.HandleRightDivisionClicked (Underlying native function: HandleRightDivisionClicked 0xa8ef844)
	void HandleRightDivisionClicked(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortDivisionDetailsScreen.HandleLeftDivisionClicked (Underlying native function: HandleLeftDivisionClicked 0xa8ef258)
	void HandleLeftDivisionClicked(); // (Final | Native | Public | BlueprintCallable)
};


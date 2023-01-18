// Class /Script/FortniteUI.FortTournamentPosterViolator
// Size: 0x2d8
class UFortTournamentPosterViolator : public UCommonUserWidget
{
	unsigned char unreflected_290[0x30]; // 0x290 (0x30) 
	class UCommonWidgetSwitcherLegacy* WidgetSwitcherEventStateSwitcher; // 0x2c0 (0x8)
	class UCommonTextBlock* TextTimeRemaining; // 0x2c8 (0x8)
	class UCommonTextBlock* TextInformationViolator; // 0x2d0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortTournamentPosterViolator.OnViolatorStateRefreshed (Has no native function)
	void OnViolatorStateRefreshed(enum ETournmentPosterViolatorState& NewTimeState); // (Event | Protected | BlueprintEvent)
};


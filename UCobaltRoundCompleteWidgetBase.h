// Class /Script/FortniteUI.CobaltRoundCompleteWidgetBase
// Size: 0x370
class UCobaltRoundCompleteWidgetBase : public UCobaltWidgetBase
{
	unsigned char unreflected_370[0x370]; 

	/* Functions */

	// Function /Script/FortniteUI.CobaltRoundCompleteWidgetBase.ShowDisplay (Has no native function)
	void ShowDisplay(bool& bIsWin, bool& bWasTie, bool& bViewingWidgetOwner, int& RoundNum, struct FText& RoundName, struct FText& POIName, int& PrimaryTeamScore, int& OpposingTeamScore); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.CobaltRoundCompleteWidgetBase.OnRoundComplete (Underlying native function: OnRoundComplete 0xa57f8d4)
	void OnRoundComplete(struct TArray<unsigned char>& WinningTeams); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.CobaltRoundCompleteWidgetBase.HideWidget (Underlying native function: HideWidget 0xa57e46c)
	void HideWidget(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.CobaltRoundCompleteWidgetBase.HideDisplay (Has no native function)
	void HideDisplay(); // (Event | Protected | BlueprintEvent)
};


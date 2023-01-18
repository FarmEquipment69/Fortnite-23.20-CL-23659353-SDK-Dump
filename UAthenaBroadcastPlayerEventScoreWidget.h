// Class /Script/FortniteUI.AthenaBroadcastPlayerEventScoreWidget
// Size: 0x2e0
class UAthenaBroadcastPlayerEventScoreWidget : public UFortHUDElementWidget
{
	class UCommonTextBlock* PlayerEventScoreText; // 0x2d0 (0x8)
	class UCommonWidgetSwitcherLegacy* PlayerEventScoreSwitcher; // 0x2d8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaBroadcastPlayerEventScoreWidget.OnRemoteClientEventScoreChanged (Underlying native function: OnRemoteClientEventScoreChanged 0xa5bbfd4)
	void OnRemoteClientEventScoreChanged(int& NewEventScore); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaBroadcastPlayerEventScoreWidget.OnPointTextSet (Has no native function)
	void OnPointTextSet(); // (Event | Protected | BlueprintEvent)
};


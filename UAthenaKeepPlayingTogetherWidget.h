// Class /Script/FortniteUI.AthenaKeepPlayingTogetherWidget
// Size: 0x498
class UAthenaKeepPlayingTogetherWidget : public UCommonActivatableWidget
{
	float ToLobbyDelayOnError; // 0x3a8 (0x4)
	unsigned char unreflected_3ac[0x4]; // 0x3ac (0x4) 
	class UAthenaIGMSquadDisplayWidget* SquadDisplayWidget; // 0x3b0 (0x8)
	class UCommonButtonLegacy* ButtonSkip; // 0x3b8 (0x8)
	class UCommonButtonLegacy* ButtonOptIn; // 0x3c0 (0x8)
	class URichTextBlock* TextOptInCountdown; // 0x3c8 (0x8)
	unsigned char unreflected_3d0[0x50]; // 0x3d0 (0x50) 
	class UCommonActivatableWidgetSwitcher* SwitcherMatchmakingStatus; // 0x420 (0x8)
	class UPanelWidget* ContainerCountdownStatus; // 0x428 (0x8)
	class UPanelWidget* ContainerFindingMatchStatus; // 0x430 (0x8)
	class UPanelWidget* ContainerError; // 0x438 (0x8)
	class UPanelWidget* ContainerWaiting; // 0x440 (0x8)
	class UCommonTextBlock* TextMatchmakingElapsed; // 0x448 (0x8)
	class UCommonTextBlock* TextCountdownCurrent; // 0x450 (0x8)
	class UCommonTextBlock* TextCountdownNext; // 0x458 (0x8)
	unsigned char padding_460[0x38]; // 0x460 (0x38)

	/* Functions */

	// Function /Script/FortniteUI.AthenaKeepPlayingTogetherWidget.OnPreMatchmakingCountdownStarted (Has no native function)
	void OnPreMatchmakingCountdownStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaKeepPlayingTogetherWidget.OnPreMatchmakingCountdownProgressed (Has no native function)
	void OnPreMatchmakingCountdownProgressed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaKeepPlayingTogetherWidget.OnMatchmakingUpdate (Has no native function)
	void OnMatchmakingUpdate(struct FTimespan*& ElapsedTime); // (Event | Protected | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaKeepPlayingTogetherWidget.OnMatchmakingStarted (Has no native function)
	void OnMatchmakingStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaKeepPlayingTogetherWidget.OnMatchmakingFinished (Has no native function)
	void OnMatchmakingFinished(bool& bSuccess); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaKeepPlayingTogetherWidget.OnMatchmakingErrorMessage (Has no native function)
	void OnMatchmakingErrorMessage(struct FText& message); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaKeepPlayingTogetherWidget.OnMatchmakingCanceled (Has no native function)
	void OnMatchmakingCanceled(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaKeepPlayingTogetherWidget.OnExitToLobbyCountdownProgressed (Has no native function)
	void OnExitToLobbyCountdownProgressed(float& CountdownValue); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaKeepPlayingTogetherWidget.HandleSkipClicked (Has no native function)
	void HandleSkipClicked(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaKeepPlayingTogetherWidget.HandleOptInClicked (Has no native function)
	void HandleOptInClicked(); // (Event | Protected | BlueprintEvent)
};


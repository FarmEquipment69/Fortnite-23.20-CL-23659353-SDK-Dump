// Class /Script/FortniteUI.AthenaKeepPlayingTogetherScreenOverlay
// Size: 0x340
class UAthenaKeepPlayingTogetherScreenOverlay : public UCommonUserWidget
{
	float ToLobbyDelayOnError; // 0x290 (0x4)
	unsigned char unreflected_294[0x4]; // 0x294 (0x4) 
	class UCommonButtonBase* ButtonCancel; // 0x298 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherMatchmakingStatus; // 0x2a0 (0x8)
	class UPanelWidget* ContainerCountdownStatus; // 0x2a8 (0x8)
	class UPanelWidget* ContainerFindingMatchStatus; // 0x2b0 (0x8)
	class UPanelWidget* ContainerError; // 0x2b8 (0x8)
	class UPanelWidget* ContainerWaiting; // 0x2c0 (0x8)
	class UCommonTextBlock* TextMatchmakingElapsed; // 0x2c8 (0x8)
	class UCommonTextBlock* TextCountdownCurrent; // 0x2d0 (0x8)
	class UCommonTextBlock* TextCountdownNext; // 0x2d8 (0x8)
	class UCommonTextBlock* TextWaitingForSquadCountdown; // 0x2e0 (0x8)
	class UAthenaIGMSquadDisplayWidget* LocalPlayerSquadDisplayWidget; // 0x2e8 (0x8)
	unsigned char padding_2f0[0x50]; // 0x2f0 (0x50)

	/* Functions */

	// Function /Script/FortniteUI.AthenaKeepPlayingTogetherScreenOverlay.OnWaitingForSquadMemberVotesCountdownStarted (Has no native function)
	void OnWaitingForSquadMemberVotesCountdownStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaKeepPlayingTogetherScreenOverlay.OnWaitingForSquadMemberVotesCountdownProgressed (Has no native function)
	void OnWaitingForSquadMemberVotesCountdownProgressed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaKeepPlayingTogetherScreenOverlay.OnPreMatchmakingCountdownStarted (Has no native function)
	void OnPreMatchmakingCountdownStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaKeepPlayingTogetherScreenOverlay.OnPreMatchmakingCountdownProgressed (Has no native function)
	void OnPreMatchmakingCountdownProgressed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaKeepPlayingTogetherScreenOverlay.OnMatchmakingUpdate (Has no native function)
	void OnMatchmakingUpdate(struct FTimespan*& ElapsedTime); // (Event | Protected | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaKeepPlayingTogetherScreenOverlay.OnMatchmakingStarted (Has no native function)
	void OnMatchmakingStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaKeepPlayingTogetherScreenOverlay.OnMatchmakingFinished (Has no native function)
	void OnMatchmakingFinished(bool& bSuccess); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaKeepPlayingTogetherScreenOverlay.OnMatchmakingErrorMessage (Has no native function)
	void OnMatchmakingErrorMessage(struct FText& message); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaKeepPlayingTogetherScreenOverlay.OnMatchmakingCanceled (Has no native function)
	void OnMatchmakingCanceled(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaKeepPlayingTogetherScreenOverlay.OnKeepPlayingTogetherScreenOverlayDeactivated (Has no native function)
	void OnKeepPlayingTogetherScreenOverlayDeactivated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaKeepPlayingTogetherScreenOverlay.OnKeepPlayingTogetherScreenOverlayActivated (Has no native function)
	void OnKeepPlayingTogetherScreenOverlayActivated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaKeepPlayingTogetherScreenOverlay.OnExitToLobbyCountdownProgressed (Has no native function)
	void OnExitToLobbyCountdownProgressed(float& CountdownValue); // (Event | Protected | BlueprintEvent)
};


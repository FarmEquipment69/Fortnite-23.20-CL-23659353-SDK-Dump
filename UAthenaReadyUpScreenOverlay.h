// Class /Script/FortniteUI.AthenaReadyUpScreenOverlay
// Size: 0x358
class UAthenaReadyUpScreenOverlay : public UCommonUserWidget
{
	float ToLobbyDelayOnError; // 0x290 (0x4)
	unsigned char unreflected_294[0x4]; // 0x294 (0x4) 
	class UCommonButtonBase* ButtonCancel; // 0x298 (0x8)
	class UCommonButtonBase* ButtonStartMatch; // 0x2a0 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherMatchmakingStatus; // 0x2a8 (0x8)
	class UPanelWidget* ContainerCountdownStatus; // 0x2b0 (0x8)
	class UPanelWidget* ContainerFindingMatchStatus; // 0x2b8 (0x8)
	class UPanelWidget* ContainerError; // 0x2c0 (0x8)
	class UPanelWidget* ContainerWaiting; // 0x2c8 (0x8)
	class UPanelWidget* ContainerNoStatus; // 0x2d0 (0x8)
	class UCommonTextBlock* TextMatchmakingElapsed; // 0x2d8 (0x8)
	class UCommonTextBlock* TextCountdownCurrent; // 0x2e0 (0x8)
	class UCommonTextBlock* TextCountdownNext; // 0x2e8 (0x8)
	class UAthenaPreserveSquadButton* ButtonStayTogether; // 0x2f0 (0x8)
	class UCommonTextBlock* TextPartyKPTStatus; // 0x2f8 (0x8)
	unsigned char unreflected_300[0x10]; // 0x300 (0x10) 
	struct TArray<class UAthenaIGMPartyMemberWidget*> PartyWidgets; // 0x310 (0x10)
	unsigned char padding_320[0x38]; // 0x320 (0x38)

	/* Functions */

	// Function /Script/FortniteUI.AthenaReadyUpScreenOverlay.OnReadyUp (Has no native function)
	void OnReadyUp(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaReadyUpScreenOverlay.OnMatchmakingUpdate (Has no native function)
	void OnMatchmakingUpdate(struct FTimespan*& ElapsedTime); // (Event | Protected | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaReadyUpScreenOverlay.OnMatchmakingStarted (Has no native function)
	void OnMatchmakingStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaReadyUpScreenOverlay.OnMatchmakingFinished (Has no native function)
	void OnMatchmakingFinished(bool& bSuccess); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaReadyUpScreenOverlay.OnMatchmakingErrorMessage (Has no native function)
	void OnMatchmakingErrorMessage(struct FText& message); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaReadyUpScreenOverlay.OnMatchmakingCancelled (Has no native function)
	void OnMatchmakingCancelled(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaReadyUpScreenOverlay.OnExitToLobbyCountdownProgressed (Has no native function)
	void OnExitToLobbyCountdownProgressed(float& CountdownValue); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaReadyUpScreenOverlay.OnCountdownStarted (Has no native function)
	void OnCountdownStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaReadyUpScreenOverlay.OnCountdownProgressed (Has no native function)
	void OnCountdownProgressed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaReadyUpScreenOverlay.OnCancelReadyUp (Has no native function)
	void OnCancelReadyUp(); // (Event | Protected | BlueprintEvent)
};


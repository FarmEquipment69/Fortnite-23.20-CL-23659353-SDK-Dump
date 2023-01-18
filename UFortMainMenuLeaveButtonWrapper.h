// Class /Script/FortniteUI.FortMainMenuLeaveButtonWrapper
// Size: 0x2c8
class UFortMainMenuLeaveButtonWrapper : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	class UCommonButtonBase* ButtonInternal; // 0x298 (0x8)
	unsigned char padding_2a0[0x28]; // 0x2a0 (0x28)

	/* Functions */

	// Function /Script/FortniteUI.FortMainMenuLeaveButtonWrapper.OnTimerVisibilityChanged (Has no native function)
	void OnTimerVisibilityChanged(enum ESlateVisibility& InVisibility); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortMainMenuLeaveButtonWrapper.OnTimerTextChanged (Has no native function)
	void OnTimerTextChanged(struct FText& Text); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortMainMenuLeaveButtonWrapper.OnTextChanged (Has no native function)
	void OnTextChanged(struct FText& Text); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortMainMenuLeaveButtonWrapper.HandleLobbyStarted (Underlying native function: HandleLobbyStarted 0x2d15174)
	void HandleLobbyStarted(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortMainMenuLeaveButtonWrapper.HandleLobbyDisconnected (Underlying native function: HandleLobbyDisconnected 0x2d15174)
	void HandleLobbyDisconnected(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortMainMenuLeaveButtonWrapper.GetConfirmationMessageText (Underlying native function: GetConfirmationMessageText 0xa7c2f18)
	struct FText GetConfirmationMessageText(); // (Final | Native | Public | BlueprintCallable)
};


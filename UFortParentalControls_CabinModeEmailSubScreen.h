// Class /Script/FortniteUI.FortParentalControls_CabinModeEmailSubScreen
// Size: 0x450
class UFortParentalControls_CabinModeEmailSubScreen : public UFortParentalControlsSubScreen
{
	class UOverlay* OverlayEmailEntry; // 0x3b8 (0x8)
	class UCommonTextBlock* TextWarning; // 0x3c0 (0x8)
	class UCommonTextBlock* TextMainDescription; // 0x3c8 (0x8)
	class UCommonButtonBase* ButtonDone; // 0x3d0 (0x8)
	class UCommonButtonBase* ButtonCancel; // 0x3d8 (0x8)
	class UFortCTAButton* ButtonResendEmail; // 0x3e0 (0x8)
	class UFortCTAButton* ButtonEditEmail; // 0x3e8 (0x8)
	class UFortInputField* InputFieldEmail; // 0x3f0 (0x8)
	class UCommonTextBlock* TextEmail; // 0x3f8 (0x8)
	unsigned char padding_400[0x50]; // 0x400 (0x50)

	/* Functions */

	// Function /Script/FortniteUI.FortParentalControls_CabinModeEmailSubScreen.OnShowFailureReason (Has no native function)
	void OnShowFailureReason(struct FText& ErrorText); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortParentalControls_CabinModeEmailSubScreen.OnScreenStateChange (Has no native function)
	void OnScreenStateChange(enum EParentalControlsCabinEmailViewState& NewState); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortParentalControls_CabinModeEmailSubScreen.OnChangeEmailEditMode (Has no native function)
	void OnChangeEmailEditMode(bool& bIsInEditMode); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortParentalControls_CabinModeEmailSubScreen.HandleConfirmEmail (Underlying native function: HandleConfirmEmail 0xa798f40)
	void HandleConfirmEmail(struct FText& NewText, struct TEnumAsByte<ETextCommit>& CommitInfo); // (Final | Native | Protected | HasOutParms)
};


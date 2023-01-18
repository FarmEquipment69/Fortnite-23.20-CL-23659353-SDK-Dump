// Class /Script/FortniteUI.FortAccountPinLinkingWindow
// Size: 0x618
class UFortAccountPinLinkingWindow : public UFortActivatablePanel
{
	unsigned char unreflected_518[0x90]; // 0x518 (0x90) 
	class UCommonWidgetSwitcherLegacy* SwitcherMain; // 0x5a8 (0x8)
	class UBackgroundBlur* BlurPinGrantCodeInfo; // 0x5b0 (0x8)
	class UBackgroundBlur* BlurInitialRequest; // 0x5b8 (0x8)
	class UBackgroundBlur* BlurSkipSignIn; // 0x5c0 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherNoThanks; // 0x5c8 (0x8)
	class UCircularThrobber* ThrobberLoginDelay; // 0x5d0 (0x8)
	class UCommonButtonLegacy* ButtonCreateEpicAccount; // 0x5d8 (0x8)
	class UCommonButtonLegacy* ButtonGoLinking; // 0x5e0 (0x8)
	class UCommonButtonLegacy* ButtonSkipLinking; // 0x5e8 (0x8)
	class UCommonButtonLegacy* ButtonCancelPinRequest; // 0x5f0 (0x8)
	class UCommonButtonLegacy* ButtonSkipGoBackLinking; // 0x5f8 (0x8)
	class UCommonButtonLegacy* ButtonSkipSignInNoThanks; // 0x600 (0x8)
	class UHorizontalBox* ContainerCreateEpicAccount; // 0x608 (0x8)
	class UFortPinGrantCodeInfoWidget* PinGrantCodeInfoWidget; // 0x610 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortAccountPinLinkingWindow.UpdateExpiringTime (Underlying native function: UpdateExpiringTime 0xa6b6588)
	void UpdateExpiringTime(int& RemainingTime); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortAccountPinLinkingWindow.ShowPinLoading (Underlying native function: ShowPinLoading 0x61d21e0)
	void ShowPinLoading(); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortAccountPinLinkingWindow.ShowCurrentPinInfo (Underlying native function: ShowCurrentPinInfo 0xa6b5f80)
	void ShowCurrentPinInfo(); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortAccountPinLinkingWindow.SetPinGrantInfo (Underlying native function: SetPinGrantInfo 0xa6b55f8)
	void SetPinGrantInfo(struct FString& PinCode, struct FString& ActivationURL, struct FText& InfoText); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteUI.FortAccountPinLinkingWindow.SetInitialSection (Underlying native function: SetInitialSection 0xa6b51ac)
	void SetInitialSection(); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortAccountPinLinkingWindow.PinCodeIssue (Underlying native function: PinCodeIssue 0xa6b4838)
	void PinCodeIssue(struct FText& ErrorMessage, struct FText& InfoText); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteUI.FortAccountPinLinkingWindow.HandleSkipNoThanksClicked (Underlying native function: HandleSkipNoThanksClicked 0xa6b3f3c)
	void HandleSkipNoThanksClicked(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortAccountPinLinkingWindow.HandleSkipLinkingClicked (Underlying native function: HandleSkipLinkingClicked 0xa6b3f14)
	void HandleSkipLinkingClicked(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortAccountPinLinkingWindow.HandleLinkAccountClicked (Underlying native function: HandleLinkAccountClicked 0xa6b38c0)
	void HandleLinkAccountClicked(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortAccountPinLinkingWindow.HandleGoBackToInitialRequest (Underlying native function: HandleGoBackToInitialRequest 0xa6b3798)
	void HandleGoBackToInitialRequest(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortAccountPinLinkingWindow.HandleGenerateCodeClicked (Underlying native function: HandleGenerateCodeClicked 0xa6b3784)
	void HandleGenerateCodeClicked(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortAccountPinLinkingWindow.HandleCreateAccountClicked (Underlying native function: HandleCreateAccountClicked 0xa6b3770)
	void HandleCreateAccountClicked(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortAccountPinLinkingWindow.HandleCancelPinRequestClicked (Underlying native function: HandleCancelPinRequestClicked 0xa6b375c)
	void HandleCancelPinRequestClicked(); // (Final | Native | Protected)

	// DelegateFunction /Script/FortniteUI.FortAccountPinLinkingWindow.FortNewPlatformReceipt__DelegateSignature (Has no native function)
	void FortNewPlatformReceiptDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortAccountPinLinkingWindow.CreateHeadlessAccount (Underlying native function: CreateHeadlessAccount 0xa6b1d60)
	void CreateHeadlessAccount(); // (Final | Native | Public)
};


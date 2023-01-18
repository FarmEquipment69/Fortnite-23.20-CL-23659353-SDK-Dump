// Class /Script/FortniteUI.FortAccountLinkingWindow
// Size: 0x5e0
class UFortAccountLinkingWindow : public UFortActivatablePanel
{
	unsigned char unreflected_518[0x70]; // 0x518 (0x70) 
	class UCommonWidgetSwitcherLegacy* SwitcherMain; // 0x588 (0x8)
	class UBackgroundBlur* HaveEpicAccountBlur; // 0x590 (0x8)
	class UBackgroundBlur* SkipSignInBlur; // 0x598 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherNoThanks; // 0x5a0 (0x8)
	class UCircularThrobber* ThrobberLoginDelay; // 0x5a8 (0x8)
	class UCommonButtonLegacy* ButtonSignup; // 0x5b0 (0x8)
	class UCommonButtonLegacy* ButtonLogin; // 0x5b8 (0x8)
	class UCommonButtonLegacy* ButtonNoThanks; // 0x5c0 (0x8)
	class UCommonButtonLegacy* ButtonSkipSignInSignup; // 0x5c8 (0x8)
	class UCommonButtonLegacy* ButtonSkipSignInLogin; // 0x5d0 (0x8)
	class UCommonButtonLegacy* ButtonSkipSignInNoThanks; // 0x5d8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortAccountLinkingWindow.HandleSkipSignUpClicked (Underlying native function: HandleSkipSignUpClicked 0xa6b3f00)
	void HandleSkipSignUpClicked(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortAccountLinkingWindow.HandleSkipNoThanksClicked (Underlying native function: HandleSkipNoThanksClicked 0xa6b3f28)
	void HandleSkipNoThanksClicked(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortAccountLinkingWindow.HandleSkipLoginClicked (Underlying native function: HandleSkipLoginClicked 0xa6b38d4)
	void HandleSkipLoginClicked(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortAccountLinkingWindow.HandleSignupClicked (Underlying native function: HandleSignupClicked 0xa6b3f00)
	void HandleSignupClicked(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortAccountLinkingWindow.HandleNoThanksClicked (Underlying native function: HandleNoThanksClicked 0xa6b3eec)
	void HandleNoThanksClicked(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortAccountLinkingWindow.HandleLoginClicked (Underlying native function: HandleLoginClicked 0xa6b38d4)
	void HandleLoginClicked(); // (Final | Native | Protected)

	// DelegateFunction /Script/FortniteUI.FortAccountLinkingWindow.FortNewPlatformReceipt__DelegateSignature (Has no native function)
	void FortNewPlatformReceiptDelegateSignature(); // (MulticastDelegate | Public | Delegate)
};


// Class /Script/FortniteUI.FortLoginInteractions
// Size: 0x508
class UFortLoginInteractions : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x70]; // 0x3a8 (0x70) 
	class UCommonButtonLegacy* ButtonBack; // 0x418 (0x8)
	class UCommonActivatableWidgetSwitcher* SwitcherInput; // 0x420 (0x8)
	class USpacer* SpacerDefault; // 0x428 (0x8)
	unsigned char unreflected_430[0x8]; // 0x430 (0x8) 
	class UFortPlayedBeforeSelect* PlayedBeforeSelect; // 0x438 (0x8)
	unsigned char unreflected_440[0x8]; // 0x440 (0x8) 
	class UFortLoginCredentialSelect* CredentialSelect; // 0x448 (0x8)
	unsigned char unreflected_450[0x8]; // 0x450 (0x8) 
	class UFortSignInWidget* SignInCredentials; // 0x458 (0x8)
	unsigned char unreflected_460[0x8]; // 0x460 (0x8) 
	class UFortAccountNotFound* AccountNotFound; // 0x468 (0x8)
	unsigned char unreflected_470[0x8]; // 0x470 (0x8) 
	class UFortDisplayNameWidget* DisplayNameCreate; // 0x478 (0x8)
	unsigned char unreflected_480[0x8]; // 0x480 (0x8) 
	class UFortMultiFactorAuthWidget* MFAAuth; // 0x488 (0x8)
	unsigned char unreflected_490[0x8]; // 0x490 (0x8) 
	class UFortEulaWidget* EULAAccept; // 0x498 (0x8)
	unsigned char unreflected_4a0[0x8]; // 0x4a0 (0x8) 
	class UFortAccountLinkingWindow* AccountLink; // 0x4a8 (0x8)
	unsigned char unreflected_4b0[0x8]; // 0x4b0 (0x8) 
	class UFortAccountPinLinkingWindow* AccountPinLink; // 0x4b8 (0x8)
	unsigned char unreflected_4c0[0x8]; // 0x4c0 (0x8) 
	class UFortWebLoginWidget* WebLogin; // 0x4c8 (0x8)
	unsigned char unreflected_4d0[0x8]; // 0x4d0 (0x8) 
	class UFortAgeGateFlow* AgeGateFlow; // 0x4d8 (0x8)
	unsigned char unreflected_4e0[0x8]; // 0x4e0 (0x8) 
	class UFortCorrectiveActionDateOfBirthScreen* AgeGateScreen; // 0x4e8 (0x8)
	unsigned char unreflected_4f0[0x8]; // 0x4f0 (0x8) 
	class UFortCorrectiveActionFlow* CorrectiveActionFlow; // 0x4f8 (0x8)
	unsigned char padding_500[0x8]; // 0x500 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortLoginInteractions.HandleDisplayWebLogin (Underlying native function: HandleDisplayWebLogin 0xa7995b0)
	void HandleDisplayWebLogin(class UWidget*& WebWidget); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortLoginInteractions.HandleDisplayWebAccountCreation (Underlying native function: HandleDisplayWebAccountCreation 0xa799530)
	void HandleDisplayWebAccountCreation(class UWidget*& WebWidget); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortLoginInteractions.HandleDismissWebLogin (Underlying native function: HandleDismissWebLogin 0xa79951c)
	void HandleDismissWebLogin(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortLoginInteractions.HandleDismissWebAccountCreation (Underlying native function: HandleDismissWebAccountCreation 0xa79951c)
	void HandleDismissWebAccountCreation(); // (Final | Native | Private)
};


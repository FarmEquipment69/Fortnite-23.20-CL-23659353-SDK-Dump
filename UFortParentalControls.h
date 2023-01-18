// Class /Script/FortniteUI.FortParentalControls
// Size: 0x5c0
class UFortParentalControls : public UFortActivatablePanel
{
	class UFortSettingDetailView* DetailsSettings; // 0x518 (0x8)
	class UCommonButtonLegacy* ButtonCloseScreen; // 0x520 (0x8)
	class UCommonButtonLegacy* ButtonCloseMobile; // 0x528 (0x8)
	class UCommonActivatableWidgetSwitcher* SwitcherSubViews; // 0x530 (0x8)
	class UFortParentalControls_EnterPin* SubViewEnterPin; // 0x538 (0x8)
	class UFortParentalControls_SetupPin* SubViewSetupPin; // 0x540 (0x8)
	class UFortParentalControls_AskToEnableControls* SubViewAskToEnableControls; // 0x548 (0x8)
	class UFortParentalControls_VerifyEmail* SubViewVerifyEmail; // 0x550 (0x8)
	class UFortParentalControls_SetupEmail* SubViewSetupEmail; // 0x558 (0x8)
	class UFortParentalControls_DisplaySettings* SubViewDisplaySettings; // 0x560 (0x8)
	class UFortParentalControls_DisableParentalControls* SubViewDisableParentalControls; // 0x568 (0x8)
	class UFortParentalControls_AskToReEnable* SubViewAskToReEnable; // 0x570 (0x8)
	class UFortParentalControls_Renabling* SubViewRenabling; // 0x578 (0x8)
	class UOverlay* OverlaySavingSettings; // 0x580 (0x8)
	class UFortParentalControlsUpdatedBase* UpdateNotice; // 0x588 (0x8)
	class UFortParentalControls_CabinModeEmailSubScreen* SubViewCabinModeEmailChange; // 0x590 (0x8)
	unsigned char padding_598[0x28]; // 0x598 (0x28)

	/* Functions */

	// Function /Script/FortniteUI.FortParentalControls.OnNewSubScreenSet (Has no native function)
	void OnNewSubScreenSet(enum EParentalControlsViewState& ScreenState); // (Event | Protected | BlueprintEvent)
};


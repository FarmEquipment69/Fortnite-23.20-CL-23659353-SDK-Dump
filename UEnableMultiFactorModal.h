// Class /Script/FortniteUI.EnableMultiFactorModal
// Size: 0x588
class UEnableMultiFactorModal : public UFortActivatablePanel
{
	bool bHasEnableMFABeenClicked; // 0x518 (0x1)
	bool bShouldShowConsoleVersion; // 0x519 (0x1)
	unsigned char unreflected_51a[0x2e]; // 0x51a (0x2e) 
	class UCommonButtonLegacy* ButtonEnableMFA; // 0x548 (0x8)
	class UCommonButtonLegacy* ButtonRemindLater; // 0x550 (0x8)
	class UCommonButtonLegacy* ButtonOptOut; // 0x558 (0x8)
	class UCommonButtonLegacy* ButtonConsoleMFAEnabled; // 0x560 (0x8)
	class UCommonTextBlock* CTMFADescription; // 0x568 (0x8)
	unsigned char padding_570[0x18]; // 0x570 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.EnableMultiFactorModal.QueueModal (Underlying native function: QueueModal 0xa79a524)
	bool QueueModal(bool& bAllowPermanentOptOut, bool& bTournamentQueue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.EnableMultiFactorModal.OnSetScreenConfiguration (Has no native function)
	void OnSetScreenConfiguration(bool& bIsConsole); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.EnableMultiFactorModal.OnSetExitButtonText (Has no native function)
	void OnSetExitButtonText(struct FText& NewButtonText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.EnableMultiFactorModal.OnConsoleDisplayURLProvided (Has no native function)
	void OnConsoleDisplayURLProvided(struct FText& UniquePlayerURLText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.EnableMultiFactorModal.AnimationsComplete (Underlying native function: AnimationsComplete 0xa7982b8)
	void AnimationsComplete(); // (Final | Native | Protected | BlueprintCallable)
};


// Class /Script/FortniteUI.RebootRallyQRModalWidget
// Size: 0x3c8
class URebootRallyQRModalWidget : public UCommonActivatableWidget
{
	class UFortPopupModal* WBPPopupModal; // 0x3a8 (0x8)
	class UCommonButtonLegacy* BackgroundCloseButton; // 0x3b0 (0x8)
	class UBacchusCloseButton* ButtonMobileClose; // 0x3b8 (0x8)
	class URebootRallyQRCode* WBPRebootRallyPopupModalQRCode; // 0x3c0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.RebootRallyQRModalWidget.OnSetIsInvite (Has no native function)
	void OnSetIsInvite(bool& bIsInvited); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.RebootRallyQRModalWidget.OnRebootRallyEligibilityUpdated (Has no native function)
	void OnRebootRallyEligibilityUpdated(bool& bEligible); // (Event | Public | BlueprintEvent)
};


// Class /Script/PictureInPictureUI.PictureInPictureBladeMenuButton
// Size: 0x1430
class UPictureInPictureBladeMenuButton : public UCommonButtonLegacy
{

	/* Functions */

	// Function /Script/PictureInPictureUI.PictureInPictureBladeMenuButton.UpdatePiPStatusBP (Has no native function)
	void UpdatePiPStatusBP(bool& LoggedIn, bool& Enabled, bool& ParentalControlsEnabled); // (Event | Public | BlueprintEvent)

	// Function /Script/PictureInPictureUI.PictureInPictureBladeMenuButton.OnPartnerListUpdated (Underlying native function: OnPartnerListUpdated 0x1d9c1cc)
	void OnPartnerListUpdated(); // (Final | Native | Private)

	// Function /Script/PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPLogoutSuccess (Underlying native function: HandlePiPLogoutSuccess 0x2da9fc0)
	void HandlePiPLogoutSuccess(); // (Final | Native | Public)

	// Function /Script/PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPLoginSuccess (Underlying native function: HandlePiPLoginSuccess 0x2da9fc0)
	void HandlePiPLoginSuccess(); // (Final | Native | Public)

	// Function /Script/PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPEnabled (Underlying native function: HandlePiPEnabled 0x752040c)
	void HandlePiPEnabled(bool& Enabled); // (Final | Native | Public)
};


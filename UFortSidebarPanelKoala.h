// Class /Script/KoalaUI.FortSidebarPanelKoala
// Size: 0x3e0
class UFortSidebarPanelKoala : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x18]; // 0x3a8 (0x18) 
	class UCommonButtonBase* ButtonKoalaDummy; // 0x3c0 (0x8)
	class UFortLazyImage* QrCodeImage; // 0x3c8 (0x8)
	struct FString QRCodeURL; // 0x3d0 (0x10)

	/* Functions */

	// Function /Script/KoalaUI.FortSidebarPanelKoala.OnConnectionChanged (Has no native function)
	void OnConnectionChanged(bool& bConnected); // (Event | Protected | BlueprintEvent)
};


// Class /Script/FortniteUI.CMSBackgroundWidget
// Size: 0x3e8
class UCMSBackgroundWidget : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x18]; // 0x3a8 (0x18) 
	float OlderBackgroundStreamoutSeconds; // 0x3c0 (0x4)
	bool bDeactivateOnClose; // 0x3c4 (0x1)
	unsigned char unreflected_3c5[0x3]; // 0x3c5 (0x3) 
	class UImage* ImageBackground; // 0x3c8 (0x8)
	class UCommonButtonBase* ButtonClose; // 0x3d0 (0x8)
	class UCommonButtonBase* ButtonMobileClose; // 0x3d8 (0x8)
	unsigned char padding_3e0[0x8]; // 0x3e0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.CMSBackgroundWidget.OnStartingDownloadBackground (Has no native function)
	void OnStartingDownloadBackground(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.CMSBackgroundWidget.OnDownloadBackgroundComplete (Has no native function)
	void OnDownloadBackgroundComplete(class UTexture2D*& NewBackground); // (Event | Protected | BlueprintEvent)
};


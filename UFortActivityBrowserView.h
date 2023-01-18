// Class /Script/DiscoveryBrowserUI.FortActivityBrowserView
// Size: 0x488
class UFortActivityBrowserView : public UFortActivityView
{
	unsigned char unreflected_3f8[0x8]; // 0x3f8 (0x8) 
	bool bShowCustomMatchmakingModalButton; // 0x400 (0x1)
	bool bShowSpectateMatchModalButton; // 0x401 (0x1)
	bool bShowMobileGameDetailsButton; // 0x402 (0x1)
	bool bShowMobileAcceptButton; // 0x403 (0x1)
	bool bShowBackToTopButton; // 0x404 (0x1)
	unsigned char unreflected_405[0x3]; // 0x405 (0x3) 
	struct FName DiscoverySurfaceName; // 0x408 (0x4)
	unsigned char padding_40c[0x7c]; // 0x40c (0x7c)

	/* Functions */

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserView.OnSurfaceDataDirty (Has no native function)
	void OnSurfaceDataDirty(); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserView.GetInvalidActivityReason (Underlying native function: GetInvalidActivityReason 0x7420e10)
	enum EFortInvalidActivityReason GetInvalidActivityReason(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};


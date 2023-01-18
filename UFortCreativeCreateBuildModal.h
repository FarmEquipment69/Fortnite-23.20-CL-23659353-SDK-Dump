// Class /Script/FortniteUI.FortCreativeCreateBuildModal
// Size: 0x428
class UFortCreativeCreateBuildModal : public UCommonActivatableWidget
{
	class UCommonAnimatedSwitcher* SwitcherContent; // 0x3a8 (0x8)
	class UPanelWidget* PanelCreateBuild; // 0x3b0 (0x8)
	class UPanelWidget* PanelCreateBuildInProgress; // 0x3b8 (0x8)
	class UPanelWidget* PanelCreateBuildSucceeded; // 0x3c0 (0x8)
	class UPanelWidget* PanelCreateBuildFailed; // 0x3c8 (0x8)
	class UCommonButtonBase* ButtonPrimaryFunction; // 0x3d0 (0x8)
	class UCommonButtonBase* ButtonMobileClose; // 0x3d8 (0x8)
	class UCommonButtonBase* ButtonCopyMnemonic; // 0x3e0 (0x8)
	class UCommonTextBlock* TextCreatorPortalUrl; // 0x3e8 (0x8)
	class UCommonTextBlock* TextMnemonic; // 0x3f0 (0x8)
	class UCommonTextBlock* TextCreateBuildError; // 0x3f8 (0x8)
	class UFortLazyImage* LazyImageCreatorPortalQrCode; // 0x400 (0x8)
	bool bCreateBuildInProgress; // 0x408 (0x1)
	unsigned char unreflected_409[0x7]; // 0x409 (0x7) 
	struct FString CreatedMnemonic; // 0x410 (0x10)
	unsigned char padding_420[0x8]; // 0x420 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeCreateBuildModal.OnQrCodeImageUpdated (Has no native function)
	void OnQrCodeImageUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeCreateBuildModal.OnMnemonicCopied (Has no native function)
	void OnMnemonicCopied(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeCreateBuildModal.OnCreateBuildSucceeded (Has no native function)
	void OnCreateBuildSucceeded(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeCreateBuildModal.OnCreateBuildStarted (Has no native function)
	void OnCreateBuildStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeCreateBuildModal.OnCreateBuildFailed (Has no native function)
	void OnCreateBuildFailed(struct FString& ErrorCode); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeCreateBuildModal.OnContentSwitcherTransitioningChanged (Has no native function)
	void OnContentSwitcherTransitioningChanged(bool& bIsTransitioning); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeCreateBuildModal.OnContentSwitcherActiveWidgetChanged (Has no native function)
	void OnContentSwitcherActiveWidgetChanged(class UWidget*& ActiveWidget); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeCreateBuildModal.BP_Reset (Has no native function)
	void BPReset(); // (Event | Protected | BlueprintEvent)
};


// Class /Script/FortniteUI.AthenaDynamicReloadMtxScreenLegacy
// Size: 0x770
class UAthenaDynamicReloadMtxScreenLegacy : public UAthenaReloadMtxScreenBaseLegacy
{
	class UCommonTextBlock* TextTotalNeeded; // 0x700 (0x8)
	class UCommonTextBlock* TextCurrentBalance; // 0x708 (0x8)
	class UCommonVisibilitySwitcher* SwitcherDynamicOptions; // 0x710 (0x8)
	class UAthenaStarterKitOfferButtonLegacy* ButtonStarterKitOption; // 0x718 (0x8)
	class UOverlay* OverlayMtxRequired; // 0x720 (0x8)
	class UOverlay* OverlayStarterKit; // 0x728 (0x8)
	class UAthenaDynamicMtxOfferButtonLegacy* ButtonMtxRequiredOption; // 0x730 (0x8)
	class UAthenaStaticMtxOfferButtonLegacy* ButtonMtxOtherOption; // 0x738 (0x8)
	class UCommonButtonLegacy* ButtonMoreOptions; // 0x740 (0x8)
	struct TArray<struct FName> StorefrontNames; // 0x748 (0x10)
	class UAthenaReloadMtxScreenLegacy* StaticReloadMtxScreen; // 0x758 (0x8)
	class UCommonButtonLegacy* MtxRequiredButtonToFocus; // 0x760 (0x8)
	unsigned char padding_768[0x8]; // 0x768 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaDynamicReloadMtxScreenLegacy.GetMtxRequiredButtonToFocus (Underlying native function: GetMtxRequiredButtonToFocus 0xa57cd30)
	class UWidget* GetMtxRequiredButtonToFocus(enum EUINavigation& InNavigation); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};


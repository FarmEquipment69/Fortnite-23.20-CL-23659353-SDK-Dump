// Class /Script/FortniteUI.AthenaReloadMtxScreenLegacy
// Size: 0x750
class UAthenaReloadMtxScreenLegacy : public UAthenaReloadMtxScreenBaseLegacy
{
	unsigned char unreflected_700[0x10]; // 0x700 (0x10) 
	class UAthenaStarterKitOfferButtonLegacy* ButtonStarterKitOption; // 0x710 (0x8)
	class UCommonListView* ListViewMtxOptions; // 0x718 (0x8)
	class UCommonVisibilitySwitcher* SwitcherAvailableOptions; // 0x720 (0x8)
	class UOverlay* OverlayAvailableOptions; // 0x728 (0x8)
	class UOverlay* OverlayNoOptions; // 0x730 (0x8)
	unsigned char padding_738[0x18]; // 0x738 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.AthenaReloadMtxScreenLegacy.GetWidgetToFocusFromOfferList (Underlying native function: GetWidgetToFocusFromOfferList 0xa57d2cc)
	class UWidget* GetWidgetToFocusFromOfferList(enum EUINavigation& InNavigation); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};


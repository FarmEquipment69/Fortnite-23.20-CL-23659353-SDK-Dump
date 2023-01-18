// Class /Script/FortniteUI.FortEulaTab
// Size: 0x3e8
class UFortEulaTab : public UCommonActivatableWidget
{
	struct FString EULAKeyToShow; // 0x3a8 (0x10)
	unsigned char unreflected_3b8[0x10]; // 0x3b8 (0x10) 
	class UFortRichTextBlockLegacy* TextEULA; // 0x3c8 (0x8)
	class UWidgetSwitcher* SwitcherTextSpinner; // 0x3d0 (0x8)
	class UScrollBox* ScrollBoxEULAText; // 0x3d8 (0x8)
	class UImage* ImageSpinner; // 0x3e0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortEulaTab.HandleDownloadEULAComplete (Underlying native function: HandleDownloadEULAComplete 0xa73c998)
	void HandleDownloadEULAComplete(bool& bSuccessful, struct FText& EULAText, struct FString& Key); // (Final | Native | Private)
};


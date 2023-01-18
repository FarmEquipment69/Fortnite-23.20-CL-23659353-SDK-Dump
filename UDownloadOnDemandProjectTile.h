// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectTile
// Size: 0x1620
class UDownloadOnDemandProjectTile : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x10]; // 0x1430 (0x10) 
	struct FSlateBrush SelectedHighlightBrush; // 0x1440 (0xc0)
	struct FSlateBrush HoveredHighlightBrush; // 0x1500 (0xc0)
	bool bIsSelected; // 0x15c0 (0x1)
	unsigned char unreflected_15c1[0x7]; // 0x15c1 (0x7) 
	class UDownloadOnDemandProject* Project; // 0x15c8 (0x8)
	unsigned char unreflected_15d0[0x10]; // 0x15d0 (0x10) 
	class UDownloadOnDemandProjectTileImage* ProjectTileImagePreview; // 0x15e0 (0x8)
	class UImage* ImageUpdatePending; // 0x15e8 (0x8)
	class UImage* ImageAddProject; // 0x15f0 (0x8)
	class UImage* ImageSpinner; // 0x15f8 (0x8)
	class UImage* ImageError; // 0x1600 (0x8)
	class USizeBox* SizeBoxLabel; // 0x1608 (0x8)
	class UCommonTextBlock* TextBlockLabel; // 0x1610 (0x8)
	class UCommonBorder* BorderHighlight; // 0x1618 (0x8)

	/* Functions */

	// Function /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectTile.UpdateLabel (Underlying native function: UpdateLabel 0x77cba68)
	void UpdateLabel(bool& bShowLabel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectTile.OnLabelUpdated (Has no native function)
	void OnLabelUpdated(); // (Event | Protected | BlueprintEvent)
};


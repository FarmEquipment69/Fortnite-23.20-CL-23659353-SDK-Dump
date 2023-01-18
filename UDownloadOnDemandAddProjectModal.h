// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal
// Size: 0x3f0
class UDownloadOnDemandAddProjectModal : public UCommonActivatableWidget
{
	class UDownloadOnDemandProject* Project; // 0x3a8 (0x8)
	unsigned char unreflected_3b0[0x10]; // 0x3b0 (0x10) 
	class UEditableTextBox* EditableTextBoxDownloadLinkCode; // 0x3c0 (0x8)
	class UCommonButtonLegacy* ButtonAddProject; // 0x3c8 (0x8)
	class UCommonButtonLegacy* ButtonCancel; // 0x3d0 (0x8)
	class UDownloadOnDemandProjectTileImage* ProjectTileImagePreview; // 0x3d8 (0x8)
	class UOverlay* OverlayProjectTitle; // 0x3e0 (0x8)
	class UCommonTextBlock* TextBlockProjectTitle; // 0x3e8 (0x8)

	/* Functions */

	// Function /Script/VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal.UpdateLightningViolator (Has no native function)
	void UpdateLightningViolator(enum ESlateVisibility& InVisibility, struct FText& InText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal.HandleDownloadLinkIdTextChanged (Underlying native function: HandleDownloadLinkIdTextChanged 0x77cb988)
	void HandleDownloadLinkIdTextChanged(struct FText& InputLinkCode); // (Final | Native | Private | HasOutParms)
};


// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab
// Size: 0x308
class UDownloadOnDemandProjectManagementTab : public UUserWidget
{
	unsigned char unreflected_268[0x30]; // 0x268 (0x30) 
	class UDownloadOnDemandProject* Project; // 0x298 (0x8)
	unsigned char unreflected_2a0[0x10]; // 0x2a0 (0x10) 
	class UCommonTextBlock* TextBlockProjectTitle; // 0x2b0 (0x8)
	class UCommonTextBlock* TextBlockLinkCode; // 0x2b8 (0x8)
	class UCommonTextBlock* TextBlockVersionNumber; // 0x2c0 (0x8)
	class UCommonTextBlock* TextBlockLatestVersionNumber; // 0x2c8 (0x8)
	class UImage* ImageLatestVersionSpinner; // 0x2d0 (0x8)
	class UCommonTextBlock* TextBlockDescription; // 0x2d8 (0x8)
	class UCommonButtonLegacy* ButtonRemoveProject; // 0x2e0 (0x8)
	class UCommonButtonLegacy* ButtonUpdateProject; // 0x2e8 (0x8)
	class UCommonVisibilitySwitcher* SwitcherProps; // 0x2f0 (0x8)
	class UCommonTileView* CommonTileViewProjectAssetTiles; // 0x2f8 (0x8)
	class UCommonTextBlock* TextBlockNoPropsMessage; // 0x300 (0x8)

	/* Functions */

	// Function /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab.UpdateProjectConfirmed (Underlying native function: UpdateProjectConfirmed 0x77cbae8)
	void UpdateProjectConfirmed(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab.RemoveProjectConfirmed (Underlying native function: RemoveProjectConfirmed 0x77cba44)
	void RemoveProjectConfirmed(); // (Final | Native | Protected | BlueprintCallable)
};


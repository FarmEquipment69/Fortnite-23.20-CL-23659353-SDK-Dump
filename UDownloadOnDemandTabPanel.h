// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandTabPanel
// Size: 0x498
class UDownloadOnDemandTabPanel : public UFortCreativeContentBrowserTabPanelBase
{
	struct FDataTableRowHandle AddProjectWithLinkCodeInputRowHandle; // 0x3f0 (0x10)
	struct FDataTableRowHandle AddSelectedProjectInputRowHandle; // 0x400 (0x10)
	struct FDataTableRowHandle ManageSelectedProjectInputRowHandle; // 0x410 (0x10)
	class UClass* DownloadOnDemandProjectDetailsSidePanelClass; // 0x420 (0x8)
	class UClass* DownloadOnDemandAddProjectModalClass; // 0x428 (0x8)
	class UClass* DownloadOnDemandMessageModalClass; // 0x430 (0x8)
	struct FString AddProjectsWithMnemonicEntitlementName; // 0x438 (0x10)
	class UDownloadOnDemandProject* SelectedProject; // 0x448 (0x8)
	unsigned char unreflected_450[0x10]; // 0x450 (0x10) 
	class UOverlay* OverlayAddProjectParent; // 0x460 (0x8)
	class UCommonTileView* CommonTileViewProjectTiles; // 0x468 (0x8)
	class UCommonVisibilitySwitcher* SwitcherDownloadOnDemandPanels; // 0x470 (0x8)
	class UCommonButtonLegacy* ButtonAddProject; // 0x478 (0x8)
	class UHorizontalBox* HorizontalBoxEntitlementCheckMessage; // 0x480 (0x8)
	class UHorizontalBox* HorizontalBoxEntitlementCheckFailed; // 0x488 (0x8)
	class UDownloadOnDemandProjectManagementTab* ProjectManagementTab; // 0x490 (0x8)
};


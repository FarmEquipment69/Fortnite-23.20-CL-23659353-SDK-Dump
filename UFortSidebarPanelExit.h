// Class /Script/FortniteUI.FortSidebarPanelExit
// Size: 0x3e8
class UFortSidebarPanelExit : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x10]; // 0x3a8 (0x10) 
	class UPanelWidget* PanelWidgetMainMenuButtons; // 0x3b8 (0x8)
	class UFortMainMenuButton* ButtonLeaveExperience; // 0x3c0 (0x8)
	class UFortMainMenuLeaveButtonWrapper* ButtonAthenaMainMenuLeave; // 0x3c8 (0x8)
	class UFortMainMenuButton* ButtonLogout; // 0x3d0 (0x8)
	class UFortMainMenuButton* ButtonExitGame; // 0x3d8 (0x8)
	class UCommonRichTextBlock* TextNoEnabledButtons; // 0x3e0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSidebarPanelExit.UpdateNoEnabledButtonsText (Has no native function)
	void UpdateNoEnabledButtonsText(bool& bAllowLogout, bool& bAllowQuit); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSidebarPanelExit.HandleLeaveExperienceClicked (Underlying native function: HandleLeaveExperienceClicked 0xa759b6c)
	void HandleLeaveExperienceClicked(); // (Final | Native | Protected)
};


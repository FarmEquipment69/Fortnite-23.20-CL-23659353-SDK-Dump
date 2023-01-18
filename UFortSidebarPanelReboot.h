// Class /Script/FortniteUI.FortSidebarPanelReboot
// Size: 0x420
class UFortSidebarPanelReboot : public UFortSidebarPanelWithTree
{
	class UCommonButtonBase* SidebarBackButton; // 0x3d8 (0x8)
	class UFortSidebarPanelRebootHeader* Header; // 0x3e0 (0x8)
	class URebootRallyTimerBase* WBPRebootRallyTimer; // 0x3e8 (0x8)
	class UFortSocialUserTreeView* UserTreeRebootRally; // 0x3f0 (0x8)
	unsigned char unreflected_3f8[0x10]; // 0x3f8 (0x10) 
	class UFortSidebarOnboardTooltipWidget* RebootRallyTooltip; // 0x408 (0x8)
	unsigned char padding_410[0x10]; // 0x410 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortSidebarPanelReboot.OnRebootRallyEligibilityUpdated (Has no native function)
	void OnRebootRallyEligibilityUpdated(bool& bEligible); // (Event | Public | BlueprintEvent)
};


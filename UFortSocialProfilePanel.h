// Class /Script/FortniteUI.FortSocialProfilePanel
// Size: 0x478
class UFortSocialProfilePanel : public USocialActionMenu
{
	unsigned char unreflected_3e8[0x10]; // 0x3e8 (0x10) 
	class UFortSocialProfileSubPanel* SubPanelIdentity; // 0x3f8 (0x8)
	class UFortSocialProfileSubPanel* SubPanelRegion; // 0x400 (0x8)
	class UFortSocialProfileSubPanel* SubPanelTags; // 0x408 (0x8)
	class UFortSocialProfileSubPanel* SubPanelPresence; // 0x410 (0x8)
	class UFortSocialProfileSubPanel* SubPanelActions; // 0x418 (0x8)
	class UFortSocialProfileSubPanel* SubPanelMutualFriends; // 0x420 (0x8)
	class UFortSocialProfileSubPanel* SubPanelMutualFriendsCount; // 0x428 (0x8)
	class UFortSocialProfileSubPanel* SubPanelRebootRallyText; // 0x430 (0x8)
	class UCommonButtonBase* SidebarBackButton; // 0x438 (0x8)
	class UScrollBox* ScrollBoxScrollablePanels; // 0x440 (0x8)
	unsigned char padding_448[0x30]; // 0x448 (0x30)

	/* Functions */

	// Function /Script/FortniteUI.FortSocialProfilePanel.OnStartProfileLoading (Has no native function)
	void OnStartProfileLoading(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSocialProfilePanel.OnFinishedProfileLoading (Has no native function)
	void OnFinishedProfileLoading(); // (Event | Protected | BlueprintEvent)
};


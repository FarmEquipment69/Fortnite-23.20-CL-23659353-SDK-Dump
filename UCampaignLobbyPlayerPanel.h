// Class /Script/FortniteUI.CampaignLobbyPlayerPanel
// Size: 0x598
class UCampaignLobbyPlayerPanel : public UFortLobbyPlayerPanel
{
	class UCommonButtonLegacy* ButtonShowHeadAccessory; // 0x580 (0x8)
	class UCommonButtonLegacy* ButtonShowBackpack; // 0x588 (0x8)
	class UCommonNumericTextBlock* NumberPowerLevel; // 0x590 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.CampaignLobbyPlayerPanel.OnShowHeadAccessoryChanged (Has no native function)
	void OnShowHeadAccessoryChanged(bool& bShowHeadAccessory); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.CampaignLobbyPlayerPanel.OnShowBackbackChanged (Has no native function)
	void OnShowBackbackChanged(bool& bShowBackpack); // (Event | Protected | BlueprintEvent)
};


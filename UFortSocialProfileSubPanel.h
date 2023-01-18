// Class /Script/FortniteUI.FortSocialProfileSubPanel
// Size: 0x2e0
class UFortSocialProfileSubPanel : public UCommonUserWidget
{
	unsigned char unreflected_290[0x18]; // 0x290 (0x18) 
	class UFortSocialProfileSubPanel_Loading* SubPanelLoading; // 0x2a8 (0x8)
	unsigned char padding_2b0[0x30]; // 0x2b0 (0x30)

	/* Functions */

	// Function /Script/FortniteUI.FortSocialProfileSubPanel.OnStartProfileLoading (Has no native function)
	void OnStartProfileLoading(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSocialProfileSubPanel.OnFinishedProfileLoading (Has no native function)
	void OnFinishedProfileLoading(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSocialProfileSubPanel.GetDesiredFocusTarget (Has no native function)
	class UWidget* GetDesiredFocusTarget(); // (Event | Protected | BlueprintEvent | Const)
};


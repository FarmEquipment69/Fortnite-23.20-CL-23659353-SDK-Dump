// Class /Script/FortniteUI.FortSocialImportPanel
// Size: 0x588
class UFortSocialImportPanel : public UFortActivatablePanel
{
	struct FMulticastInlineDelegate OnSocialImportPanelClosed; // 0x518 (0x10)
	unsigned char unreflected_528[0x28]; // 0x528 (0x28) 
	class UWidgetSwitcher* SwitcherAddFriends; // 0x550 (0x8)
	class UCommonButtonLegacy* ButtonImport; // 0x558 (0x8)
	class UCommonButtonLegacy* ButtonCancel; // 0x560 (0x8)
	class UCommonButtonLegacy* ButtonAdd; // 0x568 (0x8)
	class UCommonButtonLegacy* ButtonNotNow; // 0x570 (0x8)
	class UCommonButtonLegacy* ButtonOptOut; // 0x578 (0x8)
	class UBorder* BorderOuterBorder; // 0x580 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSocialImportPanel.ShowPanel (Underlying native function: ShowPanel 0xa75a390)
	void ShowPanel(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSocialImportPanel.OnWaitingViewRequested (Has no native function)
	void OnWaitingViewRequested(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSocialImportPanel.OnPanelTypeSet (Has no native function)
	void OnPanelTypeSet(enum ESocialImportPanelType& NewType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSocialImportPanel.OnLauncherImportOpened (Has no native function)
	void OnLauncherImportOpened(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSocialImportPanel.OnIncentivizedSet (Has no native function)
	void OnIncentivizedSet(bool& bIncentivized); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSocialImportPanel.OnImportViewRequested (Has no native function)
	void OnImportViewRequested(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSocialImportPanel.OnClaimViewRequested (Has no native function)
	void OnClaimViewRequested(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSocialImportPanel.GetSocialPlatform (Underlying native function: GetSocialPlatform 0xa7599e0)
	bool GetSocialPlatform(enum ESocialImportPanelPlatform& OutPlatform); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};


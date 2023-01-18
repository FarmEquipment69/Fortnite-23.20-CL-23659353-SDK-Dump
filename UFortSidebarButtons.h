// Class /Script/FortniteUI.FortSidebarButtons
// Size: 0x3b0
class UFortSidebarButtons : public UCommonUserWidget
{
	class UFortSocialSidebarButton* ButtonPartyUp; // 0x290 (0x8)
	class UFortSocialSidebarButton* ButtonFindFriends; // 0x298 (0x8)
	class UFortSocialSidebarButton* ButtonVoiceChat; // 0x2a0 (0x8)
	class UFortSocialSidebarButton* ButtonUserSettings; // 0x2a8 (0x8)
	class UFortSocialSidebarButton* ButtonExit; // 0x2b0 (0x8)
	class UFortSocialSidebarLocalUserButton* ButtonUserProfile; // 0x2b8 (0x8)
	class UFortSocialSidebarButton* ButtonTags; // 0x2c0 (0x8)
	class UCommonButtonGroupLegacy* ButtonGroupSocialButtons; // 0x2c8 (0x8)
	class UCommonButtonLegacy* ButtonCurrentlyHovered; // 0x2d0 (0x8)
	class UWidget* ButtonCurrentlyFocused; // 0x2d8 (0x8)
	unsigned char unreflected_2e0[0x48]; // 0x2e0 (0x48) 
	struct FDataTableRowHandle NextTabInputAction; // 0x328 (0x10)
	unsigned char unreflected_338[0x8]; // 0x338 (0x8) 
	struct FDataTableRowHandle PreviousTabInputAction; // 0x340 (0x10)
	unsigned char padding_350[0x60]; // 0x350 (0x60)

	/* Functions */

	// Function /Script/FortniteUI.FortSidebarButtons.HandleSettingsSavedTabChanged (Underlying native function: HandleSettingsSavedTabChanged 0xa759ecc)
	void HandleSettingsSavedTabChanged(bool& IsTabSaved); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortSidebarButtons.HandlePrevTabAction_STW (Underlying native function: HandlePrevTabAction_STW 0xa759e48)
	void HandlePrevTabActionSTW(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortSidebarButtons.HandleNextTabAction_STW (Underlying native function: HandleNextTabAction_STW 0xa759dc4)
	void HandleNextTabActionSTW(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortSidebarButtons.HandleButtonGroupOnHoveredChanged (Underlying native function: HandleButtonGroupOnHoveredChanged 0x2720a34)
	void HandleButtonGroupOnHoveredChanged(class UCommonButtonLegacy*& HoveredButton, int& ButtonIdx); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortSidebarButtons.GetSelectedSidebarButton (Underlying native function: GetSelectedSidebarButton 0xa759990)
	class UWidget* GetSelectedSidebarButton(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSidebarButtons.GetHoveredSidebarButton (Underlying native function: GetHoveredSidebarButton 0x720c60c)
	class UWidget* GetHoveredSidebarButton(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSidebarButtons.GetFocusedSidebarButton (Underlying native function: GetFocusedSidebarButton 0x8e7e94c)
	class UWidget* GetFocusedSidebarButton(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};


// Class /Script/FortniteUI.FortSquadSelectionMenu
// Size: 0x428
class UFortSquadSelectionMenu : public UCommonActivatableWidget
{
	struct FDataTableRowHandle ExitInputAction; // 0x3a8 (0x10)
	unsigned char unreflected_3b8[0x8]; // 0x3b8 (0x8) 
	class UCommonButtonGroupLegacy* ButtonGroup; // 0x3c0 (0x8)
	unsigned char unreflected_3c8[0x28]; // 0x3c8 (0x28) 
	class UAthenaTeamSquadsEntryBox* TeamEntryBoxSquads; // 0x3f0 (0x8)
	class UCommonButtonLegacy* ButtonConfirmMove; // 0x3f8 (0x8)
	class UCommonButtonLegacy* ButtonCancelMove; // 0x400 (0x8)
	class UCommonRichTextBlock* RichTextActionPrompt; // 0x408 (0x8)
	class UCommonButtonLegacy* ButtonChangeParticipation; // 0x410 (0x8)
	class UWidgetSwitcher* SwitcherButtons; // 0x418 (0x8)
	class UOverlay* MobileOverlay; // 0x420 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSquadSelectionMenu.OnLocalPlayerParticipationChanged (Has no native function)
	void OnLocalPlayerParticipationChanged(bool& bIsParticipating); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSquadSelectionMenu.HandleMemberEntryClicked (Underlying native function: HandleMemberEntryClicked 0xa6fee70)
	void HandleMemberEntryClicked(class UCommonButtonLegacy*& MemberEntryButton, int& EntryIdx); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortSquadSelectionMenu.HandleExitAction (Underlying native function: HandleExitAction 0x6a4a708)
	void HandleExitAction(); // (Final | Native | Private | BlueprintCallable)
};


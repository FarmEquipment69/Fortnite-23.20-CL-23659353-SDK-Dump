// Class /Script/SaveTheWorldUI.FortSquadSlotSelectorPopupMenu
// Size: 0x508
class UFortSquadSlotSelectorPopupMenu : public UFortPopupMenu_Legacy
{
	bool bReadOnlyModeWIFE; // 0x500 (0x1)
	unsigned char padding_501[0x7]; // 0x501 (0x7)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorPopupMenu.IsScreenWIFE (Underlying native function: IsScreenWIFE 0x75c0878)
	bool IsScreenWIFE(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorPopupMenu.GetHostButton (Underlying native function: GetHostButton 0x75bea54)
	class UFortSquadSlotSelectorButton* GetHostButton(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

